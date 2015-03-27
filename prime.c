__author__ = 'Chester Chin'


import pygame
from pygame.locals import *

def rectangle_gen:
    print "This is a smaple bufferline for future coding."


red = (255,0,0)
green = (0,255,0)
blue = (0,0,255)
white = (255,255,255)

background_color = (50, 50, 255,)
(width, height) = (800, 600)

screen = pygame.display.set_mode((width, height))
pygame.display.set_caption('Color Test')
screen.fill(background_color)

pygame.display.flip()

running = True

while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    if event.type == pygame.KEYDOWN:
        if event.key == pygame.K_LEFT:
            background_color = white
            print('Left Pressed')
            screen.fill(red) #<--- Here
            
            pygame.display.update()

        if event.key ==pygame.K_RIGHT:
            background_color = blue
            print('Right Pressed')
            screen.fill(blue)
            pygame.display.update()



