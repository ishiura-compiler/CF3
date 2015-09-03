#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x1 = 8U;
int64_t x2 = -1LL;
uint32_t x9 = 1U;
int8_t x19 = 1;
volatile int32_t t4 = -3549048;
int16_t x23 = -31;
static int8_t x29 = INT8_MIN;
int8_t x31 = INT8_MAX;
int32_t t7 = -228;
int16_t x35 = 1;
int8_t x36 = INT8_MAX;
uint8_t x38 = 3U;
static int32_t t11 = -24782;
int8_t x58 = 1;
uint8_t x68 = 0U;
int32_t t16 = 1939;
int64_t x70 = INT64_MIN;
volatile int32_t x82 = 398323;
int8_t x84 = 1;
uint8_t x89 = 5U;
int64_t x94 = INT64_MIN;
int16_t x98 = INT16_MIN;
int8_t x101 = -1;
int32_t x103 = -1;
int64_t x106 = -1LL;
volatile int32_t t26 = 2;
uint64_t x109 = 2703722100LLU;
int32_t x112 = -1576;
static int64_t x114 = INT64_MIN;
static volatile int32_t t28 = 32566;
int16_t x119 = -1;
int32_t t29 = -233985;
int32_t x121 = INT32_MAX;
volatile int32_t t30 = 13741;
static uint32_t x126 = 4991797U;
volatile int32_t t32 = -12358381;
static int64_t x148 = INT64_MAX;
uint32_t x152 = UINT32_MAX;
int16_t x157 = 48;
uint16_t x163 = 7082U;
int8_t x164 = -1;
volatile int64_t x165 = INT64_MAX;
int32_t x166 = -1;
int8_t x168 = -10;
volatile int32_t x169 = -56476033;
static int32_t x171 = -1;
int8_t x174 = INT8_MIN;
int64_t x180 = INT64_MIN;
static volatile int32_t t45 = -1027426;
int16_t x200 = INT16_MIN;
int8_t x206 = INT8_MIN;
static int64_t x208 = INT64_MIN;
static volatile int32_t t50 = 117584877;
volatile int16_t x211 = INT16_MIN;
int32_t t51 = 4;
int64_t x216 = INT64_MAX;
int64_t x228 = INT64_MIN;
int32_t t56 = -568;
volatile int8_t x233 = INT8_MAX;
uint64_t x239 = UINT64_MAX;
int16_t x242 = INT16_MAX;
int32_t x243 = INT32_MIN;
volatile int8_t x244 = INT8_MAX;
uint32_t x245 = 377562242U;
static int32_t x246 = INT32_MIN;
int64_t x247 = INT64_MIN;
int32_t x251 = INT32_MIN;
volatile uint64_t x257 = 20680999878388LLU;
int16_t x263 = INT16_MIN;
int64_t x265 = INT64_MAX;
int32_t t65 = 0;
int32_t x271 = INT32_MIN;
uint32_t x273 = UINT32_MAX;
volatile int32_t t67 = -1029855;
int32_t x277 = 20;
static uint32_t x280 = UINT32_MAX;
uint32_t x287 = 8U;
volatile int32_t t70 = 71609;
int64_t x292 = 1LL;
uint16_t x293 = 1560U;
volatile int32_t t74 = 1;
int8_t x315 = -1;
int32_t t76 = 81875869;
int16_t x331 = INT16_MAX;
volatile uint8_t x333 = 49U;
uint32_t x334 = 22U;
int32_t t80 = 163719;
int64_t x346 = -526374LL;
volatile uint8_t x349 = 12U;
volatile int32_t t85 = 1;
int16_t x359 = INT16_MIN;
volatile int32_t t87 = 2317;
int8_t x365 = INT8_MIN;
int8_t x366 = INT8_MIN;
uint8_t x371 = 18U;
int16_t x377 = -1;
int32_t x380 = 27665;
int8_t x381 = INT8_MIN;
uint32_t x383 = 2953U;
volatile int32_t t92 = -5262;
static volatile int32_t t95 = -198;
static int32_t x398 = INT32_MIN;
uint64_t x403 = 6326977174LLU;
static int32_t x411 = INT32_MIN;


