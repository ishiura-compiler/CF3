#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 2441;
int8_t x9 = INT8_MAX;
volatile uint64_t x15 = UINT64_MAX;
int16_t x20 = INT16_MIN;
int32_t t4 = -121763;
int64_t x22 = -443423122LL;
volatile uint8_t x23 = UINT8_MAX;
int64_t x24 = INT64_MAX;
volatile int32_t t6 = 14467618;
int32_t x36 = -1;
static volatile int32_t x37 = INT32_MIN;
volatile int32_t x39 = INT32_MIN;
int8_t x45 = INT8_MIN;
int16_t x52 = -1;
int8_t x55 = -32;
uint16_t x56 = 800U;
volatile uint64_t x62 = UINT64_MAX;
uint8_t x68 = UINT8_MAX;
int16_t x69 = INT16_MIN;
volatile int64_t x70 = 0LL;
int64_t x74 = INT64_MAX;
uint16_t x82 = 44U;
int8_t x83 = INT8_MAX;
int8_t x84 = INT8_MIN;
uint8_t x98 = 2U;
uint16_t x105 = UINT16_MAX;
int32_t x110 = 0;
volatile int64_t x111 = INT64_MIN;
int16_t x116 = INT16_MIN;
int16_t x125 = INT16_MIN;
uint32_t x126 = 24372872U;
int16_t x130 = INT16_MIN;
int16_t x135 = INT16_MIN;
int32_t t33 = -2;
uint32_t x138 = UINT32_MAX;
volatile int32_t t34 = -1620;
int64_t x141 = INT64_MIN;
int32_t x149 = INT32_MIN;
int16_t x151 = INT16_MIN;
uint8_t x157 = 46U;
uint64_t x166 = UINT64_MAX;
int64_t x167 = INT64_MAX;
int16_t x173 = 1;
uint32_t x174 = UINT32_MAX;
volatile int8_t x175 = 26;
int32_t t43 = 2;
int16_t x177 = 22;
static volatile int32_t t44 = 3;
uint8_t x183 = 124U;
int32_t x185 = INT32_MIN;
int8_t x189 = -1;
uint32_t x192 = 1484U;
int32_t t47 = -673980;
int32_t x194 = -37;
uint8_t x203 = UINT8_MAX;
int16_t x207 = INT16_MIN;
int64_t x212 = -1869653527138LL;
static volatile int32_t t52 = -26;
int8_t x223 = -1;
int32_t t56 = 124512;
volatile int64_t x229 = INT64_MAX;
int16_t x230 = -1081;
volatile uint8_t x231 = UINT8_MAX;
uint16_t x232 = 10U;
uint32_t x233 = 466935776U;
uint64_t x238 = 31508588LLU;
static int8_t x239 = INT8_MIN;
volatile int32_t t59 = -306179725;
int32_t x243 = INT32_MIN;
int32_t x246 = INT32_MAX;
static int32_t x247 = -1;
volatile int8_t x248 = INT8_MIN;
uint64_t x249 = 8239025922771028LLU;
static int16_t x250 = INT16_MAX;
static int32_t t62 = -217415;
volatile int16_t x253 = 0;
int16_t x256 = -1;
int32_t t63 = 4784;
static uint8_t x257 = UINT8_MAX;
int64_t x262 = -1LL;
int16_t x265 = INT16_MAX;
int64_t x268 = -27004033666629LL;
volatile int8_t x272 = -6;
int32_t t67 = 274836;
int32_t x277 = INT32_MIN;
uint32_t x291 = 2801U;
int16_t x298 = INT16_MIN;
static uint16_t x313 = UINT16_MAX;
int64_t x316 = -1LL;
int32_t t78 = 12147038;
int8_t x325 = -1;
uint32_t x329 = 232608U;
uint16_t x331 = 53U;
int16_t x338 = -26;
static int8_t x339 = INT8_MAX;
int64_t x344 = 47236021LL;
static int32_t t86 = 3509161;
int32_t t87 = 403057022;
volatile int32_t t88 = 78452;
int16_t x359 = -1;
int32_t x360 = INT32_MIN;
volatile int32_t t89 = 27;
volatile int32_t t95 = -2611;
uint32_t x387 = 173707U;
volatile int32_t t97 = -56;


