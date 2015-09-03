#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t1 = -1LL;
uint16_t x15 = 1U;
volatile uint8_t x16 = UINT8_MAX;
int32_t t3 = 1;
volatile int64_t x40 = INT64_MIN;
uint16_t x46 = 3719U;
uint32_t x47 = UINT32_MAX;
int8_t x48 = -38;
uint8_t x50 = UINT8_MAX;
static volatile uint64_t t8 = 5266LLU;
volatile uint64_t t9 = 22547LLU;
int16_t x69 = 101;
volatile int16_t x86 = 91;
uint32_t x89 = 96985U;
volatile int8_t x90 = INT8_MIN;
static int64_t x92 = INT64_MIN;
int16_t x107 = -1;
uint8_t x113 = UINT8_MAX;
static uint64_t x116 = UINT64_MAX;
int8_t x121 = 24;
uint32_t x123 = 7U;
int32_t x141 = INT32_MIN;
uint8_t x143 = 10U;
static int8_t x150 = INT8_MIN;
uint32_t x158 = 897231741U;
int16_t x162 = INT16_MIN;
int64_t x169 = 670LL;
static int64_t x170 = 548LL;
int32_t x171 = -1;
static uint16_t x177 = 3U;
int32_t x180 = -9278596;
static int8_t x184 = INT8_MIN;
uint32_t x188 = 126U;
int64_t t32 = 23526LL;
uint32_t x197 = 352U;
int32_t x199 = -1;
uint64_t x218 = UINT64_MAX;
static uint64_t x227 = 324974LLU;
uint8_t x233 = 30U;
static int64_t x236 = INT64_MAX;
static uint64_t x238 = UINT64_MAX;
uint64_t t40 = 94827657743697782LLU;
int32_t x249 = INT32_MIN;
uint8_t x254 = UINT8_MAX;
int64_t x256 = INT64_MAX;
volatile uint8_t x261 = 1U;
static int64_t x263 = -1LL;
int16_t x264 = 8;
uint16_t x268 = 526U;
static uint64_t t45 = 5201LLU;
volatile int64_t t46 = -7079LL;
volatile int32_t x277 = 55750;
int16_t x280 = -20;
volatile int64_t t47 = -505789602576LL;
static int64_t t48 = -7LL;
volatile int8_t x289 = -1;
static volatile uint16_t x294 = 237U;
uint8_t x295 = 21U;
static int16_t x296 = -14;
int64_t x297 = -15LL;
volatile uint64_t x318 = 11921LLU;
static int32_t x321 = -1;
volatile uint32_t x344 = 11096U;
int16_t x345 = -1;
volatile int32_t t60 = INT32_MIN;
volatile uint16_t x353 = UINT16_MAX;
static uint8_t x368 = 110U;
static volatile uint8_t x377 = UINT8_MAX;
uint8_t x378 = 15U;
volatile int64_t x385 = -489793816LL;
volatile int16_t x388 = -1;
uint16_t x389 = UINT16_MAX;
uint64_t x391 = 124624710LLU;
int16_t x409 = -1;
uint32_t x413 = UINT32_MAX;
volatile uint64_t x414 = 13LLU;
int32_t x415 = INT32_MIN;
int16_t x422 = -1647;
int64_t t77 = 125451607904496002LL;
static int8_t x447 = -1;
uint32_t t81 = 111759U;
volatile int8_t x477 = INT8_MIN;
int16_t x479 = INT16_MIN;
int16_t x490 = -2088;
volatile int32_t t86 = 462;
int8_t x498 = 1;
int64_t x509 = INT64_MIN;
int16_t x510 = 404;
int64_t x524 = 2331LL;
int16_t x527 = -1;
uint32_t x529 = 43809U;
uint64_t x531 = 104052519LLU;
static int16_t x544 = INT16_MIN;
int8_t x547 = INT8_MAX;
uint32_t x548 = 31727732U;


