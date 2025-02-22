/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     REAL = 258,
     INT = 259,
     STRING = 260,
     POINTER = 261,
     ANGDEGREE = 262,
     ANGRADIAN = 263,
     SEXSTR = 264,
     HMSSTR = 265,
     DMSSTR = 266,
     ABOUT_ = 267,
     AIP_ = 268,
     ALLOC_ = 269,
     ALLOCGZ_ = 270,
     ALIGN_ = 271,
     ALL_ = 272,
     ALT_ = 273,
     AMPLIFIER_ = 274,
     ANALYSIS_ = 275,
     ANGLE_ = 276,
     ANNULUS_ = 277,
     APPEND_ = 278,
     ARCMIN_ = 279,
     ARCSEC_ = 280,
     ARRAY_ = 281,
     ARROW_ = 282,
     ASINH_ = 283,
     AST_ = 284,
     AUTO_ = 285,
     AUX_ = 286,
     AVERAGE_ = 287,
     AXES_ = 288,
     AZIMUTH_ = 289,
     B1950_ = 290,
     BACK_ = 291,
     BACKGROUND_ = 292,
     BASE_ = 293,
     BBOX_ = 294,
     BEGIN_ = 295,
     BG_ = 296,
     BIG_ = 297,
     BIGENDIAN_ = 298,
     BIN_ = 299,
     BITPIX_ = 300,
     BLEND_ = 301,
     BLOCK_ = 302,
     BORDER_ = 303,
     BOX_ = 304,
     BOXANNULUS_ = 305,
     BOXCAR_ = 306,
     BOXCIRCLE_ = 307,
     BPANDA_ = 308,
     BUFFER_ = 309,
     BW_ = 310,
     CALLBACK_ = 311,
     CANVAS_ = 312,
     CATALOG_ = 313,
     CELESTIAL_ = 314,
     CENTER_ = 315,
     CENTROID_ = 316,
     CHANNEL_ = 317,
     CIRCLE_ = 318,
     CIAO_ = 319,
     CLEAR_ = 320,
     CLIP_ = 321,
     COLOR_ = 322,
     COLORBAR_ = 323,
     COLORMAP_ = 324,
     COLORSCALE_ = 325,
     COLORSPACE_ = 326,
     COLS_ = 327,
     COLUMN_ = 328,
     COMMAND_ = 329,
     COMPASS_ = 330,
     COMPOSITE_ = 331,
     COMPRESS_ = 332,
     CONTOUR_ = 333,
     CONTRAST_ = 334,
     COORDINATES_ = 335,
     COPY_ = 336,
     COUNT_ = 337,
     CPANDA_ = 338,
     CREATE_ = 339,
     CROP_ = 340,
     CROSS_ = 341,
     CROSSHAIR_ = 342,
     CUBE_ = 343,
     CURSOR_ = 344,
     CUT_ = 345,
     CMYK_ = 346,
     DARKEN_ = 347,
     DASH_ = 348,
     DASHLIST_ = 349,
     DATA_ = 350,
     DATAMIN_ = 351,
     DATASEC_ = 352,
     DEBUG_ = 353,
     DEGREES_ = 354,
     DEFAULT_ = 355,
     DELETE_ = 356,
     DEPTH_ = 357,
     DETECTOR_ = 358,
     DIAMOND_ = 359,
     DIM_ = 360,
     DS9_ = 361,
     EDIT_ = 362,
     ECLIPTIC_ = 363,
     ELEVATION_ = 364,
     ELLIPTIC_ = 365,
     ELLIPSE_ = 366,
     ELLIPSEANNULUS_ = 367,
     END_ = 368,
     ENVI_ = 369,
     EPANDA_ = 370,
     EPSILON_ = 371,
     EQUATORIAL_ = 372,
     ERASE_ = 373,
     EXT_ = 374,
     FADE_ = 375,
     FACTOR_ = 376,
     FALSE_ = 377,
     FILE_ = 378,
     FILL_ = 379,
     FILTER_ = 380,
     FIRST_ = 381,
     FIT_ = 382,
     FITS_ = 383,
     FITSY_ = 384,
     FIXED_ = 385,
     FK4_ = 386,
     FK5_ = 387,
     FONT_ = 388,
     FORMAT_ = 389,
     FOOTPRINT_ = 390,
     FROM_ = 391,
     FRONT_ = 392,
     FULL_ = 393,
     FUNCTION_ = 394,
     GALACTIC_ = 395,
     GAUSSIAN_ = 396,
     GET_ = 397,
     GLOBAL_ = 398,
     GRAPHICS_ = 399,
     GRAY_ = 400,
     GRID_ = 401,
     GZ_ = 402,
     HANDLE_ = 403,
     HAS_ = 404,
     HEAD_ = 405,
     HEADER_ = 406,
     HEIGHT_ = 407,
     HIDE_ = 408,
     HIGHLITE_ = 409,
     HISTEQU_ = 410,
     HISTOGRAM_ = 411,
     HORIZONTAL_ = 412,
     ICRS_ = 413,
     ID_ = 414,
     IIS_ = 415,
     IMAGE_ = 416,
     INCLUDE_ = 417,
     INCR_ = 418,
     INFO_ = 419,
     ITERATION_ = 420,
     IRAF_ = 421,
     IRAFMIN_ = 422,
     J2000_ = 423,
     KEY_ = 424,
     KEYWORD_ = 425,
     LABEL_ = 426,
     LAST_ = 427,
     LENGTH_ = 428,
     LEVEL_ = 429,
     LIGHTEN_ = 430,
     LITTLE_ = 431,
     LITTLEENDIAN_ = 432,
     LINE_ = 433,
     LINEAR_ = 434,
     LIST_ = 435,
     LOAD_ = 436,
     LOCAL_ = 437,
     LOG_ = 438,
     MACOSX_ = 439,
     MAGNIFIER_ = 440,
     MATCH_ = 441,
     MAP_ = 442,
     MARK_ = 443,
     MARKER_ = 444,
     MASK_ = 445,
     MEDIAN_ = 446,
     MESSAGE_ = 447,
     METHOD_ = 448,
     MINMAX_ = 449,
     MINOR_ = 450,
     MIP_ = 451,
     MMAP_ = 452,
     MMAPINCR_ = 453,
     MOSAIC_ = 454,
     MODE_ = 455,
     MOTION_ = 456,
     MOVE_ = 457,
     NAME_ = 458,
     NAN_ = 459,
     NATIVE_ = 460,
     NAXES_ = 461,
     NEW_ = 462,
     NEXT_ = 463,
     NO_ = 464,
     NONE_ = 465,
     NONNAN_ = 466,
     NONZERO_ = 467,
     NOW_ = 468,
     NRRD_ = 469,
     NUMBER_ = 470,
     OBJECT_ = 471,
     OFF_ = 472,
     ON_ = 473,
     ONLY_ = 474,
     OPTION_ = 475,
     ORIENT_ = 476,
     PAN_ = 477,
     PANNER_ = 478,
     PARSER_ = 479,
     PASTE_ = 480,
     PERF_ = 481,
     PHOTO_ = 482,
     PHYSICAL_ = 483,
     PIXEL_ = 484,
     PLOT2D_ = 485,
     PLOT3D_ = 486,
     POINT_ = 487,
     POINTER_ = 488,
     POLYGON_ = 489,
     POSTSCRIPT_ = 490,
     POW_ = 491,
     PRECISION_ = 492,
     PRINT_ = 493,
     PRESERVE_ = 494,
     PROJECTION_ = 495,
     PROPERTY_ = 496,
     PUBLICATION_ = 497,
     PROS_ = 498,
     QUERY_ = 499,
     RADIAL_ = 500,
     RADIUS_ = 501,
     RANGE_ = 502,
     REGION_ = 503,
     REPLACE_ = 504,
     RESAMPLE_ = 505,
     RESCAN_ = 506,
     RESET_ = 507,
     RESOLUTION_ = 508,
     RGB_ = 509,
     ROOT_ = 510,
     ROTATE_ = 511,
     RULER_ = 512,
     SAMPLE_ = 513,
     SAOIMAGE_ = 514,
     SAOTNG_ = 515,
     SAVE_ = 516,
     SCALE_ = 517,
     SCAN_ = 518,
     SCIENTIFIC_ = 519,
     SCOPE_ = 520,
     SCREEN_ = 521,
     SEGMENT_ = 522,
     SELECT_ = 523,
     SET_ = 524,
     SEXAGESIMAL_ = 525,
     SHAPE_ = 526,
     SHARED_ = 527,
     SHIFT_ = 528,
     SHMID_ = 529,
     SHOW_ = 530,
     SIGMA_ = 531,
     SINH_ = 532,
     SIZE_ = 533,
     SLICE_ = 534,
     SMMAP_ = 535,
     SMOOTH_ = 536,
     SOCKET_ = 537,
     SOCKETGZ_ = 538,
     SOURCE_ = 539,
     SQRT_ = 540,
     SQUARED_ = 541,
     SSHARED_ = 542,
     STATS_ = 543,
     STATUS_ = 544,
     SUM_ = 545,
     SYSTEM_ = 546,
     TABLE_ = 547,
     TAG_ = 548,
     TEMPLATE_ = 549,
     TEXT_ = 550,
     THREADS_ = 551,
     THREED_ = 552,
     THRESHOLD_ = 553,
     THICK_ = 554,
     TRANSPARENCY_ = 555,
     TO_ = 556,
     TOGGLE_ = 557,
     TOPHAT_ = 558,
     TRUE_ = 559,
     TYPE_ = 560,
     UNDO_ = 561,
     UNHIGHLITE_ = 562,
     UNLOAD_ = 563,
     UNSELECT_ = 564,
     UPDATE_ = 565,
     USER_ = 566,
     VALUE_ = 567,
     VAR_ = 568,
     VIEW_ = 569,
     VECTOR_ = 570,
     VERSION_ = 571,
     VERTEX_ = 572,
     VERTICAL_ = 573,
     WARP_ = 574,
     WCS_ = 575,
     WCSA_ = 576,
     WCSB_ = 577,
     WCSC_ = 578,
     WCSD_ = 579,
     WCSE_ = 580,
     WCSF_ = 581,
     WCSG_ = 582,
     WCSH_ = 583,
     WCSI_ = 584,
     WCSJ_ = 585,
     WCSK_ = 586,
     WCSL_ = 587,
     WCSM_ = 588,
     WCSN_ = 589,
     WCSO_ = 590,
     WCSP_ = 591,
     WCSQ_ = 592,
     WCSR_ = 593,
     WCSS_ = 594,
     WCST_ = 595,
     WCSU_ = 596,
     WCSV_ = 597,
     WCSW_ = 598,
     WCSX_ = 599,
     WCSY_ = 600,
     WCSZ_ = 601,
     WCS0_ = 602,
     WFPC2_ = 603,
     WIDTH_ = 604,
     WIN32_ = 605,
     XML_ = 606,
     XY_ = 607,
     YES_ = 608,
     ZERO_ = 609,
     ZMAX_ = 610,
     ZSCALE_ = 611,
     ZOOM_ = 612
   };
