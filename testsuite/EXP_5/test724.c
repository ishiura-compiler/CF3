#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -30172;
static int8_t x6 = INT8_MIN;
int32_t x12 = INT32_MIN;
uint8_t x14 = 47U;
volatile int32_t t3 = -10938;
int32_t t4 = 299034;
int16_t x23 = -3;
uint8_t x24 = 7U;
volatile int32_t x26 = INT32_MIN;
int8_t x28 = INT8_MIN;
volatile int32_t t6 = 374042361;
int8_t x33 = -1;
uint64_t x37 = 152563196173LLU;
static uint8_t x39 = 50U;
int16_t x44 = -581;
uint8_t x54 = 5U;
static uint64_t x58 = UINT64_MAX;
int16_t x62 = 283;
uint8_t x63 = UINT8_MAX;
int8_t x64 = 5;
int64_t x69 = 1527LL;
int16_t x70 = INT16_MAX;
int64_t x88 = INT64_MAX;
int32_t t21 = 1;
volatile uint64_t x90 = 14LLU;
int64_t x93 = INT64_MIN;
volatile uint8_t x94 = 20U;
volatile uint32_t x98 = 404U;
static uint64_t x104 = 1487809978LLU;
volatile int32_t t26 = -5359;
int16_t x110 = -2;
int64_t x113 = -1LL;
static volatile int32_t x120 = INT32_MAX;
uint16_t x126 = 3555U;
volatile uint32_t x128 = 1010178653U;
uint8_t x136 = UINT8_MAX;
static volatile int32_t t33 = 2;
int64_t x139 = -1LL;
static int32_t x143 = INT32_MAX;
volatile int64_t x144 = -1LL;
uint8_t x147 = 51U;
int8_t x150 = INT8_MAX;
volatile int64_t x151 = INT64_MIN;
static volatile int32_t t37 = 104722286;
int16_t x158 = 5;
uint8_t x160 = 13U;
static int64_t x166 = INT64_MIN;
uint16_t x168 = 7U;
static volatile uint8_t x170 = 2U;
int32_t x188 = INT32_MIN;
int64_t x194 = INT64_MAX;
uint8_t x198 = 55U;
uint64_t x201 = 58292459049869LLU;
int8_t x211 = -5;
volatile int32_t t51 = -16793;
int32_t t52 = -122;
volatile int32_t t53 = -3;
int32_t x226 = -120;
int32_t x227 = INT32_MIN;
uint16_t x230 = 213U;
int32_t x236 = -1;
uint16_t x238 = 30U;
uint16_t x244 = 836U;
static int16_t x248 = INT16_MIN;
uint16_t x251 = 6602U;
static uint32_t x256 = 228192U;
int64_t x258 = INT64_MIN;
uint64_t x262 = 9697438LLU;
int16_t x267 = INT16_MIN;
volatile uint32_t x268 = UINT32_MAX;
uint8_t x269 = 56U;
int32_t x270 = -3593;
static int16_t x276 = 589;
int16_t x277 = -1;
volatile int64_t x281 = INT64_MIN;
uint8_t x285 = 39U;
volatile int16_t x287 = INT16_MIN;
volatile uint32_t x292 = UINT32_MAX;
uint8_t x293 = UINT8_MAX;
int16_t x294 = -158;
uint8_t x295 = UINT8_MAX;
uint8_t x297 = 12U;
volatile uint64_t x302 = 4005152929020LLU;
int64_t x305 = INT64_MIN;
int32_t t75 = -4912441;
int16_t x317 = 11;
volatile int64_t x323 = 16541031LL;
int8_t x328 = -34;
volatile int32_t t83 = -221890363;
uint8_t x348 = 6U;
static volatile int32_t t86 = 2163;
static uint8_t x355 = UINT8_MAX;
uint32_t x360 = UINT32_MAX;
volatile int32_t t88 = 52514;
uint16_t x361 = 2U;
int16_t x363 = INT16_MIN;
uint8_t x374 = UINT8_MAX;
static uint8_t x383 = 1U;
int64_t x387 = INT64_MAX;
int32_t x390 = INT32_MAX;
int8_t x394 = -1;
uint8_t x396 = 23U;


