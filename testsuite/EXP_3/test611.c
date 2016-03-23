
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

int64_t x10 = INT64_MIN;
volatile int8_t x13 = INT8_MIN;
int8_t x21 = -1;
uint64_t x25 = 3147830891565034442LLU;
static int16_t x26 = -1;
static volatile uint16_t x40 = 1U;
volatile uint64_t x41 = 7006241369420723465LLU;
uint64_t x63 = 27LLU;
volatile int32_t t12 = 6639028;
static volatile int32_t t13 = 528835136;
static int8_t x70 = -1;
uint64_t x71 = 0LLU;
static volatile int32_t x74 = INT32_MAX;
volatile int8_t x78 = -62;
static volatile int32_t x80 = INT32_MIN;
int16_t x94 = 867;
int64_t x97 = 595554615LL;
int32_t t20 = -295189;
int16_t x121 = INT16_MAX;
int32_t t28 = -25908871;
int16_t x159 = 3;
int64_t x174 = INT64_MIN;
int8_t x175 = -1;
int32_t x182 = INT32_MIN;
static uint32_t x184 = 628761U;
volatile int64_t x198 = 10162058443751618LL;
int32_t x199 = -1;
volatile int32_t t40 = 7567;
volatile uint64_t x201 = 2682897766LLU;
int32_t x203 = 6536638;
int64_t x204 = 1619108LL;
int8_t x206 = INT8_MAX;
volatile int32_t t43 = 57118;
static int16_t x213 = INT16_MAX;
static int64_t x216 = INT64_MAX;
int16_t x219 = INT16_MAX;
int32_t t46 = -92;
uint32_t x230 = 883762U;
static int8_t x236 = INT8_MAX;
int32_t x249 = 198630;
uint32_t x255 = 166249U;
int16_t x257 = -1;
int16_t x258 = INT16_MAX;
volatile int32_t t54 = 45701901;
uint32_t x262 = 776U;
static int64_t x263 = -1LL;
int32_t x264 = 414;
int16_t x267 = INT16_MAX;
int32_t x273 = INT32_MIN;
int32_t t58 = -23605088;
static int32_t x299 = -942025810;
uint32_t x307 = 1156169244U;
volatile int32_t t65 = -14955361;
int64_t x312 = 16097582570102751LL;
int8_t x320 = -1;
uint32_t x321 = 208U;
uint64_t x324 = UINT64_MAX;
uint64_t x333 = UINT64_MAX;
volatile int16_t x335 = -31;
int64_t x336 = INT64_MIN;
uint32_t x341 = 849030037U;
static uint64_t x348 = 5LLU;
uint16_t x353 = 5U;
uint32_t x374 = UINT32_MAX;
volatile int32_t x375 = INT32_MIN;
static uint16_t x380 = UINT16_MAX;
static int32_t t78 = 127898038;
static int16_t x381 = INT16_MIN;
int64_t x383 = -244067LL;
static int32_t t79 = 0;
int64_t x394 = -1LL;
static uint64_t x395 = 1260039780LLU;
static int32_t t83 = 147254;
int32_t x405 = -1;
int8_t x407 = 13;
volatile int64_t x410 = INT64_MIN;
volatile int32_t x411 = INT32_MIN;
int16_t x412 = -26;
int8_t x414 = -36;
int32_t t86 = 340501837;
int32_t x418 = 5144796;
int32_t t87 = 2459;
uint16_t x421 = 9457U;
static int64_t x425 = INT64_MIN;
uint8_t x443 = 44U;
volatile int32_t t92 = 10475;
uint16_t x456 = UINT16_MAX;
volatile uint32_t x460 = UINT32_MAX;
int16_t x471 = INT16_MIN;
volatile int8_t x474 = -13;
volatile int16_t x476 = INT16_MIN;
volatile int32_t t99 = 116176361;
volatile int32_t t100 = -47569509;
uint16_t x484 = UINT16_MAX;
uint16_t x490 = UINT16_MAX;
static int32_t x504 = INT32_MIN;
volatile int32_t t108 = -1;
volatile int64_t x525 = -15806709LL;
volatile int16_t x528 = -213;
int8_t x537 = INT8_MIN;
volatile int64_t x545 = -1LL;
int16_t x548 = 1277;
int32_t t117 = -10;
int32_t x582 = -31419;
int16_t x598 = INT16_MAX;
uint8_t x606 = UINT8_MAX;
int64_t x607 = -1037086676832497LL;
volatile int32_t t125 = -808109;
uint32_t x617 = 60602742U;
uint8_t x618 = 1U;
uint16_t x622 = 0U;
int8_t x630 = INT8_MAX;
int32_t t132 = 538012000;
uint8_t x637 = UINT8_MAX;
int32_t x643 = INT32_MIN;
int64_t x647 = -1LL;
int64_t x648 = INT64_MIN;
int32_t t137 = -7148163;
volatile int8_t x658 = INT8_MIN;
int32_t t140 = -197161;
int32_t x673 = INT32_MAX;
volatile int16_t x674 = INT16_MAX;
int64_t x679 = INT64_MIN;
static int32_t x693 = INT32_MIN;
uint32_t x696 = UINT32_MAX;
int32_t t147 = 56853872;
static int32_t x697 = INT32_MIN;
volatile int64_t x699 = -1LL;
uint32_t x702 = 103U;
static int16_t x703 = INT16_MAX;
int32_t x705 = -1;
uint64_t x711 = 590106085190LLU;
int32_t t151 = 24;
int32_t x719 = 1682;
volatile uint32_t x723 = 54506732U;
volatile int32_t t154 = -10004;
int16_t x727 = -1767;
int64_t x732 = 1033986678940106LL;
volatile int32_t t157 = -6;
uint16_t x739 = 6878U;
int32_t t158 = -823;
uint32_t x743 = 528980423U;
static uint64_t x764 = 16925245604LLU;
int32_t x765 = -108;
int64_t x768 = -1LL;
static uint8_t x773 = UINT8_MAX;
volatile int32_t t166 = -134877;
static int8_t x777 = INT8_MIN;
volatile int16_t x780 = INT16_MIN;
uint32_t x782 = UINT32_MAX;
int16_t x785 = INT16_MIN;
int16_t x787 = INT16_MIN;
uint64_t x791 = 3LLU;
volatile int32_t t170 = -76;
int32_t t171 = -31738;
volatile uint64_t x800 = 15992383285105LLU;
volatile int32_t t172 = -54447358;
int8_t x805 = INT8_MAX;
int8_t x808 = -46;
volatile uint32_t x813 = 300509003U;
uint32_t x818 = 521993U;
volatile uint8_t x820 = UINT8_MAX;
static volatile int32_t t176 = 48;
static uint16_t x826 = 1401U;
int16_t x827 = INT16_MIN;
int8_t x830 = INT8_MIN;
uint16_t x834 = 8350U;
int16_t x837 = 1;
volatile int32_t t180 = 74786;
int32_t x845 = -5898;
static volatile int32_t x848 = INT32_MAX;
uint8_t x850 = 2U;
static int32_t x851 = INT32_MIN;
static int16_t x852 = INT16_MIN;
int8_t x853 = INT8_MAX;
volatile int16_t x861 = INT16_MAX;
int64_t x862 = -1278769748839LL;
int64_t x864 = INT64_MAX;
int32_t x866 = INT32_MAX;
int32_t x869 = INT32_MIN;
static uint64_t x874 = UINT64_MAX;
static uint64_t x884 = 259134LLU;
int16_t x905 = -1;
int32_t x908 = -23740;
volatile uint32_t x921 = UINT32_MAX;
int32_t x923 = 12802;
uint32_t x930 = UINT32_MAX;


