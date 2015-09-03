#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 3U;
int16_t x5 = -15984;
uint64_t x6 = 185LLU;
static int32_t x8 = -610818506;
int64_t x14 = -1LL;
uint64_t x17 = 31652LLU;
static int64_t x22 = INT64_MIN;
int16_t x24 = -1;
int64_t x27 = INT64_MIN;
int64_t x30 = INT64_MAX;
static int64_t t8 = 27045LL;
static int64_t x39 = -1LL;
volatile int32_t t10 = -42154;
uint16_t x48 = UINT16_MAX;
int32_t t11 = -451;
int32_t x52 = INT32_MAX;
volatile int32_t t12 = 15941399;
static int16_t x55 = INT16_MIN;
static int64_t x61 = 23LL;
int16_t x62 = 161;
static volatile int16_t x65 = -1;
int32_t t16 = -38728428;
int64_t x69 = -1LL;
static int64_t x71 = -1LL;
uint8_t x72 = 43U;
int32_t t18 = 93;
int16_t x78 = INT16_MIN;
volatile int64_t x82 = -64693983LL;
int32_t t20 = 6345;
int16_t x86 = INT16_MAX;
static volatile uint64_t t21 = 12020LLU;
static uint16_t x96 = UINT16_MAX;
int64_t x111 = -1LL;
static uint64_t t26 = 96926834LLU;
uint16_t x113 = 2U;
volatile int64_t x117 = INT64_MIN;
volatile int32_t x118 = -1;
volatile uint64_t x145 = UINT64_MAX;
int64_t x148 = -1LL;
uint32_t x150 = 10043U;
uint64_t x160 = 272426480212318118LLU;
volatile int8_t x164 = -1;
int32_t t39 = 0;
volatile uint64_t x169 = UINT64_MAX;
volatile uint32_t x171 = UINT32_MAX;
volatile int32_t t42 = -1017838;
static volatile int8_t x179 = INT8_MIN;
static int64_t x205 = -1LL;
static int32_t x209 = INT32_MIN;
uint64_t t48 = 5742LLU;
volatile uint32_t x219 = 312U;
uint32_t x220 = 780603127U;
volatile uint32_t t50 = 50U;
int16_t x229 = 5410;
volatile int64_t x240 = INT64_MIN;
int64_t t57 = -500510500375LL;
int64_t x249 = -1830885272424LL;
int32_t x252 = INT32_MIN;
volatile int8_t x256 = -1;
volatile int32_t x259 = INT32_MAX;
int32_t x261 = -2;
volatile int8_t x264 = 6;
uint64_t t66 = 6103LLU;
int8_t x289 = 1;
int32_t x294 = 117;
uint64_t x297 = 1815207648526LLU;
int8_t x308 = INT8_MIN;
static int8_t x314 = INT8_MIN;
int16_t x315 = INT16_MAX;
int16_t x322 = INT16_MIN;
uint64_t x324 = 5002860388LLU;
static int64_t x326 = INT64_MIN;
static uint16_t x331 = UINT16_MAX;
static volatile int32_t x332 = INT32_MAX;
uint8_t x333 = 26U;
int8_t x335 = 30;
uint64_t x344 = UINT64_MAX;
volatile uint64_t t78 = 21LLU;
volatile uint32_t x364 = 1069009U;
volatile uint64_t t82 = 935162013198104832LLU;
volatile int32_t t83 = 8;
int8_t x380 = 15;
static int16_t x384 = 4;
volatile int16_t x385 = -1;
volatile int32_t x387 = -12169534;
static volatile int64_t t90 = -55066655158989403LL;
int32_t t91 = 39;
volatile int32_t x403 = 1845808;
int8_t x406 = -1;
volatile int8_t x407 = INT8_MIN;
uint64_t x408 = UINT64_MAX;
volatile uint64_t t93 = 2678LLU;
static int32_t t94 = -237387728;
int16_t x414 = INT16_MIN;
volatile int8_t x424 = INT8_MAX;
static int64_t x426 = INT64_MAX;
int16_t x427 = INT16_MIN;
int8_t x430 = INT8_MIN;


