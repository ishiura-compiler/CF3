
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

int32_t x11 = INT32_MAX;
uint16_t x19 = 184U;
static volatile int32_t x20 = -1;
static uint16_t x23 = 12777U;
int16_t x40 = -1;
static volatile uint64_t x49 = UINT64_MAX;
volatile int64_t x55 = -7321874LL;
int16_t x60 = INT16_MIN;
volatile int64_t x67 = INT64_MIN;
volatile int8_t x77 = INT8_MAX;
int32_t x78 = 345379836;
volatile uint64_t x85 = 52344563867583601LLU;
static volatile int64_t t12 = INT64_MIN;
int64_t x98 = 24629798816857355LL;
int64_t x100 = -1LL;
volatile int32_t t14 = 0;
static uint16_t x105 = 1099U;
int16_t x110 = INT16_MIN;
volatile uint64_t x112 = 31LLU;
volatile uint64_t t16 = 942LLU;
volatile int64_t x133 = 16518240960684173LL;
int16_t x135 = INT16_MIN;
volatile uint32_t t21 = 71833983U;
int64_t x146 = INT64_MAX;
volatile int32_t t22 = 15326;
uint16_t x149 = UINT16_MAX;
static int8_t x153 = 28;
uint8_t x156 = UINT8_MAX;
int16_t x174 = -155;
int16_t x175 = -1;
uint64_t x177 = UINT64_MAX;
int16_t x178 = INT16_MAX;
static volatile int32_t x180 = INT32_MIN;
uint64_t t29 = 8186780333571LLU;
volatile uint16_t x188 = 3208U;
static uint32_t t33 = 201758U;
int16_t x211 = -1;
static int16_t x216 = INT16_MAX;
int8_t x231 = -21;
int32_t x238 = 5080525;
int64_t t39 = 271386395165928LL;
int16_t x242 = -1;
uint8_t x243 = UINT8_MAX;
int32_t x258 = INT32_MIN;
static volatile int64_t x260 = -1LL;
volatile int64_t x263 = -4081975688075LL;
static int8_t x267 = -1;
uint8_t x274 = 0U;
static int32_t x284 = -9062668;
volatile int16_t x294 = INT16_MIN;
int64_t x297 = 21LL;
int16_t x300 = INT16_MIN;
int32_t x304 = -1;
int32_t x316 = -1;
volatile uint32_t t53 = 24U;
volatile uint8_t x317 = 52U;
uint16_t x318 = 197U;
int8_t x320 = -5;
int8_t x321 = 1;
volatile uint64_t t55 = 641120687LLU;
static int16_t x337 = INT16_MAX;
static uint32_t x342 = UINT32_MAX;
int16_t x343 = INT16_MIN;
uint32_t t58 = 4U;
int16_t x360 = -1;
int8_t x362 = 1;
int32_t t60 = 9569853;
int32_t x400 = INT32_MAX;
uint8_t x418 = 1U;
int64_t x426 = 1657811279466863LL;
static volatile uint8_t x428 = UINT8_MAX;
static volatile uint32_t x441 = 31186U;
static int32_t x443 = INT32_MAX;
uint32_t x444 = 2283U;
uint8_t x451 = UINT8_MAX;
volatile uint32_t x452 = 0U;
volatile int32_t t69 = -144353618;
int64_t x462 = -57494593LL;
static volatile int16_t x464 = 210;
uint16_t x471 = 751U;
int8_t x482 = -1;
int32_t t75 = 0;
volatile int64_t x498 = -20371034924098755LL;
static int8_t x502 = -7;
volatile int8_t x504 = -6;
int32_t x517 = 61;
static uint64_t x521 = 29844124320991LLU;
volatile int8_t x523 = INT8_MIN;
volatile int64_t x528 = INT64_MIN;
int64_t x543 = INT64_MAX;
int16_t x559 = INT16_MIN;
int16_t x560 = -1;
static int8_t x579 = 1;
int64_t t86 = -34161423LL;
int16_t x593 = 30;
uint64_t x594 = 8760632LLU;
static uint16_t x603 = 2U;
static uint64_t x605 = UINT64_MAX;
static volatile uint64_t t91 = 341766LLU;
uint8_t x609 = UINT8_MAX;
volatile int32_t t92 = 2784;
int8_t x616 = INT8_MIN;
volatile uint16_t x621 = 2U;
int64_t x624 = -1LL;
volatile int64_t t95 = -435834190507LL;
static volatile uint64_t t97 = 12257156514LLU;
int32_t x672 = INT32_MIN;
int32_t t100 = INT32_MIN;
uint64_t t101 = 2462512780LLU;
static int32_t x688 = -1;
volatile uint64_t t103 = 361LLU;
uint32_t x691 = 951347U;
int32_t t104 = 85;
volatile uint16_t x693 = 1U;
int16_t x710 = INT16_MIN;
uint64_t x713 = 36770LLU;
uint32_t x717 = 0U;
int32_t x719 = INT32_MAX;
static volatile int64_t x720 = -3659LL;
volatile int16_t x751 = INT16_MAX;
volatile uint64_t t114 = 3LLU;
static volatile int64_t x771 = -382690335LL;
uint8_t x782 = 1U;
volatile uint32_t x783 = UINT32_MAX;
volatile int16_t x787 = -1;
static int8_t x820 = INT8_MIN;
uint32_t t122 = 2U;
int64_t x834 = -1LL;
static int64_t x835 = INT64_MIN;
int32_t t123 = 27;
volatile uint32_t t124 = 39087113U;
static int64_t t125 = 162043416LL;
volatile int16_t x852 = INT16_MIN;
int32_t x858 = -1;
int64_t x859 = -682733759104LL;
volatile uint32_t x862 = 3U;
volatile uint8_t x865 = 1U;
static volatile int64_t t130 = -2216242LL;
static uint64_t t131 = 174546044LLU;
int64_t x886 = INT64_MIN;
static int64_t x891 = INT64_MAX;
int32_t x924 = INT32_MIN;
uint32_t x926 = 112224U;
static uint16_t x927 = 578U;
volatile int64_t x928 = INT64_MAX;
static int32_t t142 = -7473;
uint8_t x948 = UINT8_MAX;
int64_t x966 = INT64_MIN;
volatile uint32_t x998 = UINT32_MAX;
int8_t x1000 = INT8_MAX;
volatile int32_t t150 = 55603;
int8_t x1040 = INT8_MAX;
volatile uint16_t x1049 = 2040U;
static uint64_t x1057 = 23019080LLU;
int64_t x1071 = INT64_MIN;
uint8_t x1075 = UINT8_MAX;
uint8_t x1085 = 33U;
int8_t x1087 = 9;
static uint16_t x1091 = 27202U;
static uint32_t x1097 = 215844314U;
uint8_t x1098 = 2U;
uint32_t t164 = 303597U;
volatile int32_t x1103 = 1028397;
int16_t x1104 = -63;
int8_t x1108 = -1;
volatile int32_t t166 = 242833122;
uint16_t x1129 = 5901U;
static volatile int64_t x1134 = 14511278601736LL;
volatile int16_t x1157 = INT16_MAX;
static int8_t x1158 = INT8_MAX;
int8_t x1171 = INT8_MIN;
static int32_t t175 = 0;
static uint8_t x1177 = 58U;
uint8_t x1178 = 29U;
int16_t x1180 = -1;
uint8_t x1185 = 1U;
int16_t x1195 = 0;
static int16_t x1208 = -1;
int32_t x1214 = INT32_MIN;
static volatile int32_t t183 = -20096;
uint8_t x1221 = 1U;
int32_t x1224 = -59840;
uint32_t x1226 = 1018403U;
static volatile uint16_t x1229 = UINT16_MAX;
int64_t x1232 = -1LL;
uint8_t x1249 = UINT8_MAX;
uint64_t t190 = 4LLU;
uint64_t x1259 = UINT64_MAX;
static uint8_t x1273 = 24U;
int64_t x1275 = INT64_MAX;
volatile uint32_t t193 = 3464U;
static int64_t x1282 = -1426571LL;
static int64_t x1283 = INT64_MAX;
static int64_t t197 = -4507518115192LL;
volatile int32_t x1297 = 144;
uint32_t x1311 = 9262U;


