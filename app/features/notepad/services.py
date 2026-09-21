from app.features.notepad.repositories import NotepadRepository

class NotepadService:
    def __init__(self):
        self.repository = NotepadRepository()

    def get_by_user_id(self, user_id):
        return self.repository.get_by_user_id(user_id)

    def create(self, title, body, user_id):
        return self.repository.create(title, body, user_id)

    def delete(self, notepad_id):
        return self.repository.delete(notepad_id)