void f0(void) {
	static int32_t x1 = -1;
	int32_t x2 = -1;
	static uint64_t x3 = 744280354LLU;
	static uint64_t x4 = 5037504334884599LLU;

	t0 = (x1<((x2%x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint32_t x7 = 1211675U;
	static int64_t x8 = 307637507LL;
	volatile int32_t t1 = -2981741;

	t1 = (x5<((x6%x7)/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 10833U;
	static int16_t x10 = -2;
	volatile uint16_t x11 = UINT16_MAX;
	static int32_t t2 = 1;

	t2 = (x9<((x10%x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 1279U;
	static int8_t x15 = -1;
	int32_t x16 = INT32_MIN;

	t3 = (x13<((x14%x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 50532LLU;
	uint8_t x18 = 2U;
	int64_t x19 = -1LL;
	volatile uint64_t x20 = 3LLU;

	t4 = (x17<((x18%x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = INT32_MAX;
	int8_t x22 = INT8_MIN;
	volatile int32_t t5 = -41;

	t5 = (x21<((x22%x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	static volatile int32_t x27 = INT32_MIN;

	t6 = (x25<((x26%x27)/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile uint64_t x30 = 70769333662884027LLU;
	volatile int8_t x31 = -1;
	uint32_t x32 = UINT32_MAX;
	int32_t t7 = -18;

	t7 = (x29<((x30%x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = UINT8_MAX;
	int32_t x35 = 2;
	int32_t x36 = -29089;
	volatile int32_t t8 = 430082970;

	t8 = (x33<((x34%x35)/x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = 413634U;
	int64_t x40 = INT64_MIN;
	int32_t t9 = -123908303;

	t9 = (x37<((x38%x39)/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 3954540220242252500LLU;
	static int16_t x42 = INT16_MIN;
	int32_t x43 = INT32_MAX;
	static int32_t t10 = 1;

	t10 = (x41<((x42%x43)/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int8_t x46 = 1;
	uint32_t x47 = UINT32_MAX;
	uint32_t x48 = UINT32_MAX;
	static int32_t t11 = 63;

	t11 = (x45<((x46%x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 24573152;
	static uint16_t x50 = 248U;
	int32_t x51 = INT32_MIN;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = -392150173;

	t12 = (x49<((x50%x51)/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -84LL;
	volatile uint8_t x55 = 7U;
	int8_t x56 = INT8_MIN;
	int32_t t13 = -16367;

	t13 = (x53<((x54%x55)/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = 100U;
	static int32_t x59 = -1;
	uint16_t x60 = UINT16_MAX;
	static int32_t t14 = 189493086;

	t14 = (x57<((x58%x59)/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 1;
	volatile int32_t t15 = 29;

	t15 = (x61<((x62%x63)/x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MAX;
	int8_t x66 = -1;
	uint16_t x67 = UINT16_MAX;
	static int8_t x68 = 1;
	int32_t t16 = 170612;

	t16 = (x65<((x66%x67)/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x71 = UINT16_MAX;
	int32_t x72 = INT32_MAX;
	int32_t t17 = -10507423;

	t17 = (x69<((x70%x71)/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int8_t x74 = INT8_MIN;
	int8_t x75 = 1;
	int64_t x76 = 5799904593052591LL;
	int32_t t18 = 1;

	t18 = (x73<((x74%x75)/x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	uint32_t x78 = 4U;
	uint32_t x79 = 3180076U;
	static uint32_t x80 = 212249U;
	volatile int32_t t19 = -409633047;

	t19 = (x77<((x78%x79)/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	static uint8_t x82 = 1U;
	static uint16_t x83 = 4U;
	uint8_t x84 = 109U;
	static volatile int32_t t20 = 373313407;

	t20 = (x81<((x82%x83)/x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 1671U;
	static uint8_t x86 = 21U;
	volatile int16_t x87 = INT16_MAX;

	t21 = (x85<((x86%x87)/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	volatile int8_t x91 = -5;
	int32_t x92 = 17246357;
	int32_t t22 = -2842;

	t22 = (x89<((x90%x91)/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x95 = -765561774;
	int8_t x96 = -1;
	int32_t t23 = -314;

	t23 = (x93<((x94%x95)/x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 1U;
	int64_t x99 = INT64_MAX;
	uint16_t x100 = 45U;
	volatile int32_t t24 = 72259;

	t24 = (x97<((x98%x99)/x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	int16_t x102 = -1;
	uint16_t x103 = 7452U;
	volatile int32_t t25 = -12290;

	t25 = (x101<((x102%x103)/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x105 = UINT32_MAX;
	static volatile uint16_t x106 = UINT16_MAX;
	static int64_t x107 = -6676238867LL;
	volatile uint8_t x108 = 3U;

	t26 = (x105<((x106%x107)/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = UINT64_MAX;
	int64_t x111 = INT64_MIN;
	int8_t x112 = -1;
	int32_t t27 = 22691;

	t27 = (x109<((x110%x111)/x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x114 = UINT32_MAX;
	int16_t x115 = INT16_MIN;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t28 = 248400;

	t28 = (x113<((x114%x115)/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MAX;
	int8_t x118 = INT8_MIN;
	static uint32_t x119 = 1924U;
	static int32_t t29 = -17856;

	t29 = (x117<((x118%x119)/x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MAX;
	uint64_t x122 = UINT64_MAX;
	volatile int8_t x123 = INT8_MAX;
	int64_t x124 = INT64_MAX;
	int32_t t30 = -5788;

	t30 = (x121<((x122%x123)/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x125 = 0;
	int16_t x127 = -1;
	volatile int32_t t31 = -1158;

	t31 = (x125<((x126%x127)/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -17058661993LL;
	uint32_t x130 = 1336529531U;
	int64_t x131 = INT64_MIN;
	int64_t x132 = 14LL;
	int32_t t32 = 253;

	t32 = (x129<((x130%x131)/x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -5;
	int16_t x134 = -1;
	int32_t x135 = 45;

	t33 = (x133<((x134%x135)/x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = INT64_MAX;
	int32_t x138 = INT32_MIN;
	static int32_t x140 = -1;
	static volatile int32_t t34 = 485;

	t34 = (x137<((x138%x139)/x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	static int64_t x142 = INT64_MIN;
	static int32_t t35 = 81;

	t35 = (x141<((x142%x143)/x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	int64_t x146 = -1131823LL;
	int8_t x148 = 10;
	static int32_t t36 = -32978830;

	t36 = (x145<((x146%x147)/x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	uint64_t x152 = UINT64_MAX;

	t37 = (x149<((x150%x151)/x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = 48U;
	int8_t x154 = INT8_MIN;
	volatile int64_t x155 = 263369585LL;
	int32_t x156 = INT32_MIN;
	int32_t t38 = 1609623;

	t38 = (x153<((x154%x155)/x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	uint8_t x159 = UINT8_MAX;
	int32_t t39 = -3437;

	t39 = (x157<((x158%x159)/x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -127500059450LL;
	int32_t x162 = 14397501;
	int32_t x163 = INT32_MAX;
	static int32_t x164 = -1003298335;
	volatile int32_t t40 = 2959;

	t40 = (x161<((x162%x163)/x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MIN;
	static int32_t x167 = INT32_MAX;
	int32_t t41 = 354;

	t41 = (x165<((x166%x167)/x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	int64_t x171 = INT64_MAX;
	static int32_t x172 = INT32_MAX;
	static int32_t t42 = -14223268;

	t42 = (x169<((x170%x171)/x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	uint32_t x178 = 460U;
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MIN;
	volatile int32_t t43 = 5417957;

	t43 = (x177<((x178%x179)/x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MIN;
	int32_t x182 = INT32_MAX;
	int32_t x183 = INT32_MAX;
	static volatile int32_t x184 = -345;
	int32_t t44 = 43495767;

	t44 = (x181<((x182%x183)/x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	int64_t x186 = -453958278920360862LL;
	uint64_t x187 = 3173992240862LLU;
	int32_t t45 = -59;

	t45 = (x185<((x186%x187)/x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = -1;
	volatile uint8_t x190 = UINT8_MAX;
	int16_t x191 = 18;
	volatile uint64_t x192 = 19230906424045LLU;
	volatile int32_t t46 = 4259;

	t46 = (x189<((x190%x191)/x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = 9U;
	int8_t x195 = 48;
	int64_t x196 = -1LL;
	static int32_t t47 = -1;

	t47 = (x193<((x194%x195)/x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	volatile int8_t x199 = 5;
	int64_t x200 = 172686098420575LL;
	volatile int32_t t48 = 1;

	t48 = (x197<((x198%x199)/x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x202 = 21;
	uint64_t x203 = 1283LLU;
	int64_t x204 = INT64_MIN;
	volatile int32_t t49 = 99467865;

	t49 = (x201<((x202%x203)/x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = 13644947390LL;
	volatile uint8_t x206 = UINT8_MAX;
	int16_t x207 = INT16_MIN;
	static volatile int16_t x208 = -1;
	int32_t t50 = 79967138;

	t50 = (x205<((x206%x207)/x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = INT64_MIN;
	int64_t x210 = 22LL;
	int32_t x212 = 32229559;

	t51 = (x209<((x210%x211)/x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MIN;
	static volatile uint8_t x214 = 1U;
	uint8_t x215 = 10U;
	static int8_t x216 = -2;

	t52 = (x213<((x214%x215)/x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = -1;
	uint16_t x218 = 29169U;
	uint8_t x219 = 81U;
	uint32_t x220 = 9U;

	t53 = (x217<((x218%x219)/x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = UINT64_MAX;
	int16_t x222 = 159;
	volatile int16_t x223 = INT16_MIN;
	volatile int8_t x224 = -1;
	static int32_t t54 = -4555;

	t54 = (x221<((x222%x223)/x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x225 = -1LL;
	uint64_t x228 = UINT64_MAX;
	int32_t t55 = -3;

	t55 = (x225<((x226%x227)/x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x229 = 4452688640LLU;
	static int16_t x231 = -1;
	static uint32_t x232 = 54U;
	static volatile int32_t t56 = -5;

	t56 = (x229<((x230%x231)/x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x233 = 7239U;
	volatile uint64_t x234 = UINT64_MAX;
	int16_t x235 = -5172;
	volatile int32_t t57 = 768084;

	t57 = (x233<((x234%x235)/x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x237 = UINT8_MAX;
	int32_t x239 = INT32_MIN;
	uint32_t x240 = 70U;
	int32_t t58 = -24646233;

	t58 = (x237<((x238%x239)/x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = 15;
	static volatile int32_t x242 = -362817;
	uint16_t x243 = 143U;
	volatile int32_t t59 = 230;

	t59 = (x241<((x242%x243)/x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = INT64_MIN;
	uint8_t x246 = 2U;
	int64_t x247 = 5LL;
	volatile int32_t t60 = 74;

	t60 = (x245<((x246%x247)/x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x249 = UINT32_MAX;
	uint16_t x250 = 6U;
	int16_t x252 = -1;
	volatile int32_t t61 = -1;

	t61 = (x249<((x250%x251)/x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x253 = 8193782U;
	volatile int8_t x254 = -49;
	int64_t x255 = 10261444LL;
	static int32_t t62 = -171993;

	t62 = (x253<((x254%x255)/x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x257 = INT64_MIN;
	int32_t x259 = INT32_MIN;
	static int32_t x260 = -1;
	static volatile int32_t t63 = 350;

	t63 = (x257<((x258%x259)/x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = 236;
	int16_t x263 = -1;
	uint8_t x264 = 6U;
	volatile int32_t t64 = -160189133;

	t64 = (x261<((x262%x263)/x264));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x265 = 1;
	int64_t x266 = -1LL;
	volatile int32_t t65 = -22039;

	t65 = (x265<((x266%x267)/x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x271 = -375080552745169168LL;
	volatile int32_t x272 = -1;
	volatile int32_t t66 = -1;

	t66 = (x269<((x270%x271)/x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = -1;
	volatile int16_t x274 = -2;
	int64_t x275 = -358568112815110LL;
	volatile int32_t t67 = -2972761;

	t67 = (x273<((x274%x275)/x276));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x278 = -307LL;
	static int16_t x279 = -1;
	int64_t x280 = INT64_MAX;
	int32_t t68 = -253135;

	t68 = (x277<((x278%x279)/x280));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MIN;
	uint32_t x284 = 13U;
	volatile int32_t t69 = 5352;

	t69 = (x281<((x282%x283)/x284));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x286 = 6U;
	int16_t x288 = 38;
	volatile int32_t t70 = -234485033;

	t70 = (x285<((x286%x287)/x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = -189612474;
	uint64_t x290 = 208912LLU;
	static int32_t x291 = INT32_MIN;
	int32_t t71 = -5575406;

	t71 = (x289<((x290%x291)/x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x296 = UINT64_MAX;
	static int32_t t72 = 25;

	t72 = (x293<((x294%x295)/x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	uint16_t x300 = UINT16_MAX;
	int32_t t73 = -3;

	t73 = (x297<((x298%x299)/x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = INT16_MAX;
	int32_t x303 = INT32_MIN;
	int8_t x304 = INT8_MAX;
	volatile int32_t t74 = -283;

	t74 = (x301<((x302%x303)/x304));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x306 = 0U;
	int16_t x307 = 14;
	volatile int32_t x308 = -1;

	t75 = (x305<((x306%x307)/x308));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = -1;
	uint64_t x310 = UINT64_MAX;
	uint32_t x311 = UINT32_MAX;
	int16_t x312 = -1;
	volatile int32_t t76 = 0;

	t76 = (x309<((x310%x311)/x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = INT64_MIN;
	uint16_t x314 = UINT16_MAX;
	uint16_t x315 = 776U;
	int32_t x316 = -1;
	int32_t t77 = -170646311;

	t77 = (x313<((x314%x315)/x316));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x318 = INT8_MAX;
	int16_t x319 = -2758;
	uint32_t x320 = 47305U;
	static volatile int32_t t78 = -8;

	t78 = (x317<((x318%x319)/x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x321 = 10971861038LL;
	uint32_t x322 = UINT32_MAX;
	static int64_t x324 = INT64_MIN;
	static volatile int32_t t79 = 195388631;

	t79 = (x321<((x322%x323)/x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x325 = INT16_MAX;
	volatile int8_t x326 = INT8_MIN;
	int32_t x327 = INT32_MIN;
	int32_t t80 = -36858602;

	t80 = (x325<((x326%x327)/x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x329 = INT8_MIN;
	int64_t x330 = INT64_MIN;
	int16_t x331 = -13;
	static int16_t x332 = INT16_MIN;
	volatile int32_t t81 = -28887;

	t81 = (x329<((x330%x331)/x332));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = -65;
	volatile int32_t x334 = INT32_MIN;
	uint32_t x335 = 52391U;
	int8_t x336 = INT8_MAX;
	int32_t t82 = -5882;

	t82 = (x333<((x334%x335)/x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x337 = -1;
	volatile int64_t x338 = INT64_MIN;
	volatile int32_t x339 = INT32_MIN;
	int8_t x340 = INT8_MIN;

	t83 = (x337<((x338%x339)/x340));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = -16;
	int64_t x342 = -1585636LL;
	int32_t x343 = -1;
	int32_t x344 = INT32_MIN;
	static volatile int32_t t84 = 17;

	t84 = (x341<((x342%x343)/x344));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x345 = UINT64_MAX;
	static int32_t x346 = 86107267;
	volatile int16_t x347 = INT16_MAX;
	static volatile int32_t t85 = -1047213;

	t85 = (x345<((x346%x347)/x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = -1;
	static volatile int64_t x350 = INT64_MAX;
	uint32_t x351 = UINT32_MAX;
	int16_t x352 = INT16_MIN;

	t86 = (x349<((x350%x351)/x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x353 = UINT32_MAX;
	int32_t x354 = INT32_MIN;
	static volatile int64_t x356 = INT64_MIN;
	int32_t t87 = -640655;

	t87 = (x353<((x354%x355)/x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x357 = INT16_MIN;
	uint16_t x358 = 4438U;
	int64_t x359 = 1464LL;

	t88 = (x357<((x358%x359)/x360));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x362 = UINT64_MAX;
	volatile int16_t x364 = INT16_MAX;
	int32_t t89 = -742769;

	t89 = (x361<((x362%x363)/x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x365 = UINT32_MAX;
	int64_t x366 = INT64_MAX;
	uint32_t x367 = 550321U;
	static uint64_t x368 = 13551384LLU;
	int32_t t90 = -78;

	t90 = (x365<((x366%x367)/x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x369 = 7U;
	int32_t x370 = 622967146;
	int64_t x371 = -1LL;
	uint32_t x372 = 26566U;
	int32_t t91 = -46952;

	t91 = (x369<((x370%x371)/x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = INT16_MIN;
	uint32_t x375 = 606814394U;
	volatile uint8_t x376 = UINT8_MAX;
	static int32_t t92 = 0;

	t92 = (x373<((x374%x375)/x376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x377 = UINT64_MAX;
	int8_t x378 = -1;
	volatile uint16_t x379 = 25U;
	int8_t x380 = INT8_MIN;
	int32_t t93 = -22;

	t93 = (x377<((x378%x379)/x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x381 = -158641;
	int16_t x382 = INT16_MIN;
	volatile int16_t x384 = -197;
	volatile int32_t t94 = -62027;

	t94 = (x381<((x382%x383)/x384));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x385 = UINT16_MAX;
	int16_t x386 = INT16_MIN;
	int32_t x388 = -21;
	int32_t t95 = 10193;

	t95 = (x385<((x386%x387)/x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x389 = 4U;
	uint16_t x391 = 1917U;
	volatile uint32_t x392 = UINT32_MAX;
	volatile int32_t t96 = -2878675;

	t96 = (x389<((x390%x391)/x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x393 = INT8_MIN;
	int8_t x395 = -3;
	volatile int32_t t97 = 0;

	t97 = (x393<((x394%x395)/x396));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x397 = -1;
	uint8_t x398 = UINT8_MAX;
	volatile uint32_t x399 = 15U;
	static uint16_t x400 = UINT16_MAX;
	int32_t t98 = -6201515;

	t98 = (x397<((x398%x399)/x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x401 = UINT32_MAX;
	uint8_t x402 = UINT8_MAX;
	uint8_t x403 = 3U;
	int8_t x404 = -43;
	static int32_t t99 = 26349;

	t99 = (x401<((x402%x403)/x404));

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

