#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x16 = -1;
uint8_t x21 = 54U;
int16_t x22 = INT16_MAX;
volatile int32_t t6 = 1;
volatile int16_t x35 = -1;
int32_t x36 = 10382;
int32_t t8 = 1;
uint64_t x44 = UINT64_MAX;
int32_t t9 = 4697;
volatile uint16_t x47 = UINT16_MAX;
int64_t x50 = INT64_MIN;
uint32_t x52 = UINT32_MAX;
int8_t x53 = 39;
volatile uint32_t x54 = 490512U;
uint8_t x55 = 9U;
uint64_t x56 = UINT64_MAX;
static int16_t x73 = 1;
int8_t x74 = 3;
int8_t x88 = -5;
static uint32_t x89 = UINT32_MAX;
uint32_t x90 = 1401394U;
uint32_t x99 = 446147U;
static volatile int32_t t21 = 187930;
static int8_t x101 = -1;
static int64_t x104 = 16LL;
int32_t t22 = 335901;
int64_t x106 = 181161283LL;
int64_t x108 = -75LL;
uint16_t x111 = UINT16_MAX;
volatile int32_t t25 = 971409583;
int32_t x121 = -1;
volatile int64_t x123 = -1038568LL;
volatile int8_t x124 = 50;
int32_t t27 = -232;
static int64_t x125 = -1LL;
static volatile int32_t t29 = 6;
uint8_t x133 = 2U;
static int32_t x145 = -1;
volatile uint64_t x149 = 3LLU;
volatile int8_t x163 = 13;
static volatile int32_t t34 = 0;
static int64_t x176 = INT64_MIN;
uint64_t x178 = 1573870LLU;
volatile int32_t t37 = 109074;
int32_t t39 = 251186;
static uint64_t x200 = 72289LLU;
int8_t x207 = -1;
int8_t x208 = -1;
volatile int64_t x210 = INT64_MIN;
int16_t x226 = 637;
uint64_t x228 = 196581482LLU;
volatile int32_t t48 = -1;
int32_t x244 = 0;
int32_t t49 = -15649194;
volatile int64_t x247 = -805613610088LL;
static int32_t x289 = 602690;
volatile int64_t x292 = INT64_MIN;
volatile int16_t x293 = INT16_MIN;
uint16_t x295 = 0U;
int16_t x312 = INT16_MAX;
int32_t t56 = -7981807;
uint64_t x316 = 134441962169LLU;
volatile int32_t t58 = 10243496;
static volatile int32_t t59 = -46;
volatile uint64_t x327 = 53509080141LLU;
static uint8_t x328 = 2U;
int32_t x332 = INT32_MAX;
uint16_t x337 = 76U;
uint8_t x340 = 3U;
int16_t x342 = -1;
uint32_t x344 = 14U;
static int8_t x346 = INT8_MIN;
int64_t x366 = -4LL;
static uint32_t x369 = UINT32_MAX;
int32_t x370 = INT32_MIN;
int8_t x375 = -1;
int16_t x379 = 640;
int32_t t72 = -2323671;
uint8_t x408 = UINT8_MAX;
volatile int32_t x411 = -2;
int32_t t76 = 121675;
uint16_t x437 = 1892U;
uint64_t x438 = UINT64_MAX;
static volatile int32_t t77 = -204847;
int32_t x462 = 664;
uint8_t x464 = UINT8_MAX;
int64_t x465 = -1LL;
uint8_t x468 = UINT8_MAX;
int16_t x477 = 14865;
int16_t x478 = 1853;
uint8_t x479 = UINT8_MAX;
int64_t x487 = 129886840LL;
static int64_t x489 = 0LL;
static uint16_t x492 = 635U;
volatile uint16_t x507 = UINT16_MAX;
volatile int32_t t86 = 182538517;
static int32_t t87 = 0;
volatile uint32_t x517 = 23912055U;
static volatile uint8_t x518 = 32U;
uint32_t x528 = UINT32_MAX;
uint32_t x529 = UINT32_MAX;
static int16_t x532 = INT16_MIN;
static volatile uint32_t x535 = 1U;
volatile int16_t x536 = INT16_MIN;
int64_t x540 = -18LL;
volatile uint32_t x556 = 5U;
volatile int16_t x563 = -1;
static int16_t x565 = -1;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint64_t x2 = 275464166170076765LLU;
	volatile int32_t x3 = -1;
	int64_t x4 = 134415352562LL;
	static int32_t t0 = -1;

	t0 = (((x1^x2)*x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x5 = -1;
	volatile int8_t x6 = -1;
	int64_t x7 = 16676862846LL;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = -143978156;

	t1 = (((x5^x6)*x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 2269LLU;
	volatile int16_t x10 = INT16_MIN;
	int64_t x11 = -1LL;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = 426;

	t2 = (((x9^x10)*x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MAX;
	int16_t x15 = 149;
	static int32_t t3 = 7550;

	t3 = (((x13^x14)*x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 24878305U;
	uint64_t x18 = 1LLU;
	uint32_t x19 = 4U;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 807509887;

	t4 = (((x17^x18)*x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x23 = INT16_MAX;
	int8_t x24 = INT8_MAX;
	int32_t t5 = 3;

	t5 = (((x21^x22)*x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = 15971810;
	static int16_t x30 = INT16_MAX;
	int16_t x31 = -1;
	int64_t x32 = INT64_MIN;

	t6 = (((x29^x30)*x31)<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 0U;
	int64_t x34 = -637386363439287286LL;
	static volatile int32_t t7 = -6340977;

	t7 = (((x33^x34)*x35)<x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x37 = 15031513;
	uint8_t x38 = 2U;
	volatile uint64_t x39 = 120315863945919652LLU;
	volatile int16_t x40 = INT16_MIN;

	t8 = (((x37^x38)*x39)<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = -1917;
	int32_t x42 = -18848;
	int8_t x43 = -52;

	t9 = (((x41^x42)*x43)<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MIN;
	volatile int64_t x46 = INT64_MAX;
	static volatile int64_t x48 = -1395LL;
	int32_t t10 = -4;

	t10 = (((x45^x46)*x47)<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x49 = 29476447100563LLU;
	int16_t x51 = 9561;
	static int32_t t11 = -12;

	t11 = (((x49^x50)*x51)<x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t t12 = 15033843;

	t12 = (((x53^x54)*x55)<x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = -822516;
	int64_t x58 = -1LL;
	static volatile int8_t x59 = INT8_MIN;
	uint32_t x60 = 1314135824U;
	static int32_t t13 = 1632550;

	t13 = (((x57^x58)*x59)<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = UINT64_MAX;
	volatile uint16_t x62 = UINT16_MAX;
	uint64_t x63 = 5LLU;
	volatile int64_t x64 = INT64_MIN;
	int32_t t14 = -6;

	t14 = (((x61^x62)*x63)<x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = -1;
	uint32_t x66 = 18407U;
	volatile int32_t x67 = INT32_MAX;
	int8_t x68 = 0;
	int32_t t15 = 134382;

	t15 = (((x65^x66)*x67)<x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MAX;
	volatile int64_t x70 = 85024159LL;
	uint16_t x71 = 2U;
	int32_t x72 = INT32_MIN;
	volatile int32_t t16 = 9;

	t16 = (((x69^x70)*x71)<x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x75 = 18;
	uint64_t x76 = UINT64_MAX;
	int32_t t17 = 23;

	t17 = (((x73^x74)*x75)<x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x77 = 5U;
	uint32_t x78 = UINT32_MAX;
	int16_t x79 = -799;
	static int8_t x80 = -55;
	int32_t t18 = 1115166;

	t18 = (((x77^x78)*x79)<x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MAX;
	uint32_t x86 = 9U;
	int8_t x87 = INT8_MIN;
	int32_t t19 = 1;

	t19 = (((x85^x86)*x87)<x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x91 = INT32_MIN;
	int32_t x92 = -1;
	volatile int32_t t20 = -8721562;

	t20 = (((x89^x90)*x91)<x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MAX;
	volatile int16_t x100 = INT16_MAX;

	t21 = (((x97^x98)*x99)<x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x102 = UINT8_MAX;
	uint8_t x103 = 105U;

	t22 = (((x101^x102)*x103)<x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x105 = 14276044U;
	uint16_t x107 = 205U;
	int32_t t23 = 38279524;

	t23 = (((x105^x106)*x107)<x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x109 = 709065268LLU;
	static uint8_t x110 = 6U;
	uint32_t x112 = 103914U;
	volatile int32_t t24 = -5096500;

	t24 = (((x109^x110)*x111)<x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = 58;
	int8_t x114 = -1;
	int16_t x115 = INT16_MIN;
	int32_t x116 = 57;

	t25 = (((x113^x114)*x115)<x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = -1;
	volatile int8_t x118 = -1;
	int64_t x119 = INT64_MIN;
	static int64_t x120 = 57LL;
	int32_t t26 = -201298;

	t26 = (((x117^x118)*x119)<x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x122 = 76LL;

	t27 = (((x121^x122)*x123)<x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MAX;
	int8_t x128 = INT8_MIN;
	volatile int32_t t28 = -13;

	t28 = (((x125^x126)*x127)<x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x129 = -1;
	static int64_t x130 = -2550813LL;
	volatile uint32_t x131 = 363342U;
	uint8_t x132 = 95U;

	t29 = (((x129^x130)*x131)<x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x134 = -1;
	volatile int64_t x135 = -4904722402225927LL;
	int32_t x136 = INT32_MIN;
	volatile int32_t t30 = 2585;

	t30 = (((x133^x134)*x135)<x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x146 = 7;
	int16_t x147 = INT16_MAX;
	int16_t x148 = -5;
	static int32_t t31 = 4;

	t31 = (((x145^x146)*x147)<x148);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x150 = UINT64_MAX;
	int32_t x151 = -1;
	int16_t x152 = 1;
	volatile int32_t t32 = 193;

	t32 = (((x149^x150)*x151)<x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MAX;
	uint32_t x158 = 202953015U;
	int16_t x159 = -996;
	static volatile int8_t x160 = -1;
	static volatile int32_t t33 = 268;

	t33 = (((x157^x158)*x159)<x160);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x161 = UINT32_MAX;
	static uint32_t x162 = 64907355U;
	uint64_t x164 = UINT64_MAX;

	t34 = (((x161^x162)*x163)<x164);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x169 = 0;
	int16_t x170 = -1;
	int8_t x171 = INT8_MIN;
	volatile uint16_t x172 = 10494U;
	int32_t t35 = 3;

	t35 = (((x169^x170)*x171)<x172);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x173 = INT16_MIN;
	static int16_t x174 = INT16_MAX;
	volatile int8_t x175 = INT8_MIN;
	volatile int32_t t36 = -21080416;

	t36 = (((x173^x174)*x175)<x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x177 = UINT16_MAX;
	int32_t x179 = INT32_MIN;
	int32_t x180 = 94258;

	t37 = (((x177^x178)*x179)<x180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = INT32_MIN;
	static volatile int16_t x182 = INT16_MAX;
	volatile int16_t x183 = -1;
	int16_t x184 = INT16_MIN;
	volatile int32_t t38 = 0;

	t38 = (((x181^x182)*x183)<x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x189 = INT8_MIN;
	uint32_t x190 = 817318424U;
	uint8_t x191 = 95U;
	int16_t x192 = 5933;

	t39 = (((x189^x190)*x191)<x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = 97U;
	uint32_t x194 = 2795521U;
	int16_t x195 = -16024;
	static uint16_t x196 = 0U;
	int32_t t40 = 2;

	t40 = (((x193^x194)*x195)<x196);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x197 = 2LLU;
	uint8_t x198 = UINT8_MAX;
	static int64_t x199 = INT64_MIN;
	static int32_t t41 = 6;

	t41 = (((x197^x198)*x199)<x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x201 = -1;
	uint64_t x202 = 327681565348LLU;
	int8_t x203 = -1;
	uint16_t x204 = 1863U;
	volatile int32_t t42 = 3;

	t42 = (((x201^x202)*x203)<x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x205 = INT8_MIN;
	uint16_t x206 = UINT16_MAX;
	volatile int32_t t43 = 12155;

	t43 = (((x205^x206)*x207)<x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x209 = 12723326180LLU;
	uint32_t x211 = UINT32_MAX;
	int64_t x212 = 532803566009713LL;
	static volatile int32_t t44 = 176;

	t44 = (((x209^x210)*x211)<x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x217 = 4334528;
	uint64_t x218 = UINT64_MAX;
	int32_t x219 = 230980;
	int16_t x220 = INT16_MIN;
	static int32_t t45 = -5553697;

	t45 = (((x217^x218)*x219)<x220);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x225 = 1071438027864895865LLU;
	int16_t x227 = INT16_MAX;
	static int32_t t46 = 302125182;

	t46 = (((x225^x226)*x227)<x228);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x229 = 186;
	static int16_t x230 = -1;
	int16_t x231 = 0;
	volatile uint32_t x232 = UINT32_MAX;
	volatile int32_t t47 = 77;

	t47 = (((x229^x230)*x231)<x232);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x237 = INT16_MAX;
	int8_t x238 = -62;
	static uint8_t x239 = UINT8_MAX;
	uint64_t x240 = 1325141840012647LLU;

	t48 = (((x237^x238)*x239)<x240);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x241 = INT16_MIN;
	volatile uint64_t x242 = 58734859LLU;
	int8_t x243 = INT8_MIN;

	t49 = (((x241^x242)*x243)<x244);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x245 = -2527117LL;
	volatile int8_t x246 = INT8_MIN;
	volatile int16_t x248 = -1;
	int32_t t50 = 763614919;

	t50 = (((x245^x246)*x247)<x248);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x249 = INT16_MIN;
	volatile int16_t x250 = INT16_MIN;
	uint64_t x251 = UINT64_MAX;
	volatile uint32_t x252 = 3262940U;
	int32_t t51 = -54362;

	t51 = (((x249^x250)*x251)<x252);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = INT16_MIN;
	static uint64_t x254 = 26667803789307LLU;
	int64_t x255 = INT64_MIN;
	int32_t x256 = INT32_MIN;
	int32_t t52 = 1;

	t52 = (((x253^x254)*x255)<x256);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x290 = -1LL;
	int16_t x291 = -1;
	volatile int32_t t53 = -918472;

	t53 = (((x289^x290)*x291)<x292);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x294 = INT8_MIN;
	volatile uint16_t x296 = 30276U;
	int32_t t54 = 12;

	t54 = (((x293^x294)*x295)<x296);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x301 = -1;
	uint8_t x302 = 14U;
	static int64_t x303 = 175LL;
	static uint16_t x304 = 41U;
	volatile int32_t t55 = 329;

	t55 = (((x301^x302)*x303)<x304);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x309 = INT16_MIN;
	int16_t x310 = -83;
	int8_t x311 = INT8_MIN;

	t56 = (((x309^x310)*x311)<x312);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x313 = INT16_MIN;
	int8_t x314 = -1;
	static uint8_t x315 = UINT8_MAX;
	int32_t t57 = -33255;

	t57 = (((x313^x314)*x315)<x316);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x317 = 3U;
	static volatile int64_t x318 = INT64_MIN;
	volatile int8_t x319 = 1;
	static uint8_t x320 = UINT8_MAX;

	t58 = (((x317^x318)*x319)<x320);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = INT8_MIN;
	static int8_t x322 = 7;
	uint8_t x323 = 7U;
	int64_t x324 = -2067LL;

	t59 = (((x321^x322)*x323)<x324);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x325 = 7432319U;
	int8_t x326 = INT8_MIN;
	volatile int32_t t60 = -3257248;

	t60 = (((x325^x326)*x327)<x328);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x329 = -4778530;
	static uint16_t x330 = 276U;
	uint32_t x331 = 696478U;
	volatile int32_t t61 = 0;

	t61 = (((x329^x330)*x331)<x332);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x333 = -1;
	static uint32_t x334 = UINT32_MAX;
	static int16_t x335 = INT16_MIN;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t62 = -232;

	t62 = (((x333^x334)*x335)<x336);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x338 = -75554LL;
	static int16_t x339 = -15;
	volatile int32_t t63 = -292594045;

	t63 = (((x337^x338)*x339)<x340);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x341 = 442899U;
	int16_t x343 = 6982;
	volatile int32_t t64 = 0;

	t64 = (((x341^x342)*x343)<x344);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x345 = -1LL;
	int16_t x347 = -12508;
	int8_t x348 = -1;
	volatile int32_t t65 = -435218;

	t65 = (((x345^x346)*x347)<x348);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x349 = UINT64_MAX;
	int32_t x350 = -1;
	static int16_t x351 = INT16_MIN;
	uint8_t x352 = 1U;
	volatile int32_t t66 = 20;

	t66 = (((x349^x350)*x351)<x352);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x365 = INT32_MIN;
	uint32_t x367 = 170U;
	int32_t x368 = INT32_MIN;
	int32_t t67 = -1467554;

	t67 = (((x365^x366)*x367)<x368);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x371 = 636;
	uint32_t x372 = 97951153U;
	volatile int32_t t68 = 21175634;

	t68 = (((x369^x370)*x371)<x372);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x373 = -2;
	int16_t x374 = 45;
	static int64_t x376 = 33462378LL;
	volatile int32_t t69 = -6;

	t69 = (((x373^x374)*x375)<x376);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x377 = 494342;
	uint64_t x378 = 450919251LLU;
	int16_t x380 = -8503;
	volatile int32_t t70 = 118;

	t70 = (((x377^x378)*x379)<x380);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x381 = 49U;
	uint16_t x382 = 40U;
	static int16_t x383 = -1230;
	uint64_t x384 = UINT64_MAX;
	volatile int32_t t71 = 4006;

	t71 = (((x381^x382)*x383)<x384);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x401 = 8523LLU;
	static uint16_t x402 = 1752U;
	volatile int16_t x403 = INT16_MAX;
	static int8_t x404 = INT8_MIN;

	t72 = (((x401^x402)*x403)<x404);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x405 = -1;
	int16_t x406 = INT16_MIN;
	int16_t x407 = -1;
	int32_t t73 = 160;

	t73 = (((x405^x406)*x407)<x408);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x409 = 8868U;
	volatile int8_t x410 = INT8_MAX;
	int32_t x412 = INT32_MIN;
	static int32_t t74 = -1335285;

	t74 = (((x409^x410)*x411)<x412);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x421 = UINT8_MAX;
	int16_t x422 = INT16_MAX;
	volatile uint16_t x423 = 7U;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t75 = 117911;

	t75 = (((x421^x422)*x423)<x424);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x429 = 5U;
	volatile int32_t x430 = 1;
	int8_t x431 = -1;
	static int16_t x432 = 5;

	t76 = (((x429^x430)*x431)<x432);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x439 = INT32_MIN;
	uint8_t x440 = UINT8_MAX;

	t77 = (((x437^x438)*x439)<x440);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x449 = UINT8_MAX;
	static int16_t x450 = -1;
	static uint64_t x451 = 40853128286LLU;
	uint64_t x452 = 94179LLU;
	int32_t t78 = -1244;

	t78 = (((x449^x450)*x451)<x452);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x461 = 10;
	uint64_t x463 = UINT64_MAX;
	int32_t t79 = -49845;

	t79 = (((x461^x462)*x463)<x464);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x466 = 56U;
	int16_t x467 = INT16_MIN;
	volatile int32_t t80 = -1;

	t80 = (((x465^x466)*x467)<x468);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x469 = INT16_MAX;
	static int16_t x470 = 1384;
	int8_t x471 = INT8_MAX;
	uint16_t x472 = 14U;
	volatile int32_t t81 = 192335;

	t81 = (((x469^x470)*x471)<x472);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x480 = 8U;
	volatile int32_t t82 = -937732260;

	t82 = (((x477^x478)*x479)<x480);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x485 = -144;
	int32_t x486 = INT32_MAX;
	int16_t x488 = INT16_MAX;
	int32_t t83 = 1819090;

	t83 = (((x485^x486)*x487)<x488);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x490 = -1;
	int16_t x491 = 257;
	volatile int32_t t84 = -4;

	t84 = (((x489^x490)*x491)<x492);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x501 = INT16_MIN;
	int8_t x502 = 33;
	int16_t x503 = -1;
	int32_t x504 = -21349357;
	int32_t t85 = -33351;

	t85 = (((x501^x502)*x503)<x504);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x505 = 1814346LL;
	static int16_t x506 = -1106;
	int32_t x508 = INT32_MIN;

	t86 = (((x505^x506)*x507)<x508);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x513 = 0;
	static int16_t x514 = INT16_MIN;
	int16_t x515 = INT16_MIN;
	static int8_t x516 = INT8_MAX;

	t87 = (((x513^x514)*x515)<x516);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x519 = -1;
	volatile uint32_t x520 = 46402001U;
	volatile int32_t t88 = -736905248;

	t88 = (((x517^x518)*x519)<x520);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x521 = -446;
	uint64_t x522 = 759LLU;
	static int16_t x523 = INT16_MIN;
	static uint32_t x524 = 52250U;
	volatile int32_t t89 = 10168;

	t89 = (((x521^x522)*x523)<x524);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x525 = INT16_MIN;
	int16_t x526 = -1;
	uint8_t x527 = UINT8_MAX;
	volatile int32_t t90 = -55352338;

	t90 = (((x525^x526)*x527)<x528);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x530 = 72U;
	int16_t x531 = INT16_MAX;
	volatile int32_t t91 = 106109;

	t91 = (((x529^x530)*x531)<x532);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x533 = INT16_MIN;
	static int32_t x534 = INT32_MAX;
	volatile int32_t t92 = -2;

	t92 = (((x533^x534)*x535)<x536);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x537 = INT64_MIN;
	volatile uint64_t x538 = UINT64_MAX;
	int8_t x539 = -1;
	volatile int32_t t93 = -16;

	t93 = (((x537^x538)*x539)<x540);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x545 = -1;
	static int16_t x546 = -1;
	int8_t x547 = 12;
	volatile uint8_t x548 = 110U;
	int32_t t94 = 170095;

	t94 = (((x545^x546)*x547)<x548);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x549 = UINT8_MAX;
	int8_t x550 = 11;
	static uint32_t x551 = UINT32_MAX;
	volatile int16_t x552 = -1;
	volatile int32_t t95 = -536;

	t95 = (((x549^x550)*x551)<x552);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x553 = -659;
	volatile int64_t x554 = -1LL;
	volatile int64_t x555 = 493183LL;
	volatile int32_t t96 = 869;

	t96 = (((x553^x554)*x555)<x556);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x557 = -1LL;
	int16_t x558 = INT16_MIN;
	static volatile int32_t x559 = -851790195;
	uint16_t x560 = UINT16_MAX;
	volatile int32_t t97 = 27553;

	t97 = (((x557^x558)*x559)<x560);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x561 = -1LL;
	int16_t x562 = INT16_MIN;
	uint16_t x564 = 248U;
	volatile int32_t t98 = 1;

	t98 = (((x561^x562)*x563)<x564);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x566 = INT16_MAX;
	int32_t x567 = -1;
	volatile uint16_t x568 = 1U;
	int32_t t99 = 6482032;

	t99 = (((x565^x566)*x567)<x568);

	if (t99 != 0) { NG(); } else { ; }
	
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

