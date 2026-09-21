from flask import Blueprint

notepad_bp = Blueprint('notepad', __name__, template_folder='templates')

from app.features.notepad import routes