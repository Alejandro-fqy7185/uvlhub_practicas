from flask import render_template, redirect, url_for, flash
from flask_login import login_required, current_user
from app.features.notepad import notepad_bp
from app.features.notepad.forms import NotepadForm
from app.features.notepad.services import NotepadService

notepad_service = NotepadService()

@notepad_bp.route('/notepad', methods=['GET'])
@login_required
def index():
    notepads = notepad_service.get_by_user_id(current_user.id)
    return render_template('notepad/index.html', notepads=notepads)

@notepad_bp.route('/notepad/create', methods=['GET', 'POST'])
@login_required
def create():
    form = NotepadForm()
    if form.validate_on_submit():
        notepad_service.create(
            title=form.title.data,
            body=form.body.data,
            user_id=current_user.id
        )
        flash('Nota creada correctamente', 'success')
        return redirect(url_for('notepad.index'))
    return render_template('notepad/create.html', form=form)

@notepad_bp.route('/notepad/<int:notepad_id>/delete', methods=['POST'])
@login_required
def delete(notepad_id):
    notepad_service.delete(notepad_id)
    flash('Nota eliminada', 'success')
    return redirect(url_for('notepad.index'))