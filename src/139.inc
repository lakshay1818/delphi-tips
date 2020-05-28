<p>
  Just cut and paste the routines below into a unit somewhere and make the
  function declarations at the top of your unit.
</p>

<p>
  You can use <var>GetGradientColor2</var> to get a color that is somewhere
  between two other colors. For example, to get the color that is 50% between
  Red and Blue, do this:
</p>

<div class="frame">
<!-- Highlighted Pascal code generated by DelphiDabbler PasH -->
<pre class="pas-source"><span class="pas-kwd">var</span>
<span class="pas-space">  </span><span class="pas-ident">MyColor</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">TColor</span><span class="pas-sym">;</span>
<span class="pas-kwd">begin</span>
<span class="pas-space">  </span><span class="pas-ident">R1</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-num">255</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">G1</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-num">0</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">B1</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-num">0</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">R2</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-num">0</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">G2</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-num">0</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">B2</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-num">0</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">Percent</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-float">0.5</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">MyNewColor</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-ident">GetGradientColor2</span><span class="pas-sym">(</span><span class="pas-ident">R1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">G1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">B1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">R2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">G2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">B2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">Percent</span><span class="pas-sym">)</span><span class="pas-sym">;</span></pre>
</div>

<p>
  You could put percent in a loop from 0 to 1, and get all the colors as a
  nice gradient.
</p>

<p>
  Function <var>GetGradientColor3</var> works in a similar manner, except that
  you can do a gradient between 3 colors, such as between red to yellow to
  blue. This can help prevent the colors from loosing intensity when you go
  between say blue and red, where the purple would otherwise be darker.
</p>

<div class="frame">
<!-- Highlighted Pascal code generated by DelphiDabbler PasH -->
<pre class="pas-source"><span class="pas-kwd">function</span><span class="pas-space"> </span><span class="pas-ident">ColorFromRGB</span><span class="pas-sym">(</span><span class="pas-ident">Red</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">Green</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">Blue</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">Integer</span><span class="pas-sym">)</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">Integer</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-comment">{Returns the color made up of the red, green, and blue components.</span>
<span class="pas-comment">  Red, Green, and Blue can be from 0 to 255.}</span>
<span class="pas-kwd">begin</span>
<span class="pas-space">  </span><span class="pas-comment">{Convert Red, Green, and Blue values to color.}</span>
<span class="pas-space">  </span><span class="pas-ident">Result</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-ident">Red</span><span class="pas-space"> </span><span class="pas-sym">+</span><span class="pas-space"> </span><span class="pas-ident">Green</span><span class="pas-space"> </span><span class="pas-sym">*</span><span class="pas-space"> </span><span class="pas-num">256</span><span class="pas-space"> </span><span class="pas-sym">+</span><span class="pas-space"> </span><span class="pas-ident">Blue</span><span class="pas-space"> </span><span class="pas-sym">*</span><span class="pas-space"> </span><span class="pas-num">65536</span><span class="pas-sym">;</span>
<span class="pas-kwd">end</span><span class="pas-sym">;</span>

