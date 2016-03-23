
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = INT64_MIN;
static int64_t x17 = INT64_MIN;
uint32_t x19 = 204835U;
uint32_t x20 = UINT32_MAX;
volatile int16_t x23 = INT16_MIN;
volatile int16_t x28 = -5;
uint32_t x35 = UINT32_MAX;
int8_t x39 = -1;
int16_t x46 = 593;
volatile int32_t t14 = -699;
static uint8_t x61 = 28U;
int32_t t15 = -62337293;
int32_t x70 = 669;
static int16_t x79 = INT16_MIN;
int64_t x80 = -1LL;
static int8_t x83 = -4;
uint32_t x85 = 116U;
int16_t x86 = -1;
int16_t x87 = -1;
volatile int16_t x92 = 74;
int8_t x93 = -1;
int64_t x94 = INT64_MIN;
int16_t x96 = 55;
int32_t t23 = -185;
uint8_t x103 = 72U;
volatile int32_t t25 = 550828;
volatile int8_t x114 = INT8_MIN;
static int64_t x115 = INT64_MIN;
int32_t x119 = 2461;
volatile int32_t t30 = 241524443;
int32_t t31 = 61288;
int32_t x131 = INT32_MIN;
int32_t x132 = -6678;
int8_t x133 = INT8_MIN;
static int32_t t35 = 2900137;
static int32_t x148 = INT32_MIN;
volatile int8_t x151 = INT8_MIN;
int8_t x159 = INT8_MAX;
static int64_t x163 = -1LL;
uint16_t x168 = UINT16_MAX;
uint64_t x177 = 492616596545042101LLU;
volatile int16_t x192 = -1;
volatile uint8_t x193 = 6U;
int16_t x195 = INT16_MIN;
int64_t x196 = INT64_MIN;
volatile uint32_t x200 = 102U;
int8_t x205 = INT8_MAX;
int16_t x206 = INT16_MIN;
int16_t x209 = -1;
static int32_t x212 = INT32_MAX;
uint32_t x213 = UINT32_MAX;
static volatile int32_t t56 = 383;
uint64_t x230 = 3224957223380826857LLU;
uint32_t x238 = 4414877U;
int32_t x239 = -1;
uint64_t x248 = 360058253200449233LLU;
int16_t x249 = INT16_MIN;
int64_t x265 = -2090937LL;
static int16_t x269 = -1;
volatile int64_t x270 = -137901824840369198LL;
int64_t x276 = INT64_MAX;
uint32_t x277 = UINT32_MAX;
static uint64_t x280 = UINT64_MAX;
int64_t x282 = -81980864LL;
int8_t x284 = INT8_MAX;
int16_t x285 = -14202;
static int16_t x298 = INT16_MAX;
int32_t t73 = 378925121;
int64_t x302 = INT64_MIN;
static int32_t t74 = -646439;
static volatile int16_t x307 = -1;
uint64_t x308 = 424499010399LLU;
int16_t x318 = 1;
static uint64_t x320 = UINT64_MAX;
static int32_t t78 = -1126766;
int8_t x332 = INT8_MIN;
volatile int16_t x335 = INT16_MAX;
int8_t x341 = -1;
int64_t x344 = 1490LL;
uint16_t x346 = 197U;
int32_t x347 = -406861241;
int8_t x349 = -1;
static int64_t x350 = -2182035629299LL;
static uint64_t x361 = UINT64_MAX;
volatile int32_t t89 = 986926247;
volatile int16_t x374 = INT16_MAX;
volatile int32_t x376 = INT32_MIN;
volatile int32_t t93 = 22986;
volatile int8_t x390 = 11;
int8_t x391 = -1;
int16_t x397 = INT16_MIN;
volatile int32_t t97 = -8;
int64_t x405 = INT64_MIN;
int32_t x408 = -1;
int32_t t100 = 13964;
uint64_t x413 = 150653377715239LLU;
static int32_t t101 = -5804;
int32_t x426 = INT32_MAX;
static uint32_t x428 = 11383U;
int32_t t105 = -96888;
int32_t x436 = -1;
int8_t x444 = INT8_MIN;
int64_t x446 = INT64_MAX;
int32_t x448 = INT32_MAX;
int32_t x452 = INT32_MIN;
uint8_t x453 = 6U;
int16_t x458 = -1;
static uint16_t x460 = UINT16_MAX;
volatile int32_t t112 = -174;
uint64_t x471 = 31808LLU;
volatile int32_t t115 = -140782;
static uint16_t x473 = UINT16_MAX;
int16_t x478 = -308;
int32_t t117 = -2038349;
int16_t x483 = INT16_MIN;
int64_t x497 = INT64_MIN;
uint16_t x503 = 446U;
int64_t x513 = INT64_MIN;
static int16_t x519 = 4;
int32_t x523 = 339672920;
int64_t x525 = INT64_MAX;
int32_t t128 = -1;
static int16_t x529 = 1;
int16_t x530 = -1;
static volatile int64_t x535 = 132628785348926611LL;
int8_t x542 = INT8_MIN;
static volatile int16_t x543 = INT16_MAX;
static uint8_t x547 = 44U;
int8_t x557 = INT8_MAX;
int32_t x560 = 79490176;
volatile uint32_t x562 = 743077178U;
static volatile uint32_t x563 = 1249U;
static int32_t t137 = 0;
int8_t x581 = 0;
int32_t x584 = INT32_MAX;
int8_t x595 = INT8_MAX;
uint32_t x596 = UINT32_MAX;
int64_t x600 = 1838544039932138LL;
volatile uint64_t x614 = 54882138208LLU;
int64_t x616 = -1LL;
volatile int32_t t149 = -15;
volatile int16_t x624 = -1;
int32_t x629 = 4857;
static int16_t x630 = INT16_MIN;
volatile int64_t x633 = 27579LL;
static uint16_t x635 = UINT16_MAX;
int32_t t154 = -667;
volatile int8_t x641 = INT8_MIN;
int8_t x644 = INT8_MIN;
volatile int64_t x646 = INT64_MIN;
int64_t x648 = 59095168613295125LL;
volatile uint64_t x649 = 5976241163940048LLU;
int8_t x653 = -1;
int64_t x665 = 5749LL;
volatile int64_t x667 = INT64_MIN;
static uint8_t x676 = 121U;
static int16_t x677 = 0;
int16_t x680 = -1;
int32_t x682 = -3255;
uint64_t x685 = 56192229LLU;
int8_t x688 = INT8_MAX;
int8_t x689 = INT8_MIN;
volatile int32_t t167 = -16948;
int8_t x700 = INT8_MIN;
uint8_t x706 = UINT8_MAX;
int64_t x707 = 592899324033LL;
int16_t x712 = INT16_MIN;
volatile int32_t t172 = 19200324;
int32_t t175 = 132;
int16_t x735 = -1;
int32_t x739 = -65750;
int8_t x741 = INT8_MAX;
uint16_t x747 = 1U;
int16_t x752 = INT16_MIN;
volatile int16_t x755 = INT16_MIN;
uint8_t x756 = 14U;
volatile int32_t t185 = 264544;
uint32_t x766 = UINT32_MAX;
volatile int32_t t186 = 23811916;
uint32_t x773 = 7373U;
static int32_t x774 = -10;
static volatile int32_t t188 = 202266110;
uint8_t x777 = UINT8_MAX;
static int16_t x781 = INT16_MAX;
static uint8_t x782 = 0U;
volatile int32_t t190 = 4962;
int32_t x791 = INT32_MAX;
uint8_t x792 = UINT8_MAX;
volatile int32_t t192 = 2;
int16_t x794 = INT16_MIN;
uint16_t x795 = UINT16_MAX;
static volatile int32_t t194 = -1869757;
uint64_t x801 = UINT64_MAX;
static volatile int32_t t196 = 76100;
int8_t x815 = -1;
int64_t x817 = -1LL;
int16_t x819 = -334;