void f0(void) {
	volatile uint8_t x1 = 2U;
	volatile uint16_t x2 = UINT16_MAX;
	int16_t x3 = INT16_MIN;
	int8_t x4 = -6;
	volatile int32_t t0 = -10;

	t0 = ((x1%(x2*x3))^x4);

	if (t0 != -8) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x9 = 209854;
	uint16_t x10 = UINT16_MAX;
	int8_t x11 = -1;
	int64_t x12 = INT64_MIN;

	t1 = ((x9%(x10*x11))^x12);

	if (t1 != -9223372036854762559LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = -1LL;
	volatile int64_t x14 = INT64_MAX;
	volatile int64_t t2 = -1861007682307LL;

	t2 = ((x13%(x14*x15))^x16);

	if (t2 != -256LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 5U;
	uint8_t x18 = 17U;
	int16_t x19 = INT16_MIN;
	int32_t x20 = INT32_MAX;

	t3 = ((x17%(x18*x19))^x20);

	if (t3 != 2147483642) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	int8_t x22 = INT8_MIN;
	int64_t x23 = 38683011LL;
	int32_t x24 = 7;
	int64_t t4 = -1111718919732427LL;

	t4 = ((x21%(x22*x23))^x24);

	if (t4 != -1860876793LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = INT64_MIN;
	uint32_t x34 = 118U;
	uint8_t x35 = 103U;
	volatile int16_t x36 = INT16_MIN;
	int64_t t5 = -6582224007LL;

	t5 = ((x33%(x34*x35))^x36);

	if (t5 != 31556LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = 51U;
	uint64_t x38 = 6711414LLU;
	uint32_t x39 = 39324U;
	static volatile uint64_t t6 = 3201174881116579LLU;

	t6 = ((x37%(x38*x39))^x40);

	if (t6 != 9223372036854775859LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x45 = UINT16_MAX;
	static volatile uint32_t t7 = 9U;

	t7 = ((x45%(x46*x47))^x48);

	if (t7 != 4294901797U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = 2;
	uint64_t x51 = 84267622557904LLU;
	static int8_t x52 = -1;

	t8 = ((x49%(x50*x51))^x52);

	if (t8 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = 58;
	volatile int8_t x54 = 3;
	int8_t x55 = INT8_MIN;
	volatile uint64_t x56 = 39920920376862LLU;

	t9 = ((x53%(x54*x55))^x56);

	if (t9 != 39920920376868LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x61 = 6652329;
	volatile int8_t x62 = INT8_MIN;
	int16_t x63 = -1;
	uint16_t x64 = 3300U;
	volatile int32_t t10 = 18;

	t10 = ((x61%(x62*x63))^x64);

	if (t10 != 3277) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x65 = INT64_MIN;
	int8_t x66 = 32;
	volatile int16_t x67 = 15545;
	int32_t x68 = -85121092;
	int64_t t11 = -971598451060986LL;

	t11 = ((x65%(x66*x67))^x68);

	if (t11 != 85360188LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x70 = UINT64_MAX;
	uint64_t x71 = UINT64_MAX;
	static uint8_t x72 = 2U;
	static volatile uint64_t t12 = 8011141250924478315LLU;

	t12 = ((x69%(x70*x71))^x72);

	if (t12 != 2LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x85 = INT8_MAX;
	uint8_t x87 = 14U;
	static int64_t x88 = INT64_MIN;
	int64_t t13 = -48857427530473LL;

	t13 = ((x85%(x86*x87))^x88);

	if (t13 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x91 = -1788;
	int64_t t14 = 26968607496383477LL;

	t14 = ((x89%(x90*x91))^x92);

	if (t14 != -9223372036854678823LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x97 = 1U;
	int8_t x98 = -1;
	int64_t x99 = -1LL;
	int8_t x100 = -29;
	volatile int64_t t15 = 14176312LL;

	t15 = ((x97%(x98*x99))^x100);

	if (t15 != -29LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x105 = INT32_MIN;
	int16_t x106 = INT16_MIN;
	uint8_t x108 = UINT8_MAX;
	int32_t t16 = 751631398;

	t16 = ((x105%(x106*x107))^x108);

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x109 = -12696824;
	static int8_t x110 = INT8_MAX;
	int32_t x111 = -1;
	int16_t x112 = INT16_MAX;
	volatile int32_t t17 = 0;

	t17 = ((x109%(x110*x111))^x112);

	if (t17 != -32643) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x114 = 55005522665563LLU;
	uint32_t x115 = UINT32_MAX;
	uint64_t t18 = 30067LLU;

	t18 = ((x113%(x114*x115))^x116);

	if (t18 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x122 = UINT64_MAX;
	int64_t x124 = INT64_MIN;
	static uint64_t t19 = 6272197896LLU;

	t19 = ((x121%(x122*x123))^x124);

	if (t19 != 9223372036854775832LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x129 = 54U;
	uint64_t x130 = 2587009LLU;
	int64_t x131 = INT64_MAX;
	static int16_t x132 = INT16_MIN;
	static uint64_t t20 = 42899912LLU;

	t20 = ((x129%(x130*x131))^x132);

	if (t20 != 18446744073709518902LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x137 = -1LL;
	int8_t x138 = INT8_MIN;
	static int32_t x139 = 196998;
	static int8_t x140 = INT8_MAX;
	int64_t t21 = -2115317946642LL;

	t21 = ((x137%(x138*x139))^x140);

	if (t21 != -128LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x142 = INT8_MIN;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t22 = 1476LLU;

	t22 = ((x141%(x142*x143))^x144);

	if (t22 != 767LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x145 = 3672564495360069LLU;
	static uint32_t x146 = UINT32_MAX;
	uint16_t x147 = 6U;
	int32_t x148 = -37783;
	uint64_t t23 = 6638903340220LLU;

	t23 = ((x145%(x146*x147))^x148);

	if (t23 != 18446744071319323962LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x149 = 10666;
	uint64_t x151 = 8609918496580LLU;
	volatile int8_t x152 = INT8_MAX;
	volatile uint64_t t24 = 7487467LLU;

	t24 = ((x149%(x150*x151))^x152);

	if (t24 != 10709LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x153 = UINT64_MAX;
	volatile uint32_t x154 = 725U;
	uint8_t x155 = UINT8_MAX;
	uint16_t x156 = 220U;
	static uint64_t t25 = 272929604124698829LLU;

	t25 = ((x153%(x154*x155))^x156);

	if (t25 != 133161LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x157 = 112LLU;
	int8_t x159 = -1;
	int64_t x160 = INT64_MIN;
	static uint64_t t26 = 14727070018100LLU;

	t26 = ((x157%(x158*x159))^x160);

	if (t26 != 9223372036854775920LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x161 = 1;
	int8_t x163 = -1;
	static int32_t x164 = INT32_MAX;
	static int32_t t27 = -7505;

	t27 = ((x161%(x162*x163))^x164);

	if (t27 != 2147483646) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x165 = INT8_MIN;
	int64_t x166 = -1LL;
	static uint64_t x167 = 940132LLU;
	int64_t x168 = -6182917161280LL;
	volatile uint64_t t28 = 4422163LLU;

	t28 = ((x165%(x166*x167))^x168);

	if (t28 != 18446737890792007972LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x172 = INT8_MAX;
	int64_t t29 = 217169LL;

	t29 = ((x169%(x170*x171))^x172);

	if (t29 != 5LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x178 = -55LL;
	uint16_t x179 = UINT16_MAX;
	int64_t t30 = -4606LL;

	t30 = ((x177%(x178*x179))^x180);

	if (t30 != -9278593LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x181 = 53;
	volatile uint16_t x182 = UINT16_MAX;
	uint64_t x183 = 3297099319LLU;
	uint64_t t31 = 6092126795010LLU;

	t31 = ((x181%(x182*x183))^x184);

	if (t31 != 18446744073709551541LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x185 = INT64_MAX;
	int8_t x186 = INT8_MIN;
	int8_t x187 = INT8_MIN;

	t32 = ((x185%(x186*x187))^x188);

	if (t32 != 16257LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x193 = 105379U;
	static uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MIN;
	static int16_t x196 = INT16_MIN;
	volatile uint32_t t33 = 57U;

	t33 = ((x193%(x194*x195))^x196);

	if (t33 != 4294941603U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x198 = -181;
	int64_t x200 = -1LL;
	int64_t t34 = -16634853701245704LL;

	t34 = ((x197%(x198*x199))^x200);

	if (t34 != -172LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x209 = UINT32_MAX;
	uint8_t x210 = UINT8_MAX;
	int8_t x211 = INT8_MIN;
	uint16_t x212 = 12816U;
	uint32_t t35 = 24U;

	t35 = ((x209%(x210*x211))^x212);

	if (t35 != 19823U) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x217 = -1;
	volatile int64_t x219 = INT64_MIN;
	int32_t x220 = 352;
	volatile uint64_t t36 = 2967766442795523478LLU;

	t36 = ((x217%(x218*x219))^x220);

	if (t36 != 9223372036854775455LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x221 = 434U;
	int16_t x222 = INT16_MIN;
	int64_t x223 = -1LL;
	volatile int16_t x224 = INT16_MAX;
	volatile int64_t t37 = -11825LL;

	t37 = ((x221%(x222*x223))^x224);

	if (t37 != 32333LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x225 = INT32_MAX;
	int16_t x226 = -1;
	int64_t x228 = INT64_MAX;
	static uint64_t t38 = 14LLU;

	t38 = ((x225%(x226*x227))^x228);

	if (t38 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x234 = INT16_MIN;
	int64_t x235 = -1LL;
	volatile int64_t t39 = -4189189045252609457LL;

	t39 = ((x233%(x234*x235))^x236);

	if (t39 != 9223372036854775777LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x237 = INT16_MIN;
	volatile int16_t x239 = INT16_MIN;
	uint32_t x240 = 105124U;

	t40 = ((x237%(x238*x239))^x240);

	if (t40 != 105124LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x241 = INT16_MIN;
	int8_t x242 = -7;
	static int16_t x243 = INT16_MAX;
	static uint16_t x244 = 350U;
	static volatile int32_t t41 = 0;

	t41 = ((x241%(x242*x243))^x244);

	if (t41 != -32418) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x250 = -177;
	static uint16_t x251 = 92U;
	volatile int16_t x252 = 7122;
	volatile int32_t t42 = 1718215;

	t42 = ((x249%(x250*x251))^x252);

	if (t42 != -8670) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x253 = UINT16_MAX;
	static int32_t x255 = -60;
	static int64_t t43 = 1793043447944LL;

	t43 = ((x253%(x254*x255))^x256);

	if (t43 != 9223372036854771472LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x262 = INT16_MIN;
	static int64_t t44 = 66163125581425171LL;

	t44 = ((x261%(x262*x263))^x264);

	if (t44 != 9LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x265 = UINT64_MAX;
	uint32_t x266 = 6U;
	uint64_t x267 = UINT64_MAX;

	t45 = ((x265%(x266*x267))^x268);

	if (t45 != 523LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x269 = 5720U;
	static uint16_t x270 = 8U;
	int16_t x271 = -1376;
	static int64_t x272 = INT64_MIN;

	t46 = ((x269%(x270*x271))^x272);

	if (t46 != -9223372036854770088LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x278 = 27;
	volatile int64_t x279 = 149919078956495LL;

	t47 = ((x277%(x278*x279))^x280);

	if (t47 != -55766LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x285 = -1LL;
	uint8_t x286 = 61U;
	int16_t x287 = INT16_MIN;
	int32_t x288 = -1;

	t48 = ((x285%(x286*x287))^x288);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x290 = UINT64_MAX;
	static uint8_t x291 = 7U;
	static int16_t x292 = -1;
	volatile uint64_t t49 = 4054LLU;

	t49 = ((x289%(x290*x291))^x292);

	if (t49 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x293 = -1;
	static volatile int32_t t50 = 27354487;

	t50 = ((x293%(x294*x295))^x296);

	if (t50 != 13) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x298 = INT64_MIN;
	uint64_t x299 = UINT64_MAX;
	volatile uint8_t x300 = UINT8_MAX;
	uint64_t t51 = 39321745379611621LLU;

	t51 = ((x297%(x298*x299))^x300);

	if (t51 != 9223372036854775566LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x301 = -672LL;
	uint32_t x302 = 403774570U;
	volatile int16_t x303 = INT16_MAX;
	static int64_t x304 = -1LL;
	static int64_t t52 = 2053546839333032LL;

	t52 = ((x301%(x302*x303))^x304);

	if (t52 != 671LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x309 = 80836157501430847LLU;
	int8_t x310 = -1;
	int16_t x311 = INT16_MAX;
	uint8_t x312 = 81U;
	uint64_t t53 = 144680749133596LLU;

	t53 = ((x309%(x310*x311))^x312);

	if (t53 != 80836157501430894LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x313 = 2U;
	uint16_t x314 = 805U;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = UINT32_MAX;
	uint32_t t54 = 109U;

	t54 = ((x313%(x314*x315))^x316);

	if (t54 != 4294967293U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x317 = 2;
	uint64_t x319 = 390759028647LLU;
	volatile int16_t x320 = -1;
	uint64_t t55 = 109284514843287795LLU;

	t55 = ((x317%(x318*x319))^x320);

	if (t55 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x322 = INT16_MIN;
	int8_t x323 = -14;
	uint16_t x324 = 15U;
	int32_t t56 = -13;

	t56 = ((x321%(x322*x323))^x324);

	if (t56 != -16) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x329 = 2214930U;
	volatile uint8_t x330 = 1U;
	int16_t x331 = INT16_MAX;
	static uint8_t x332 = 114U;
	static uint32_t t57 = 8250310U;

	t57 = ((x329%(x330*x331))^x332);

	if (t57 != 19495U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x333 = 46;
	int64_t x334 = -34488072817702LL;
	static int16_t x335 = INT16_MAX;
	int16_t x336 = -1;
	int64_t t58 = -7LL;

	t58 = ((x333%(x334*x335))^x336);

	if (t58 != -47LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x341 = INT64_MAX;
	int16_t x342 = INT16_MIN;
	uint32_t x343 = 5327U;
	static volatile int64_t t59 = -14833LL;

	t59 = ((x341%(x342*x343))^x344);

	if (t59 != 1758188711LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x346 = -1;
	int16_t x347 = -1;
	int32_t x348 = INT32_MIN;

	t60 = ((x345%(x346*x347))^x348);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x349 = INT32_MAX;
	int64_t x350 = 2LL;
	volatile int16_t x351 = INT16_MAX;
	int16_t x352 = INT16_MIN;
	int64_t t61 = -2LL;

	t61 = ((x349%(x350*x351))^x352);

	if (t61 != -32767LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x354 = INT8_MIN;
	int8_t x355 = -38;
	uint64_t x356 = 480765044LLU;
	uint64_t t62 = 14847235883470631LLU;

	t62 = ((x353%(x354*x355))^x356);

	if (t62 != 480767115LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x361 = UINT16_MAX;
	uint32_t x362 = 37U;
	uint32_t x363 = 69032799U;
	static int16_t x364 = 2006;
	volatile uint32_t t63 = 1236U;

	t63 = ((x361%(x362*x363))^x364);

	if (t63 != 63529U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x365 = 23;
	uint64_t x366 = UINT64_MAX;
	static int16_t x367 = INT16_MIN;
	uint64_t t64 = 259319059923069723LLU;

	t64 = ((x365%(x366*x367))^x368);

	if (t64 != 121LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x373 = UINT32_MAX;
	int64_t x374 = -1LL;
	int8_t x375 = INT8_MIN;
	volatile int64_t x376 = -1LL;
	static volatile int64_t t65 = 8200043044LL;

	t65 = ((x373%(x374*x375))^x376);

	if (t65 != -128LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x379 = 10;
	volatile int16_t x380 = INT16_MAX;
	int32_t t66 = -1203;

	t66 = ((x377%(x378*x379))^x380);

	if (t66 != 32662) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x386 = 891074U;
	int8_t x387 = INT8_MIN;
	volatile int64_t t67 = -278569791961891257LL;

	t67 = ((x385%(x386*x387))^x388);

	if (t67 != 489793815LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x390 = -49;
	static int64_t x392 = -1LL;
	static volatile uint64_t t68 = 3679LLU;

	t68 = ((x389%(x390*x391))^x392);

	if (t68 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x393 = INT32_MIN;
	uint64_t x394 = 1743011790861LLU;
	int16_t x395 = INT16_MIN;
	uint64_t x396 = 31471904716541055LLU;
	uint64_t t69 = 624914041LLU;

	t69 = ((x393%(x394*x395))^x396);

	if (t69 != 46485478833015935LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x397 = UINT64_MAX;
	int64_t x398 = -1LL;
	static uint64_t x399 = 250LLU;
	volatile uint8_t x400 = 1U;
	volatile uint64_t t70 = 196318497LLU;

	t70 = ((x397%(x398*x399))^x400);

	if (t70 != 248LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x401 = INT8_MIN;
	volatile int16_t x402 = INT16_MAX;
	volatile uint64_t x403 = 5LLU;
	uint8_t x404 = 8U;
	static uint64_t t71 = 2LLU;

	t71 = ((x401%(x402*x403))^x404);

	if (t71 != 163715LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x410 = 13U;
	int32_t x411 = -1;
	int8_t x412 = 1;
	static uint32_t t72 = 25856U;

	t72 = ((x409%(x410*x411))^x412);

	if (t72 != 13U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x416 = -1LL;
	volatile uint64_t t73 = 1042LLU;

	t73 = ((x413%(x414*x415))^x416);

	if (t73 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x421 = -1;
	int64_t x423 = -34225LL;
	static int64_t x424 = -45813034866049458LL;
	volatile int64_t t74 = -342265LL;

	t74 = ((x421%(x422*x423))^x424);

	if (t74 != 45813034866049457LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x425 = 11293;
	static volatile int32_t x426 = -4;
	int16_t x427 = INT16_MAX;
	int16_t x428 = 1138;
	volatile int32_t t75 = 31378;

	t75 = ((x425%(x426*x427))^x428);

	if (t75 != 10351) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x429 = 0;
	volatile int64_t x430 = 95LL;
	int16_t x431 = INT16_MIN;
	int16_t x432 = -1;
	int64_t t76 = 5261124LL;

	t76 = ((x429%(x430*x431))^x432);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x433 = 145LL;
	uint16_t x434 = 655U;
	int16_t x435 = 2380;
	int8_t x436 = INT8_MIN;

	t77 = ((x433%(x434*x435))^x436);

	if (t77 != -239LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x441 = UINT32_MAX;
	static int8_t x442 = INT8_MIN;
	int8_t x443 = INT8_MIN;
	volatile int32_t x444 = 182680933;
	volatile uint32_t t78 = 646137106U;

	t78 = ((x441%(x442*x443))^x444);

	if (t78 != 182665882U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x445 = 36;
	uint64_t x446 = UINT64_MAX;
	int8_t x448 = -1;
	uint64_t t79 = UINT64_MAX;

	t79 = ((x445%(x446*x447))^x448);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x449 = 1U;
	uint64_t x450 = 278818025LLU;
	int16_t x451 = INT16_MIN;
	uint16_t x452 = UINT16_MAX;
	volatile uint64_t t80 = 6055800LLU;

	t80 = ((x449%(x450*x451))^x452);

	if (t80 != 65534LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x457 = -6;
	volatile uint32_t x458 = UINT32_MAX;
	static volatile int16_t x459 = 10152;
	uint32_t x460 = 12045U;

	t81 = ((x457%(x458*x459))^x460);

	if (t81 != 2223U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x465 = 2U;
	uint32_t x466 = UINT32_MAX;
	static int64_t x467 = -1LL;
	uint16_t x468 = 59U;
	static volatile int64_t t82 = 1247068489329346241LL;

	t82 = ((x465%(x466*x467))^x468);

	if (t82 != 57LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x478 = 89;
	uint64_t x480 = 408496529297913LLU;
	uint64_t t83 = 2227523019LLU;

	t83 = ((x477%(x478*x479))^x480);

	if (t83 != 18446335577180253817LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x481 = 1842174114U;
	static uint8_t x482 = 2U;
	int16_t x483 = INT16_MIN;
	int64_t x484 = 1533390544185828LL;
	int64_t t84 = -338LL;

	t84 = ((x481%(x482*x483))^x484);

	if (t84 != 1533389819441478LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x489 = -27;
	uint8_t x491 = 4U;
	static int32_t x492 = 893;
	int32_t t85 = -62;

	t85 = ((x489%(x490*x491))^x492);

	if (t85 != -872) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x493 = 1586U;
	int8_t x494 = 4;
	volatile int16_t x495 = -13334;
	volatile uint8_t x496 = UINT8_MAX;

	t86 = ((x493%(x494*x495))^x496);

	if (t86 != 1741) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x497 = UINT32_MAX;
	static int8_t x499 = -1;
	static int8_t x500 = INT8_MIN;
	static volatile uint32_t t87 = 1104U;

	t87 = ((x497%(x498*x499))^x500);

	if (t87 != 4294967168U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x505 = UINT32_MAX;
	int16_t x506 = -1;
	int16_t x507 = -1;
	static int32_t x508 = -6361959;
	volatile uint32_t t88 = 12U;

	t88 = ((x505%(x506*x507))^x508);

	if (t88 != 4288605337U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x511 = -1;
	int64_t x512 = INT64_MIN;
	volatile int64_t t89 = 33515882742830963LL;

	t89 = ((x509%(x510*x511))^x512);

	if (t89 != 9223372036854775516LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x521 = 19U;
	int16_t x522 = 2964;
	uint16_t x523 = UINT16_MAX;
	int64_t t90 = -24LL;

	t90 = ((x521%(x522*x523))^x524);

	if (t90 != 2312LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x525 = 124;
	int64_t x526 = -1LL;
	int16_t x528 = INT16_MAX;
	int64_t t91 = -25633421046LL;

	t91 = ((x525%(x526*x527))^x528);

	if (t91 != 32767LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x530 = 64LL;
	int32_t x532 = INT32_MIN;
	volatile uint64_t t92 = 122317688LLU;

	t92 = ((x529%(x530*x531))^x532);

	if (t92 != 18446744071562111777LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x533 = -1;
	uint8_t x534 = 6U;
	int32_t x535 = -8376;
	int8_t x536 = 1;
	int32_t t93 = 1;

	t93 = ((x533%(x534*x535))^x536);

	if (t93 != -2) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x537 = 1LL;
	int16_t x538 = 649;
	static int32_t x539 = -1;
	volatile int16_t x540 = INT16_MAX;
	static int64_t t94 = 170269691210LL;

	t94 = ((x537%(x538*x539))^x540);

	if (t94 != 32766LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x541 = INT8_MIN;
	int8_t x542 = INT8_MIN;
	uint16_t x543 = 31U;
	int32_t t95 = -1;

	t95 = ((x541%(x542*x543))^x544);

	if (t95 != 32640) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x545 = UINT32_MAX;
	int8_t x546 = INT8_MIN;
	volatile uint32_t t96 = 858435U;

	t96 = ((x545%(x546*x547))^x548);

	if (t96 != 31727371U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x549 = INT64_MIN;
	int8_t x550 = INT8_MAX;
	static int16_t x551 = INT16_MIN;
	static int32_t x552 = -314165160;
	volatile int64_t t97 = 3715LL;

	t97 = ((x549%(x550*x551))^x552);

	if (t97 != 312883288LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x553 = INT64_MAX;
	static volatile uint32_t x554 = 10487132U;
	int8_t x555 = -1;
	uint8_t x556 = UINT8_MAX;
	volatile int64_t t98 = -309LL;

	t98 = ((x553%(x554*x555))^x556);

	if (t98 != 2950367808LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x557 = INT8_MIN;
	static int16_t x558 = 1;
	uint32_t x559 = 4164U;
	int8_t x560 = 1;
	static volatile uint32_t t99 = 78514U;

	t99 = ((x557%(x558*x559))^x560);

	if (t99 != 1041U) { NG(); } else { ; }
	
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