<span class="pas-kwd">function</span><span class="pas-space"> </span><span class="pas-ident">GetPigmentBetween</span><span class="pas-sym">(</span><span class="pas-ident">P1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">P2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">Percent</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">Double</span><span class="pas-sym">)</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">Integer</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-comment">{Returns a number that is Percent of the way between P1 and P2}</span>
<span class="pas-kwd">begin</span>
<span class="pas-space">  </span><span class="pas-comment">{Find the number between P1 and P2}</span>
<span class="pas-space">  </span><span class="pas-ident">Result</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-ident">Round</span><span class="pas-sym">(</span><span class="pas-sym">(</span><span class="pas-sym">(</span><span class="pas-ident">P2</span><span class="pas-space"> </span><span class="pas-sym">-</span><span class="pas-space"> </span><span class="pas-ident">P1</span><span class="pas-sym">)</span><span class="pas-space"> </span><span class="pas-sym">*</span><span class="pas-space"> </span><span class="pas-ident">Percent</span><span class="pas-sym">)</span><span class="pas-space"> </span><span class="pas-sym">+</span><span class="pas-space"> </span><span class="pas-ident">P1</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-comment">{Make sure we are within bounds for color.}</span>
<span class="pas-space">  </span><span class="pas-kwd">if</span><span class="pas-space"> </span><span class="pas-ident">Result</span><span class="pas-space"> </span><span class="pas-sym">&gt;</span><span class="pas-space"> </span><span class="pas-num">255</span><span class="pas-space"> </span><span class="pas-kwd">then</span>
<span class="pas-space">    </span><span class="pas-ident">Result</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-num">255</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-kwd">if</span><span class="pas-space"> </span><span class="pas-ident">Result</span><span class="pas-space"> </span><span class="pas-sym">&lt;</span><span class="pas-space"> </span><span class="pas-num">0</span><span class="pas-space"> </span><span class="pas-kwd">then</span>
<span class="pas-space">    </span><span class="pas-ident">Result</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-num">0</span><span class="pas-sym">;</span>
<span class="pas-kwd">end</span><span class="pas-sym">;</span>

<span class="pas-kwd">function</span><span class="pas-space"> </span><span class="pas-ident">GetGradientColor2</span><span class="pas-sym">(</span><span class="pas-ident">R1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">G1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">B1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">R2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">G2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">B2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">Percent</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">Double</span><span class="pas-sym">)</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">Integer</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-comment">{Gets a color that is inbetween the colors defined by (R1,G1,B1)</span>
<span class="pas-comment">  and (R2,G2,B2) Percent ranges from 0 to 1.0 (i.e. 0.5 = 50%)</span>
<span class="pas-comment">  If percent = 0 then the color of (R1,G1,B1) is returned</span>
<span class="pas-comment">  If Percent = 1 then the color of (R2,G2,B2) is returned</span>
<span class="pas-comment">  if Percent is somewhere inbetween, then an inbetween color is returned.}</span>
<span class="pas-kwd">var</span>
<span class="pas-space">  </span><span class="pas-ident">NewRed</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">NewGreen</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">NewBlue</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">Integer</span><span class="pas-sym">;</span>
<span class="pas-kwd">begin</span>
<span class="pas-space">  </span><span class="pas-comment">{Validate input data in case it is off by a few thousanths.}</span>
<span class="pas-space">  </span><span class="pas-kwd">if</span><span class="pas-space"> </span><span class="pas-ident">Percent</span><span class="pas-space"> </span><span class="pas-sym">&gt;</span><span class="pas-space"> </span><span class="pas-num">1</span><span class="pas-space"> </span><span class="pas-kwd">then</span>
<span class="pas-space">    </span><span class="pas-ident">Percent</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-num">1</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-kwd">if</span><span class="pas-space"> </span><span class="pas-ident">Percent</span><span class="pas-space"> </span><span class="pas-sym">&lt;</span><span class="pas-space"> </span><span class="pas-num">0</span><span class="pas-space"> </span><span class="pas-kwd">then</span>
<span class="pas-space">    </span><span class="pas-ident">Percent</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-num">0</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-comment">{Calculate Red, green, and blue components for the new color.}</span>
<span class="pas-space">  </span><span class="pas-ident">NewRed</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-ident">GetPigmentBetween</span><span class="pas-sym">(</span><span class="pas-ident">R1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">R2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">Percent</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">NewGreen</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-ident">GetPigmentBetween</span><span class="pas-sym">(</span><span class="pas-ident">G1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">G2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">Percent</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-ident">NewBlue</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-ident">GetPigmentBetween</span><span class="pas-sym">(</span><span class="pas-ident">B1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">B2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">Percent</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-comment">{Convert RGB to color}</span>
<span class="pas-space">  </span><span class="pas-ident">Result</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-ident">ColorFromRGB</span><span class="pas-sym">(</span><span class="pas-ident">NewRed</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">NewGreen</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">NewBlue</span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-kwd">end</span><span class="pas-sym">;</span>

<span class="pas-kwd">function</span><span class="pas-space"> </span><span class="pas-ident">GetGradientColor3</span><span class="pas-sym">(</span><span class="pas-ident">R1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">G1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">B1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">R2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">G2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">B2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">R3</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">G3</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">B3</span><span class="pas-sym">,</span>
<span class="pas-space">  </span><span class="pas-ident">Percent</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">Double</span><span class="pas-sym">)</span><span class="pas-sym">:</span><span class="pas-space"> </span><span class="pas-ident">Integer</span><span class="pas-sym">;</span>
<span class="pas-space">  </span><span class="pas-comment">{Gets a color that is inbetween the color spread defined (R1,G1,B1),</span>
<span class="pas-comment">  (R2,G2,B2) and (R3,G3,B3). This is similar to GetGradientColor2,</span>
<span class="pas-comment">  except that it allows you to specify 3 colors instead of 2.}</span>
<span class="pas-kwd">begin</span>
<span class="pas-space">  </span><span class="pas-comment">{Use GetGradient2 to do most the work}</span>
<span class="pas-space">  </span><span class="pas-kwd">if</span><span class="pas-space"> </span><span class="pas-ident">Percent</span><span class="pas-space"> </span><span class="pas-sym">&lt;</span><span class="pas-space"> </span><span class="pas-float">0.5</span><span class="pas-space"> </span><span class="pas-kwd">then</span>
<span class="pas-space">    </span><span class="pas-ident">Result</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-ident">GetGradientColor2</span><span class="pas-sym">(</span>
<span class="pas-space">      </span><span class="pas-ident">R1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">G1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">B1</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">R2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">G2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">B2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">Percent</span><span class="pas-space"> </span><span class="pas-sym">*</span><span class="pas-space"> </span><span class="pas-num">2</span>
<span class="pas-space">    </span><span class="pas-sym">)</span>
<span class="pas-space">  </span><span class="pas-kwd">else</span>
<span class="pas-space">    </span><span class="pas-ident">Result</span><span class="pas-space"> </span><span class="pas-sym">:=</span><span class="pas-space"> </span><span class="pas-ident">GetGradientColor2</span><span class="pas-sym">(</span>
<span class="pas-space">      </span><span class="pas-ident">R2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">G2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">B2</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">R3</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">G3</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-ident">B3</span><span class="pas-sym">,</span><span class="pas-space"> </span><span class="pas-sym">(</span><span class="pas-ident">Percent</span><span class="pas-space"> </span><span class="pas-sym">-</span><span class="pas-space"> </span><span class="pas-float">0.5</span><span class="pas-sym">)</span><span class="pas-space"> </span><span class="pas-sym">*</span><span class="pas-space"> </span><span class="pas-num">2</span>
<span class="pas-space">    </span><span class="pas-sym">)</span><span class="pas-sym">;</span>
<span class="pas-kwd">end</span><span class="pas-sym">;</span></pre>
</div>