#endif
/* Tokens.  */
#define REAL 258
#define INT 259
#define STRING 260
#define POINTER 261
#define ANGDEGREE 262
#define ANGRADIAN 263
#define SEXSTR 264
#define HMSSTR 265
#define DMSSTR 266
#define ABOUT_ 267
#define AIP_ 268
#define ALLOC_ 269
#define ALLOCGZ_ 270
#define ALIGN_ 271
#define ALL_ 272
#define ALT_ 273
#define AMPLIFIER_ 274
#define ANALYSIS_ 275
#define ANGLE_ 276
#define ANNULUS_ 277
#define APPEND_ 278
#define ARCMIN_ 279
#define ARCSEC_ 280
#define ARRAY_ 281
#define ARROW_ 282
#define ASINH_ 283
#define AST_ 284
#define AUTO_ 285
#define AUX_ 286
#define AVERAGE_ 287
#define AXES_ 288
#define AZIMUTH_ 289
#define B1950_ 290
#define BACK_ 291
#define BACKGROUND_ 292
#define BASE_ 293
#define BBOX_ 294
#define BEGIN_ 295
#define BG_ 296
#define BIG_ 297
#define BIGENDIAN_ 298
#define BIN_ 299
#define BITPIX_ 300
#define BLEND_ 301
#define BLOCK_ 302
#define BORDER_ 303
#define BOX_ 304
#define BOXANNULUS_ 305
#define BOXCAR_ 306
#define BOXCIRCLE_ 307
#define BPANDA_ 308
#define BUFFER_ 309
#define BW_ 310
#define CALLBACK_ 311
#define CANVAS_ 312
#define CATALOG_ 313
#define CELESTIAL_ 314
#define CENTER_ 315
#define CENTROID_ 316
#define CHANNEL_ 317
#define CIRCLE_ 318
#define CIAO_ 319
#define CLEAR_ 320
#define CLIP_ 321
#define COLOR_ 322
#define COLORBAR_ 323
#define COLORMAP_ 324
#define COLORSCALE_ 325
#define COLORSPACE_ 326
#define COLS_ 327
#define COLUMN_ 328
#define COMMAND_ 329
#define COMPASS_ 330
#define COMPOSITE_ 331
#define COMPRESS_ 332
#define CONTOUR_ 333
#define CONTRAST_ 334
#define COORDINATES_ 335
#define COPY_ 336
#define COUNT_ 337
#define CPANDA_ 338
#define CREATE_ 339
#define CROP_ 340
#define CROSS_ 341
#define CROSSHAIR_ 342
#define CUBE_ 343
#define CURSOR_ 344
#define CUT_ 345
#define CMYK_ 346
#define DARKEN_ 347
#define DASH_ 348
#define DASHLIST_ 349
#define DATA_ 350
#define DATAMIN_ 351
#define DATASEC_ 352
#define DEBUG_ 353
#define DEGREES_ 354
#define DEFAULT_ 355
#define DELETE_ 356
#define DEPTH_ 357
#define DETECTOR_ 358
#define DIAMOND_ 359
#define DIM_ 360
#define DS9_ 361
#define EDIT_ 362
#define ECLIPTIC_ 363
#define ELEVATION_ 364
#define ELLIPTIC_ 365
#define ELLIPSE_ 366
#define ELLIPSEANNULUS_ 367
#define END_ 368
#define ENVI_ 369
#define EPANDA_ 370
#define EPSILON_ 371
#define EQUATORIAL_ 372
#define ERASE_ 373
#define EXT_ 374
#define FADE_ 375
#define FACTOR_ 376
#define FALSE_ 377
#define FILE_ 378
#define FILL_ 379
#define FILTER_ 380
#define FIRST_ 381
#define FIT_ 382
#define FITS_ 383
#define FITSY_ 384
#define FIXED_ 385
#define FK4_ 386
#define FK5_ 387
#define FONT_ 388
#define FORMAT_ 389
#define FOOTPRINT_ 390
#define FROM_ 391
#define FRONT_ 392
#define FULL_ 393
#define FUNCTION_ 394
#define GALACTIC_ 395
#define GAUSSIAN_ 396
#define GET_ 397
#define GLOBAL_ 398
#define GRAPHICS_ 399
#define GRAY_ 400
#define GRID_ 401
#define GZ_ 402
#define HANDLE_ 403
#define HAS_ 404
#define HEAD_ 405
#define HEADER_ 406
#define HEIGHT_ 407
#define HIDE_ 408
#define HIGHLITE_ 409
#define HISTEQU_ 410
#define HISTOGRAM_ 411
#define HORIZONTAL_ 412
#define ICRS_ 413
#define ID_ 414
#define IIS_ 415
#define IMAGE_ 416
#define INCLUDE_ 417
#define INCR_ 418
#define INFO_ 419
#define ITERATION_ 420
#define IRAF_ 421
#define IRAFMIN_ 422
#define J2000_ 423
#define KEY_ 424
#define KEYWORD_ 425
#define LABEL_ 426
#define LAST_ 427
#define LENGTH_ 428
#define LEVEL_ 429
#define LIGHTEN_ 430
#define LITTLE_ 431
#define LITTLEENDIAN_ 432
#define LINE_ 433
#define LINEAR_ 434
#define LIST_ 435
#define LOAD_ 436
#define LOCAL_ 437
#define LOG_ 438
#define MACOSX_ 439
#define MAGNIFIER_ 440
#define MATCH_ 441
#define MAP_ 442
#define MARK_ 443
#define MARKER_ 444
#define MASK_ 445
#define MEDIAN_ 446
#define MESSAGE_ 447
#define METHOD_ 448
#define MINMAX_ 449
#define MINOR_ 450
#define MIP_ 451
#define MMAP_ 452
#define MMAPINCR_ 453
#define MOSAIC_ 454
#define MODE_ 455
#define MOTION_ 456
#define MOVE_ 457
#define NAME_ 458
#define NAN_ 459
#define NATIVE_ 460
#define NAXES_ 461
#define NEW_ 462
#define NEXT_ 463
#define NO_ 464
#define NONE_ 465
#define NONNAN_ 466
#define NONZERO_ 467
#define NOW_ 468
#define NRRD_ 469
#define NUMBER_ 470
#define OBJECT_ 471
#define OFF_ 472
#define ON_ 473
#define ONLY_ 474
#define OPTION_ 475
#define ORIENT_ 476
#define PAN_ 477
#define PANNER_ 478
#define PARSER_ 479
#define PASTE_ 480
#define PERF_ 481
#define PHOTO_ 482
#define PHYSICAL_ 483
#define PIXEL_ 484
#define PLOT2D_ 485
#define PLOT3D_ 486
#define POINT_ 487
#define POINTER_ 488
#define POLYGON_ 489
#define POSTSCRIPT_ 490
#define POW_ 491
#define PRECISION_ 492
#define PRINT_ 493
#define PRESERVE_ 494
#define PROJECTION_ 495
#define PROPERTY_ 496
#define PUBLICATION_ 497
#define PROS_ 498
#define QUERY_ 499
#define RADIAL_ 500
#define RADIUS_ 501
#define RANGE_ 502
#define REGION_ 503
#define REPLACE_ 504
#define RESAMPLE_ 505
#define RESCAN_ 506
#define RESET_ 507
#define RESOLUTION_ 508
#define RGB_ 509
#define ROOT_ 510
#define ROTATE_ 511
#define RULER_ 512
#define SAMPLE_ 513
#define SAOIMAGE_ 514
#define SAOTNG_ 515
#define SAVE_ 516
#define SCALE_ 517
#define SCAN_ 518
#define SCIENTIFIC_ 519
#define SCOPE_ 520
#define SCREEN_ 521
#define SEGMENT_ 522
#define SELECT_ 523
#define SET_ 524
#define SEXAGESIMAL_ 525
#define SHAPE_ 526
#define SHARED_ 527
#define SHIFT_ 528
#define SHMID_ 529
#define SHOW_ 530
#define SIGMA_ 531
#define SINH_ 532
#define SIZE_ 533
#define SLICE_ 534
#define SMMAP_ 535
#define SMOOTH_ 536
#define SOCKET_ 537
#define SOCKETGZ_ 538
#define SOURCE_ 539
#define SQRT_ 540
#define SQUARED_ 541
#define SSHARED_ 542
#define STATS_ 543
#define STATUS_ 544
#define SUM_ 545
#define SYSTEM_ 546
#define TABLE_ 547
#define TAG_ 548
#define TEMPLATE_ 549
#define TEXT_ 550
#define THREADS_ 551
#define THREED_ 552
#define THRESHOLD_ 553
#define THICK_ 554
#define TRANSPARENCY_ 555
#define TO_ 556
#define TOGGLE_ 557
#define TOPHAT_ 558
#define TRUE_ 559
#define TYPE_ 560
#define UNDO_ 561
#define UNHIGHLITE_ 562
#define UNLOAD_ 563
#define UNSELECT_ 564
#define UPDATE_ 565
#define USER_ 566
#define VALUE_ 567
#define VAR_ 568
#define VIEW_ 569
#define VECTOR_ 570
#define VERSION_ 571
#define VERTEX_ 572
#define VERTICAL_ 573
#define WARP_ 574
#define WCS_ 575
#define WCSA_ 576
#define WCSB_ 577
#define WCSC_ 578
#define WCSD_ 579
#define WCSE_ 580
#define WCSF_ 581
#define WCSG_ 582
#define WCSH_ 583
#define WCSI_ 584
#define WCSJ_ 585
#define WCSK_ 586
#define WCSL_ 587
#define WCSM_ 588
#define WCSN_ 589
#define WCSO_ 590
#define WCSP_ 591
#define WCSQ_ 592
#define WCSR_ 593
#define WCSS_ 594
#define WCST_ 595
#define WCSU_ 596
#define WCSV_ 597
#define WCSW_ 598
#define WCSX_ 599
#define WCSY_ 600
#define WCSZ_ 601
#define WCS0_ 602
#define WFPC2_ 603
#define WIDTH_ 604
#define WIN32_ 605
#define XML_ 606
#define XY_ 607
#define YES_ 608
#define ZERO_ 609
#define ZMAX_ 610
#define ZSCALE_ 611
#define ZOOM_ 612




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 53 "frame/parser.Y"
{
#define FRBUFSIZE 4096
  char chr;
  char str[FRBUFSIZE];
  unsigned long ptr;
  int integer;
  double real;
  double vector[3];
  int dash[2];
}
/* Line 1529 of yacc.c.  */
#line 774 "frame/parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