void f0(void) {
	volatile int16_t x1 = -670;
	int64_t x2 = INT64_MIN;
	volatile int8_t x3 = INT8_MIN;
	int64_t x4 = INT64_MAX;
	volatile int32_t t0 = -518;

	t0 = (((x1|x2)|x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 53U;
	volatile int32_t x6 = INT32_MIN;
	int32_t x7 = 194095304;
	int8_t x8 = 8;

	t1 = (((x5|x6)|x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	uint8_t x11 = 0U;
	int8_t x12 = -46;
	int32_t t2 = 1;

	t2 = (((x9|x10)|x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -1294;
	int8_t x14 = 1;
	static uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = 15;

	t3 = (((x13|x14)|x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int64_t x18 = -3118355918738061LL;
	static int32_t x19 = INT32_MAX;

	t4 = (((x17|x18)|x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile int32_t t5 = 2;

	t5 = (((x21|x22)|x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x25 = 1951403228U;
	static volatile uint8_t x26 = 3U;
	static int8_t x27 = 13;
	uint64_t x28 = UINT64_MAX;

	t6 = (((x25|x26)|x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile int64_t x30 = 79307LL;
	int16_t x31 = -317;
	int64_t x32 = -1LL;
	volatile int32_t t7 = -85162;

	t7 = (((x29|x30)|x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -10;
	int8_t x34 = INT8_MAX;
	uint16_t x35 = 4U;
	int32_t t8 = 5970;

	t8 = (((x33|x34)|x35)==x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x38 = 3456U;
	static int16_t x40 = 78;
	volatile int32_t t9 = -646940;

	t9 = (((x37|x38)|x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 2U;
	int32_t x42 = -16;
	int16_t x43 = 1;
	int16_t x44 = -2097;
	volatile int32_t t10 = 100469193;

	t10 = (((x41|x42)|x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x46 = -1;
	static volatile uint64_t x47 = 248005991LLU;
	int16_t x48 = -1;
	volatile int32_t t11 = 23904897;

	t11 = (((x45|x46)|x47)==x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int8_t x50 = INT8_MAX;
	int64_t x51 = -180482182299835LL;
	int32_t t12 = 997;

	t12 = (((x49|x50)|x51)==x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = 12;
	int64_t x54 = INT64_MAX;
	int32_t t13 = 815880;

	t13 = (((x53|x54)|x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = 0;
	int8_t x58 = INT8_MIN;
	static int16_t x59 = -1;
	static uint8_t x60 = UINT8_MAX;
	volatile int32_t t14 = 27;

	t14 = (((x57|x58)|x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 27U;
	int16_t x63 = INT16_MAX;
	static int16_t x64 = 7651;
	volatile int32_t t15 = -31;

	t15 = (((x61|x62)|x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 24800LL;
	uint64_t x66 = UINT64_MAX;
	int8_t x67 = -1;
	int32_t t16 = 77;

	t16 = (((x65|x66)|x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x71 = INT32_MIN;
	uint64_t x72 = 260185600866044948LLU;
	int32_t t17 = -64388330;

	t17 = (((x69|x70)|x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MAX;
	int8_t x75 = INT8_MAX;
	int16_t x76 = -96;
	volatile int32_t t18 = -5924641;

	t18 = (((x73|x74)|x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x77 = 202U;
	uint16_t x78 = 2947U;
	volatile int32_t x79 = -199;
	uint64_t x80 = 95LLU;
	volatile int32_t t19 = 43641;

	t19 = (((x77|x78)|x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 0;
	static volatile int32_t t20 = -134702264;

	t20 = (((x81|x82)|x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int16_t x86 = INT16_MAX;
	int64_t x87 = INT64_MAX;
	volatile int8_t x88 = -1;
	volatile int32_t t21 = 1;

	t21 = (((x85|x86)|x87)==x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	uint8_t x90 = 7U;
	uint64_t x91 = 2121490448LLU;
	static int64_t x92 = -1LL;
	volatile int32_t t22 = 113888;

	t22 = (((x89|x90)|x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x93 = INT64_MIN;
	int64_t x94 = INT64_MAX;
	int8_t x95 = INT8_MIN;
	uint16_t x96 = UINT16_MAX;
	int32_t t23 = 24;

	t23 = (((x93|x94)|x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 3LL;
	int64_t x99 = INT64_MIN;
	static uint64_t x100 = 236249967499284LLU;
	volatile int32_t t24 = 0;

	t24 = (((x97|x98)|x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	uint16_t x102 = UINT16_MAX;
	int16_t x103 = -6141;
	static int8_t x104 = INT8_MIN;
	int32_t t25 = 1;

	t25 = (((x101|x102)|x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x106 = 20;
	static int8_t x107 = -1;
	int64_t x108 = INT64_MIN;
	int32_t t26 = -257600375;

	t26 = (((x105|x106)|x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = 480862LL;
	uint8_t x112 = 10U;
	int32_t t27 = 9862270;

	t27 = (((x109|x110)|x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	int64_t x114 = INT64_MIN;
	int32_t x115 = INT32_MAX;
	volatile int32_t t28 = -492181773;

	t28 = (((x113|x114)|x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	static int64_t x118 = INT64_MAX;
	volatile int16_t x119 = INT16_MIN;
	int8_t x120 = 0;
	volatile int32_t t29 = 37;

	t29 = (((x117|x118)|x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 5;
	int64_t x122 = INT64_MAX;
	int16_t x123 = -1;
	volatile int64_t x124 = -1LL;
	static volatile int32_t t30 = 39;

	t30 = (((x121|x122)|x123)==x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x127 = 534855313U;
	static uint64_t x128 = 601951654379LLU;
	static volatile int32_t t31 = -19527;

	t31 = (((x125|x126)|x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MIN;
	volatile int8_t x131 = INT8_MAX;
	static uint16_t x132 = 2U;
	int32_t t32 = -14946;

	t32 = (((x129|x130)|x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	int32_t x134 = 44060;
	int32_t x136 = -152943181;

	t33 = (((x133|x134)|x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -209661636707004LL;
	static volatile int8_t x139 = INT8_MAX;
	volatile uint64_t x140 = 562706962931872LLU;

	t34 = (((x137|x138)|x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x142 = 3;
	int32_t x143 = INT32_MIN;
	static uint8_t x144 = UINT8_MAX;
	static volatile int32_t t35 = 17;

	t35 = (((x141|x142)|x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = -5586;
	volatile uint8_t x146 = UINT8_MAX;
	int64_t x147 = INT64_MIN;
	volatile uint64_t x148 = UINT64_MAX;
	volatile int32_t t36 = -11192;

	t36 = (((x145|x146)|x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x150 = 22LLU;
	int16_t x152 = INT16_MIN;
	static int32_t t37 = -32266;

	t37 = (((x149|x150)|x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 836082712U;
	volatile int8_t x154 = 0;
	int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MAX;
	int32_t t38 = -480842654;

	t38 = (((x153|x154)|x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = INT8_MIN;
	int64_t x159 = INT64_MIN;
	static int64_t x160 = INT64_MIN;
	volatile int32_t t39 = 863;

	t39 = (((x157|x158)|x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MIN;
	int8_t x162 = INT8_MIN;
	volatile int64_t x163 = -658632899650806LL;
	volatile int8_t x164 = -1;
	volatile int32_t t40 = 174266;

	t40 = (((x161|x162)|x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MIN;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = -518183;

	t41 = (((x165|x166)|x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int8_t x170 = -1;
	uint16_t x171 = 1959U;
	volatile int64_t x172 = -3818726LL;
	int32_t t42 = 13;

	t42 = (((x169|x170)|x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x176 = 39804U;

	t43 = (((x173|x174)|x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MAX;
	int16_t x179 = INT16_MIN;
	int8_t x180 = INT8_MIN;

	t44 = (((x177|x178)|x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	int16_t x182 = INT16_MIN;
	int64_t x184 = 2322048944522978LL;
	int32_t t45 = 6049;

	t45 = (((x181|x182)|x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = INT8_MIN;
	int64_t x187 = -63002LL;
	volatile int32_t x188 = INT32_MAX;
	volatile int32_t t46 = 1257;

	t46 = (((x185|x186)|x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x190 = -13;
	int64_t x191 = -565674995207130331LL;

	t47 = (((x189|x190)|x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	volatile int8_t x195 = -1;
	int64_t x196 = -12114969130865LL;
	volatile int32_t t48 = -7387;

	t48 = (((x193|x194)|x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 10291517660LL;
	uint64_t x198 = UINT64_MAX;
	volatile int64_t x199 = INT64_MAX;
	static int64_t x200 = INT64_MIN;
	int32_t t49 = 647;

	t49 = (((x197|x198)|x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 17U;
	uint64_t x202 = 0LLU;
	static uint64_t x204 = 22049LLU;
	volatile int32_t t50 = 1;

	t50 = (((x201|x202)|x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 0;
	int64_t x206 = INT64_MIN;
	int16_t x208 = INT16_MIN;
	int32_t t51 = -9214850;

	t51 = (((x205|x206)|x207)==x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x209 = 15U;
	int32_t x210 = -1;
	int8_t x211 = INT8_MIN;

	t52 = (((x209|x210)|x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	static volatile int16_t x214 = 0;
	int16_t x215 = INT16_MIN;
	int8_t x216 = -8;
	int32_t t53 = 86945992;

	t53 = (((x213|x214)|x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x217 = 28856393579033LL;
	int64_t x218 = -54433807459LL;
	static int32_t x219 = INT32_MIN;
	volatile int32_t x220 = -8996;
	volatile int32_t t54 = 17;

	t54 = (((x217|x218)|x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = 15;
	int16_t x222 = -959;
	volatile int8_t x224 = -1;
	int32_t t55 = -7;

	t55 = (((x221|x222)|x223)==x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 1694;
	int64_t x226 = 817653233750517537LL;
	uint16_t x227 = 91U;
	int32_t x228 = -1;

	t56 = (((x225|x226)|x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t t57 = -3436948;

	t57 = (((x229|x230)|x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = 1U;
	volatile int8_t x235 = 1;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t58 = -367;

	t58 = (((x233|x234)|x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	volatile int32_t x240 = -32928158;

	t59 = (((x237|x238)|x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	uint64_t x242 = UINT64_MAX;
	volatile int8_t x244 = INT8_MIN;
	static int32_t t60 = -166;

	t60 = (((x241|x242)|x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -973;
	volatile int32_t t61 = 1009376;

	t61 = (((x245|x246)|x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x251 = INT8_MIN;
	int16_t x252 = -6;

	t62 = (((x249|x250)|x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x254 = 30781U;
	int8_t x255 = 0;

	t63 = (((x253|x254)|x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x258 = 41U;
	uint32_t x259 = 116156316U;
	int16_t x260 = INT16_MAX;
	volatile int32_t t64 = -8386;

	t64 = (((x257|x258)|x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -3339;
	int16_t x263 = -1;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = 28598520;

	t65 = (((x261|x262)|x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x266 = 13682266286LLU;
	static volatile uint64_t x267 = 147796625224LLU;
	int32_t t66 = -932;

	t66 = (((x265|x266)|x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = 1;
	int64_t x270 = INT64_MAX;
	int64_t x271 = -18179844LL;

	t67 = (((x269|x270)|x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = -1049439451LL;
	int8_t x274 = 0;
	volatile int8_t x275 = INT8_MIN;
	uint8_t x276 = UINT8_MAX;
	int32_t t68 = 82;

	t68 = (((x273|x274)|x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = -2002906202533LL;
	static int8_t x279 = INT8_MAX;
	uint8_t x280 = UINT8_MAX;
	int32_t t69 = -235;

	t69 = (((x277|x278)|x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	static volatile uint8_t x282 = 0U;
	static int8_t x283 = INT8_MIN;
	int64_t x284 = INT64_MAX;
	int32_t t70 = -21418514;

	t70 = (((x281|x282)|x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 19U;
	uint8_t x286 = UINT8_MAX;
	uint32_t x287 = UINT32_MAX;
	int64_t x288 = 75379123797797610LL;
	volatile int32_t t71 = 2884053;

	t71 = (((x285|x286)|x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 1884U;
	uint64_t x290 = 322935636734555665LLU;
	uint8_t x292 = UINT8_MAX;
	int32_t t72 = -587242;

	t72 = (((x289|x290)|x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	static volatile int64_t x294 = 553418233LL;
	int64_t x295 = -1LL;
	int8_t x296 = -1;
	volatile int32_t t73 = -654163;

	t73 = (((x293|x294)|x295)==x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x297 = 1742674969206191LL;
	uint16_t x299 = 2069U;
	int64_t x300 = INT64_MIN;
	volatile int32_t t74 = 0;

	t74 = (((x297|x298)|x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 1;
	static uint16_t x302 = UINT16_MAX;
	uint64_t x303 = UINT64_MAX;
	int64_t x304 = INT64_MIN;
	volatile int32_t t75 = -283373860;

	t75 = (((x301|x302)|x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -30069968;
	int32_t x306 = INT32_MIN;
	int16_t x307 = -1;
	int16_t x308 = -222;
	volatile int32_t t76 = -6;

	t76 = (((x305|x306)|x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = -1;
	uint32_t x310 = UINT32_MAX;
	uint64_t x311 = 393537LLU;
	uint8_t x312 = 21U;
	volatile int32_t t77 = 258173698;

	t77 = (((x309|x310)|x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = -1;
	int32_t x315 = INT32_MIN;

	t78 = (((x313|x314)|x315)==x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x317 = INT64_MAX;
	static uint16_t x318 = 3U;
	int64_t x319 = INT64_MAX;
	volatile uint16_t x320 = UINT16_MAX;
	static int32_t t79 = 0;

	t79 = (((x317|x318)|x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	int8_t x322 = INT8_MAX;
	int64_t x323 = -1LL;
	static int32_t x324 = 6348;
	static int32_t t80 = 2076;

	t80 = (((x321|x322)|x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x326 = INT16_MIN;
	uint8_t x327 = UINT8_MAX;
	volatile int8_t x328 = INT8_MAX;
	volatile int32_t t81 = -44125590;

	t81 = (((x325|x326)|x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x330 = 42;
	int8_t x332 = 43;
	volatile int32_t t82 = 2311611;

	t82 = (((x329|x330)|x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MAX;
	int64_t x334 = INT64_MIN;
	uint8_t x335 = 0U;
	int32_t x336 = -1997;
	static volatile int32_t t83 = 37838;

	t83 = (((x333|x334)|x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = -1579;
	static uint64_t x340 = 22263231143913069LLU;
	volatile int32_t t84 = -7972800;

	t84 = (((x337|x338)|x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 4184559U;
	int64_t x342 = -490LL;
	uint64_t x343 = 150430026835002547LLU;
	volatile int32_t t85 = 51599;

	t85 = (((x341|x342)|x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -2;
	uint16_t x346 = 14206U;
	int8_t x347 = -1;
	static int16_t x348 = INT16_MIN;

	t86 = (((x345|x346)|x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	int32_t x350 = INT32_MAX;
	uint16_t x351 = 0U;
	uint16_t x352 = 10U;

	t87 = (((x349|x350)|x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x353 = INT8_MIN;
	volatile int16_t x354 = -1;
	int32_t x355 = -1;
	uint32_t x356 = 114U;

	t88 = (((x353|x354)|x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	static int16_t x358 = -1;

	t89 = (((x357|x358)|x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	uint16_t x362 = UINT16_MAX;
	uint8_t x363 = 9U;
	uint32_t x364 = 174553678U;
	int32_t t90 = 19792507;

	t90 = (((x361|x362)|x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	uint64_t x366 = UINT64_MAX;
	int8_t x367 = 40;
	static uint64_t x368 = 1484846LLU;
	volatile int32_t t91 = -94;

	t91 = (((x365|x366)|x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = INT64_MIN;
	volatile uint8_t x370 = 111U;
	int32_t x371 = INT32_MIN;
	int16_t x372 = -1;
	volatile int32_t t92 = -86528;

	t92 = (((x369|x370)|x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x373 = UINT8_MAX;
	int32_t x374 = 0;
	volatile int8_t x375 = -1;
	int8_t x376 = 6;
	int32_t t93 = 5783673;

	t93 = (((x373|x374)|x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = -1;
	int8_t x378 = INT8_MAX;
	static uint8_t x379 = 3U;
	uint8_t x380 = 0U;
	int32_t t94 = 0;

	t94 = (((x377|x378)|x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 7178U;
	int8_t x382 = -8;
	uint8_t x383 = 0U;
	volatile uint8_t x384 = 3U;

	t95 = (((x381|x382)|x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -61203;
	static volatile uint8_t x386 = 126U;
	volatile int64_t x388 = INT64_MAX;
	int32_t t96 = 1;

	t96 = (((x385|x386)|x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = 0;
	int32_t x390 = INT32_MIN;
	uint8_t x391 = 1U;
	int64_t x392 = -288LL;

	t97 = (((x389|x390)|x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 25U;
	uint32_t x394 = 11593357U;
	int32_t x395 = INT32_MIN;
	static uint64_t x396 = UINT64_MAX;
	static volatile int32_t t98 = -3494799;

	t98 = (((x393|x394)|x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x397 = 124U;
	uint32_t x398 = UINT32_MAX;
	int16_t x399 = -57;
	uint32_t x400 = 100456U;
	int32_t t99 = 106;

	t99 = (((x397|x398)|x399)==x400);

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

