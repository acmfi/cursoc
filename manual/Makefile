all: clean curso_c.dvi curso_c.ps

fast: *.tex
	latex curso_c.tex
	dvips -o curso_c.ps curso_c.dvi

curso_c.dvi: *.tex
	latex curso_c.tex
	bibtex curso_c 
	latex curso_c.tex
	latex curso_c.tex

ps: curso_c.ps
curso_c.ps: curso_c.dvi
	dvips -o curso_c.ps curso_c.dvi

pdf: curso_c.pdf
curso_c.pdf: curso_c.ps
	ps2pdf curso_c.ps

view:	pdf
	gv curso_c.pdf

clean:
	rm -f *.ps *.pdf *.dvi *.log *.lof *.toc *.aux *.lot *.blg *.bbl
