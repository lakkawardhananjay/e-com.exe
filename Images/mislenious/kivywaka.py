# import kivy
from kivy.app import App 
from kivy.uix.camera import Camera
from kivy.uix.boxlayout import BoxLayout
from kivy.uix.button import Button

class gagu_photo_app(App):
    def make(self):
        self.obj_camera=Camera()
        self.obj_camera.resolution=(800,800)
        obj_button=Botton(text="click !!!")
        obj_button.size_hint=(.6,.4)
        obj_button.pos_hint={'x':.35,'y':35}
        obj_button.bind(on_press = self.selfie_take())
        obj_layout=BoxLayout()
        obj_layout.add_widget(self.obj_camera)
        obj_layout.add.widget(obj_button)
        return obj_layout
 
    def selfie_take(self,*args):
        print("selfie has been taken")
        self.obj_camera.export_to_png('./demosellf.png')
        
if __name__=='__main__':
    gugu_photo_app().run()
          
