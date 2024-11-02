# Image Detection

This component of the **Autonomous Deterrent System** uses computer vision to detect specific behaviors in real-time. The generated code leverages open-source libraries and pre-trained models to perform image detection and classification, facilitating behavior recognition.

## Files

- **real_time_detection.ipynb**: A Jupyter notebook that demonstrates real-time object detection using open-source tools and libraries, specifically **PyTorch** and **OpenCV**.

## Objective

The goal of this image detection component is to detect specific behaviors, such as identifying objects or actions of interest. This forms the basis for autonomous responses by the system when specific behaviors are detected.

## Dependencies

- **PyTorch**: For running deep learning models and performing real-time inference.
- **OpenCV**: Used for image processing and handling video input from the camera.
  
These dependencies, along with others, are listed in the main `requirements.txt` file in the root project directory.

## Setup Instructions

1. **Activate Virtual Environment**:
   Make sure you are in the project’s root directory and activate the virtual environment:
   
   ```bash
   source ../venv/bin/activate

