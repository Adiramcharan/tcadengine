import tkinter as tk
import subprocess
def run_solver():
    l=entry_length.get()
    b=entry_breadth.get()
    choice=entry_choice.get()
    process=subprocess.Popen(["./solver"],stdin=subprocess.PIPE,
                             stdout=subprocess.PIPE,
                             stderr=subprocess.PIPE,
                             text=True)
    input_data=f"{l}\n{b}\n{choice}\n"
    output,error=process.communicate(input=input_data)
    output_label.config(text=output)
root=tk.Tk()
root.title("Rectangle Solver")
root.geometry("500x500")
tk.Label(root,text="Length").pack(anchor=tk.W)
entry_length=tk.Entry(root)
entry_length.pack(anchor=tk.W)
tk.Label(root,text="Breadth").pack(anchor=tk.W)
entry_breadth=tk.Entry(root)
entry_breadth.pack(anchor=tk.W)
tk.Label(root,text="area or perimeter").pack(anchor=tk.W)
entry_choice=tk.Entry(root)
entry_choice.pack(anchor=tk.W)
tk.Button(root,text="Solve",command=run_solver).pack(anchor=tk.W)
output_label=tk.Label(root,text="")
output_label.pack(anchor=tk.W)
root.mainloop()