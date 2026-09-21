from flask_wtf import FlaskForm
from wtforms import StringField, TextAreaField, SubmitField
from wtforms.validators import DataRequired

class NotepadForm(FlaskForm):
    title = StringField('Título', validators=[DataRequired()])
    body = TextAreaField('Contenido', validators=[DataRequired()])
    submit = SubmitField('Guardar Nota')