void f0(void) {
    	volatile int64_t x5 = 1033262227297659559LL;
	uint32_t x6 = 902851U;
	uint8_t x7 = 29U;
	static int16_t x8 = -1;
	int32_t t0 = 56675;

    t0 = ((x5-x6)>(x7/x8));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x9 = -15;
	int8_t x11 = 22;
	int64_t x12 = 474LL;
	volatile int32_t t1 = -105;

    t1 = ((x9-x10)>(x11/x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x14 = 2;
	int32_t x15 = INT32_MAX;
	int32_t x16 = 12;
	volatile int32_t t2 = -65597;

    t2 = ((x13-x14)>(x15/x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x22 = INT16_MIN;
	int64_t x23 = INT64_MAX;
	volatile uint16_t x24 = UINT16_MAX;
	static int32_t t3 = -27664;

    t3 = ((x21-x22)>(x23/x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x27 = UINT16_MAX;
	uint32_t x28 = 75081020U;
	static int32_t t4 = 101049176;

    t4 = ((x25-x26)>(x27/x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x29 = 1781U;
	uint64_t x30 = 174165747196993908LLU;
	int32_t x31 = 227;
	int64_t x32 = INT64_MIN;
	volatile int32_t t5 = -768553;

    t5 = ((x29-x30)>(x31/x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x33 = UINT16_MAX;
	uint32_t x34 = 78514926U;
	static uint16_t x35 = 5U;
	volatile uint32_t x36 = 931338491U;
	static int32_t t6 = 960;

    t6 = ((x33-x34)>(x35/x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x37 = UINT16_MAX;
	int8_t x38 = -1;
	static volatile int32_t x39 = INT32_MIN;
	int32_t t7 = 324493;

    t7 = ((x37-x38)>(x39/x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x42 = -27;
	static volatile uint64_t x43 = 52383907026LLU;
	uint64_t x44 = 85504321511LLU;
	volatile int32_t t8 = -3055468;

    t8 = ((x41-x42)>(x43/x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x45 = UINT32_MAX;
	int16_t x46 = INT16_MAX;
	int32_t x47 = INT32_MAX;
	static uint32_t x48 = 7243U;
	int32_t t9 = -142190;

    t9 = ((x45-x46)>(x47/x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = INT16_MAX;
	volatile int64_t x50 = INT64_MAX;
	int16_t x51 = -1;
	volatile int8_t x52 = INT8_MAX;
	volatile int32_t t10 = 12074;

    t10 = ((x49-x50)>(x51/x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x57 = 1;
	volatile int8_t x58 = INT8_MIN;
	volatile uint32_t x59 = 0U;
	volatile int16_t x60 = -1;
	static int32_t t11 = -16689979;

    t11 = ((x57-x58)>(x59/x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = -1;
	int8_t x62 = -1;
	int64_t x64 = -1526548572225347LL;

    t12 = ((x61-x62)>(x63/x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = -60;
	static uint64_t x66 = 3941870LLU;
	int32_t x67 = INT32_MIN;
	int8_t x68 = INT8_MIN;

    t13 = ((x65-x66)>(x67/x68));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x69 = -1LL;
	int32_t x72 = 4647687;
	int32_t t14 = -4;

    t14 = ((x69-x70)>(x71/x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x73 = 49438162744LLU;
	volatile uint8_t x75 = UINT8_MAX;
	int8_t x76 = INT8_MIN;
	volatile int32_t t15 = -76141;

    t15 = ((x73-x74)>(x75/x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x77 = 3;
	static volatile uint64_t x79 = 29008LLU;
	volatile int32_t t16 = 17;

    t16 = ((x77-x78)>(x79/x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x85 = 43;
	static int8_t x86 = -1;
	static int64_t x87 = 119544LL;
	uint32_t x88 = 87U;
	volatile int32_t t17 = -7;

    t17 = ((x85-x86)>(x87/x88));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = INT32_MIN;
	volatile int64_t x90 = 16559853410LL;
	static int8_t x91 = INT8_MIN;
	volatile uint8_t x92 = 3U;
	volatile int32_t t18 = 78490519;

    t18 = ((x89-x90)>(x91/x92));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x93 = UINT32_MAX;
	uint16_t x95 = UINT16_MAX;
	static volatile uint16_t x96 = 126U;
	static volatile int32_t t19 = -598;

    t19 = ((x93-x94)>(x95/x96));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x98 = UINT8_MAX;
	uint32_t x99 = 5679U;
	volatile uint32_t x100 = 558U;

    t20 = ((x97-x98)>(x99/x100));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x101 = -1;
	int16_t x102 = -1;
	int16_t x103 = INT16_MAX;
	int8_t x104 = INT8_MIN;
	volatile int32_t t21 = 407097;

    t21 = ((x101-x102)>(x103/x104));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x105 = 54;
	uint32_t x106 = 1323456U;
	volatile int64_t x107 = -152955733692LL;
	int16_t x108 = 28;
	volatile int32_t t22 = 844999;

    t22 = ((x105-x106)>(x107/x108));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x113 = INT8_MIN;
	int32_t x114 = INT32_MIN;
	volatile uint64_t x115 = UINT64_MAX;
	uint64_t x116 = 16744095974919879LLU;
	volatile int32_t t23 = 14;

    t23 = ((x113-x114)>(x115/x116));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x117 = -103722;
	static int8_t x118 = INT8_MIN;
	int16_t x119 = 3;
	volatile int32_t x120 = 1;
	int32_t t24 = 65536208;

    t24 = ((x117-x118)>(x119/x120));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x122 = 2689797632195702475LLU;
	int16_t x123 = INT16_MAX;
	int8_t x124 = INT8_MIN;
	int32_t t25 = -1;

    t25 = ((x121-x122)>(x123/x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x129 = 64190339824532203LLU;
	int16_t x130 = INT16_MAX;
	int16_t x131 = 0;
	int32_t x132 = -50564478;
	static volatile int32_t t26 = -28998157;

    t26 = ((x129-x130)>(x131/x132));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x137 = UINT32_MAX;
	int8_t x138 = INT8_MIN;
	uint64_t x139 = 2348256089LLU;
	int64_t x140 = INT64_MIN;
	int32_t t27 = 7043;

    t27 = ((x137-x138)>(x139/x140));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x145 = INT32_MIN;
	uint32_t x146 = 5775908U;
	int64_t x147 = INT64_MIN;
	uint32_t x148 = 3U;

    t28 = ((x145-x146)>(x147/x148));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x149 = -1LL;
	static int32_t x150 = INT32_MIN;
	int16_t x151 = -1827;
	int64_t x152 = 1970933904818LL;
	static volatile int32_t t29 = 9;

    t29 = ((x149-x150)>(x151/x152));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x157 = 469U;
	uint32_t x158 = UINT32_MAX;
	int16_t x160 = INT16_MIN;
	static volatile int32_t t30 = 5588;

    t30 = ((x157-x158)>(x159/x160));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x161 = INT64_MIN;
	int8_t x162 = -1;
	uint32_t x163 = UINT32_MAX;
	static uint64_t x164 = 404248LLU;
	int32_t t31 = 197371;

    t31 = ((x161-x162)>(x163/x164));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x165 = -1LL;
	volatile uint8_t x166 = UINT8_MAX;
	int32_t x167 = INT32_MIN;
	int32_t x168 = -13598;
	volatile int32_t t32 = 3195861;

    t32 = ((x165-x166)>(x167/x168));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x169 = 897U;
	static uint32_t x170 = 2099254U;
	uint32_t x171 = 2126092790U;
	uint8_t x172 = 1U;
	static volatile int32_t t33 = 205766752;

    t33 = ((x169-x170)>(x171/x172));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x173 = UINT64_MAX;
	int16_t x176 = -1;
	static int32_t t34 = 8713;

    t34 = ((x173-x174)>(x175/x176));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x177 = INT16_MIN;
	int8_t x178 = INT8_MIN;
	uint64_t x179 = UINT64_MAX;
	int16_t x180 = INT16_MIN;
	int32_t t35 = -58677;

    t35 = ((x177-x178)>(x179/x180));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x181 = UINT64_MAX;
	static uint8_t x183 = UINT8_MAX;
	int32_t t36 = 340356670;

    t36 = ((x181-x182)>(x183/x184));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x185 = 33U;
	static uint64_t x186 = 9LLU;
	int32_t x187 = -1;
	volatile uint64_t x188 = UINT64_MAX;
	volatile int32_t t37 = -1;

    t37 = ((x185-x186)>(x187/x188));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x189 = 0;
	int16_t x190 = INT16_MAX;
	int8_t x191 = INT8_MAX;
	int32_t x192 = -289;
	volatile int32_t t38 = 1;

    t38 = ((x189-x190)>(x191/x192));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x193 = 125375548LLU;
	uint32_t x194 = 12355805U;
	uint32_t x195 = 1U;
	int8_t x196 = INT8_MIN;
	int32_t t39 = 2279271;

    t39 = ((x193-x194)>(x195/x196));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x197 = 8U;
	int16_t x200 = -1;

    t40 = ((x197-x198)>(x199/x200));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x202 = -1;
	int32_t t41 = 9238071;

    t41 = ((x201-x202)>(x203/x204));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x205 = -478465;
	volatile uint32_t x207 = 1684536U;
	int32_t x208 = 241745616;
	int32_t t42 = 5;

    t42 = ((x205-x206)>(x207/x208));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x209 = UINT32_MAX;
	volatile int32_t x210 = INT32_MIN;
	int16_t x211 = -12577;
	uint8_t x212 = UINT8_MAX;

    t43 = ((x209-x210)>(x211/x212));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x214 = -1510;
	int64_t x215 = INT64_MIN;
	volatile int32_t t44 = -41264650;

    t44 = ((x213-x214)>(x215/x216));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x217 = -1;
	uint16_t x218 = 76U;
	int8_t x220 = INT8_MAX;
	volatile int32_t t45 = 2;

    t45 = ((x217-x218)>(x219/x220));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x221 = INT16_MIN;
	int16_t x222 = -1;
	int8_t x223 = -1;
	int32_t x224 = INT32_MIN;

    t46 = ((x221-x222)>(x223/x224));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x229 = -340;
	int32_t x231 = 64;
	volatile uint8_t x232 = 121U;
	static int32_t t47 = 96609830;

    t47 = ((x229-x230)>(x231/x232));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x233 = UINT8_MAX;
	int32_t x234 = -2;
	int32_t x235 = -83642;
	int32_t t48 = 33482345;

    t48 = ((x233-x234)>(x235/x236));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x237 = -1996229;
	uint64_t x238 = 6938934027116LLU;
	int64_t x239 = INT64_MIN;
	uint8_t x240 = UINT8_MAX;
	int32_t t49 = 1;

    t49 = ((x237-x238)>(x239/x240));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x241 = -375;
	int8_t x242 = 1;
	int16_t x243 = INT16_MIN;
	uint32_t x244 = 49U;
	int32_t t50 = 118;

    t50 = ((x241-x242)>(x243/x244));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x245 = 2568U;
	int64_t x246 = -1LL;
	int64_t x247 = 57425522LL;
	int32_t x248 = -1;
	volatile int32_t t51 = -106442;

    t51 = ((x245-x246)>(x247/x248));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x250 = INT16_MAX;
	static uint64_t x251 = UINT64_MAX;
	volatile int32_t x252 = INT32_MAX;
	volatile int32_t t52 = -26;

    t52 = ((x249-x250)>(x251/x252));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x253 = INT32_MIN;
	uint32_t x254 = 56750005U;
	int32_t x256 = INT32_MIN;
	static int32_t t53 = -33082;

    t53 = ((x253-x254)>(x255/x256));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x259 = INT64_MAX;
	uint8_t x260 = 75U;

    t54 = ((x257-x258)>(x259/x260));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x261 = -1LL;
	static volatile int32_t t55 = -515190;

    t55 = ((x261-x262)>(x263/x264));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x265 = INT8_MAX;
	int8_t x266 = INT8_MIN;
	int32_t x268 = INT32_MAX;
	int32_t t56 = 11470327;

    t56 = ((x265-x266)>(x267/x268));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x269 = INT8_MIN;
	int16_t x270 = -3;
	volatile int8_t x271 = 0;
	static int32_t x272 = 440876656;
	static volatile int32_t t57 = -17127;

    t57 = ((x269-x270)>(x271/x272));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x274 = -1;
	uint8_t x275 = UINT8_MAX;
	static int32_t x276 = INT32_MIN;

    t58 = ((x273-x274)>(x275/x276));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x277 = 106;
	uint64_t x278 = 192030675379LLU;
	static volatile int64_t x279 = INT64_MAX;
	static int8_t x280 = INT8_MAX;
	volatile int32_t t59 = -19325600;

    t59 = ((x277-x278)>(x279/x280));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x281 = INT32_MAX;
	volatile int64_t x282 = 3LL;
	uint16_t x283 = 494U;
	int16_t x284 = -25;
	volatile int32_t t60 = 10115;

    t60 = ((x281-x282)>(x283/x284));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x285 = INT8_MIN;
	int32_t x286 = INT32_MIN;
	uint64_t x287 = 445LLU;
	uint64_t x288 = 406956668712LLU;
	int32_t t61 = -69;

    t61 = ((x285-x286)>(x287/x288));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x293 = INT16_MIN;
	uint32_t x294 = UINT32_MAX;
	volatile uint8_t x295 = 51U;
	int32_t x296 = -12326;
	static volatile int32_t t62 = -239720389;

    t62 = ((x293-x294)>(x295/x296));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x297 = -268;
	volatile int64_t x298 = INT64_MIN;
	static volatile int64_t x300 = INT64_MIN;
	volatile int32_t t63 = 13;

    t63 = ((x297-x298)>(x299/x300));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x301 = -406005;
	volatile uint32_t x302 = 734U;
	uint64_t x303 = 7605028LLU;
	volatile int16_t x304 = INT16_MIN;
	volatile int32_t t64 = -214725637;

    t64 = ((x301-x302)>(x303/x304));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x305 = INT16_MIN;
	volatile int64_t x306 = INT64_MIN;
	int16_t x308 = INT16_MAX;

    t65 = ((x305-x306)>(x307/x308));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x309 = -1;
	volatile int8_t x310 = INT8_MIN;
	int8_t x311 = -1;
	static int32_t t66 = -186565;

    t66 = ((x309-x310)>(x311/x312));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x317 = 6;
	int16_t x318 = INT16_MAX;
	int8_t x319 = INT8_MAX;
	static int32_t t67 = 8726;

    t67 = ((x317-x318)>(x319/x320));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x322 = UINT64_MAX;
	int64_t x323 = 34326524123LL;
	static volatile int32_t t68 = 50;

    t68 = ((x321-x322)>(x323/x324));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x325 = INT16_MIN;
	uint16_t x326 = 107U;
	volatile int16_t x327 = INT16_MIN;
	int32_t x328 = INT32_MIN;
	int32_t t69 = 798;

    t69 = ((x325-x326)>(x327/x328));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x334 = INT8_MIN;
	volatile int32_t t70 = 243;

    t70 = ((x333-x334)>(x335/x336));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x337 = UINT16_MAX;
	int64_t x338 = -21307202287846LL;
	static uint8_t x339 = 46U;
	int16_t x340 = INT16_MAX;
	volatile int32_t t71 = 341690990;

    t71 = ((x337-x338)>(x339/x340));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x342 = 87U;
	int32_t x343 = INT32_MIN;
	volatile uint64_t x344 = 61LLU;
	volatile int32_t t72 = -64569050;

    t72 = ((x341-x342)>(x343/x344));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x345 = INT64_MAX;
	volatile uint16_t x346 = 1879U;
	int16_t x347 = 156;
	int32_t t73 = 96352;

    t73 = ((x345-x346)>(x347/x348));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x354 = 612517662;
	uint16_t x355 = 157U;
	static uint64_t x356 = 1039471635084866LLU;
	static int32_t t74 = -533615082;

    t74 = ((x353-x354)>(x355/x356));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x361 = INT16_MIN;
	static int8_t x362 = INT8_MIN;
	int16_t x363 = 15;
	uint8_t x364 = 1U;
	int32_t t75 = -25799;

    t75 = ((x361-x362)>(x363/x364));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x365 = 110161U;
	static int64_t x366 = -1LL;
	static int32_t x367 = INT32_MIN;
	static int8_t x368 = INT8_MAX;
	volatile int32_t t76 = 441686525;

    t76 = ((x365-x366)>(x367/x368));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x373 = -1;
	volatile uint32_t x376 = 6664U;
	volatile int32_t t77 = 0;

    t77 = ((x373-x374)>(x375/x376));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x377 = -5532;
	static volatile int8_t x378 = -1;
	static int64_t x379 = INT64_MIN;

    t78 = ((x377-x378)>(x379/x380));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x382 = 0U;
	int32_t x384 = INT32_MIN;

    t79 = ((x381-x382)>(x383/x384));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x385 = -1;
	int8_t x386 = INT8_MIN;
	volatile uint8_t x387 = UINT8_MAX;
	uint64_t x388 = 48850LLU;
	static volatile int32_t t80 = 409039;

    t80 = ((x385-x386)>(x387/x388));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x393 = INT32_MIN;
	int32_t x396 = INT32_MIN;
	int32_t t81 = 28755;

    t81 = ((x393-x394)>(x395/x396));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x397 = 56U;
	int8_t x398 = 56;
	static int64_t x399 = -4065650669712838592LL;
	static uint32_t x400 = 5179128U;
	int32_t t82 = 2793;

    t82 = ((x397-x398)>(x399/x400));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x401 = 49;
	int32_t x402 = INT32_MAX;
	uint8_t x403 = UINT8_MAX;
	volatile int64_t x404 = INT64_MIN;

    t83 = ((x401-x402)>(x403/x404));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x406 = INT8_MIN;
	uint16_t x408 = UINT16_MAX;
	int32_t t84 = -1;

    t84 = ((x405-x406)>(x407/x408));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x409 = -504;
	volatile int32_t t85 = 9333999;

    t85 = ((x409-x410)>(x411/x412));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x413 = -6;
	int16_t x415 = -1;
	volatile int32_t x416 = INT32_MAX;

    t86 = ((x413-x414)>(x415/x416));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x417 = 0U;
	int16_t x419 = INT16_MAX;
	static int8_t x420 = INT8_MAX;

    t87 = ((x417-x418)>(x419/x420));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x422 = -1;
	int32_t x423 = -2;
	int64_t x424 = -1055299707100708736LL;
	volatile int32_t t88 = -49;

    t88 = ((x421-x422)>(x423/x424));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x426 = -1;
	volatile int32_t x427 = INT32_MAX;
	uint16_t x428 = 250U;
	volatile int32_t t89 = 460;

    t89 = ((x425-x426)>(x427/x428));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x429 = 1790357865009LL;
	volatile uint16_t x430 = 599U;
	volatile int32_t x431 = INT32_MIN;
	volatile int16_t x432 = INT16_MAX;
	volatile int32_t t90 = -1;

    t90 = ((x429-x430)>(x431/x432));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x437 = 2LL;
	static uint16_t x438 = 31U;
	static uint64_t x439 = 28529233192852LLU;
	int16_t x440 = -1;
	volatile int32_t t91 = -266119;

    t91 = ((x437-x438)>(x439/x440));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x441 = 14;
	int64_t x442 = 168051978353826948LL;
	static int16_t x444 = -1;

    t92 = ((x441-x442)>(x443/x444));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int8_t x445 = INT8_MAX;
	static int32_t x446 = -1;
	static int8_t x447 = -1;
	uint16_t x448 = 19U;
	volatile int32_t t93 = -101;

    t93 = ((x445-x446)>(x447/x448));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x449 = INT32_MIN;
	int8_t x450 = INT8_MIN;
	int8_t x451 = INT8_MIN;
	uint32_t x452 = UINT32_MAX;
	static volatile int32_t t94 = 1972;

    t94 = ((x449-x450)>(x451/x452));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x453 = -8749467687534888LL;
	uint16_t x454 = 144U;
	int16_t x455 = -1;
	int32_t t95 = -252033091;

    t95 = ((x453-x454)>(x455/x456));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int32_t x457 = 377;
	int8_t x458 = 0;
	uint8_t x459 = 2U;
	volatile int32_t t96 = -14729950;

    t96 = ((x457-x458)>(x459/x460));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x465 = 5;
	volatile uint64_t x466 = 27000152040642LLU;
	int8_t x467 = 1;
	uint16_t x468 = UINT16_MAX;
	int32_t t97 = -58962742;

    t97 = ((x465-x466)>(x467/x468));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x469 = 1038927567U;
	uint64_t x470 = UINT64_MAX;
	volatile uint32_t x472 = UINT32_MAX;
	volatile int32_t t98 = -1227;

    t98 = ((x469-x470)>(x471/x472));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x473 = 2739311637LL;
	uint32_t x475 = 20319U;

    t99 = ((x473-x474)>(x475/x476));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x477 = INT16_MAX;
	uint8_t x478 = 24U;
	uint16_t x479 = 0U;
	uint32_t x480 = 7745120U;

    t100 = ((x477-x478)>(x479/x480));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x481 = 1;
	int16_t x482 = INT16_MAX;
	int64_t x483 = INT64_MIN;
	static int32_t t101 = -41571;

    t101 = ((x481-x482)>(x483/x484));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x489 = INT8_MAX;
	static volatile int16_t x491 = INT16_MAX;
	uint32_t x492 = 344U;
	int32_t t102 = 772;

    t102 = ((x489-x490)>(x491/x492));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x493 = -1;
	static int32_t x494 = 254467;
	int16_t x495 = INT16_MAX;
	int8_t x496 = INT8_MAX;
	volatile int32_t t103 = 121;

    t103 = ((x493-x494)>(x495/x496));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x497 = 3872;
	int16_t x498 = INT16_MIN;
	static uint16_t x499 = UINT16_MAX;
	volatile int16_t x500 = -3585;
	volatile int32_t t104 = -52579;

    t104 = ((x497-x498)>(x499/x500));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x501 = INT16_MIN;
	int16_t x502 = -182;
	uint64_t x503 = 32588539LLU;
	int32_t t105 = 6856;

    t105 = ((x501-x502)>(x503/x504));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x505 = INT32_MAX;
	uint32_t x506 = 278U;
	int16_t x507 = -992;
	int64_t x508 = -81915363478LL;
	volatile int32_t t106 = 9794;

    t106 = ((x505-x506)>(x507/x508));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x509 = UINT32_MAX;
	int64_t x510 = 57088165532707LL;
	int8_t x511 = 49;
	int32_t x512 = INT32_MIN;
	int32_t t107 = -3;

    t107 = ((x509-x510)>(x511/x512));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x513 = -2LL;
	int16_t x514 = INT16_MIN;
	int64_t x515 = -1260808531LL;
	int8_t x516 = 3;

    t108 = ((x513-x514)>(x515/x516));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int8_t x517 = INT8_MAX;
	volatile int8_t x518 = INT8_MIN;
	static int16_t x519 = 6;
	static uint16_t x520 = 79U;
	volatile int32_t t109 = -49;

    t109 = ((x517-x518)>(x519/x520));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint64_t x521 = UINT64_MAX;
	int64_t x522 = 456301043931504LL;
	static int16_t x523 = 90;
	volatile uint32_t x524 = UINT32_MAX;
	int32_t t110 = 488;

    t110 = ((x521-x522)>(x523/x524));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x526 = INT8_MIN;
	uint8_t x527 = UINT8_MAX;
	volatile int32_t t111 = 1;

    t111 = ((x525-x526)>(x527/x528));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x529 = INT8_MIN;
	uint32_t x530 = 21U;
	int64_t x531 = 38064376561748809LL;
	int64_t x532 = INT64_MAX;
	volatile int32_t t112 = 287;

    t112 = ((x529-x530)>(x531/x532));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x538 = 63856U;
	static volatile int32_t x539 = -1;
	uint64_t x540 = UINT64_MAX;
	int32_t t113 = 10;

    t113 = ((x537-x538)>(x539/x540));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x546 = UINT64_MAX;
	static int8_t x547 = INT8_MIN;
	int32_t t114 = -26579;

    t114 = ((x545-x546)>(x547/x548));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x549 = UINT64_MAX;
	int8_t x550 = 10;
	int8_t x551 = -1;
	int32_t x552 = INT32_MIN;
	static int32_t t115 = 2869193;

    t115 = ((x549-x550)>(x551/x552));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x553 = INT16_MIN;
	int64_t x554 = 1839481649518773LL;
	int32_t x555 = -367;
	static int64_t x556 = INT64_MIN;
	static volatile int32_t t116 = -1;

    t116 = ((x553-x554)>(x555/x556));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x557 = -28743326362LL;
	uint32_t x558 = 476472921U;
	static int64_t x559 = INT64_MAX;
	int16_t x560 = INT16_MIN;

    t117 = ((x557-x558)>(x559/x560));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x565 = INT16_MIN;
	static uint8_t x566 = UINT8_MAX;
	int32_t x567 = -775973;
	uint64_t x568 = 4995LLU;
	volatile int32_t t118 = 221652;

    t118 = ((x565-x566)>(x567/x568));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x569 = 1410U;
	int8_t x570 = INT8_MIN;
	int64_t x571 = -1LL;
	int64_t x572 = INT64_MIN;
	static int32_t t119 = -126;

    t119 = ((x569-x570)>(x571/x572));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x577 = -1;
	int16_t x578 = -1;
	volatile int8_t x579 = -1;
	static volatile int64_t x580 = INT64_MIN;
	volatile int32_t t120 = 1;

    t120 = ((x577-x578)>(x579/x580));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x581 = -1;
	int16_t x583 = INT16_MIN;
	uint16_t x584 = UINT16_MAX;
	volatile int32_t t121 = 39;

    t121 = ((x581-x582)>(x583/x584));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x593 = INT32_MAX;
	int8_t x594 = INT8_MAX;
	volatile uint64_t x595 = UINT64_MAX;
	volatile int8_t x596 = INT8_MIN;
	volatile int32_t t122 = -962416;

    t122 = ((x593-x594)>(x595/x596));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x597 = 27811;
	static int8_t x599 = INT8_MIN;
	uint32_t x600 = 55U;
	volatile int32_t t123 = -8243;

    t123 = ((x597-x598)>(x599/x600));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x601 = INT16_MAX;
	int64_t x602 = 3238109950071LL;
	int16_t x603 = -1;
	int32_t x604 = INT32_MAX;
	static volatile int32_t t124 = 1996799;

    t124 = ((x601-x602)>(x603/x604));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x605 = UINT32_MAX;
	static int8_t x608 = -2;

    t125 = ((x605-x606)>(x607/x608));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x609 = 1851306U;
	static uint16_t x610 = 1U;
	int64_t x611 = 1929123434920342078LL;
	volatile uint8_t x612 = 2U;
	int32_t t126 = -645704325;

    t126 = ((x609-x610)>(x611/x612));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x613 = -4224;
	int16_t x614 = INT16_MIN;
	uint16_t x615 = UINT16_MAX;
	uint8_t x616 = 11U;
	volatile int32_t t127 = 33701412;

    t127 = ((x613-x614)>(x615/x616));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x619 = INT8_MIN;
	volatile int16_t x620 = -13871;
	int32_t t128 = 0;

    t128 = ((x617-x618)>(x619/x620));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x621 = INT64_MIN;
	int16_t x623 = INT16_MIN;
	uint64_t x624 = 1985733075LLU;
	static volatile int32_t t129 = 1;

    t129 = ((x621-x622)>(x623/x624));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x625 = 128949375131347119LLU;
	int16_t x626 = INT16_MIN;
	int8_t x627 = 0;
	uint16_t x628 = UINT16_MAX;
	volatile int32_t t130 = -1;

    t130 = ((x625-x626)>(x627/x628));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x629 = 1U;
	int32_t x631 = INT32_MAX;
	int16_t x632 = INT16_MAX;
	volatile int32_t t131 = -82952;

    t131 = ((x629-x630)>(x631/x632));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x633 = INT32_MIN;
	int16_t x634 = INT16_MIN;
	volatile uint8_t x635 = 59U;
	volatile int32_t x636 = 13475654;

    t132 = ((x633-x634)>(x635/x636));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x638 = -1;
	int8_t x639 = INT8_MIN;
	int16_t x640 = INT16_MAX;
	int32_t t133 = -3784275;

    t133 = ((x637-x638)>(x639/x640));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x641 = 1U;
	volatile int8_t x642 = -1;
	int64_t x644 = INT64_MAX;
	static int32_t t134 = 62984;

    t134 = ((x641-x642)>(x643/x644));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x645 = 1U;
	int8_t x646 = INT8_MIN;
	volatile int32_t t135 = 81159;

    t135 = ((x645-x646)>(x647/x648));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x649 = -1;
	int16_t x650 = INT16_MAX;
	volatile uint16_t x651 = 230U;
	static int16_t x652 = -91;
	int32_t t136 = 629;

    t136 = ((x649-x650)>(x651/x652));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x653 = INT8_MIN;
	uint32_t x654 = 3593U;
	uint16_t x655 = 1U;
	static uint32_t x656 = UINT32_MAX;

    t137 = ((x653-x654)>(x655/x656));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x657 = 50U;
	int32_t x659 = INT32_MIN;
	volatile int64_t x660 = -1LL;
	static volatile int32_t t138 = -354;

    t138 = ((x657-x658)>(x659/x660));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x661 = INT64_MIN;
	static int16_t x662 = -101;
	int8_t x663 = -1;
	static int32_t x664 = INT32_MAX;
	volatile int32_t t139 = -15259;

    t139 = ((x661-x662)>(x663/x664));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x665 = -140077745829377LL;
	static uint64_t x666 = UINT64_MAX;
	int32_t x667 = INT32_MAX;
	volatile int16_t x668 = -1807;

    t140 = ((x665-x666)>(x667/x668));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x669 = 1U;
	int32_t x670 = INT32_MAX;
	int64_t x671 = -1LL;
	static int16_t x672 = 9;
	volatile int32_t t141 = 1;

    t141 = ((x669-x670)>(x671/x672));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x675 = 58765309304764040LL;
	static int16_t x676 = -1;
	static volatile int32_t t142 = -118047;

    t142 = ((x673-x674)>(x675/x676));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x677 = INT16_MAX;
	int8_t x678 = 52;
	static int64_t x680 = INT64_MIN;
	int32_t t143 = -77907683;

    t143 = ((x677-x678)>(x679/x680));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x681 = 201644305814620LLU;
	int16_t x682 = 470;
	uint64_t x683 = 26774867LLU;
	uint16_t x684 = 27102U;
	volatile int32_t t144 = 944;

    t144 = ((x681-x682)>(x683/x684));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x685 = 30;
	uint16_t x686 = 627U;
	volatile int16_t x687 = INT16_MIN;
	static int64_t x688 = -1LL;
	volatile int32_t t145 = -15458216;

    t145 = ((x685-x686)>(x687/x688));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x689 = INT8_MIN;
	uint64_t x690 = 117047909536323LLU;
	static volatile int64_t x691 = -1029521239523LL;
	uint16_t x692 = 3U;
	volatile int32_t t146 = -15;

    t146 = ((x689-x690)>(x691/x692));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x694 = INT16_MIN;
	static uint16_t x695 = UINT16_MAX;

    t147 = ((x693-x694)>(x695/x696));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint64_t x698 = 46700404LLU;
	int64_t x700 = -20419647154LL;
	int32_t t148 = -1;

    t148 = ((x697-x698)>(x699/x700));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x701 = -1;
	static int8_t x704 = INT8_MIN;
	volatile int32_t t149 = -205114307;

    t149 = ((x701-x702)>(x703/x704));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x706 = INT32_MIN;
	volatile uint8_t x707 = UINT8_MAX;
	int32_t x708 = -12;
	int32_t t150 = 86829765;

    t150 = ((x705-x706)>(x707/x708));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x709 = UINT16_MAX;
	static uint16_t x710 = 459U;
	int8_t x712 = 11;

    t151 = ((x709-x710)>(x711/x712));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x713 = 418222261LLU;
	int16_t x714 = INT16_MIN;
	int8_t x715 = INT8_MIN;
	static volatile int8_t x716 = INT8_MIN;
	int32_t t152 = -9;

    t152 = ((x713-x714)>(x715/x716));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x717 = INT16_MIN;
	int16_t x718 = -1;
	int8_t x720 = -1;
	volatile int32_t t153 = -45056179;

    t153 = ((x717-x718)>(x719/x720));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x721 = INT32_MAX;
	uint64_t x722 = UINT64_MAX;
	static int16_t x724 = INT16_MIN;

    t154 = ((x721-x722)>(x723/x724));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x725 = 30U;
	int16_t x726 = -1;
	int8_t x728 = INT8_MIN;
	int32_t t155 = 29350240;

    t155 = ((x725-x726)>(x727/x728));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x729 = 9;
	volatile int8_t x730 = INT8_MIN;
	uint64_t x731 = UINT64_MAX;
	static volatile int32_t t156 = -21409759;

    t156 = ((x729-x730)>(x731/x732));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x733 = -1;
	int8_t x734 = INT8_MIN;
	int16_t x735 = 2;
	uint16_t x736 = 1U;

    t157 = ((x733-x734)>(x735/x736));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x737 = 2617;
	volatile uint32_t x738 = 1795056U;
	static uint8_t x740 = 7U;

    t158 = ((x737-x738)>(x739/x740));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x741 = UINT64_MAX;
	uint64_t x742 = 42748348582732128LLU;
	static uint32_t x744 = UINT32_MAX;
	static int32_t t159 = -1639900;

    t159 = ((x741-x742)>(x743/x744));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x745 = INT8_MIN;
	volatile uint32_t x746 = 31146U;
	static int64_t x747 = -6319056752837352LL;
	uint16_t x748 = UINT16_MAX;
	volatile int32_t t160 = -2;

    t160 = ((x745-x746)>(x747/x748));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x753 = -12LL;
	volatile uint8_t x754 = UINT8_MAX;
	volatile int8_t x755 = INT8_MAX;
	static int16_t x756 = INT16_MIN;
	static int32_t t161 = -361579;

    t161 = ((x753-x754)>(x755/x756));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint8_t x757 = 4U;
	volatile uint8_t x758 = 49U;
	int64_t x759 = -28014941843159LL;
	static volatile int32_t x760 = INT32_MIN;
	static int32_t t162 = 220546607;

    t162 = ((x757-x758)>(x759/x760));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x761 = 5;
	uint32_t x762 = 813U;
	int16_t x763 = INT16_MIN;
	static int32_t t163 = 2;

    t163 = ((x761-x762)>(x763/x764));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x766 = INT16_MIN;
	int32_t x767 = INT32_MAX;
	volatile int32_t t164 = -3246291;

    t164 = ((x765-x766)>(x767/x768));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x769 = UINT64_MAX;
	int32_t x770 = 352;
	volatile int16_t x771 = INT16_MIN;
	static volatile int16_t x772 = INT16_MAX;
	volatile int32_t t165 = 22271691;

    t165 = ((x769-x770)>(x771/x772));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x774 = -70;
	int16_t x775 = INT16_MIN;
	int64_t x776 = -1LL;

    t166 = ((x773-x774)>(x775/x776));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x778 = 7U;
	int32_t x779 = INT32_MIN;
	int32_t t167 = -2209690;

    t167 = ((x777-x778)>(x779/x780));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x781 = -1;
	uint32_t x783 = 23U;
	static int8_t x784 = INT8_MIN;
	int32_t t168 = 0;

    t168 = ((x781-x782)>(x783/x784));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x786 = 12193LLU;
	uint16_t x788 = UINT16_MAX;
	volatile int32_t t169 = -16465785;

    t169 = ((x785-x786)>(x787/x788));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x789 = -474658390608587LL;
	int32_t x790 = INT32_MIN;
	int16_t x792 = INT16_MAX;

    t170 = ((x789-x790)>(x791/x792));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x793 = 139;
	uint8_t x794 = 0U;
	uint64_t x795 = 177774689LLU;
	uint64_t x796 = UINT64_MAX;

    t171 = ((x793-x794)>(x795/x796));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x797 = -12581430LL;
	static int8_t x798 = 0;
	int16_t x799 = INT16_MIN;

    t172 = ((x797-x798)>(x799/x800));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x806 = 270;
	int32_t x807 = INT32_MAX;
	int32_t t173 = -63111278;

    t173 = ((x805-x806)>(x807/x808));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x814 = 8436553022714LLU;
	volatile uint32_t x815 = UINT32_MAX;
	static uint64_t x816 = UINT64_MAX;
	static volatile int32_t t174 = -402;

    t174 = ((x813-x814)>(x815/x816));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x817 = -1;
	volatile uint64_t x819 = UINT64_MAX;
	volatile int32_t t175 = -263;

    t175 = ((x817-x818)>(x819/x820));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x821 = 8U;
	uint16_t x822 = 1420U;
	static int8_t x823 = INT8_MIN;
	volatile uint32_t x824 = 3077928U;

    t176 = ((x821-x822)>(x823/x824));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x825 = UINT8_MAX;
	int64_t x828 = -367291113453746099LL;
	volatile int32_t t177 = 1954708;

    t177 = ((x825-x826)>(x827/x828));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x829 = INT8_MIN;
	int32_t x831 = -3037072;
	int8_t x832 = INT8_MAX;
	volatile int32_t t178 = -181;

    t178 = ((x829-x830)>(x831/x832));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x833 = 83449762268264721LLU;
	static int64_t x835 = -6LL;
	static int16_t x836 = -1;
	int32_t t179 = -761;

    t179 = ((x833-x834)>(x835/x836));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x838 = INT8_MIN;
	volatile uint16_t x839 = 12786U;
	uint8_t x840 = UINT8_MAX;

    t180 = ((x837-x838)>(x839/x840));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x841 = INT8_MIN;
	int64_t x842 = 444050127974107074LL;
	int16_t x843 = INT16_MIN;
	int64_t x844 = INT64_MAX;
	int32_t t181 = 1973217;

    t181 = ((x841-x842)>(x843/x844));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x846 = INT8_MAX;
	int64_t x847 = INT64_MIN;
	volatile int32_t t182 = -80651;

    t182 = ((x845-x846)>(x847/x848));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x849 = 202;
	volatile int32_t t183 = 1374839;

    t183 = ((x849-x850)>(x851/x852));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x854 = 11616844;
	static volatile uint8_t x855 = 3U;
	volatile int8_t x856 = INT8_MIN;
	static volatile int32_t t184 = -43981610;

    t184 = ((x853-x854)>(x855/x856));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x863 = INT64_MIN;
	int32_t t185 = -199533;

    t185 = ((x861-x862)>(x863/x864));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x865 = 40U;
	int8_t x867 = -1;
	volatile int64_t x868 = INT64_MAX;
	volatile int32_t t186 = 12;

    t186 = ((x865-x866)>(x867/x868));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x870 = 64794457LLU;
	int16_t x871 = INT16_MIN;
	int8_t x872 = INT8_MIN;
	volatile int32_t t187 = -4909;

    t187 = ((x869-x870)>(x871/x872));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x873 = 6043015403LL;
	int32_t x875 = INT32_MIN;
	int64_t x876 = INT64_MAX;
	int32_t t188 = -84380657;

    t188 = ((x873-x874)>(x875/x876));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x881 = 374496LLU;
	int64_t x882 = -21584418213LL;
	int8_t x883 = INT8_MIN;
	int32_t t189 = 4949390;

    t189 = ((x881-x882)>(x883/x884));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x885 = -187269;
	int32_t x886 = INT32_MIN;
	static int64_t x887 = 9593136882LL;
	int16_t x888 = INT16_MIN;
	volatile int32_t t190 = -676134;

    t190 = ((x885-x886)>(x887/x888));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x893 = INT64_MIN;
	volatile int32_t x894 = -1;
	static volatile int32_t x895 = -18;
	int64_t x896 = INT64_MAX;
	volatile int32_t t191 = -2;

    t191 = ((x893-x894)>(x895/x896));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x901 = UINT64_MAX;
	static int32_t x902 = 128812;
	int8_t x903 = INT8_MAX;
	int16_t x904 = 9982;
	volatile int32_t t192 = -95325;

    t192 = ((x901-x902)>(x903/x904));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x906 = -1;
	int64_t x907 = INT64_MAX;
	int32_t t193 = -1;

    t193 = ((x905-x906)>(x907/x908));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x909 = 820834416U;
	static volatile uint64_t x910 = UINT64_MAX;
	int32_t x911 = -1;
	int32_t x912 = INT32_MIN;
	int32_t t194 = -673;

    t194 = ((x909-x910)>(x911/x912));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x913 = 5;
	static int16_t x914 = INT16_MIN;
	static volatile uint16_t x915 = 0U;
	uint16_t x916 = UINT16_MAX;
	int32_t t195 = -3513861;

    t195 = ((x913-x914)>(x915/x916));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x922 = 10220U;
	static uint64_t x924 = UINT64_MAX;
	volatile int32_t t196 = -51533265;

    t196 = ((x921-x922)>(x923/x924));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x925 = INT64_MIN;
	static int64_t x926 = INT64_MIN;
	volatile uint8_t x927 = UINT8_MAX;
	uint8_t x928 = UINT8_MAX;
	static volatile int32_t t197 = 322321;

    t197 = ((x925-x926)>(x927/x928));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x929 = 21U;
	static volatile uint8_t x931 = 0U;
	int64_t x932 = -2718LL;
	int32_t t198 = -798;

    t198 = ((x929-x930)>(x931/x932));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x933 = 0U;
	uint16_t x934 = UINT16_MAX;
	uint32_t x935 = 0U;
	int16_t x936 = 275;
	volatile int32_t t199 = -1;

    t199 = ((x933-x934)>(x935/x936));

    if (t199 != 1) { NG(); } else { ; }
	
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