void f0(void) {
	int64_t x1 = -1LL;
	volatile uint16_t x2 = 148U;
	uint16_t x4 = 29007U;
	int64_t t0 = 3LL;

	t0 = ((x1^(x2<=x3))-x4);

	if (t0 != -29008LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x7 = INT8_MIN;
	int32_t t1 = 1946;

	t1 = ((x5^(x6<=x7))-x8);

	if (t1 != 610802523) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	int32_t x10 = -1;
	int32_t x11 = INT32_MAX;
	uint32_t x12 = 18886U;
	volatile uint32_t t2 = 400259414U;

	t2 = ((x9^(x10<=x11))-x12);

	if (t2 != 4294948283U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	int64_t x15 = -191072211LL;
	int16_t x16 = 28;
	int32_t t3 = -19909;

	t3 = ((x13^(x14<=x15))-x16);

	if (t3 != -29) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 69365133638604LLU;
	static int16_t x19 = -1;
	uint8_t x20 = UINT8_MAX;
	uint64_t t4 = 331LLU;

	t4 = ((x17^(x18<=x19))-x20);

	if (t4 != 31398LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int64_t x23 = -17255LL;
	int32_t t5 = 0;

	t5 = ((x21^(x22<=x23))-x24);

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 5LLU;
	static int32_t x26 = INT32_MAX;
	static volatile int32_t x28 = 24984;
	static volatile uint64_t t6 = 1456434633LLU;

	t6 = ((x25^(x26<=x27))-x28);

	if (t6 != 18446744073709526637LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 28U;
	int32_t x31 = -1;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 1378;

	t7 = ((x29^(x30<=x31))-x32);

	if (t7 != -32739) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	static int8_t x34 = -25;
	volatile int64_t x35 = INT64_MAX;
	int32_t x36 = INT32_MIN;

	t8 = ((x33^(x34<=x35))-x36);

	if (t8 != 2147483646LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	volatile int64_t x38 = INT64_MAX;
	int64_t x40 = 1LL;
	int64_t t9 = 109184886323LL;

	t9 = ((x37^(x38<=x39))-x40);

	if (t9 != -32769LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x41 = INT8_MIN;
	volatile uint8_t x42 = 0U;
	int64_t x43 = INT64_MIN;
	static uint16_t x44 = 416U;

	t10 = ((x41^(x42<=x43))-x44);

	if (t10 != -544) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	uint16_t x46 = 1U;
	uint64_t x47 = 75773148427644LLU;

	t11 = ((x45^(x46<=x47))-x48);

	if (t11 != -65537) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x49 = 13U;
	static int16_t x50 = -127;
	static int16_t x51 = -1;

	t12 = ((x49^(x50<=x51))-x52);

	if (t12 != -2147483635) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -6;
	uint32_t x54 = 221U;
	volatile int32_t x56 = INT32_MIN;
	static volatile int32_t t13 = -18240961;

	t13 = ((x53^(x54<=x55))-x56);

	if (t13 != 2147483643) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	int8_t x58 = -1;
	int64_t x59 = -1LL;
	int64_t x60 = INT64_MIN;
	static int64_t t14 = 3278287272067LL;

	t14 = ((x57^(x58<=x59))-x60);

	if (t14 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x63 = -1LL;
	uint64_t x64 = 309187408206321LLU;
	volatile uint64_t t15 = 66899665LLU;

	t15 = ((x61^(x62<=x63))-x64);

	if (t15 != 18446434886301345318LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MAX;
	int16_t x67 = INT16_MIN;
	int8_t x68 = INT8_MIN;

	t16 = ((x65^(x66<=x67))-x68);

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = 49833;
	volatile int64_t t17 = 231LL;

	t17 = ((x69^(x70<=x71))-x72);

	if (t17 != -44LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int16_t x74 = INT16_MIN;
	volatile int8_t x75 = INT8_MIN;
	uint16_t x76 = UINT16_MAX;

	t18 = ((x73^(x74<=x75))-x76);

	if (t18 != -65537) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x77 = 169U;
	volatile int16_t x79 = INT16_MAX;
	volatile int64_t x80 = -1LL;
	volatile int64_t t19 = -322LL;

	t19 = ((x77^(x78<=x79))-x80);

	if (t19 != 169LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MIN;
	uint8_t x83 = UINT8_MAX;
	int32_t x84 = 1;

	t20 = ((x81^(x82<=x83))-x84);

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 65866327612833LLU;
	int8_t x87 = INT8_MIN;
	int64_t x88 = -1LL;

	t21 = ((x85^(x86<=x87))-x88);

	if (t21 != 65866327612834LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 0;
	static volatile int64_t x90 = INT64_MIN;
	uint8_t x91 = UINT8_MAX;
	int32_t x92 = -1660553;
	static int32_t t22 = 4960228;

	t22 = ((x89^(x90<=x91))-x92);

	if (t22 != 1660554) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x93 = 119U;
	uint64_t x94 = UINT64_MAX;
	int8_t x95 = INT8_MIN;
	int32_t t23 = 484;

	t23 = ((x93^(x94<=x95))-x96);

	if (t23 != -65416) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	int16_t x98 = -1;
	uint16_t x99 = UINT16_MAX;
	int8_t x100 = 0;
	static volatile int32_t t24 = -864442;

	t24 = ((x97^(x98<=x99))-x100);

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 5764416894LLU;
	static uint64_t x102 = 31037967374506838LLU;
	int64_t x103 = INT64_MAX;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t25 = 625392LLU;

	t25 = ((x101^(x102<=x103))-x104);

	if (t25 != 5764416896LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 453342469LLU;
	int8_t x110 = -1;
	static int16_t x112 = 27;

	t26 = ((x109^(x110<=x111))-x112);

	if (t26 != 453342441LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x114 = 694U;
	uint16_t x115 = 116U;
	int64_t x116 = 100LL;
	volatile int64_t t27 = -752989022LL;

	t27 = ((x113^(x114<=x115))-x116);

	if (t27 != -98LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x119 = 1;
	static int8_t x120 = INT8_MIN;
	static volatile int64_t t28 = -16LL;

	t28 = ((x117^(x118<=x119))-x120);

	if (t28 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -1;
	int16_t x122 = 0;
	static uint8_t x123 = UINT8_MAX;
	static uint16_t x124 = 3U;
	static int32_t t29 = 29361183;

	t29 = ((x121^(x122<=x123))-x124);

	if (t29 != -5) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x125 = INT16_MIN;
	volatile int16_t x126 = INT16_MIN;
	uint64_t x127 = 898LLU;
	volatile int8_t x128 = -20;
	volatile int32_t t30 = 100203;

	t30 = ((x125^(x126<=x127))-x128);

	if (t30 != -32748) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 35949634U;
	uint32_t x130 = 65153263U;
	uint64_t x131 = UINT64_MAX;
	volatile uint8_t x132 = 16U;
	volatile uint32_t t31 = 1480U;

	t31 = ((x129^(x130<=x131))-x132);

	if (t31 != 35949619U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x133 = 7;
	uint8_t x134 = 1U;
	int64_t x135 = -1LL;
	int32_t x136 = -1;
	volatile int32_t t32 = -522935106;

	t32 = ((x133^(x134<=x135))-x136);

	if (t32 != 8) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x137 = INT8_MIN;
	int8_t x138 = INT8_MIN;
	uint64_t x139 = 3115LLU;
	uint16_t x140 = 103U;
	int32_t t33 = 925;

	t33 = ((x137^(x138<=x139))-x140);

	if (t33 != -231) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x141 = UINT64_MAX;
	static int32_t x142 = INT32_MIN;
	int16_t x143 = -1;
	int16_t x144 = INT16_MAX;
	static volatile uint64_t t34 = 61864723374LLU;

	t34 = ((x141^(x142<=x143))-x144);

	if (t34 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x146 = INT16_MAX;
	int8_t x147 = INT8_MIN;
	static volatile uint64_t t35 = 312254785294840LLU;

	t35 = ((x145^(x146<=x147))-x148);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x149 = 17U;
	uint16_t x151 = 1U;
	int32_t x152 = -17595313;
	static volatile int32_t t36 = 13693223;

	t36 = ((x149^(x150<=x151))-x152);

	if (t36 != 17595330) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x153 = UINT64_MAX;
	int32_t x154 = 118096136;
	volatile int16_t x155 = INT16_MIN;
	int64_t x156 = 518433832445LL;
	uint64_t t37 = 725LLU;

	t37 = ((x153^(x154<=x155))-x156);

	if (t37 != 18446743555275719170LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = INT16_MAX;
	int64_t x158 = INT64_MIN;
	volatile int32_t x159 = -2317;
	volatile uint64_t t38 = 216195486392LLU;

	t38 = ((x157^(x158<=x159))-x160);

	if (t38 != 18174317593497266264LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = 723;
	static uint8_t x162 = 2U;
	int16_t x163 = -1;

	t39 = ((x161^(x162<=x163))-x164);

	if (t39 != 724) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x165 = INT8_MIN;
	int64_t x166 = 1LL;
	static int32_t x167 = 49552210;
	static int8_t x168 = INT8_MIN;
	volatile int32_t t40 = 1055306675;

	t40 = ((x165^(x166<=x167))-x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x170 = 83214LLU;
	static volatile int64_t x172 = 714671LL;
	uint64_t t41 = 50LLU;

	t41 = ((x169^(x170<=x171))-x172);

	if (t41 != 18446744073708836943LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x173 = 6;
	int8_t x174 = INT8_MAX;
	uint8_t x175 = 107U;
	volatile uint16_t x176 = UINT16_MAX;

	t42 = ((x173^(x174<=x175))-x176);

	if (t42 != -65529) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = -1;
	volatile uint32_t x178 = 32493U;
	static int16_t x180 = INT16_MIN;
	volatile int32_t t43 = -32603751;

	t43 = ((x177^(x178<=x179))-x180);

	if (t43 != 32766) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x181 = INT16_MIN;
	static int32_t x182 = INT32_MAX;
	int16_t x183 = INT16_MAX;
	int8_t x184 = INT8_MAX;
	int32_t t44 = 51;

	t44 = ((x181^(x182<=x183))-x184);

	if (t44 != -32895) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -2465LL;
	int16_t x186 = INT16_MAX;
	int32_t x187 = 136419;
	int64_t x188 = 24675LL;
	volatile int64_t t45 = 43315465887380LL;

	t45 = ((x185^(x186<=x187))-x188);

	if (t45 != -27141LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MIN;
	int32_t x190 = INT32_MIN;
	int16_t x191 = INT16_MIN;
	static uint32_t x192 = UINT32_MAX;
	static uint32_t t46 = 691U;

	t46 = ((x189^(x190<=x191))-x192);

	if (t46 != 4294934530U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x206 = -420;
	int32_t x207 = -1;
	volatile uint16_t x208 = UINT16_MAX;
	static int64_t t47 = -62LL;

	t47 = ((x205^(x206<=x207))-x208);

	if (t47 != -65537LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x210 = -1LL;
	volatile uint16_t x211 = 2356U;
	static uint64_t x212 = 15342613395862LLU;

	t48 = ((x209^(x210<=x211))-x212);

	if (t48 != 18446728728948672107LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = -1;
	uint32_t x214 = 2U;
	volatile uint64_t x215 = UINT64_MAX;
	static int64_t x216 = -4201341504920LL;
	volatile int64_t t49 = 0LL;

	t49 = ((x213^(x214<=x215))-x216);

	if (t49 != 4201341504918LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = 0;
	int16_t x218 = -1;

	t50 = ((x217^(x218<=x219))-x220);

	if (t50 != 3514364169U) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x221 = INT16_MAX;
	static uint8_t x222 = UINT8_MAX;
	int64_t x223 = -1LL;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t51 = -24531;

	t51 = ((x221^(x222<=x223))-x224);

	if (t51 != 32512) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x225 = 27U;
	int8_t x226 = -1;
	int16_t x227 = INT16_MIN;
	int32_t x228 = INT32_MAX;
	int32_t t52 = -5087187;

	t52 = ((x225^(x226<=x227))-x228);

	if (t52 != -2147483620) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x230 = UINT16_MAX;
	int8_t x231 = -1;
	int8_t x232 = INT8_MAX;
	static volatile int32_t t53 = 373422;

	t53 = ((x229^(x230<=x231))-x232);

	if (t53 != 5283) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x233 = 2015;
	int32_t x234 = INT32_MIN;
	volatile int8_t x235 = -1;
	uint64_t x236 = 980092497611933LLU;
	volatile uint64_t t54 = 3326613841727333593LLU;

	t54 = ((x233^(x234<=x235))-x236);

	if (t54 != 18445763981211941697LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x237 = INT64_MIN;
	static int16_t x238 = INT16_MIN;
	static int32_t x239 = INT32_MIN;
	int64_t t55 = -56516765795280LL;

	t55 = ((x237^(x238<=x239))-x240);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = INT64_MIN;
	static volatile uint16_t x242 = 177U;
	int16_t x243 = INT16_MAX;
	static int16_t x244 = INT16_MIN;
	volatile int64_t t56 = 11LL;

	t56 = ((x241^(x242<=x243))-x244);

	if (t56 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = INT16_MIN;
	uint64_t x246 = 286001532918952610LLU;
	int16_t x247 = INT16_MIN;
	static int64_t x248 = INT64_MIN;

	t57 = ((x245^(x246<=x247))-x248);

	if (t57 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x250 = -1;
	int32_t x251 = INT32_MIN;
	int64_t t58 = -314LL;

	t58 = ((x249^(x250<=x251))-x252);

	if (t58 != -1828737788776LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x253 = 3U;
	int64_t x254 = -1LL;
	static uint32_t x255 = UINT32_MAX;
	static int32_t t59 = -400;

	t59 = ((x253^(x254<=x255))-x256);

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = -7;
	static int8_t x258 = -1;
	static int16_t x260 = -17;
	int32_t t60 = -342199750;

	t60 = ((x257^(x258<=x259))-x260);

	if (t60 != 9) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x262 = -1;
	uint16_t x263 = 0U;
	int32_t t61 = 390;

	t61 = ((x261^(x262<=x263))-x264);

	if (t61 != -7) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x265 = 10U;
	uint8_t x266 = 59U;
	static uint64_t x267 = 30484511744283046LLU;
	static uint8_t x268 = 7U;
	volatile int32_t t62 = 21349;

	t62 = ((x265^(x266<=x267))-x268);

	if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x269 = 0U;
	int64_t x270 = INT64_MIN;
	uint32_t x271 = 588803U;
	uint16_t x272 = UINT16_MAX;
	int32_t t63 = -360192;

	t63 = ((x269^(x270<=x271))-x272);

	if (t63 != -65534) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = -1;
	static int64_t x278 = -1LL;
	static int64_t x279 = 1LL;
	int8_t x280 = INT8_MIN;
	int32_t t64 = -49732834;

	t64 = ((x277^(x278<=x279))-x280);

	if (t64 != 126) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = -1;
	volatile int32_t x282 = -1;
	int8_t x283 = 3;
	static volatile uint8_t x284 = 6U;
	volatile int32_t t65 = 142;

	t65 = ((x281^(x282<=x283))-x284);

	if (t65 != -8) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = INT8_MIN;
	volatile int16_t x287 = 3239;
	uint64_t x288 = UINT64_MAX;

	t66 = ((x285^(x286<=x287))-x288);

	if (t66 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x290 = -1LL;
	int32_t x291 = -1;
	int16_t x292 = INT16_MIN;
	static volatile int32_t t67 = 17;

	t67 = ((x289^(x290<=x291))-x292);

	if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x293 = 1926308038U;
	int8_t x295 = INT8_MIN;
	volatile int16_t x296 = INT16_MIN;
	uint32_t t68 = 13189U;

	t68 = ((x293^(x294<=x295))-x296);

	if (t68 != 1926340806U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x298 = 1U;
	int8_t x299 = INT8_MAX;
	int8_t x300 = INT8_MIN;
	uint64_t t69 = 47438093LLU;

	t69 = ((x297^(x298<=x299))-x300);

	if (t69 != 1815207648655LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x301 = -7;
	uint32_t x302 = 2643U;
	uint8_t x303 = 2U;
	uint16_t x304 = UINT16_MAX;
	int32_t t70 = 558027511;

	t70 = ((x301^(x302<=x303))-x304);

	if (t70 != -65542) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x305 = -15;
	int16_t x306 = -1554;
	int8_t x307 = INT8_MIN;
	int32_t t71 = -428265;

	t71 = ((x305^(x306<=x307))-x308);

	if (t71 != 112) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = INT64_MIN;
	static uint32_t x310 = UINT32_MAX;
	uint32_t x311 = UINT32_MAX;
	static int16_t x312 = INT16_MIN;
	volatile int64_t t72 = 17268024820LL;

	t72 = ((x309^(x310<=x311))-x312);

	if (t72 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = INT16_MIN;
	volatile uint16_t x316 = UINT16_MAX;
	int32_t t73 = 29;

	t73 = ((x313^(x314<=x315))-x316);

	if (t73 != -98302) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x321 = INT64_MIN;
	uint64_t x323 = UINT64_MAX;
	uint64_t t74 = 20103585186301LLU;

	t74 = ((x321^(x322<=x323))-x324);

	if (t74 != 9223372031851915421LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x325 = 2491762843419LLU;
	int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MAX;
	volatile uint64_t t75 = 530441306LLU;

	t75 = ((x325^(x326<=x327))-x328);

	if (t75 != 2489615359771LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x329 = UINT32_MAX;
	int8_t x330 = INT8_MIN;
	static uint32_t t76 = 631U;

	t76 = ((x329^(x330<=x331))-x332);

	if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x334 = -1;
	volatile uint32_t x336 = 117U;
	static uint32_t t77 = 10823447U;

	t77 = ((x333^(x334<=x335))-x336);

	if (t77 != 4294967206U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x341 = -1LL;
	static volatile int16_t x342 = INT16_MAX;
	int8_t x343 = INT8_MIN;

	t78 = ((x341^(x342<=x343))-x344);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x345 = INT32_MIN;
	uint8_t x346 = 12U;
	int64_t x347 = -1LL;
	static volatile int16_t x348 = INT16_MIN;
	static int32_t t79 = 6;

	t79 = ((x345^(x346<=x347))-x348);

	if (t79 != -2147450880) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x353 = INT32_MIN;
	uint64_t x354 = 975753254478553780LLU;
	uint8_t x355 = 1U;
	static uint32_t x356 = 217U;
	uint32_t t80 = 1600606U;

	t80 = ((x353^(x354<=x355))-x356);

	if (t80 != 2147483431U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x357 = INT16_MAX;
	int8_t x358 = -1;
	int16_t x359 = INT16_MIN;
	uint32_t x360 = 0U;
	uint32_t t81 = 7491U;

	t81 = ((x357^(x358<=x359))-x360);

	if (t81 != 32767U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x361 = UINT64_MAX;
	int64_t x362 = -418334LL;
	static int16_t x363 = -1;

	t82 = ((x361^(x362<=x363))-x364);

	if (t82 != 18446744073708482605LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x365 = UINT8_MAX;
	static int32_t x366 = INT32_MIN;
	volatile int64_t x367 = -2671182722677LL;
	static uint16_t x368 = 2660U;

	t83 = ((x365^(x366<=x367))-x368);

	if (t83 != -2405) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x369 = 50;
	volatile uint64_t x370 = 1LLU;
	uint8_t x371 = 0U;
	uint16_t x372 = 22503U;
	int32_t t84 = -6925050;

	t84 = ((x369^(x370<=x371))-x372);

	if (t84 != -22453) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x373 = 55U;
	static uint64_t x374 = UINT64_MAX;
	int8_t x375 = -1;
	uint16_t x376 = 475U;
	int32_t t85 = -384748462;

	t85 = ((x373^(x374<=x375))-x376);

	if (t85 != -421) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = INT8_MIN;
	int64_t x378 = INT64_MIN;
	int8_t x379 = -1;
	int32_t t86 = -137193;

	t86 = ((x377^(x378<=x379))-x380);

	if (t86 != -142) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x381 = INT32_MAX;
	static volatile int64_t x382 = INT64_MAX;
	static uint32_t x383 = UINT32_MAX;
	volatile int32_t t87 = 0;

	t87 = ((x381^(x382<=x383))-x384);

	if (t87 != 2147483643) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x386 = INT8_MAX;
	static int16_t x388 = -7814;
	volatile int32_t t88 = -1436113;

	t88 = ((x385^(x386<=x387))-x388);

	if (t88 != 7813) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x389 = -1;
	int16_t x390 = -1;
	uint64_t x391 = UINT64_MAX;
	static volatile int8_t x392 = INT8_MIN;
	static volatile int32_t t89 = 399058;

	t89 = ((x389^(x390<=x391))-x392);

	if (t89 != 126) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = -1LL;
	int32_t x394 = -43927;
	int16_t x395 = 13103;
	volatile uint32_t x396 = 129086U;

	t90 = ((x393^(x394<=x395))-x396);

	if (t90 != -129088LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x397 = 12032U;
	uint8_t x398 = 14U;
	int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MAX;

	t91 = ((x397^(x398<=x399))-x400);

	if (t91 != -20735) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x401 = 22U;
	static int64_t x402 = -1LL;
	int64_t x404 = -72074103LL;
	int64_t t92 = 456561790LL;

	t92 = ((x401^(x402<=x403))-x404);

	if (t92 != 72074126LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = INT16_MAX;

	t93 = ((x405^(x406<=x407))-x408);

	if (t93 != 32768LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x409 = UINT8_MAX;
	int16_t x410 = -226;
	uint16_t x411 = 1618U;
	static uint8_t x412 = UINT8_MAX;

	t94 = ((x409^(x410<=x411))-x412);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x413 = UINT8_MAX;
	int8_t x415 = INT8_MAX;
	int8_t x416 = -2;
	volatile int32_t t95 = 980;

	t95 = ((x413^(x414<=x415))-x416);

	if (t95 != 256) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x417 = INT32_MIN;
	static int32_t x418 = INT32_MAX;
	int16_t x419 = INT16_MIN;
	uint32_t x420 = 20U;
	volatile uint32_t t96 = 185684555U;

	t96 = ((x417^(x418<=x419))-x420);

	if (t96 != 2147483628U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x421 = -1;
	uint8_t x422 = 3U;
	int16_t x423 = 7;
	int32_t t97 = -823745584;

	t97 = ((x421^(x422<=x423))-x424);

	if (t97 != -129) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x425 = UINT32_MAX;
	uint32_t x428 = 1427393U;
	volatile uint32_t t98 = 9U;

	t98 = ((x425^(x426<=x427))-x428);

	if (t98 != 4293539902U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x429 = -43167;
	static uint32_t x431 = 75U;
	int8_t x432 = -1;
	int32_t t99 = -48711646;

	t99 = ((x429^(x430<=x431))-x432);

	if (t99 != -43166) { NG(); } else { ; }
	
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


    return 0;
}