void f0(void) {
	static uint32_t x3 = 13316U;
	int64_t x4 = 1LL;
	int32_t t0 = 109520;

	t0 = (((x1==x2)/x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	uint32_t x6 = 7402U;
	int32_t x7 = -1;
	int64_t x8 = -1LL;
	int32_t t1 = 2614;

	t1 = (((x5==x6)/x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -1;
	int16_t x11 = INT16_MAX;
	int32_t x12 = -1466318;
	volatile int32_t t2 = -517970;

	t2 = (((x9==x10)/x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 340;
	int16_t x14 = -1;
	uint16_t x15 = 24165U;
	int16_t x16 = INT16_MIN;
	static volatile int32_t t3 = -37378;

	t3 = (((x13==x14)/x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 1768LLU;
	static int8_t x18 = -3;
	int32_t x20 = -507195258;

	t4 = (((x17==x18)/x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 5U;
	volatile int8_t x22 = -41;
	uint32_t x24 = UINT32_MAX;
	volatile int32_t t5 = -42766;

	t5 = (((x21==x22)/x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int16_t x26 = 0;
	static volatile int8_t x27 = INT8_MAX;
	static int16_t x28 = INT16_MIN;
	int32_t t6 = -2656971;

	t6 = (((x25==x26)/x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x30 = INT32_MIN;
	static int16_t x32 = -1;

	t7 = (((x29==x30)/x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	uint32_t x34 = UINT32_MAX;
	volatile int32_t t8 = 900800410;

	t8 = (((x33==x34)/x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	int16_t x39 = -1;
	static int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -3;

	t9 = (((x37==x38)/x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = 119232990019685644LL;
	volatile int32_t x42 = 3;
	int32_t x43 = INT32_MAX;
	int32_t x44 = -1;
	int32_t t10 = 7;

	t10 = (((x41==x42)/x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	volatile int64_t x46 = -1LL;
	uint8_t x47 = UINT8_MAX;
	static uint32_t x48 = UINT32_MAX;

	t11 = (((x45==x46)/x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	uint64_t x50 = UINT64_MAX;
	uint32_t x51 = 1921355394U;
	volatile int16_t x52 = 0;
	int32_t t12 = 750;

	t12 = (((x49==x50)/x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int64_t x54 = -2865989405655962959LL;
	volatile int32_t x55 = INT32_MAX;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t13 = 0;

	t13 = (((x53==x54)/x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	volatile int8_t x59 = -1;
	static int64_t x60 = INT64_MIN;
	static int32_t t14 = 10943;

	t14 = (((x57==x58)/x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x62 = 29LL;
	static uint8_t x63 = UINT8_MAX;
	int16_t x64 = 22;
	volatile int32_t t15 = -16;

	t15 = (((x61==x62)/x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	static int64_t x66 = -1415906232682241739LL;
	int16_t x67 = INT16_MAX;

	t16 = (((x65==x66)/x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int16_t x71 = 12051;
	int64_t x72 = INT64_MAX;
	volatile int32_t t17 = 0;

	t17 = (((x69==x70)/x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = 846;
	int32_t x74 = -1;
	int8_t x75 = INT8_MAX;
	uint64_t x76 = 3478323659013LLU;
	volatile int32_t t18 = -428963;

	t18 = (((x73==x74)/x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int32_t x78 = INT32_MIN;
	uint32_t x79 = 2959U;
	int16_t x80 = -3;
	volatile int32_t t19 = 66775;

	t19 = (((x77==x78)/x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int32_t x83 = -1;
	int32_t t20 = -201910107;

	t20 = (((x81==x82)/x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = -110954LL;
	int64_t x86 = -2300409LL;
	static int16_t x87 = -1;
	int16_t x88 = INT16_MAX;
	int32_t t21 = -452139493;

	t21 = (((x85==x86)/x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x90 = 6U;
	int32_t x91 = INT32_MIN;
	static int64_t x92 = INT64_MIN;
	int32_t t22 = -1064371872;

	t22 = (((x89==x90)/x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 32708;
	static int16_t x95 = INT16_MIN;
	int64_t x96 = INT64_MIN;
	volatile int32_t t23 = 157583;

	t23 = (((x93==x94)/x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 36;
	volatile uint64_t x99 = 587304203873LLU;
	uint64_t x100 = UINT64_MAX;
	volatile int32_t t24 = -1;

	t24 = (((x97==x98)/x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = -2;
	volatile int64_t x104 = INT64_MIN;
	volatile int32_t t25 = 28059641;

	t25 = (((x101==x102)/x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = 0;
	static uint8_t x107 = 86U;
	int16_t x108 = 13;

	t26 = (((x105==x106)/x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = INT16_MIN;
	uint16_t x111 = 510U;
	volatile int32_t t27 = -1;

	t27 = (((x109==x110)/x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1157;
	int8_t x115 = -1;
	uint32_t x116 = 15250U;

	t28 = (((x113==x114)/x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = -208LL;
	static uint64_t x118 = 1853743516707LLU;
	volatile int64_t x120 = -1LL;

	t29 = (((x117==x118)/x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = INT64_MIN;
	int16_t x123 = -149;
	int32_t x124 = INT32_MIN;

	t30 = (((x121==x122)/x123)<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 2;
	int8_t x127 = INT8_MAX;
	static int32_t x128 = -1;
	volatile int32_t t31 = 19352;

	t31 = (((x125==x126)/x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = 2250LLU;
	int8_t x130 = -1;
	volatile uint8_t x131 = 1U;
	int16_t x132 = INT16_MAX;

	t32 = (((x129==x130)/x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = 164798324561656LLU;
	int16_t x134 = INT16_MIN;
	uint64_t x135 = UINT64_MAX;
	static int16_t x136 = INT16_MAX;
	int32_t t33 = 38448;

	t33 = (((x133==x134)/x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	uint32_t x138 = 846U;
	uint32_t x139 = 741942U;
	uint64_t x140 = 214705184670369472LLU;
	int32_t t34 = -45787933;

	t34 = (((x137==x138)/x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MIN;
	int64_t x146 = INT64_MAX;
	static int16_t x147 = 8126;
	static volatile int32_t t35 = -88207551;

	t35 = (((x145==x146)/x147)<x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = 26LL;
	int32_t x150 = -1;
	static int32_t x151 = -1;
	static int32_t t36 = -34249583;

	t36 = (((x149==x150)/x151)<x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x153 = 3049968638891320LLU;
	int64_t x154 = INT64_MIN;
	int32_t x155 = -285308;
	static int16_t x156 = INT16_MIN;
	volatile int32_t t37 = -691;

	t37 = (((x153==x154)/x155)<x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x158 = 5618U;
	int32_t x159 = INT32_MAX;
	volatile int64_t x160 = -9406267LL;
	static int32_t t38 = 32958;

	t38 = (((x157==x158)/x159)<x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = -1;
	int64_t x162 = 675923949LL;
	volatile int32_t t39 = 11413;

	t39 = (((x161==x162)/x163)<x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x167 = -1;
	volatile int32_t t40 = 4806;

	t40 = (((x165==x166)/x167)<x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x170 = 507331LLU;
	static int64_t x172 = 1462915391296835LL;
	int32_t t41 = 698587;

	t41 = (((x169==x170)/x171)<x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MAX;
	static int8_t x175 = -1;
	uint64_t x176 = 3619529002436LLU;
	volatile int32_t t42 = 384173;

	t42 = (((x173==x174)/x175)<x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = 81U;
	int32_t x178 = 144636;
	volatile uint8_t x179 = 12U;
	volatile int32_t t43 = 64039;

	t43 = (((x177==x178)/x179)<x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = 44LLU;
	int64_t x182 = -3365422972643LL;
	int8_t x183 = INT8_MAX;
	int16_t x184 = -1;
	int32_t t44 = -3;

	t44 = (((x181==x182)/x183)<x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x185 = INT32_MIN;
	static int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MIN;
	static int16_t x188 = INT16_MIN;

	t45 = (((x185==x186)/x187)<x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x189 = 8;
	static int32_t x190 = -562922156;
	int32_t x191 = -5307;
	volatile int64_t x192 = INT64_MAX;
	volatile int32_t t46 = 1;

	t46 = (((x189==x190)/x191)<x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x193 = UINT32_MAX;
	static int16_t x194 = -5209;
	static int8_t x195 = -3;
	int8_t x196 = INT8_MAX;
	volatile int32_t t47 = 324;

	t47 = (((x193==x194)/x195)<x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x197 = UINT64_MAX;
	int16_t x198 = 60;
	uint8_t x199 = 41U;
	int32_t t48 = -2647;

	t48 = (((x197==x198)/x199)<x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MAX;
	static int8_t x202 = -1;
	int32_t x203 = -425387874;
	static int8_t x204 = INT8_MIN;
	volatile int32_t t49 = 347788671;

	t49 = (((x201==x202)/x203)<x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = 886;
	int64_t x207 = INT64_MIN;

	t50 = (((x205==x206)/x207)<x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = -5;
	static int64_t x210 = 128936863732LL;
	int16_t x212 = -1;

	t51 = (((x209==x210)/x211)<x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x213 = UINT16_MAX;
	static uint16_t x214 = 12U;
	int8_t x215 = 20;
	volatile int32_t t52 = -433118;

	t52 = (((x213==x214)/x215)<x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MIN;
	static int16_t x219 = 11;
	int32_t x220 = -1;
	int32_t t53 = 5;

	t53 = (((x217==x218)/x219)<x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = -14LL;
	volatile uint8_t x222 = 4U;
	int16_t x223 = -330;
	static int8_t x224 = -6;
	int32_t t54 = -77733;

	t54 = (((x221==x222)/x223)<x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = INT32_MIN;
	volatile uint8_t x226 = 0U;
	uint16_t x227 = 102U;
	static volatile int32_t t55 = 0;

	t55 = (((x225==x226)/x227)<x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = 1U;
	uint16_t x230 = 749U;
	int16_t x231 = 13;
	volatile int64_t x232 = INT64_MIN;

	t56 = (((x229==x230)/x231)<x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x234 = 2U;
	uint64_t x235 = UINT64_MAX;
	int64_t x236 = -1LL;
	volatile int32_t t57 = 35011;

	t57 = (((x233==x234)/x235)<x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = 96179356U;
	static volatile int64_t x238 = INT64_MIN;
	uint8_t x240 = UINT8_MAX;
	int32_t t58 = -18362606;

	t58 = (((x237==x238)/x239)<x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MAX;
	int32_t t59 = 25032158;

	t59 = (((x241==x242)/x243)<x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x248 = 259517804414545671LLU;
	int32_t t60 = 862;

	t60 = (((x245==x246)/x247)<x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = INT32_MIN;
	uint64_t x250 = 24516LLU;
	volatile int32_t x252 = -1;
	int32_t t61 = -2037;

	t61 = (((x249==x250)/x251)<x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x253 = 12U;
	int8_t x254 = INT8_MIN;
	int8_t x255 = INT8_MAX;
	int32_t x256 = -1;
	static volatile int32_t t62 = 169;

	t62 = (((x253==x254)/x255)<x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x258 = -1LL;
	volatile uint32_t x259 = 12U;
	int16_t x260 = -1;
	int32_t t63 = -180512757;

	t63 = (((x257==x258)/x259)<x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = 0U;
	int32_t x262 = -1;
	int16_t x264 = INT16_MIN;
	int32_t t64 = 471409634;

	t64 = (((x261==x262)/x263)<x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x266 = -967;
	int64_t x267 = 299534303LL;
	int8_t x268 = 14;

	t65 = (((x265==x266)/x267)<x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = -336070LL;
	uint8_t x270 = 1U;
	int64_t x272 = -15613170672183856LL;
	int32_t t66 = 188585771;

	t66 = (((x269==x270)/x271)<x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x274 = INT32_MAX;
	int64_t x275 = INT64_MAX;
	int16_t x276 = INT16_MIN;

	t67 = (((x273==x274)/x275)<x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x278 = 68U;
	volatile int64_t x279 = INT64_MIN;
	int32_t t68 = -489;

	t68 = (((x277==x278)/x279)<x280);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x281 = INT8_MIN;
	int8_t x282 = INT8_MIN;
	uint16_t x283 = UINT16_MAX;
	int64_t x284 = INT64_MAX;
	int32_t t69 = -191;

	t69 = (((x281==x282)/x283)<x284);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = -1LL;
	static uint8_t x286 = 3U;
	uint32_t x288 = UINT32_MAX;

	t70 = (((x285==x286)/x287)<x288);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = 6;
	static int32_t x290 = 1;
	static uint64_t x291 = 59121402LLU;
	int32_t t71 = 288;

	t71 = (((x289==x290)/x291)<x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x294 = 268U;
	volatile uint16_t x295 = 837U;
	uint8_t x296 = 15U;
	volatile int32_t t72 = -5089;

	t72 = (((x293==x294)/x295)<x296);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x297 = 6540;
	uint64_t x298 = 6416464636LLU;
	int16_t x299 = -13;
	static int8_t x300 = INT8_MAX;
	volatile int32_t t73 = -5980;

	t73 = (((x297==x298)/x299)<x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x309 = UINT16_MAX;
	static int64_t x310 = INT64_MIN;
	int8_t x311 = INT8_MIN;
	uint64_t x312 = 131986570527LLU;

	t74 = (((x309==x310)/x311)<x312);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MIN;
	static int32_t x314 = INT32_MIN;
	int64_t x316 = -1LL;
	int32_t t75 = -230346910;

	t75 = (((x313==x314)/x315)<x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x317 = 2U;
	uint64_t x318 = 438879024LLU;
	volatile int32_t x319 = -1;
	uint8_t x320 = 4U;

	t76 = (((x317==x318)/x319)<x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MIN;
	static int8_t x323 = INT8_MIN;
	static int32_t x324 = INT32_MAX;
	volatile int32_t t77 = -298;

	t77 = (((x321==x322)/x323)<x324);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x325 = 0U;
	uint32_t x326 = 5U;
	volatile int32_t x327 = INT32_MIN;
	static volatile int32_t x328 = INT32_MIN;
	volatile int32_t t78 = -921570;

	t78 = (((x325==x326)/x327)<x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x329 = 14U;
	int64_t x330 = 2132674880673067LL;
	int8_t x332 = INT8_MAX;
	volatile int32_t t79 = 80;

	t79 = (((x329==x330)/x331)<x332);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x335 = -1LL;
	int32_t x336 = INT32_MIN;

	t80 = (((x333==x334)/x335)<x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MIN;
	int32_t x339 = 3220;
	volatile int64_t x340 = INT64_MAX;
	volatile int32_t t81 = 1016746291;

	t81 = (((x337==x338)/x339)<x340);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x341 = 47U;
	int32_t x342 = -1;
	static uint32_t x343 = UINT32_MAX;
	int32_t x344 = -1;
	int32_t t82 = -1845412;

	t82 = (((x341==x342)/x343)<x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x345 = 151U;
	int64_t x347 = INT64_MIN;
	int32_t x348 = 19219;
	int32_t t83 = 111878272;

	t83 = (((x345==x346)/x347)<x348);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x350 = -1;
	static volatile int32_t x351 = 2270;
	uint16_t x352 = 14U;
	volatile int32_t t84 = 5910572;

	t84 = (((x349==x350)/x351)<x352);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = 1;
	uint64_t x354 = UINT64_MAX;
	int8_t x355 = INT8_MIN;
	uint8_t x356 = 3U;

	t85 = (((x353==x354)/x355)<x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = -4;
	static volatile uint16_t x358 = 8879U;
	uint32_t x360 = 18509U;
	int32_t t86 = -1;

	t86 = (((x357==x358)/x359)<x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x361 = INT8_MIN;
	int32_t x362 = INT32_MIN;
	uint32_t x363 = 15596U;
	int16_t x364 = -1;

	t87 = (((x361==x362)/x363)<x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x367 = INT16_MIN;
	uint64_t x368 = 2894022LLU;
	int32_t t88 = 8;

	t88 = (((x365==x366)/x367)<x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = 0U;
	volatile int32_t x370 = 16043699;
	static int16_t x372 = INT16_MAX;
	static volatile int32_t t89 = -2165150;

	t89 = (((x369==x370)/x371)<x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = -1;
	int32_t x374 = INT32_MIN;
	uint32_t x375 = 21U;
	int8_t x376 = -3;
	int32_t t90 = -452;

	t90 = (((x373==x374)/x375)<x376);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x378 = -1;
	static uint32_t x379 = 2U;
	int32_t t91 = -42131;

	t91 = (((x377==x378)/x379)<x380);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x382 = 1333;
	int16_t x384 = INT16_MIN;

	t92 = (((x381==x382)/x383)<x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x385 = 13U;
	volatile int32_t x386 = INT32_MAX;
	int16_t x387 = INT16_MIN;
	int64_t x388 = -1LL;
	int32_t t93 = -2082422;

	t93 = (((x385==x386)/x387)<x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = -1LL;
	int32_t x390 = INT32_MIN;
	int32_t x391 = INT32_MIN;
	volatile int16_t x392 = INT16_MIN;
	int32_t t94 = -5867401;

	t94 = (((x389==x390)/x391)<x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x393 = 11387;
	volatile int16_t x394 = -14584;
	int32_t x395 = -7130524;
	uint64_t x396 = UINT64_MAX;

	t95 = (((x393==x394)/x395)<x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x397 = UINT8_MAX;
	volatile uint8_t x399 = 49U;
	int64_t x400 = INT64_MAX;
	int32_t t96 = 41;

	t96 = (((x397==x398)/x399)<x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x401 = INT16_MAX;
	static int8_t x402 = 24;
	static int64_t x404 = INT64_MIN;
	volatile int32_t t97 = 522961;

	t97 = (((x401==x402)/x403)<x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x405 = UINT8_MAX;
	int8_t x406 = INT8_MIN;
	static volatile int64_t x407 = INT64_MIN;
	uint32_t x408 = 740532443U;
	int32_t t98 = 0;

	t98 = (((x405==x406)/x407)<x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x409 = -1;
	uint64_t x410 = 10424289706027216LLU;
	uint8_t x412 = 81U;
	static int32_t t99 = 0;

	t99 = (((x409==x410)/x411)<x412);

	if (t99 != 1) { NG(); } else { ; }
	
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