void f0(void) {
    	uint32_t x9 = 1911070U;
	uint16_t x10 = 5U;
	static int64_t x12 = -3401405LL;
	volatile int64_t t0 = -550120734LL;

    t0 = ((x9<<(x10<=x11))^x12);

    if (t0 != -636033LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x17 = 3870134;
	int32_t x18 = INT32_MIN;
	int32_t t1 = 48;

    t1 = ((x17<<(x18<=x19))^x20);

    if (t1 != -7740269) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x21 = INT8_MAX;
	int8_t x22 = -1;
	static uint32_t x24 = 1162555411U;
	static volatile uint32_t t2 = 7656664U;

    t2 = ((x21<<(x22<=x23))^x24);

    if (t2 != 1162555629U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x37 = 1U;
	volatile int16_t x38 = -1;
	int64_t x39 = INT64_MAX;
	volatile int32_t t3 = 21829;

    t3 = ((x37<<(x38<=x39))^x40);

    if (t3 != -3) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x41 = 3336611;
	int64_t x42 = 29967LL;
	int8_t x43 = -1;
	int64_t x44 = INT64_MIN;
	int64_t t4 = 234826LL;

    t4 = ((x41<<(x42<=x43))^x44);

    if (t4 != -9223372036851439197LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x50 = -301217681465300754LL;
	uint8_t x51 = 1U;
	volatile int16_t x52 = INT16_MIN;
	volatile uint64_t t5 = 5502745341988375348LLU;

    t5 = ((x49<<(x50<=x51))^x52);

    if (t5 != 32766LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x53 = 0U;
	volatile int64_t x54 = -1LL;
	static volatile int8_t x56 = -1;
	int32_t t6 = -49;

    t6 = ((x53<<(x54<=x55))^x56);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x57 = 59LLU;
	volatile int16_t x58 = INT16_MAX;
	uint64_t x59 = 1611854LLU;
	uint64_t t7 = 3634444378694249407LLU;

    t7 = ((x57<<(x58<=x59))^x60);

    if (t7 != 18446744073709518966LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x65 = INT32_MAX;
	volatile int8_t x66 = INT8_MAX;
	volatile int16_t x68 = INT16_MAX;
	volatile int32_t t8 = -17087913;

    t8 = ((x65<<(x66<=x67))^x68);

    if (t8 != 2147450880) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x73 = 26129U;
	uint8_t x74 = UINT8_MAX;
	int16_t x75 = 0;
	int64_t x76 = INT64_MAX;
	volatile int64_t t9 = -5167603061709LL;

    t9 = ((x73<<(x74<=x75))^x76);

    if (t9 != 9223372036854749678LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x79 = 830645575556233800LL;
	uint64_t x80 = 15016LLU;
	static volatile uint64_t t10 = 7179383180398LLU;

    t10 = ((x77<<(x78<=x79))^x80);

    if (t10 != 14934LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x86 = 2051556039149LLU;
	static volatile int32_t x87 = 12;
	int32_t x88 = 91553;
	static uint64_t t11 = 2699435LLU;

    t11 = ((x85<<(x86<=x87))^x88);

    if (t11 != 52344563867673040LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x93 = INT64_MAX;
	uint16_t x94 = 1U;
	static int32_t x95 = INT32_MIN;
	volatile int32_t x96 = -1;

    t12 = ((x93<<(x94<=x95))^x96);

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x97 = UINT64_MAX;
	volatile int64_t x99 = INT64_MIN;
	uint64_t t13 = 17196370079749LLU;

    t13 = ((x97<<(x98<=x99))^x100);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x101 = INT8_MAX;
	int16_t x102 = INT16_MIN;
	int64_t x103 = INT64_MIN;
	int8_t x104 = INT8_MIN;

    t14 = ((x101<<(x102<=x103))^x104);

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x106 = 659266U;
	static int16_t x107 = INT16_MAX;
	int32_t x108 = -42709598;
	volatile int32_t t15 = -1;

    t15 = ((x105<<(x106<=x107))^x108);

    if (t15 != -42710551) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x109 = 2U;
	int16_t x111 = -5603;

    t16 = ((x109<<(x110<=x111))^x112);

    if (t16 != 27LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x125 = 4U;
	int8_t x126 = -1;
	uint8_t x127 = 32U;
	static int16_t x128 = INT16_MIN;
	int32_t t17 = 38813709;

    t17 = ((x125<<(x126<=x127))^x128);

    if (t17 != -32760) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x129 = 7U;
	int16_t x130 = -1;
	uint16_t x131 = 1127U;
	int32_t x132 = INT32_MIN;
	volatile int32_t t18 = 846633084;

    t18 = ((x129<<(x130<=x131))^x132);

    if (t18 != -2147483634) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x134 = 1589575390487LLU;
	int8_t x136 = -1;
	static int64_t t19 = -7225010829788366LL;

    t19 = ((x133<<(x134<=x135))^x136);

    if (t19 != -33036481921368347LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x137 = 14;
	volatile uint64_t x138 = 2059671LLU;
	uint32_t x139 = UINT32_MAX;
	volatile uint16_t x140 = 50U;
	volatile int32_t t20 = 1097354;

    t20 = ((x137<<(x138<=x139))^x140);

    if (t20 != 46) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x141 = 98U;
	volatile int64_t x142 = 3242138LL;
	uint32_t x143 = 135U;
	static int8_t x144 = INT8_MIN;

    t21 = ((x141<<(x142<=x143))^x144);

    if (t21 != 4294967266U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x145 = 3495U;
	int64_t x147 = -1LL;
	volatile int32_t x148 = INT32_MAX;

    t22 = ((x145<<(x146<=x147))^x148);

    if (t22 != 2147480152) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x150 = -37717LL;
	uint64_t x151 = 8LLU;
	volatile int32_t x152 = -57000;
	int32_t t23 = 14;

    t23 = ((x149<<(x150<=x151))^x152);

    if (t23 != -8537) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x154 = UINT16_MAX;
	static int8_t x155 = -1;
	static int32_t t24 = -5791;

    t24 = ((x153<<(x154<=x155))^x156);

    if (t24 != 227) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x157 = 997U;
	static int32_t x158 = INT32_MIN;
	volatile int16_t x159 = 14;
	static int8_t x160 = INT8_MAX;
	volatile int32_t t25 = -283;

    t25 = ((x157<<(x158<=x159))^x160);

    if (t25 != 1973) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x161 = UINT8_MAX;
	int32_t x162 = INT32_MIN;
	volatile uint32_t x163 = UINT32_MAX;
	static int64_t x164 = 0LL;
	int64_t t26 = -3380514LL;

    t26 = ((x161<<(x162<=x163))^x164);

    if (t26 != 510LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x169 = 288286262U;
	int64_t x170 = INT64_MIN;
	volatile int16_t x171 = INT16_MIN;
	int16_t x172 = -1;
	static volatile uint32_t t27 = 1040U;

    t27 = ((x169<<(x170<=x171))^x172);

    if (t27 != 3718394771U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x173 = 4702LLU;
	uint64_t x176 = UINT64_MAX;
	uint64_t t28 = 2067LLU;

    t28 = ((x173<<(x174<=x175))^x176);

    if (t28 != 18446744073709542211LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x179 = INT8_MIN;

    t29 = ((x177<<(x178<=x179))^x180);

    if (t29 != 2147483647LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x181 = UINT16_MAX;
	static uint64_t x182 = UINT64_MAX;
	static volatile uint16_t x183 = 2U;
	int32_t x184 = 1;
	volatile int32_t t30 = -24561934;

    t30 = ((x181<<(x182<=x183))^x184);

    if (t30 != 65534) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x185 = 18U;
	int8_t x186 = INT8_MIN;
	volatile int64_t x187 = 1LL;
	int32_t t31 = 7791218;

    t31 = ((x185<<(x186<=x187))^x188);

    if (t31 != 3244) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x193 = 23277428U;
	uint32_t x194 = UINT32_MAX;
	uint32_t x195 = 1287253U;
	static int8_t x196 = INT8_MIN;
	volatile uint32_t t32 = 242635744U;

    t32 = ((x193<<(x194<=x195))^x196);

    if (t32 != 4271689972U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x197 = 11346916U;
	int32_t x198 = -31881;
	int16_t x199 = INT16_MIN;
	uint32_t x200 = UINT32_MAX;

    t33 = ((x197<<(x198<=x199))^x200);

    if (t33 != 4283620379U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x209 = UINT16_MAX;
	int16_t x210 = -2;
	int16_t x212 = -8077;
	static int32_t t34 = -4;

    t34 = ((x209<<(x210<=x211))^x212);

    if (t34 != -122995) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x213 = 0;
	int32_t x214 = -7;
	int8_t x215 = -1;
	volatile int32_t t35 = -2;

    t35 = ((x213<<(x214<=x215))^x216);

    if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x221 = 3U;
	volatile int64_t x222 = INT64_MIN;
	uint32_t x223 = UINT32_MAX;
	int8_t x224 = INT8_MIN;
	static int32_t t36 = 546867;

    t36 = ((x221<<(x222<=x223))^x224);

    if (t36 != -122) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x225 = UINT8_MAX;
	uint64_t x226 = 3LLU;
	uint64_t x227 = UINT64_MAX;
	int64_t x228 = INT64_MAX;
	int64_t t37 = -7864205962614608LL;

    t37 = ((x225<<(x226<=x227))^x228);

    if (t37 != 9223372036854775297LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x229 = 288;
	int8_t x230 = -1;
	static int32_t x232 = 49525714;
	volatile int32_t t38 = -9049;

    t38 = ((x229<<(x230<=x231))^x232);

    if (t38 != 49525490) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x237 = INT64_MAX;
	int32_t x239 = INT32_MIN;
	uint16_t x240 = UINT16_MAX;

    t39 = ((x237<<(x238<=x239))^x240);

    if (t39 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x241 = UINT64_MAX;
	int64_t x244 = -18LL;
	volatile uint64_t t40 = 985648762224354LLU;

    t40 = ((x241<<(x242<=x243))^x244);

    if (t40 != 16LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x257 = UINT8_MAX;
	static int8_t x259 = INT8_MIN;
	volatile int64_t t41 = 15446463982581483LL;

    t41 = ((x257<<(x258<=x259))^x260);

    if (t41 != -511LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x261 = INT16_MAX;
	volatile int16_t x262 = INT16_MAX;
	int64_t x264 = INT64_MIN;
	static int64_t t42 = 284089443039LL;

    t42 = ((x261<<(x262<=x263))^x264);

    if (t42 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x265 = 59U;
	int64_t x266 = -23904413LL;
	int16_t x268 = 747;
	volatile int32_t t43 = 3017;

    t43 = ((x265<<(x266<=x267))^x268);

    if (t43 != 669) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x269 = 36905634LLU;
	uint64_t x270 = 560628215550840345LLU;
	int8_t x271 = 4;
	static int8_t x272 = INT8_MIN;
	volatile uint64_t t44 = 2891806187931LLU;

    t44 = ((x269<<(x270<=x271))^x272);

    if (t44 != 18446744073672645922LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x273 = UINT8_MAX;
	int16_t x275 = -43;
	int32_t x276 = INT32_MIN;
	int32_t t45 = 16;

    t45 = ((x273<<(x274<=x275))^x276);

    if (t45 != -2147483393) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x281 = 6U;
	volatile int8_t x282 = -2;
	volatile int16_t x283 = INT16_MIN;
	volatile int32_t t46 = 44;

    t46 = ((x281<<(x282<=x283))^x284);

    if (t46 != -9062670) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x285 = UINT16_MAX;
	volatile uint32_t x286 = 404U;
	static uint16_t x287 = 8U;
	static int64_t x288 = INT64_MIN;
	int64_t t47 = 10LL;

    t47 = ((x285<<(x286<=x287))^x288);

    if (t47 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x289 = 2U;
	uint64_t x290 = 906LLU;
	int64_t x291 = INT64_MIN;
	uint16_t x292 = 18521U;
	int32_t t48 = -13;

    t48 = ((x289<<(x290<=x291))^x292);

    if (t48 != 18525) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x293 = 1U;
	int64_t x295 = 39031LL;
	int32_t x296 = 2463;
	volatile int32_t t49 = -2875;

    t49 = ((x293<<(x294<=x295))^x296);

    if (t49 != 2461) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x298 = INT8_MIN;
	int32_t x299 = -1;
	static int64_t t50 = 369479575206641789LL;

    t50 = ((x297<<(x298<=x299))^x300);

    if (t50 != -32726LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x301 = 7121;
	volatile uint8_t x302 = 14U;
	uint32_t x303 = 1391317U;
	volatile int32_t t51 = 1506555;

    t51 = ((x301<<(x302<=x303))^x304);

    if (t51 != -14243) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x309 = 2022650LL;
	int32_t x310 = -1;
	uint8_t x311 = 79U;
	volatile int32_t x312 = INT32_MIN;
	int64_t t52 = 108LL;

    t52 = ((x309<<(x310<=x311))^x312);

    if (t52 != -2143438348LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x313 = UINT32_MAX;
	uint16_t x314 = UINT16_MAX;
	uint16_t x315 = UINT16_MAX;

    t53 = ((x313<<(x314<=x315))^x316);

    if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x319 = INT8_MAX;
	volatile int32_t t54 = 3968427;

    t54 = ((x317<<(x318<=x319))^x320);

    if (t54 != -49) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x322 = 481423;
	static int8_t x323 = 0;
	uint64_t x324 = UINT64_MAX;

    t55 = ((x321<<(x322<=x323))^x324);

    if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x329 = 4732U;
	int16_t x330 = -1;
	uint8_t x331 = UINT8_MAX;
	int16_t x332 = 32;
	uint32_t t56 = 54080581U;

    t56 = ((x329<<(x330<=x331))^x332);

    if (t56 != 9432U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x338 = -5004427;
	uint16_t x339 = 16U;
	int8_t x340 = 26;
	volatile int32_t t57 = 8558;

    t57 = ((x337<<(x338<=x339))^x340);

    if (t57 != 65508) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x341 = 142240U;
	uint8_t x344 = 2U;

    t58 = ((x341<<(x342<=x343))^x344);

    if (t58 != 142242U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x357 = 7U;
	int64_t x358 = INT64_MIN;
	static volatile int32_t x359 = INT32_MAX;
	int32_t t59 = 64;

    t59 = ((x357<<(x358<=x359))^x360);

    if (t59 != -15) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x361 = 21;
	int16_t x363 = -862;
	int32_t x364 = INT32_MAX;

    t60 = ((x361<<(x362<=x363))^x364);

    if (t60 != 2147483626) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x377 = 7U;
	static int8_t x378 = INT8_MAX;
	uint32_t x379 = UINT32_MAX;
	int64_t x380 = INT64_MIN;
	int64_t t61 = -1276491LL;

    t61 = ((x377<<(x378<=x379))^x380);

    if (t61 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x389 = 25LLU;
	uint32_t x390 = 12U;
	uint64_t x391 = UINT64_MAX;
	uint8_t x392 = 118U;
	volatile uint64_t t62 = 18LLU;

    t62 = ((x389<<(x390<=x391))^x392);

    if (t62 != 68LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x393 = 12180357644876LLU;
	static int8_t x394 = -1;
	static int32_t x395 = INT32_MAX;
	int8_t x396 = INT8_MIN;
	static volatile uint64_t t63 = 3LLU;

    t63 = ((x393<<(x394<=x395))^x396);

    if (t63 != 18446719712994261784LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x397 = 474387U;
	static uint16_t x398 = 25443U;
	volatile int8_t x399 = -2;
	uint32_t t64 = 454057833U;

    t64 = ((x397<<(x398<=x399))^x400);

    if (t64 != 2147009260U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x417 = 196793U;
	int64_t x419 = INT64_MIN;
	static volatile int8_t x420 = INT8_MIN;
	static volatile uint32_t t65 = 94528U;

    t65 = ((x417<<(x418<=x419))^x420);

    if (t65 != 4294770489U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x425 = 1097555756890LLU;
	uint32_t x427 = UINT32_MAX;
	uint64_t t66 = 173661008113LLU;

    t66 = ((x425<<(x426<=x427))^x428);

    if (t66 != 1097555756965LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x442 = UINT8_MAX;
	volatile uint32_t t67 = 927194U;

    t67 = ((x441<<(x442<=x443))^x444);

    if (t67 != 64335U) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x449 = 297U;
	int64_t x450 = INT64_MIN;
	volatile uint32_t t68 = 1274567226U;

    t68 = ((x449<<(x450<=x451))^x452);

    if (t68 != 594U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x457 = UINT8_MAX;
	int32_t x458 = INT32_MIN;
	static int64_t x459 = INT64_MIN;
	volatile int16_t x460 = INT16_MIN;

    t69 = ((x457<<(x458<=x459))^x460);

    if (t69 != -32513) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x461 = 11;
	volatile int64_t x463 = 1271034LL;
	static volatile int32_t t70 = -358305;

    t70 = ((x461<<(x462<=x463))^x464);

    if (t70 != 196) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x469 = 0U;
	static uint8_t x470 = UINT8_MAX;
	int8_t x472 = -1;
	volatile int32_t t71 = -6203;

    t71 = ((x469<<(x470<=x471))^x472);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x477 = 0;
	uint8_t x478 = 28U;
	static uint16_t x479 = UINT16_MAX;
	uint16_t x480 = UINT16_MAX;
	volatile int32_t t72 = 1548007;

    t72 = ((x477<<(x478<=x479))^x480);

    if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x481 = UINT64_MAX;
	int64_t x483 = INT64_MIN;
	static int32_t x484 = INT32_MIN;
	volatile uint64_t t73 = 1887280554817LLU;

    t73 = ((x481<<(x482<=x483))^x484);

    if (t73 != 2147483647LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x485 = 201;
	int32_t x486 = INT32_MIN;
	int64_t x487 = 61621950800LL;
	static int8_t x488 = INT8_MIN;
	int32_t t74 = -94;

    t74 = ((x485<<(x486<=x487))^x488);

    if (t74 != -494) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x493 = 857U;
	int8_t x494 = INT8_MIN;
	static int32_t x495 = INT32_MIN;
	int16_t x496 = 5;

    t75 = ((x493<<(x494<=x495))^x496);

    if (t75 != 860) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x497 = INT16_MAX;
	int64_t x499 = 2LL;
	uint64_t x500 = UINT64_MAX;
	uint64_t t76 = 4544108LLU;

    t76 = ((x497<<(x498<=x499))^x500);

    if (t76 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x501 = 31398385630LL;
	volatile int32_t x503 = INT32_MAX;
	volatile int64_t t77 = -6LL;

    t77 = ((x501<<(x502<=x503))^x504);

    if (t77 != -62796771258LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x518 = 31348007545315LLU;
	int16_t x519 = -1599;
	uint64_t x520 = 3690512524LLU;
	uint64_t t78 = 2981684069490182LLU;

    t78 = ((x517<<(x518<=x519))^x520);

    if (t78 != 3690512630LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x522 = INT64_MAX;
	int32_t x524 = INT32_MIN;
	uint64_t t79 = 139LLU;

    t79 = ((x521<<(x522<=x523))^x524);

    if (t79 != 18446714228525876447LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x525 = INT8_MAX;
	int64_t x526 = INT64_MIN;
	int64_t x527 = -6062648601999LL;
	volatile int64_t t80 = -467LL;

    t80 = ((x525<<(x526<=x527))^x528);

    if (t80 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x537 = 200904LLU;
	static int64_t x538 = INT64_MIN;
	static int32_t x539 = INT32_MIN;
	static int32_t x540 = -1;
	uint64_t t81 = 405226913138578234LLU;

    t81 = ((x537<<(x538<=x539))^x540);

    if (t81 != 18446744073709149807LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x541 = 451516388U;
	static uint16_t x542 = 22U;
	volatile uint64_t x544 = 59046842LLU;
	static uint64_t t82 = 3980651LLU;

    t82 = ((x541<<(x542<=x543))^x544);

    if (t82 != 911725682LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x545 = 3;
	uint64_t x546 = 69197927829625455LLU;
	int32_t x547 = -1018196;
	static volatile int32_t x548 = INT32_MAX;
	static volatile int32_t t83 = -46660;

    t83 = ((x545<<(x546<=x547))^x548);

    if (t83 != 2147483641) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x557 = 1;
	static uint16_t x558 = UINT16_MAX;
	volatile int32_t t84 = -10792;

    t84 = ((x557<<(x558<=x559))^x560);

    if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x573 = UINT32_MAX;
	static volatile uint8_t x574 = UINT8_MAX;
	int8_t x575 = INT8_MIN;
	static uint16_t x576 = UINT16_MAX;
	volatile uint32_t t85 = 1690079502U;

    t85 = ((x573<<(x574<=x575))^x576);

    if (t85 != 4294901760U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x577 = INT64_MAX;
	volatile uint64_t x578 = UINT64_MAX;
	int64_t x580 = 15172273LL;

    t86 = ((x577<<(x578<=x579))^x580);

    if (t86 != 9223372036839603534LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x581 = 6;
	volatile uint16_t x582 = UINT16_MAX;
	int8_t x583 = -1;
	int64_t x584 = INT64_MAX;
	static volatile int64_t t87 = 173079LL;

    t87 = ((x581<<(x582<=x583))^x584);

    if (t87 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x595 = INT64_MIN;
	static uint32_t x596 = 3507U;
	uint32_t t88 = 24594U;

    t88 = ((x593<<(x594<=x595))^x596);

    if (t88 != 3471U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x597 = UINT64_MAX;
	volatile int64_t x598 = -3737696179934LL;
	volatile int32_t x599 = INT32_MAX;
	static int8_t x600 = 1;
	static uint64_t t89 = UINT64_MAX;

    t89 = ((x597<<(x598<=x599))^x600);

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x601 = 14U;
	volatile uint32_t x602 = 43017U;
	int8_t x604 = -1;
	volatile int32_t t90 = -62;

    t90 = ((x601<<(x602<=x603))^x604);

    if (t90 != -15) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x606 = UINT32_MAX;
	int64_t x607 = -1LL;
	int8_t x608 = INT8_MAX;

    t91 = ((x605<<(x606<=x607))^x608);

    if (t91 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x610 = -1;
	uint16_t x611 = 85U;
	int16_t x612 = 3;

    t92 = ((x609<<(x610<=x611))^x612);

    if (t92 != 509) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x613 = 1;
	int32_t x614 = INT32_MIN;
	int8_t x615 = INT8_MIN;
	int32_t t93 = 257507;

    t93 = ((x613<<(x614<=x615))^x616);

    if (t93 != -126) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x617 = 0U;
	static uint32_t x618 = 63U;
	int64_t x619 = INT64_MIN;
	static volatile uint64_t x620 = 67047725822407LLU;
	volatile uint64_t t94 = 126478314LLU;

    t94 = ((x617<<(x618<=x619))^x620);

    if (t94 != 67047725822407LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x622 = INT8_MAX;
	int32_t x623 = INT32_MIN;

    t95 = ((x621<<(x622<=x623))^x624);

    if (t95 != -3LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x633 = 3U;
	uint32_t x634 = 42U;
	uint64_t x635 = UINT64_MAX;
	int64_t x636 = -1LL;
	int64_t t96 = 318LL;

    t96 = ((x633<<(x634<=x635))^x636);

    if (t96 != -7LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x645 = 1409493693248650LLU;
	uint32_t x646 = 41277U;
	int64_t x647 = INT64_MAX;
	volatile int16_t x648 = -1;

    t97 = ((x645<<(x646<=x647))^x648);

    if (t97 != 18443925086323054315LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x649 = 1LLU;
	uint32_t x650 = 9551373U;
	static int8_t x651 = -57;
	int8_t x652 = INT8_MIN;
	volatile uint64_t t98 = 72544902501LLU;

    t98 = ((x649<<(x650<=x651))^x652);

    if (t98 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x665 = 0LLU;
	int32_t x666 = INT32_MIN;
	volatile int16_t x667 = 113;
	volatile int8_t x668 = 10;
	volatile uint64_t t99 = 89093260318300516LLU;

    t99 = ((x665<<(x666<=x667))^x668);

    if (t99 != 10LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x669 = 0;
	int16_t x670 = -1;
	static int8_t x671 = 2;

    t100 = ((x669<<(x670<=x671))^x672);

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x673 = 17480LLU;
	volatile int32_t x674 = -1;
	static int8_t x675 = 24;
	uint64_t x676 = 1323LLU;

    t101 = ((x673<<(x674<=x675))^x676);

    if (t101 != 36283LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x677 = 174U;
	int32_t x678 = 1014732;
	int16_t x679 = 692;
	static int16_t x680 = -4515;
	static int32_t t102 = -12;

    t102 = ((x677<<(x678<=x679))^x680);

    if (t102 != -4365) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x685 = UINT64_MAX;
	int16_t x686 = 215;
	int32_t x687 = -1;

    t103 = ((x685<<(x686<=x687))^x688);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x689 = UINT8_MAX;
	int32_t x690 = INT32_MIN;
	int8_t x692 = INT8_MIN;

    t104 = ((x689<<(x690<=x691))^x692);

    if (t104 != -129) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x694 = 2050U;
	uint8_t x695 = 41U;
	volatile uint32_t x696 = UINT32_MAX;
	uint32_t t105 = 76U;

    t105 = ((x693<<(x694<=x695))^x696);

    if (t105 != 4294967294U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x697 = 165LL;
	int16_t x698 = INT16_MIN;
	int32_t x699 = 866;
	static uint64_t x700 = 917896867568LLU;
	static uint64_t t106 = 224333357974LLU;

    t106 = ((x697<<(x698<=x699))^x700);

    if (t106 != 917896867770LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x709 = 25080537;
	volatile int16_t x711 = INT16_MIN;
	uint16_t x712 = 8244U;
	static int32_t t107 = -10;

    t107 = ((x709<<(x710<=x711))^x712);

    if (t107 != 50152838) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x714 = 2360023;
	int64_t x715 = INT64_MAX;
	int64_t x716 = INT64_MIN;
	uint64_t t108 = 761947583426476LLU;

    t108 = ((x713<<(x714<=x715))^x716);

    if (t108 != 9223372036854849348LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x718 = 57;
	int64_t t109 = -82046289534LL;

    t109 = ((x717<<(x718<=x719))^x720);

    if (t109 != -3659LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x721 = 7866753;
	uint32_t x722 = 12256U;
	int32_t x723 = -1982;
	uint64_t x724 = 9933LLU;
	uint64_t t110 = 1918973593932LLU;

    t110 = ((x721<<(x722<=x723))^x724);

    if (t110 != 15742415LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x725 = 793U;
	int64_t x726 = 3079454LL;
	uint32_t x727 = 30281U;
	int8_t x728 = -9;
	volatile int32_t t111 = -10000876;

    t111 = ((x725<<(x726<=x727))^x728);

    if (t111 != -786) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x733 = 0U;
	uint32_t x734 = 848104U;
	uint32_t x735 = 0U;
	int16_t x736 = INT16_MIN;
	uint32_t t112 = 36U;

    t112 = ((x733<<(x734<=x735))^x736);

    if (t112 != 4294934528U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x749 = 0U;
	int64_t x750 = 1LL;
	volatile uint32_t x752 = UINT32_MAX;
	volatile uint32_t t113 = UINT32_MAX;

    t113 = ((x749<<(x750<=x751))^x752);

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x757 = 245581298207LLU;
	int64_t x758 = INT64_MIN;
	int16_t x759 = INT16_MIN;
	int32_t x760 = 16710;

    t114 = ((x757<<(x758<=x759))^x760);

    if (t114 != 491162580344LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x765 = 311;
	uint64_t x766 = UINT64_MAX;
	int32_t x767 = INT32_MIN;
	volatile int64_t x768 = INT64_MIN;
	int64_t t115 = 7952LL;

    t115 = ((x765<<(x766<=x767))^x768);

    if (t115 != -9223372036854775497LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x769 = INT16_MAX;
	int32_t x770 = 121409;
	volatile uint32_t x772 = UINT32_MAX;
	volatile uint32_t t116 = 7U;

    t116 = ((x769<<(x770<=x771))^x772);

    if (t116 != 4294934528U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x781 = 206U;
	int8_t x784 = -3;
	static int32_t t117 = 666160;

    t117 = ((x781<<(x782<=x783))^x784);

    if (t117 != -415) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x785 = 19;
	uint64_t x786 = 12418663319201LLU;
	int32_t x788 = -1;
	volatile int32_t t118 = 4393;

    t118 = ((x785<<(x786<=x787))^x788);

    if (t118 != -39) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x813 = 438415674U;
	int64_t x814 = 3609LL;
	uint32_t x815 = 15900634U;
	uint8_t x816 = 3U;
	volatile uint32_t t119 = 205788133U;

    t119 = ((x813<<(x814<=x815))^x816);

    if (t119 != 876831351U) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x817 = 660;
	uint8_t x818 = 40U;
	int8_t x819 = INT8_MIN;
	volatile int32_t t120 = -51607817;

    t120 = ((x817<<(x818<=x819))^x820);

    if (t120 != -748) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x821 = 654015427U;
	int32_t x822 = INT32_MIN;
	volatile int32_t x823 = INT32_MIN;
	volatile uint16_t x824 = 29U;
	volatile uint32_t t121 = 1735U;

    t121 = ((x821<<(x822<=x823))^x824);

    if (t121 != 1308030875U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x825 = 1048484517U;
	int64_t x826 = 1163087319821062026LL;
	int16_t x827 = INT16_MAX;
	int32_t x828 = INT32_MIN;

    t122 = ((x825<<(x826<=x827))^x828);

    if (t122 != 3195968165U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x833 = 44U;
	int16_t x836 = INT16_MAX;

    t123 = ((x833<<(x834<=x835))^x836);

    if (t123 != 32723) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x837 = 14284U;
	static volatile int8_t x838 = 0;
	uint64_t x839 = 4240893811158649LLU;
	static uint32_t x840 = 8U;

    t124 = ((x837<<(x838<=x839))^x840);

    if (t124 != 28560U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x841 = 57U;
	int64_t x842 = INT64_MIN;
	int32_t x843 = -190770;
	static int64_t x844 = INT64_MIN;

    t125 = ((x841<<(x842<=x843))^x844);

    if (t125 != -9223372036854775694LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x849 = UINT32_MAX;
	uint8_t x850 = UINT8_MAX;
	static uint32_t x851 = 0U;
	volatile uint32_t t126 = 56012147U;

    t126 = ((x849<<(x850<=x851))^x852);

    if (t126 != 32767U) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x853 = 898619800U;
	static int64_t x854 = -2493856944821935LL;
	uint32_t x855 = 43116U;
	int64_t x856 = -5773824LL;
	volatile int64_t t127 = 32097767482082LL;

    t127 = ((x853<<(x854<=x855))^x856);

    if (t127 != -1799858896LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x857 = UINT16_MAX;
	int64_t x860 = INT64_MAX;
	volatile int64_t t128 = 1657280483LL;

    t128 = ((x857<<(x858<=x859))^x860);

    if (t128 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x861 = UINT32_MAX;
	static uint16_t x863 = UINT16_MAX;
	int32_t x864 = -1;
	uint32_t t129 = 146152U;

    t129 = ((x861<<(x862<=x863))^x864);

    if (t129 != 1U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x866 = 2U;
	uint16_t x867 = UINT16_MAX;
	int64_t x868 = INT64_MAX;

    t130 = ((x865<<(x866<=x867))^x868);

    if (t130 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x881 = UINT64_MAX;
	int16_t x882 = INT16_MAX;
	int32_t x883 = INT32_MIN;
	int32_t x884 = -1;

    t131 = ((x881<<(x882<=x883))^x884);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x885 = 1U;
	int8_t x887 = INT8_MAX;
	int32_t x888 = INT32_MIN;
	uint32_t t132 = 0U;

    t132 = ((x885<<(x886<=x887))^x888);

    if (t132 != 2147483650U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x889 = 2LLU;
	uint32_t x890 = 24U;
	int8_t x892 = -1;
	uint64_t t133 = 533802904276357290LLU;

    t133 = ((x889<<(x890<=x891))^x892);

    if (t133 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x893 = 85268475126516LLU;
	int8_t x894 = -1;
	uint16_t x895 = 1U;
	static uint16_t x896 = 107U;
	volatile uint64_t t134 = 2157838LLU;

    t134 = ((x893<<(x894<=x895))^x896);

    if (t134 != 170536950252931LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x901 = UINT16_MAX;
	uint32_t x902 = 1186066701U;
	int8_t x903 = INT8_MIN;
	uint32_t x904 = UINT32_MAX;
	volatile uint32_t t135 = 740811U;

    t135 = ((x901<<(x902<=x903))^x904);

    if (t135 != 4294836225U) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x905 = 0;
	int8_t x906 = INT8_MAX;
	int64_t x907 = -1LL;
	uint32_t x908 = UINT32_MAX;
	volatile uint32_t t136 = UINT32_MAX;

    t136 = ((x905<<(x906<=x907))^x908);

    if (t136 != UINT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x913 = 26641420;
	volatile int64_t x914 = INT64_MIN;
	volatile uint16_t x915 = UINT16_MAX;
	static int64_t x916 = INT64_MAX;
	volatile int64_t t137 = 9478LL;

    t137 = ((x913<<(x914<=x915))^x916);

    if (t137 != 9223372036801492967LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x917 = INT16_MAX;
	static int64_t x918 = INT64_MIN;
	uint64_t x919 = 30549513702099677LLU;
	volatile int64_t x920 = -4LL;
	int64_t t138 = 502861LL;

    t138 = ((x917<<(x918<=x919))^x920);

    if (t138 != -32765LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x921 = UINT32_MAX;
	uint32_t x922 = 1160U;
	int32_t x923 = INT32_MIN;
	uint32_t t139 = 445331U;

    t139 = ((x921<<(x922<=x923))^x924);

    if (t139 != 2147483646U) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x925 = 1439577U;
	volatile int64_t t140 = -5LL;

    t140 = ((x925<<(x926<=x927))^x928);

    if (t140 != 9223372036853336230LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x929 = UINT16_MAX;
	uint32_t x930 = 8390180U;
	int64_t x931 = INT64_MIN;
	int16_t x932 = 55;
	int32_t t141 = -201387853;

    t141 = ((x929<<(x930<=x931))^x932);

    if (t141 != 65480) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x933 = 1;
	int32_t x934 = -4;
	uint16_t x935 = 11328U;
	int16_t x936 = INT16_MAX;

    t142 = ((x933<<(x934<=x935))^x936);

    if (t142 != 32765) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x941 = UINT16_MAX;
	static volatile uint16_t x942 = UINT16_MAX;
	int32_t x943 = INT32_MAX;
	int16_t x944 = INT16_MIN;
	volatile int32_t t143 = 57886;

    t143 = ((x941<<(x942<=x943))^x944);

    if (t143 != -98306) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x945 = 112U;
	uint16_t x946 = 44U;
	int32_t x947 = -1;
	static int32_t t144 = 29658;

    t144 = ((x945<<(x946<=x947))^x948);

    if (t144 != 143) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x957 = 21U;
	uint16_t x958 = UINT16_MAX;
	static uint64_t x959 = 52381445644141LLU;
	int8_t x960 = -20;
	static volatile int32_t t145 = 825768;

    t145 = ((x957<<(x958<=x959))^x960);

    if (t145 != -58) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x965 = INT16_MAX;
	static int64_t x967 = INT64_MAX;
	int8_t x968 = 7;
	int32_t t146 = -4022278;

    t146 = ((x965<<(x966<=x967))^x968);

    if (t146 != 65529) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x973 = 303U;
	int16_t x974 = -1;
	static uint64_t x975 = 11002479620865305LLU;
	uint32_t x976 = UINT32_MAX;
	uint32_t t147 = 500127U;

    t147 = ((x973<<(x974<=x975))^x976);

    if (t147 != 4294966992U) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x989 = 2833608;
	uint16_t x990 = 18299U;
	uint8_t x991 = UINT8_MAX;
	int64_t x992 = INT64_MAX;
	static int64_t t148 = 0LL;

    t148 = ((x989<<(x990<=x991))^x992);

    if (t148 != 9223372036851942199LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x993 = 4U;
	int16_t x994 = -18;
	uint16_t x995 = UINT16_MAX;
	static int32_t x996 = -1;
	int32_t t149 = -105073;

    t149 = ((x993<<(x994<=x995))^x996);

    if (t149 != -9) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x997 = 0;
	int16_t x999 = -201;

    t150 = ((x997<<(x998<=x999))^x1000);

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1009 = 2;
	static int16_t x1010 = INT16_MAX;
	static int32_t x1011 = 294159323;
	int16_t x1012 = INT16_MIN;
	int32_t t151 = 156379;

    t151 = ((x1009<<(x1010<=x1011))^x1012);

    if (t151 != -32764) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1013 = UINT64_MAX;
	uint64_t x1014 = 125142556158646LLU;
	volatile int16_t x1015 = INT16_MIN;
	static int32_t x1016 = INT32_MIN;
	uint64_t t152 = 5287779646148209LLU;

    t152 = ((x1013<<(x1014<=x1015))^x1016);

    if (t152 != 2147483646LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x1017 = 0;
	int32_t x1018 = -1196633;
	int32_t x1019 = -92458641;
	int8_t x1020 = 1;
	int32_t t153 = -405792;

    t153 = ((x1017<<(x1018<=x1019))^x1020);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x1037 = 96U;
	static int32_t x1038 = -1;
	int8_t x1039 = INT8_MIN;
	volatile int32_t t154 = -1;

    t154 = ((x1037<<(x1038<=x1039))^x1040);

    if (t154 != 31) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1045 = UINT32_MAX;
	int16_t x1046 = INT16_MIN;
	uint64_t x1047 = UINT64_MAX;
	static uint16_t x1048 = 464U;
	static uint32_t t155 = 958148507U;

    t155 = ((x1045<<(x1046<=x1047))^x1048);

    if (t155 != 4294966830U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x1050 = INT8_MAX;
	int16_t x1051 = INT16_MAX;
	uint32_t x1052 = UINT32_MAX;
	static uint32_t t156 = 69942U;

    t156 = ((x1049<<(x1050<=x1051))^x1052);

    if (t156 != 4294963215U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1053 = 60730U;
	int32_t x1054 = INT32_MIN;
	uint8_t x1055 = 7U;
	static uint8_t x1056 = UINT8_MAX;
	volatile uint32_t t157 = 14261010U;

    t157 = ((x1053<<(x1054<=x1055))^x1056);

    if (t157 != 121483U) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1058 = INT64_MAX;
	int8_t x1059 = -36;
	int64_t x1060 = INT64_MIN;
	static volatile uint64_t t158 = 470968945960160465LLU;

    t158 = ((x1057<<(x1058<=x1059))^x1060);

    if (t158 != 9223372036877794888LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1065 = 4965896394480118LLU;
	int16_t x1066 = -1;
	volatile int16_t x1067 = INT16_MIN;
	uint8_t x1068 = 6U;
	volatile uint64_t t159 = 3863304975729130LLU;

    t159 = ((x1065<<(x1066<=x1067))^x1068);

    if (t159 != 4965896394480112LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x1069 = 81735709LL;
	int8_t x1070 = INT8_MAX;
	int16_t x1072 = -1;
	volatile int64_t t160 = -846741019410LL;

    t160 = ((x1069<<(x1070<=x1071))^x1072);

    if (t160 != -81735710LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x1073 = UINT16_MAX;
	volatile uint8_t x1074 = 1U;
	int64_t x1076 = INT64_MIN;
	static int64_t t161 = 34333283005163LL;

    t161 = ((x1073<<(x1074<=x1075))^x1076);

    if (t161 != -9223372036854644738LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x1086 = 9889LL;
	int64_t x1088 = 14259894675LL;
	static volatile int64_t t162 = 1879911192160LL;

    t162 = ((x1085<<(x1086<=x1087))^x1088);

    if (t162 != 14259894706LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1089 = 1605304LL;
	uint32_t x1090 = 1U;
	uint32_t x1092 = 328645U;
	static int64_t t163 = 2LL;

    t163 = ((x1089<<(x1090<=x1091))^x1092);

    if (t163 != 3538613LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1099 = -23LL;
	uint32_t x1100 = 6U;

    t164 = ((x1097<<(x1098<=x1099))^x1100);

    if (t164 != 215844316U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1101 = 29U;
	uint64_t x1102 = 18979813213532LLU;
	volatile uint32_t t165 = 104768915U;

    t165 = ((x1101<<(x1102<=x1103))^x1104);

    if (t165 != 4294967260U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1105 = INT16_MAX;
	int64_t x1106 = 284813764LL;
	int32_t x1107 = INT32_MIN;

    t166 = ((x1105<<(x1106<=x1107))^x1108);

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x1125 = UINT8_MAX;
	volatile int16_t x1126 = INT16_MAX;
	volatile int64_t x1127 = INT64_MAX;
	volatile int8_t x1128 = INT8_MAX;
	volatile int32_t t167 = -3542288;

    t167 = ((x1125<<(x1126<=x1127))^x1128);

    if (t167 != 385) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1130 = UINT8_MAX;
	int64_t x1131 = INT64_MAX;
	int8_t x1132 = -1;
	static volatile int32_t t168 = -231772;

    t168 = ((x1129<<(x1130<=x1131))^x1132);

    if (t168 != -11803) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x1133 = UINT64_MAX;
	volatile int64_t x1135 = INT64_MIN;
	static uint8_t x1136 = 51U;
	volatile uint64_t t169 = 459866383682910970LLU;

    t169 = ((x1133<<(x1134<=x1135))^x1136);

    if (t169 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1149 = UINT16_MAX;
	int16_t x1150 = -1;
	int16_t x1151 = -1;
	static int64_t x1152 = INT64_MIN;
	volatile int64_t t170 = -2762158832047516LL;

    t170 = ((x1149<<(x1150<=x1151))^x1152);

    if (t170 != -9223372036854644738LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1153 = INT16_MAX;
	int16_t x1154 = INT16_MIN;
	int16_t x1155 = INT16_MIN;
	int8_t x1156 = -1;
	volatile int32_t t171 = 468648;

    t171 = ((x1153<<(x1154<=x1155))^x1156);

    if (t171 != -65535) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint32_t x1159 = UINT32_MAX;
	volatile int64_t x1160 = -1LL;
	static volatile int64_t t172 = 2678618464LL;

    t172 = ((x1157<<(x1158<=x1159))^x1160);

    if (t172 != -65535LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x1161 = 5516427439910LL;
	int32_t x1162 = INT32_MIN;
	int64_t x1163 = -28802LL;
	int64_t x1164 = INT64_MIN;
	volatile int64_t t173 = -1519404173588700LL;

    t173 = ((x1161<<(x1162<=x1163))^x1164);

    if (t173 != -9223361003999895988LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x1165 = 245915756;
	uint64_t x1166 = 170766288009LLU;
	int64_t x1167 = 48481470LL;
	int64_t x1168 = INT64_MIN;
	int64_t t174 = 55072558736963089LL;

    t174 = ((x1165<<(x1166<=x1167))^x1168);

    if (t174 != -9223372036608860052LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1169 = UINT8_MAX;
	uint32_t x1170 = UINT32_MAX;
	volatile int32_t x1172 = -2750;

    t175 = ((x1169<<(x1170<=x1171))^x1172);

    if (t175 != -2627) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1179 = UINT64_MAX;
	int32_t t176 = 613150;

    t176 = ((x1177<<(x1178<=x1179))^x1180);

    if (t176 != -117) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1186 = UINT16_MAX;
	int8_t x1187 = -1;
	int32_t x1188 = -1;
	volatile int32_t t177 = -3875322;

    t177 = ((x1185<<(x1186<=x1187))^x1188);

    if (t177 != -2) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1189 = UINT8_MAX;
	static volatile int32_t x1190 = INT32_MIN;
	int64_t x1191 = INT64_MIN;
	volatile uint16_t x1192 = 13U;
	int32_t t178 = 7264606;

    t178 = ((x1189<<(x1190<=x1191))^x1192);

    if (t178 != 242) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1193 = 129851U;
	static int32_t x1194 = INT32_MIN;
	static uint8_t x1196 = 2U;
	uint32_t t179 = 8U;

    t179 = ((x1193<<(x1194<=x1195))^x1196);

    if (t179 != 259700U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1201 = 8;
	volatile int64_t x1202 = INT64_MIN;
	volatile uint16_t x1203 = 64U;
	uint64_t x1204 = 5239470794157354LLU;
	static volatile uint64_t t180 = 14742LLU;

    t180 = ((x1201<<(x1202<=x1203))^x1204);

    if (t180 != 5239470794157370LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x1205 = INT8_MAX;
	static uint32_t x1206 = 15574U;
	int64_t x1207 = 8533LL;
	static volatile int32_t t181 = -15;

    t181 = ((x1205<<(x1206<=x1207))^x1208);

    if (t181 != -128) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x1209 = 828U;
	static uint8_t x1210 = 0U;
	int16_t x1211 = 1;
	int16_t x1212 = INT16_MIN;
	volatile int32_t t182 = -3;

    t182 = ((x1209<<(x1210<=x1211))^x1212);

    if (t182 != -31112) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x1213 = UINT16_MAX;
	int16_t x1215 = -57;
	volatile int16_t x1216 = INT16_MAX;

    t183 = ((x1213<<(x1214<=x1215))^x1216);

    if (t183 != 98305) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1222 = UINT8_MAX;
	static int16_t x1223 = -1;
	volatile int32_t t184 = 84;

    t184 = ((x1221<<(x1222<=x1223))^x1224);

    if (t184 != -59839) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1225 = INT8_MAX;
	static volatile int64_t x1227 = -73213612685988LL;
	int16_t x1228 = 4;
	int32_t t185 = 695;

    t185 = ((x1225<<(x1226<=x1227))^x1228);

    if (t185 != 123) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x1230 = INT16_MIN;
	static uint8_t x1231 = 1U;
	volatile int64_t t186 = 460469950149523861LL;

    t186 = ((x1229<<(x1230<=x1231))^x1232);

    if (t186 != -131071LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1233 = 0;
	volatile uint8_t x1234 = 0U;
	uint64_t x1235 = 0LLU;
	static uint32_t x1236 = 1U;
	volatile uint32_t t187 = 1395163946U;

    t187 = ((x1233<<(x1234<=x1235))^x1236);

    if (t187 != 1U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1237 = INT8_MAX;
	volatile int16_t x1238 = INT16_MAX;
	uint64_t x1239 = 1824165017LLU;
	volatile int16_t x1240 = INT16_MIN;
	int32_t t188 = -17631358;

    t188 = ((x1237<<(x1238<=x1239))^x1240);

    if (t188 != -32514) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1241 = 525260296000LLU;
	uint32_t x1242 = 30876U;
	static volatile int32_t x1243 = INT32_MIN;
	volatile int32_t x1244 = -35;
	volatile uint64_t t189 = 63LLU;

    t189 = ((x1241<<(x1242<=x1243))^x1244);

    if (t189 != 18446743023188959581LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x1250 = 384U;
	int32_t x1251 = -1;
	uint64_t x1252 = UINT64_MAX;

    t190 = ((x1249<<(x1250<=x1251))^x1252);

    if (t190 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1257 = INT16_MAX;
	static int64_t x1258 = INT64_MAX;
	uint16_t x1260 = 893U;
	static int32_t t191 = -2284389;

    t191 = ((x1257<<(x1258<=x1259))^x1260);

    if (t191 != 64643) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1261 = INT64_MAX;
	uint64_t x1262 = UINT64_MAX;
	int64_t x1263 = 11132206182LL;
	static uint8_t x1264 = 1U;
	int64_t t192 = 5423LL;

    t192 = ((x1261<<(x1262<=x1263))^x1264);

    if (t192 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1274 = UINT32_MAX;
	uint32_t x1276 = UINT32_MAX;

    t193 = ((x1273<<(x1274<=x1275))^x1276);

    if (t193 != 4294967247U) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1277 = INT8_MAX;
	static uint64_t x1278 = 288424LLU;
	volatile uint16_t x1279 = 1781U;
	volatile int16_t x1280 = 6073;
	int32_t t194 = 2121462;

    t194 = ((x1277<<(x1278<=x1279))^x1280);

    if (t194 != 6086) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1281 = 2581;
	volatile int8_t x1284 = INT8_MAX;
	int32_t t195 = -25839;

    t195 = ((x1281<<(x1282<=x1283))^x1284);

    if (t195 != 5205) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1289 = INT8_MAX;
	uint64_t x1290 = UINT64_MAX;
	int64_t x1291 = 3889444LL;
	uint8_t x1292 = UINT8_MAX;
	int32_t t196 = 0;

    t196 = ((x1289<<(x1290<=x1291))^x1292);

    if (t196 != 128) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x1293 = INT8_MAX;
	uint32_t x1294 = UINT32_MAX;
	static volatile int16_t x1295 = INT16_MIN;
	int64_t x1296 = INT64_MAX;

    t197 = ((x1293<<(x1294<=x1295))^x1296);

    if (t197 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1298 = -6175LL;
	static int8_t x1299 = 13;
	static uint32_t x1300 = 377414U;
	static uint32_t t198 = 26133U;

    t198 = ((x1297<<(x1298<=x1299))^x1300);

    if (t198 != 377702U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1309 = 1599214U;
	int8_t x1310 = INT8_MIN;
	uint32_t x1312 = 1U;
	uint32_t t199 = 7407U;

    t199 = ((x1309<<(x1310<=x1311))^x1312);

    if (t199 != 1599215U) { NG(); } else { ; }
	
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