void f0(void) {
    	int8_t x1 = 3;
	int32_t x2 = INT32_MIN;
	int32_t x3 = -1;
	int32_t x4 = -93;
	volatile int32_t t0 = 86732472;

    t0 = (x1>(x2==(x3%x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	uint64_t x6 = 24017LLU;
	volatile int8_t x8 = -58;
	volatile int32_t t1 = -37766;

    t1 = (x5>(x6==(x7%x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	int32_t x10 = 115;
	uint32_t x11 = 6U;
	int16_t x12 = -1;
	int32_t t2 = 231;

    t2 = (x9>(x10==(x11%x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 540143;
	int16_t x14 = INT16_MAX;
	volatile uint16_t x15 = UINT16_MAX;
	int32_t x16 = -9;
	volatile int32_t t3 = -8886;

    t3 = (x13>(x14==(x15%x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = INT32_MIN;
	volatile int32_t t4 = -3804;

    t4 = (x17>(x18==(x19%x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	int64_t x22 = INT64_MIN;
	uint64_t x24 = 102959150LLU;
	volatile int32_t t5 = -60;

    t5 = (x21>(x22==(x23%x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -635;
	uint64_t x26 = 3LLU;
	int16_t x27 = INT16_MIN;
	volatile int32_t t6 = -11965;

    t6 = (x25>(x26==(x27%x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = -1;
	int8_t x30 = INT8_MIN;
	uint16_t x31 = 30631U;
	volatile uint64_t x32 = UINT64_MAX;
	int32_t t7 = 473685891;

    t7 = (x29>(x30==(x31%x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = INT64_MAX;
	uint8_t x34 = 24U;
	int16_t x36 = -1;
	int32_t t8 = -504650840;

    t8 = (x33>(x34==(x35%x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	int32_t x38 = INT32_MAX;
	static volatile uint8_t x40 = 2U;
	int32_t t9 = -92315019;

    t9 = (x37>(x38==(x39%x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	uint64_t x42 = 12LLU;
	int32_t x43 = -1;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -14;

    t10 = (x41>(x42==(x43%x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 9646926;
	volatile uint32_t x47 = 59U;
	volatile uint8_t x48 = 1U;
	static int32_t t11 = -5637205;

    t11 = (x45>(x46==(x47%x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = 22;
	static uint16_t x50 = 0U;
	int32_t x51 = INT32_MAX;
	int8_t x52 = -1;
	int32_t t12 = 22971;

    t12 = (x49>(x50==(x51%x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = INT16_MIN;
	volatile uint16_t x54 = 277U;
	int8_t x55 = -1;
	static uint16_t x56 = UINT16_MAX;
	int32_t t13 = 54757597;

    t13 = (x53>(x54==(x55%x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x57 = 2390U;
	int64_t x58 = 6149300LL;
	int8_t x59 = 18;
	int16_t x60 = 649;

    t14 = (x57>(x58==(x59%x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x62 = -862;
	uint64_t x63 = UINT64_MAX;
	int64_t x64 = INT64_MIN;

    t15 = (x61>(x62==(x63%x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 0U;
	int32_t x66 = INT32_MAX;
	static uint8_t x67 = UINT8_MAX;
	static uint32_t x68 = 1031896401U;
	int32_t t16 = 88898;

    t16 = (x65>(x66==(x67%x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 16U;
	int32_t x71 = -28;
	static int16_t x72 = INT16_MAX;
	static volatile int32_t t17 = -533;

    t17 = (x69>(x70==(x71%x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = 267849485LL;
	static uint16_t x74 = 21U;
	static uint64_t x75 = 44401LLU;
	int64_t x76 = INT64_MAX;
	int32_t t18 = 156417347;

    t18 = (x73>(x74==(x75%x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x77 = 72U;
	volatile int8_t x78 = -1;
	volatile int32_t t19 = -8419565;

    t19 = (x77>(x78==(x79%x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = -2245164325512939352LL;
	volatile int8_t x82 = INT8_MAX;
	static uint32_t x84 = UINT32_MAX;
	volatile int32_t t20 = -757295987;

    t20 = (x81>(x82==(x83%x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x88 = 7629LLU;
	volatile int32_t t21 = -502;

    t21 = (x85>(x86==(x87%x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	uint32_t x90 = 9U;
	static uint32_t x91 = 1000984063U;
	volatile int32_t t22 = -90;

    t22 = (x89>(x90==(x91%x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x95 = INT8_MIN;

    t23 = (x93>(x94==(x95%x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 1758U;
	int32_t x98 = 511527;
	static int64_t x99 = 744809288990369881LL;
	volatile int8_t x100 = 2;
	static int32_t t24 = -3944;

    t24 = (x97>(x98==(x99%x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	int8_t x102 = 52;
	int32_t x104 = INT32_MIN;

    t25 = (x101>(x102==(x103%x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -1;
	int8_t x106 = 1;
	int16_t x107 = -1;
	static uint64_t x108 = UINT64_MAX;
	volatile int32_t t26 = 149;

    t26 = (x105>(x106==(x107%x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = UINT32_MAX;
	uint64_t x110 = 9459911836LLU;
	uint64_t x111 = 1031289LLU;
	uint32_t x112 = UINT32_MAX;
	static int32_t t27 = -9844;

    t27 = (x109>(x110==(x111%x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MAX;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = 27530;

    t28 = (x113>(x114==(x115%x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x117 = -1;
	uint64_t x118 = 6081579535311661260LLU;
	volatile uint16_t x120 = UINT16_MAX;
	int32_t t29 = 0;

    t29 = (x117>(x118==(x119%x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 7U;
	uint16_t x122 = 1U;
	uint8_t x123 = 0U;
	volatile uint8_t x124 = UINT8_MAX;

    t30 = (x121>(x122==(x123%x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = INT16_MIN;
	uint64_t x126 = 3910793065LLU;
	uint64_t x127 = 510516983LLU;
	int32_t x128 = INT32_MAX;

    t31 = (x125>(x126==(x127%x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x129 = INT32_MAX;
	volatile uint64_t x130 = UINT64_MAX;
	int32_t t32 = 2868;

    t32 = (x129>(x130==(x131%x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x134 = INT16_MIN;
	int8_t x135 = 31;
	int8_t x136 = -12;
	int32_t t33 = 205356;

    t33 = (x133>(x134==(x135%x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x137 = 27384U;
	int16_t x138 = INT16_MIN;
	int32_t x139 = -230;
	uint32_t x140 = UINT32_MAX;
	volatile int32_t t34 = -376;

    t34 = (x137>(x138==(x139%x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MAX;
	uint16_t x142 = 3U;
	static volatile int64_t x143 = INT64_MIN;
	static int32_t x144 = INT32_MIN;

    t35 = (x141>(x142==(x143%x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x145 = UINT32_MAX;
	int64_t x146 = -138LL;
	volatile int32_t x147 = 32;
	volatile int32_t t36 = 74477;

    t36 = (x145>(x146==(x147%x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -31;
	volatile int16_t x150 = 5;
	static int16_t x152 = INT16_MAX;
	static volatile int32_t t37 = -228;

    t37 = (x149>(x150==(x151%x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = INT64_MIN;
	uint8_t x154 = 75U;
	uint16_t x155 = 102U;
	uint32_t x156 = 1764668548U;
	int32_t t38 = -124849;

    t38 = (x153>(x154==(x155%x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = -1;
	volatile int16_t x158 = INT16_MIN;
	static uint32_t x160 = 359U;
	int32_t t39 = 22746;

    t39 = (x157>(x158==(x159%x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MIN;
	uint32_t x162 = 3265U;
	volatile uint8_t x164 = UINT8_MAX;
	static volatile int32_t t40 = 5106285;

    t40 = (x161>(x162==(x163%x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MAX;
	int64_t x166 = INT64_MIN;
	static volatile int8_t x167 = -1;
	volatile int32_t t41 = -78884;

    t41 = (x165>(x166==(x167%x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	uint64_t x170 = 176LLU;
	volatile uint32_t x171 = 379439U;
	int32_t x172 = -34;
	volatile int32_t t42 = 49;

    t42 = (x169>(x170==(x171%x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = -1;
	uint8_t x174 = 14U;
	int64_t x175 = -1LL;
	volatile int8_t x176 = INT8_MIN;
	int32_t t43 = 5348;

    t43 = (x173>(x174==(x175%x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x178 = 11U;
	static int64_t x179 = -1LL;
	int16_t x180 = 328;
	static int32_t t44 = 510;

    t44 = (x177>(x178==(x179%x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x181 = 1;
	static int64_t x182 = INT64_MIN;
	static volatile uint64_t x183 = 21609LLU;
	int64_t x184 = INT64_MAX;
	int32_t t45 = 0;

    t45 = (x181>(x182==(x183%x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x185 = 1936;
	int16_t x186 = -34;
	static int32_t x187 = -1;
	int64_t x188 = INT64_MIN;
	volatile int32_t t46 = 483;

    t46 = (x185>(x186==(x187%x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 723U;
	int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MIN;
	volatile int32_t t47 = -127892799;

    t47 = (x189>(x190==(x191%x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x194 = INT32_MIN;
	int32_t t48 = -504192081;

    t48 = (x193>(x194==(x195%x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 68U;
	int64_t x198 = 788619238529238731LL;
	int8_t x199 = INT8_MAX;
	static int32_t t49 = 1;

    t49 = (x197>(x198==(x199%x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MAX;
	uint32_t x202 = 348U;
	int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	int32_t t50 = -297973;

    t50 = (x201>(x202==(x203%x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x207 = 3LLU;
	int32_t x208 = -11856;
	volatile int32_t t51 = -170794;

    t51 = (x205>(x206==(x207%x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x210 = INT8_MAX;
	int8_t x211 = INT8_MAX;
	static volatile int32_t t52 = 0;

    t52 = (x209>(x210==(x211%x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x214 = UINT8_MAX;
	uint32_t x215 = 567305U;
	uint16_t x216 = 10U;
	int32_t t53 = 200930;

    t53 = (x213>(x214==(x215%x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MIN;
	int8_t x218 = -24;
	uint8_t x219 = 2U;
	int16_t x220 = -6511;
	volatile int32_t t54 = -6146854;

    t54 = (x217>(x218==(x219%x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MIN;
	uint8_t x222 = UINT8_MAX;
	static uint8_t x223 = 63U;
	static volatile int32_t x224 = -19383353;
	volatile int32_t t55 = -283396;

    t55 = (x221>(x222==(x223%x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x225 = 0U;
	uint16_t x226 = 2U;
	static uint8_t x227 = 10U;
	uint8_t x228 = UINT8_MAX;

    t56 = (x225>(x226==(x227%x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x229 = INT32_MIN;
	int16_t x231 = -5937;
	int8_t x232 = 8;
	int32_t t57 = 298757;

    t57 = (x229>(x230==(x231%x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x233 = 2U;
	uint64_t x234 = UINT64_MAX;
	static volatile uint16_t x235 = UINT16_MAX;
	static int16_t x236 = INT16_MIN;
	static int32_t t58 = 6185;

    t58 = (x233>(x234==(x235%x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x237 = 1669U;
	volatile uint8_t x240 = 3U;
	int32_t t59 = -6;

    t59 = (x237>(x238==(x239%x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = 1;
	uint64_t x242 = 134244417822109LLU;
	int8_t x243 = INT8_MIN;
	volatile uint16_t x244 = UINT16_MAX;
	volatile int32_t t60 = -608;

    t60 = (x241>(x242==(x243%x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x245 = 664256817426LLU;
	uint16_t x246 = UINT16_MAX;
	uint32_t x247 = 1844426705U;
	int32_t t61 = 1627;

    t61 = (x245>(x246==(x247%x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = -18;
	int16_t x251 = 1497;
	int64_t x252 = -1LL;
	volatile int32_t t62 = 23;

    t62 = (x249>(x250==(x251%x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x253 = 2159U;
	static int32_t x254 = 220240559;
	int16_t x255 = 3;
	int32_t x256 = -381517;
	static int32_t t63 = -183;

    t63 = (x253>(x254==(x255%x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x261 = UINT32_MAX;
	volatile uint64_t x262 = UINT64_MAX;
	uint64_t x263 = 168877LLU;
	volatile uint16_t x264 = UINT16_MAX;
	volatile int32_t t64 = -13214;

    t64 = (x261>(x262==(x263%x264)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x266 = INT32_MIN;
	int8_t x267 = 1;
	static uint16_t x268 = 6115U;
	int32_t t65 = -39284;

    t65 = (x265>(x266==(x267%x268)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x271 = -1LL;
	int8_t x272 = -1;
	static int32_t t66 = -224447934;

    t66 = (x269>(x270==(x271%x272)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x273 = 13U;
	uint8_t x274 = UINT8_MAX;
	volatile uint32_t x275 = 231U;
	volatile int32_t t67 = 485899799;

    t67 = (x273>(x274==(x275%x276)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x278 = -5314;
	uint16_t x279 = UINT16_MAX;
	int32_t t68 = 519290907;

    t68 = (x277>(x278==(x279%x280)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x281 = -1;
	uint16_t x283 = UINT16_MAX;
	int32_t t69 = 9643620;

    t69 = (x281>(x282==(x283%x284)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x286 = -1LL;
	static uint8_t x287 = UINT8_MAX;
	int32_t x288 = -27;
	volatile int32_t t70 = -18830306;

    t70 = (x285>(x286==(x287%x288)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x289 = 0U;
	int8_t x290 = INT8_MIN;
	int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;
	static volatile int32_t t71 = 12299;

    t71 = (x289>(x290==(x291%x292)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x293 = -1LL;
	volatile int64_t x294 = INT64_MIN;
	uint16_t x295 = UINT16_MAX;
	uint16_t x296 = 2967U;
	int32_t t72 = 359;

    t72 = (x293>(x294==(x295%x296)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x297 = INT32_MIN;
	volatile uint64_t x299 = 475552125LLU;
	volatile uint64_t x300 = 46LLU;

    t73 = (x297>(x298==(x299%x300)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x301 = -1;
	int64_t x303 = -14916045877LL;
	volatile uint16_t x304 = UINT16_MAX;

    t74 = (x301>(x302==(x303%x304)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x305 = INT32_MIN;
	static uint8_t x306 = UINT8_MAX;
	int32_t t75 = -1;

    t75 = (x305>(x306==(x307%x308)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x309 = -1;
	int16_t x310 = INT16_MAX;
	static int8_t x311 = 5;
	volatile uint64_t x312 = UINT64_MAX;
	int32_t t76 = -16315068;

    t76 = (x309>(x310==(x311%x312)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x313 = 1818594853773LL;
	int8_t x314 = INT8_MIN;
	static int64_t x315 = -1LL;
	int16_t x316 = INT16_MIN;
	static volatile int32_t t77 = -31;

    t77 = (x313>(x314==(x315%x316)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x317 = 3U;
	int8_t x319 = INT8_MAX;

    t78 = (x317>(x318==(x319%x320)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x321 = -1LL;
	int32_t x322 = 2;
	int16_t x323 = INT16_MAX;
	uint64_t x324 = 29136LLU;
	int32_t t79 = -302;

    t79 = (x321>(x322==(x323%x324)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x325 = INT32_MAX;
	uint16_t x326 = 422U;
	int8_t x327 = -1;
	static volatile int64_t x328 = INT64_MAX;
	int32_t t80 = 2350;

    t80 = (x325>(x326==(x327%x328)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x329 = 32432U;
	int8_t x330 = INT8_MAX;
	int16_t x331 = INT16_MAX;
	volatile int32_t t81 = -30566302;

    t81 = (x329>(x330==(x331%x332)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x333 = UINT32_MAX;
	int8_t x334 = INT8_MAX;
	int64_t x336 = -1LL;
	volatile int32_t t82 = -394898;

    t82 = (x333>(x334==(x335%x336)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x337 = INT16_MIN;
	volatile int64_t x338 = INT64_MIN;
	uint64_t x339 = 517229LLU;
	int32_t x340 = INT32_MAX;
	volatile int32_t t83 = -800701588;

    t83 = (x337>(x338==(x339%x340)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x342 = UINT64_MAX;
	uint16_t x343 = 1U;
	int32_t t84 = 1;

    t84 = (x341>(x342==(x343%x344)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x345 = INT16_MAX;
	static int16_t x348 = INT16_MAX;
	volatile int32_t t85 = -28015015;

    t85 = (x345>(x346==(x347%x348)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x351 = INT64_MAX;
	static int64_t x352 = -4174405453274383820LL;
	int32_t t86 = -3;

    t86 = (x349>(x350==(x351%x352)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x353 = -1LL;
	uint64_t x354 = 3954973482LLU;
	int16_t x355 = 2682;
	int16_t x356 = 103;
	int32_t t87 = 97402;

    t87 = (x353>(x354==(x355%x356)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x357 = 836;
	uint64_t x358 = UINT64_MAX;
	volatile int32_t x359 = 113568;
	int64_t x360 = INT64_MAX;
	volatile int32_t t88 = 7150;

    t88 = (x357>(x358==(x359%x360)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x362 = INT8_MAX;
	uint64_t x363 = 873236414LLU;
	uint16_t x364 = UINT16_MAX;

    t89 = (x361>(x362==(x363%x364)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint32_t x365 = 33U;
	volatile int32_t x366 = INT32_MIN;
	volatile uint16_t x367 = 984U;
	volatile int32_t x368 = 353;
	volatile int32_t t90 = 42;

    t90 = (x365>(x366==(x367%x368)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MIN;
	int64_t x371 = INT64_MIN;
	int8_t x372 = INT8_MIN;
	static volatile int32_t t91 = 979;

    t91 = (x369>(x370==(x371%x372)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x373 = INT16_MIN;
	int16_t x375 = INT16_MAX;
	int32_t t92 = 3953768;

    t92 = (x373>(x374==(x375%x376)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x377 = 70082973LL;
	int8_t x378 = INT8_MIN;
	int32_t x379 = 259752;
	int64_t x380 = -5631LL;

    t93 = (x377>(x378==(x379%x380)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x385 = 7U;
	int8_t x386 = -20;
	int32_t x387 = INT32_MAX;
	int64_t x388 = INT64_MAX;
	volatile int32_t t94 = -21;

    t94 = (x385>(x386==(x387%x388)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x389 = INT8_MIN;
	uint64_t x392 = 21376LLU;
	int32_t t95 = -697762528;

    t95 = (x389>(x390==(x391%x392)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x393 = -1;
	uint32_t x394 = 1392U;
	int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MIN;
	int32_t t96 = -78721;

    t96 = (x393>(x394==(x395%x396)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x398 = 462U;
	uint32_t x399 = 2645U;
	int16_t x400 = 42;

    t97 = (x397>(x398==(x399%x400)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x401 = 887U;
	int32_t x402 = INT32_MIN;
	uint64_t x403 = 49577836850669412LLU;
	static int64_t x404 = -11082298931LL;
	static int32_t t98 = 2497;

    t98 = (x401>(x402==(x403%x404)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x406 = 48LL;
	int8_t x407 = -1;
	static int32_t t99 = -19194;

    t99 = (x405>(x406==(x407%x408)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x409 = INT64_MIN;
	volatile int64_t x410 = INT64_MIN;
	int64_t x411 = INT64_MIN;
	static uint64_t x412 = UINT64_MAX;

    t100 = (x409>(x410==(x411%x412)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x414 = 291LLU;
	int64_t x415 = -1LL;
	int32_t x416 = INT32_MIN;

    t101 = (x413>(x414==(x415%x416)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x417 = 96U;
	volatile int16_t x418 = INT16_MIN;
	int8_t x419 = 43;
	static volatile int64_t x420 = -1LL;
	int32_t t102 = -141;

    t102 = (x417>(x418==(x419%x420)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x421 = -1;
	uint16_t x422 = UINT16_MAX;
	int8_t x423 = INT8_MAX;
	uint16_t x424 = 2U;
	volatile int32_t t103 = 907320;

    t103 = (x421>(x422==(x423%x424)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x425 = 1554U;
	volatile int64_t x427 = INT64_MAX;
	volatile int32_t t104 = 6;

    t104 = (x425>(x426==(x427%x428)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x429 = 15LLU;
	int16_t x430 = INT16_MAX;
	static volatile uint8_t x431 = UINT8_MAX;
	int32_t x432 = INT32_MAX;

    t105 = (x429>(x430==(x431%x432)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x433 = -8;
	int64_t x434 = 1679016944LL;
	int8_t x435 = INT8_MAX;
	int32_t t106 = -49788;

    t106 = (x433>(x434==(x435%x436)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x437 = INT32_MIN;
	volatile uint64_t x438 = 23510308271775127LLU;
	int64_t x439 = INT64_MIN;
	int64_t x440 = INT64_MAX;
	static int32_t t107 = 1105;

    t107 = (x437>(x438==(x439%x440)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x441 = UINT64_MAX;
	uint8_t x442 = UINT8_MAX;
	static int32_t x443 = INT32_MIN;
	static volatile int32_t t108 = 60930616;

    t108 = (x441>(x442==(x443%x444)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x445 = INT16_MIN;
	uint32_t x447 = 3682543U;
	volatile int32_t t109 = 33344047;

    t109 = (x445>(x446==(x447%x448)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x449 = 8035U;
	int32_t x450 = -754110189;
	static int8_t x451 = INT8_MIN;
	volatile int32_t t110 = -16;

    t110 = (x449>(x450==(x451%x452)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x454 = UINT32_MAX;
	volatile int16_t x455 = -1;
	int32_t x456 = -3077585;
	int32_t t111 = -12;

    t111 = (x453>(x454==(x455%x456)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x457 = -1;
	int16_t x459 = INT16_MAX;

    t112 = (x457>(x458==(x459%x460)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x461 = INT32_MIN;
	int32_t x462 = -171560;
	static int32_t x463 = -1;
	int64_t x464 = INT64_MIN;
	static volatile int32_t t113 = 0;

    t113 = (x461>(x462==(x463%x464)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x465 = 1U;
	static volatile int64_t x466 = INT64_MIN;
	int16_t x467 = INT16_MAX;
	int64_t x468 = INT64_MAX;
	int32_t t114 = -2704079;

    t114 = (x465>(x466==(x467%x468)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x469 = INT32_MIN;
	static int32_t x470 = INT32_MAX;
	int64_t x472 = INT64_MIN;

    t115 = (x469>(x470==(x471%x472)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x474 = INT8_MIN;
	int16_t x475 = -1;
	int8_t x476 = 3;
	int32_t t116 = -21;

    t116 = (x473>(x474==(x475%x476)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x477 = INT8_MIN;
	int64_t x479 = INT64_MIN;
	int32_t x480 = INT32_MAX;

    t117 = (x477>(x478==(x479%x480)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x481 = UINT32_MAX;
	volatile uint32_t x482 = UINT32_MAX;
	volatile uint32_t x484 = 708649U;
	volatile int32_t t118 = -1025916499;

    t118 = (x481>(x482==(x483%x484)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x489 = INT32_MIN;
	int64_t x490 = INT64_MIN;
	int16_t x491 = INT16_MIN;
	int64_t x492 = -1LL;
	int32_t t119 = 31;

    t119 = (x489>(x490==(x491%x492)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x493 = 0;
	int16_t x494 = -11432;
	uint16_t x495 = UINT16_MAX;
	uint16_t x496 = 263U;
	int32_t t120 = -162437459;

    t120 = (x493>(x494==(x495%x496)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x498 = INT64_MIN;
	int8_t x499 = INT8_MIN;
	static uint64_t x500 = 125819278969424LLU;
	int32_t t121 = 15599;

    t121 = (x497>(x498==(x499%x500)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x501 = INT64_MAX;
	int32_t x502 = INT32_MIN;
	static int16_t x504 = -1;
	volatile int32_t t122 = 11104001;

    t122 = (x501>(x502==(x503%x504)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x505 = UINT32_MAX;
	int32_t x506 = -11416752;
	volatile int64_t x507 = -1LL;
	uint16_t x508 = UINT16_MAX;
	volatile int32_t t123 = -351055364;

    t123 = (x505>(x506==(x507%x508)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x509 = 99169LLU;
	int16_t x510 = INT16_MIN;
	volatile int32_t x511 = 3412746;
	volatile int8_t x512 = INT8_MIN;
	volatile int32_t t124 = -53;

    t124 = (x509>(x510==(x511%x512)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x514 = 55;
	int16_t x515 = INT16_MIN;
	volatile uint8_t x516 = UINT8_MAX;
	volatile int32_t t125 = 681432273;

    t125 = (x513>(x514==(x515%x516)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x517 = UINT16_MAX;
	int16_t x518 = 14690;
	int64_t x520 = INT64_MAX;
	volatile int32_t t126 = 42794;

    t126 = (x517>(x518==(x519%x520)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x521 = -19;
	int64_t x522 = INT64_MAX;
	volatile int8_t x524 = -1;
	int32_t t127 = -42612505;

    t127 = (x521>(x522==(x523%x524)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x526 = -1LL;
	int8_t x527 = INT8_MAX;
	volatile int8_t x528 = INT8_MIN;

    t128 = (x525>(x526==(x527%x528)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x531 = UINT32_MAX;
	uint8_t x532 = 1U;
	volatile int32_t t129 = -13998880;

    t129 = (x529>(x530==(x531%x532)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x533 = INT64_MIN;
	int32_t x534 = INT32_MIN;
	int64_t x536 = INT64_MIN;
	volatile int32_t t130 = -601833933;

    t130 = (x533>(x534==(x535%x536)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x537 = UINT8_MAX;
	int64_t x538 = INT64_MIN;
	static int32_t x539 = INT32_MIN;
	static volatile int32_t x540 = -14367784;
	volatile int32_t t131 = 42926;

    t131 = (x537>(x538==(x539%x540)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x541 = -118928522996169075LL;
	int16_t x544 = 771;
	static int32_t t132 = 2938;

    t132 = (x541>(x542==(x543%x544)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x545 = 1259049854736139LL;
	volatile int16_t x546 = INT16_MIN;
	volatile int8_t x548 = -50;
	int32_t t133 = -15464;

    t133 = (x545>(x546==(x547%x548)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x549 = UINT64_MAX;
	int64_t x550 = 1031308876723LL;
	int8_t x551 = INT8_MIN;
	int32_t x552 = -1;
	static volatile int32_t t134 = 169977536;

    t134 = (x549>(x550==(x551%x552)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x553 = INT16_MIN;
	int32_t x554 = INT32_MAX;
	int16_t x555 = INT16_MIN;
	volatile int16_t x556 = 1;
	int32_t t135 = -131213957;

    t135 = (x553>(x554==(x555%x556)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x558 = -1;
	volatile int16_t x559 = INT16_MAX;
	volatile int32_t t136 = 87824463;

    t136 = (x557>(x558==(x559%x560)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x561 = INT8_MIN;
	int64_t x564 = -1LL;

    t137 = (x561>(x562==(x563%x564)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x565 = INT32_MAX;
	int64_t x566 = -1680738148698LL;
	static int8_t x567 = 43;
	static uint8_t x568 = UINT8_MAX;
	volatile int32_t t138 = 14746609;

    t138 = (x565>(x566==(x567%x568)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x569 = -3;
	uint8_t x570 = 2U;
	int16_t x571 = INT16_MAX;
	static uint64_t x572 = UINT64_MAX;
	volatile int32_t t139 = -1320;

    t139 = (x569>(x570==(x571%x572)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x577 = 0;
	int8_t x578 = INT8_MIN;
	static int64_t x579 = INT64_MAX;
	uint32_t x580 = UINT32_MAX;
	int32_t t140 = 966417;

    t140 = (x577>(x578==(x579%x580)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x582 = 25;
	volatile int16_t x583 = -446;
	int32_t t141 = 80870712;

    t141 = (x581>(x582==(x583%x584)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x585 = INT64_MAX;
	int8_t x586 = INT8_MAX;
	int64_t x587 = INT64_MIN;
	static int8_t x588 = -1;
	volatile int32_t t142 = 384;

    t142 = (x585>(x586==(x587%x588)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x589 = INT64_MAX;
	static int8_t x590 = INT8_MIN;
	int16_t x591 = INT16_MAX;
	uint16_t x592 = UINT16_MAX;
	int32_t t143 = 2;

    t143 = (x589>(x590==(x591%x592)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x593 = INT16_MIN;
	uint16_t x594 = 395U;
	int32_t t144 = -2737;

    t144 = (x593>(x594==(x595%x596)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x597 = INT32_MIN;
	int16_t x598 = -10957;
	volatile uint8_t x599 = 3U;
	volatile int32_t t145 = -3;

    t145 = (x597>(x598==(x599%x600)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x601 = UINT32_MAX;
	int8_t x602 = INT8_MAX;
	uint8_t x603 = 4U;
	uint32_t x604 = 1098642814U;
	static int32_t t146 = -32715;

    t146 = (x601>(x602==(x603%x604)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x605 = UINT16_MAX;
	volatile int32_t x606 = 24675;
	static int64_t x607 = 242742345154570395LL;
	int32_t x608 = -79540645;
	int32_t t147 = 2;

    t147 = (x605>(x606==(x607%x608)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x609 = -96877;
	uint32_t x610 = UINT32_MAX;
	int64_t x611 = 28683663LL;
	int8_t x612 = INT8_MAX;
	int32_t t148 = -14166;

    t148 = (x609>(x610==(x611%x612)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x613 = UINT64_MAX;
	int32_t x615 = INT32_MAX;

    t149 = (x613>(x614==(x615%x616)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x617 = 0;
	volatile int32_t x618 = INT32_MIN;
	int64_t x619 = INT64_MIN;
	static int8_t x620 = INT8_MIN;
	volatile int32_t t150 = 529;

    t150 = (x617>(x618==(x619%x620)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x621 = 8406421160305417610LLU;
	volatile uint64_t x622 = 39213LLU;
	uint8_t x623 = UINT8_MAX;
	static volatile int32_t t151 = -4268796;

    t151 = (x621>(x622==(x623%x624)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x625 = -1;
	volatile int32_t x626 = 1193;
	uint64_t x627 = UINT64_MAX;
	uint64_t x628 = 13LLU;
	int32_t t152 = -56;

    t152 = (x625>(x626==(x627%x628)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x631 = -26;
	int16_t x632 = INT16_MIN;
	volatile int32_t t153 = 16355;

    t153 = (x629>(x630==(x631%x632)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x634 = INT16_MAX;
	int64_t x636 = INT64_MIN;

    t154 = (x633>(x634==(x635%x636)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x637 = INT16_MIN;
	volatile uint32_t x638 = UINT32_MAX;
	uint16_t x639 = 12936U;
	static int8_t x640 = 2;
	volatile int32_t t155 = -366;

    t155 = (x637>(x638==(x639%x640)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x642 = -1;
	static volatile int16_t x643 = -43;
	int32_t t156 = -194021;

    t156 = (x641>(x642==(x643%x644)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x645 = -15;
	static int16_t x647 = 48;
	volatile int32_t t157 = -1014853;

    t157 = (x645>(x646==(x647%x648)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x650 = -1;
	uint64_t x651 = 1412650223556865LLU;
	uint8_t x652 = UINT8_MAX;
	static volatile int32_t t158 = -342440;

    t158 = (x649>(x650==(x651%x652)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x654 = INT16_MIN;
	volatile uint32_t x655 = UINT32_MAX;
	uint64_t x656 = UINT64_MAX;
	static int32_t t159 = 5941994;

    t159 = (x653>(x654==(x655%x656)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x661 = 2090696379259917977LL;
	int8_t x662 = INT8_MIN;
	static uint16_t x663 = 3U;
	static volatile uint8_t x664 = 2U;
	int32_t t160 = -4353;

    t160 = (x661>(x662==(x663%x664)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x666 = -40;
	int64_t x668 = INT64_MAX;
	int32_t t161 = 1;

    t161 = (x665>(x666==(x667%x668)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x669 = 5331;
	uint8_t x670 = 1U;
	uint16_t x671 = 27912U;
	int32_t x672 = INT32_MIN;
	volatile int32_t t162 = 5;

    t162 = (x669>(x670==(x671%x672)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x673 = -168716987902LL;
	int16_t x674 = -11060;
	int64_t x675 = INT64_MAX;
	int32_t t163 = 1051;

    t163 = (x673>(x674==(x675%x676)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x678 = INT32_MIN;
	uint64_t x679 = UINT64_MAX;
	int32_t t164 = 126;

    t164 = (x677>(x678==(x679%x680)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int64_t x681 = -1LL;
	int64_t x683 = INT64_MIN;
	int8_t x684 = INT8_MIN;
	int32_t t165 = -785122;

    t165 = (x681>(x682==(x683%x684)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x686 = 0U;
	uint8_t x687 = 74U;
	int32_t t166 = -523935915;

    t166 = (x685>(x686==(x687%x688)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x690 = -39224245546595LL;
	static uint64_t x691 = 15912676592847LLU;
	int64_t x692 = -41714LL;

    t167 = (x689>(x690==(x691%x692)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x693 = INT16_MAX;
	uint64_t x694 = UINT64_MAX;
	int32_t x695 = 44768;
	volatile uint16_t x696 = 239U;
	int32_t t168 = 7660;

    t168 = (x693>(x694==(x695%x696)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x697 = 36U;
	uint32_t x698 = UINT32_MAX;
	int64_t x699 = INT64_MAX;
	volatile int32_t t169 = 1054074;

    t169 = (x697>(x698==(x699%x700)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x701 = -123;
	int8_t x702 = INT8_MIN;
	uint16_t x703 = UINT16_MAX;
	volatile int16_t x704 = INT16_MAX;
	volatile int32_t t170 = -44;

    t170 = (x701>(x702==(x703%x704)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x705 = 2LLU;
	int64_t x708 = INT64_MIN;
	int32_t t171 = -190113;

    t171 = (x705>(x706==(x707%x708)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x709 = 4079;
	uint8_t x710 = UINT8_MAX;
	volatile uint32_t x711 = 25045U;

    t172 = (x709>(x710==(x711%x712)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x713 = INT16_MIN;
	int8_t x714 = -6;
	volatile int64_t x715 = -1LL;
	uint16_t x716 = UINT16_MAX;
	volatile int32_t t173 = -5;

    t173 = (x713>(x714==(x715%x716)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x717 = 3U;
	volatile int8_t x718 = -1;
	int16_t x719 = INT16_MAX;
	uint32_t x720 = 7877U;
	volatile int32_t t174 = -1797;

    t174 = (x717>(x718==(x719%x720)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x721 = 0;
	volatile int32_t x722 = INT32_MIN;
	static int64_t x723 = INT64_MAX;
	int32_t x724 = -886000935;

    t175 = (x721>(x722==(x723%x724)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x725 = -1;
	uint8_t x726 = UINT8_MAX;
	uint16_t x727 = 137U;
	volatile uint8_t x728 = UINT8_MAX;
	int32_t t176 = 23043854;

    t176 = (x725>(x726==(x727%x728)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x729 = INT8_MAX;
	int32_t x730 = INT32_MAX;
	uint16_t x731 = UINT16_MAX;
	int64_t x732 = INT64_MAX;
	static int32_t t177 = -5;

    t177 = (x729>(x730==(x731%x732)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x733 = INT32_MIN;
	uint16_t x734 = 13965U;
	uint32_t x736 = UINT32_MAX;
	volatile int32_t t178 = 9470074;

    t178 = (x733>(x734==(x735%x736)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x737 = 85671315U;
	int32_t x738 = -1;
	int32_t x740 = INT32_MIN;
	static volatile int32_t t179 = -445136;

    t179 = (x737>(x738==(x739%x740)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x742 = -858220158168557LL;
	int16_t x743 = INT16_MAX;
	int16_t x744 = INT16_MIN;
	static volatile int32_t t180 = -524;

    t180 = (x741>(x742==(x743%x744)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint32_t x745 = UINT32_MAX;
	int32_t x746 = 0;
	int8_t x748 = -1;
	int32_t t181 = 548339;

    t181 = (x745>(x746==(x747%x748)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x749 = UINT8_MAX;
	volatile int16_t x750 = INT16_MAX;
	int32_t x751 = INT32_MIN;
	static int32_t t182 = 992;

    t182 = (x749>(x750==(x751%x752)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x753 = 1;
	uint32_t x754 = 2U;
	int32_t t183 = -764848;

    t183 = (x753>(x754==(x755%x756)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x757 = UINT16_MAX;
	int64_t x758 = -1LL;
	int64_t x759 = -104545788LL;
	int16_t x760 = INT16_MIN;
	int32_t t184 = 5;

    t184 = (x757>(x758==(x759%x760)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x761 = 54595LLU;
	static uint8_t x762 = 0U;
	int16_t x763 = INT16_MIN;
	static int32_t x764 = 3609310;

    t185 = (x761>(x762==(x763%x764)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x765 = INT32_MIN;
	int16_t x767 = 0;
	volatile int16_t x768 = 1060;

    t186 = (x765>(x766==(x767%x768)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x769 = INT64_MAX;
	static int32_t x770 = -1;
	volatile uint64_t x771 = 968460848275LLU;
	int8_t x772 = 2;
	volatile int32_t t187 = -241146162;

    t187 = (x769>(x770==(x771%x772)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x775 = -3567842858289771LL;
	uint32_t x776 = 2U;

    t188 = (x773>(x774==(x775%x776)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x778 = UINT8_MAX;
	static uint32_t x779 = UINT32_MAX;
	int16_t x780 = -1;
	volatile int32_t t189 = -423;

    t189 = (x777>(x778==(x779%x780)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x783 = 2U;
	uint32_t x784 = 693414331U;

    t190 = (x781>(x782==(x783%x784)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x785 = -533637721;
	static uint64_t x786 = 256258597457216LLU;
	int8_t x787 = 0;
	int64_t x788 = INT64_MIN;
	volatile int32_t t191 = -33467975;

    t191 = (x785>(x786==(x787%x788)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x789 = 5980U;
	uint16_t x790 = UINT16_MAX;

    t192 = (x789>(x790==(x791%x792)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x793 = 0LL;
	static volatile uint64_t x796 = UINT64_MAX;
	volatile int32_t t193 = -1532185;

    t193 = (x793>(x794==(x795%x796)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x797 = INT8_MAX;
	int16_t x798 = -1;
	int32_t x799 = -1;
	static int32_t x800 = 3;

    t194 = (x797>(x798==(x799%x800)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x802 = INT64_MIN;
	volatile int8_t x803 = INT8_MIN;
	volatile int16_t x804 = INT16_MIN;
	volatile int32_t t195 = 8;

    t195 = (x801>(x802==(x803%x804)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x805 = INT32_MAX;
	volatile uint16_t x806 = 635U;
	int64_t x807 = -1410LL;
	uint16_t x808 = 2470U;

    t196 = (x805>(x806==(x807%x808)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x809 = -228;
	int32_t x810 = -5658563;
	volatile int16_t x811 = INT16_MIN;
	int16_t x812 = INT16_MAX;
	static int32_t t197 = 872;

    t197 = (x809>(x810==(x811%x812)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x813 = 152322;
	int64_t x814 = 895802746329104853LL;
	volatile int32_t x816 = INT32_MIN;
	static int32_t t198 = 21;

    t198 = (x813>(x814==(x815%x816)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x818 = 17;
	int64_t x820 = -2675928LL;
	int32_t t199 = -22675;

    t199 = (x817>(x818==(x819%x820)));

    if (t199 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

