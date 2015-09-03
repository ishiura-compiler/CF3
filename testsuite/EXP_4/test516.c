#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x1 = 9708U;
int16_t x10 = -1;
static volatile int32_t x11 = -794;
int32_t x16 = -58883564;
uint8_t x17 = 47U;
int16_t x20 = INT16_MIN;
volatile int32_t t5 = -1;
int32_t x33 = -222521917;
int16_t x34 = -1;
int8_t x36 = 1;
int16_t x37 = 1;
uint16_t x39 = UINT16_MAX;
int32_t t8 = 183318070;
volatile uint64_t x42 = 1649673361950LLU;
volatile int32_t t11 = 20;
int64_t x61 = INT64_MIN;
volatile int32_t t13 = 25878431;
static volatile int32_t t15 = -813;
uint64_t x94 = 10LLU;
uint32_t x97 = 15464U;
static uint8_t x100 = 3U;
static int32_t x104 = -1;
uint16_t x106 = 14654U;
static volatile int64_t x113 = INT64_MIN;
int32_t x117 = -1;
int64_t x121 = -3LL;
int64_t x123 = -15LL;
volatile uint8_t x127 = 0U;
int64_t x132 = -3234068554500648320LL;
uint16_t x144 = 638U;
int32_t t31 = 1;
int8_t x146 = INT8_MAX;
uint32_t x149 = 154U;
int64_t x152 = INT64_MIN;
int16_t x154 = -4;
volatile int64_t x157 = -15572LL;
static int32_t x158 = INT32_MIN;
int64_t x160 = -1LL;
volatile int8_t x161 = INT8_MIN;
static volatile int16_t x164 = -1;
uint32_t x172 = 1261053U;
uint8_t x173 = 2U;
int64_t x176 = -1LL;
uint32_t x178 = UINT32_MAX;
volatile int64_t x179 = -1LL;
volatile int8_t x180 = 2;
uint64_t x185 = UINT64_MAX;
volatile int16_t x186 = -1;
int8_t x201 = -1;
volatile uint64_t x206 = 68507648LLU;
uint32_t x207 = 1310U;
int32_t x208 = INT32_MAX;
static int64_t x212 = -1LL;
volatile int32_t t46 = -71277;
static volatile int64_t x214 = 69652993235442LL;
int8_t x217 = INT8_MIN;
int32_t x225 = INT32_MIN;
int16_t x226 = INT16_MIN;
uint8_t x227 = 4U;
uint8_t x231 = 32U;
int32_t t51 = 558723;
uint16_t x233 = UINT16_MAX;
uint16_t x238 = 106U;
static int32_t x241 = INT32_MAX;
uint8_t x245 = UINT8_MAX;
int32_t x249 = INT32_MIN;
int16_t x253 = -106;
int32_t x260 = INT32_MIN;
volatile int32_t t64 = 8860585;
int32_t x287 = -405159;
int32_t x297 = INT32_MAX;
static int64_t x299 = INT64_MAX;
int64_t x324 = -1LL;
volatile int16_t x328 = 10300;
volatile int32_t t75 = -9134;
int32_t x339 = -5875;
int64_t x340 = 2751817LL;
int64_t x345 = -273778961607757846LL;
int32_t t79 = 51162839;
volatile uint32_t x355 = UINT32_MAX;
int16_t x360 = INT16_MAX;
int8_t x362 = -1;
volatile int8_t x364 = INT8_MIN;
volatile uint32_t x369 = 15278U;
uint16_t x388 = 1U;
static int8_t x390 = 0;
volatile int32_t t89 = -3543080;
uint8_t x396 = UINT8_MAX;
int32_t t93 = -44496;
volatile int32_t x410 = INT32_MIN;
static volatile int32_t t95 = -2083481;
volatile int32_t t96 = -1926;
volatile int8_t x431 = 0;
int16_t x434 = INT16_MIN;
static uint16_t x437 = UINT16_MAX;


void f0(void) {
	volatile uint32_t x2 = 15U;
	uint32_t x3 = 86418U;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = -21691537;

	t0 = (x1<(x2+(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	int32_t x6 = -743558110;
	int16_t x7 = INT16_MIN;
	static uint32_t x8 = 5U;
	int32_t t1 = 2799571;

	t1 = (x5<(x6+(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 154419035U;
	int64_t x12 = -1LL;
	volatile int32_t t2 = 801103536;

	t2 = (x9<(x10+(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 1886620184151LLU;
	uint16_t x14 = 5641U;
	volatile int16_t x15 = INT16_MAX;
	volatile int32_t t3 = -2834584;

	t3 = (x13<(x14+(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	int32_t x19 = INT32_MIN;
	volatile int32_t t4 = 729;

	t4 = (x17<(x18+(x19/x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	static int16_t x22 = INT16_MAX;
	static uint64_t x23 = UINT64_MAX;
	int16_t x24 = -11584;

	t5 = (x21<(x22+(x23/x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 10004589687108180LLU;
	volatile int32_t x26 = INT32_MIN;
	int32_t x27 = INT32_MAX;
	int64_t x28 = INT64_MAX;
	static volatile int32_t t6 = 21084631;

	t6 = (x25<(x26+(x27/x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x35 = 32290U;
	volatile int32_t t7 = 0;

	t7 = (x33<(x34+(x35/x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = -3;
	int16_t x40 = INT16_MIN;

	t8 = (x37<(x38+(x39/x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 274483101750LL;
	uint64_t x43 = UINT64_MAX;
	uint32_t x44 = UINT32_MAX;
	volatile int32_t t9 = 1;

	t9 = (x41<(x42+(x43/x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = 132;
	int64_t x46 = -1LL;
	volatile int32_t x47 = -1;
	volatile uint64_t x48 = 5809047020180566641LLU;
	volatile int32_t t10 = 50431580;

	t10 = (x45<(x46+(x47/x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = -31285447347198LL;
	uint16_t x50 = 1163U;
	int64_t x51 = INT64_MIN;
	int32_t x52 = 125923252;

	t11 = (x49<(x50+(x51/x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x57 = INT64_MIN;
	uint32_t x58 = 13018482U;
	volatile int32_t x59 = 3;
	uint16_t x60 = 1U;
	volatile int32_t t12 = 3058044;

	t12 = (x57<(x58+(x59/x60)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x62 = -219665LL;
	uint64_t x63 = 27204329LLU;
	static uint32_t x64 = 3658189U;

	t13 = (x61<(x62+(x63/x64)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = 98874LLU;
	uint16_t x66 = 110U;
	volatile int16_t x67 = 237;
	int8_t x68 = INT8_MIN;
	int32_t t14 = -231649;

	t14 = (x65<(x66+(x67/x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MAX;
	uint16_t x70 = 683U;
	int64_t x71 = INT64_MIN;
	volatile uint64_t x72 = 15LLU;

	t15 = (x69<(x70+(x71/x72)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = -751;
	static int32_t x74 = INT32_MAX;
	volatile int8_t x75 = INT8_MAX;
	volatile int32_t x76 = INT32_MIN;
	volatile int32_t t16 = 4777;

	t16 = (x73<(x74+(x75/x76)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = UINT16_MAX;
	int32_t x78 = INT32_MIN;
	int16_t x79 = 6987;
	int32_t x80 = -22590;
	volatile int32_t t17 = -2153827;

	t17 = (x77<(x78+(x79/x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MAX;
	static int32_t x82 = INT32_MIN;
	volatile uint32_t x83 = UINT32_MAX;
	uint16_t x84 = UINT16_MAX;
	int32_t t18 = 7;

	t18 = (x81<(x82+(x83/x84)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -1;
	static int16_t x86 = -514;
	static volatile uint64_t x87 = 4636862668439676885LLU;
	int32_t x88 = INT32_MIN;
	volatile int32_t t19 = -184;

	t19 = (x85<(x86+(x87/x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = 2;
	uint8_t x90 = UINT8_MAX;
	volatile uint64_t x91 = 867112133LLU;
	int64_t x92 = -1LL;
	int32_t t20 = -49;

	t20 = (x89<(x90+(x91/x92)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x93 = INT32_MAX;
	volatile uint8_t x95 = 5U;
	static int64_t x96 = INT64_MAX;
	int32_t t21 = -13;

	t21 = (x93<(x94+(x95/x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x98 = -1;
	int8_t x99 = INT8_MAX;
	int32_t t22 = -5;

	t22 = (x97<(x98+(x99/x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = 61;
	volatile uint16_t x102 = 6641U;
	static volatile int64_t x103 = -99436304057362LL;
	int32_t t23 = -6738883;

	t23 = (x101<(x102+(x103/x104)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x105 = INT16_MIN;
	volatile int16_t x107 = -1;
	uint64_t x108 = UINT64_MAX;
	int32_t t24 = -554420;

	t24 = (x105<(x106+(x107/x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x109 = UINT32_MAX;
	volatile int16_t x110 = -1;
	static int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MAX;
	static int32_t t25 = -1;

	t25 = (x109<(x110+(x111/x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x114 = -1;
	volatile int32_t x115 = -1;
	volatile int64_t x116 = -509LL;
	int32_t t26 = -19;

	t26 = (x113<(x114+(x115/x116)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x118 = INT8_MIN;
	static uint32_t x119 = 1651048U;
	uint16_t x120 = 1417U;
	volatile int32_t t27 = -1;

	t27 = (x117<(x118+(x119/x120)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x122 = UINT8_MAX;
	uint16_t x124 = 17U;
	static int32_t t28 = 9324;

	t28 = (x121<(x122+(x123/x124)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x125 = INT8_MIN;
	static int32_t x126 = INT32_MIN;
	uint32_t x128 = 1068970U;
	volatile int32_t t29 = -28987016;

	t29 = (x125<(x126+(x127/x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = 723U;
	uint64_t x130 = UINT64_MAX;
	int8_t x131 = -12;
	volatile int32_t t30 = 468920434;

	t30 = (x129<(x130+(x131/x132)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x141 = 6593119;
	int64_t x142 = 3844541910862LL;
	int16_t x143 = -1;

	t31 = (x141<(x142+(x143/x144)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x145 = 348654451U;
	int8_t x147 = INT8_MIN;
	int16_t x148 = -1;
	volatile int32_t t32 = -11739;

	t32 = (x145<(x146+(x147/x148)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x150 = -1;
	int8_t x151 = INT8_MAX;
	static int32_t t33 = -525775581;

	t33 = (x149<(x150+(x151/x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = 62444332644LLU;
	static uint16_t x155 = 116U;
	static int8_t x156 = INT8_MIN;
	int32_t t34 = -66604;

	t34 = (x153<(x154+(x155/x156)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x159 = 0;
	volatile int32_t t35 = 1228;

	t35 = (x157<(x158+(x159/x160)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x162 = -2030632312544986365LL;
	uint8_t x163 = 6U;
	int32_t t36 = -7;

	t36 = (x161<(x162+(x163/x164)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = INT8_MAX;
	int8_t x166 = INT8_MAX;
	int8_t x167 = INT8_MAX;
	volatile int16_t x168 = INT16_MIN;
	int32_t t37 = 248673711;

	t37 = (x165<(x166+(x167/x168)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = 4967U;
	volatile uint16_t x170 = 0U;
	volatile uint8_t x171 = 7U;
	volatile int32_t t38 = -87773;

	t38 = (x169<(x170+(x171/x172)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x174 = INT8_MIN;
	static int64_t x175 = 7557LL;
	volatile int32_t t39 = 0;

	t39 = (x173<(x174+(x175/x176)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x177 = INT64_MIN;
	int32_t t40 = 1;

	t40 = (x177<(x178+(x179/x180)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x181 = UINT8_MAX;
	int16_t x182 = INT16_MIN;
	uint16_t x183 = UINT16_MAX;
	int16_t x184 = -1;
	int32_t t41 = 8162395;

	t41 = (x181<(x182+(x183/x184)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x187 = INT8_MAX;
	static int64_t x188 = 816093526998LL;
	volatile int32_t t42 = -30932821;

	t42 = (x185<(x186+(x187/x188)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = -414117;
	static int32_t x198 = 345536370;
	static uint16_t x199 = 7898U;
	int8_t x200 = INT8_MIN;
	volatile int32_t t43 = -23087;

	t43 = (x197<(x198+(x199/x200)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x202 = INT32_MIN;
	static uint64_t x203 = 612560460442290LLU;
	static int8_t x204 = INT8_MIN;
	int32_t t44 = -42695;

	t44 = (x201<(x202+(x203/x204)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x205 = -16175;
	int32_t t45 = -8;

	t45 = (x205<(x206+(x207/x208)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = -1;
	int32_t x210 = 2;
	volatile uint8_t x211 = UINT8_MAX;

	t46 = (x209<(x210+(x211/x212)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x213 = UINT8_MAX;
	int8_t x215 = -3;
	uint64_t x216 = UINT64_MAX;
	volatile int32_t t47 = 5;

	t47 = (x213<(x214+(x215/x216)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x218 = 41U;
	int64_t x219 = -14813833428250LL;
	int8_t x220 = INT8_MIN;
	volatile int32_t t48 = 72;

	t48 = (x217<(x218+(x219/x220)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x221 = 845U;
	volatile uint32_t x222 = 944803U;
	volatile int16_t x223 = INT16_MIN;
	int64_t x224 = INT64_MAX;
	int32_t t49 = 728;

	t49 = (x221<(x222+(x223/x224)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x228 = 13U;
	int32_t t50 = 17953774;

	t50 = (x225<(x226+(x227/x228)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = -42;
	int64_t x230 = -1LL;
	int64_t x232 = -2461560951208009LL;

	t51 = (x229<(x230+(x231/x232)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x234 = UINT32_MAX;
	volatile int16_t x235 = -202;
	volatile uint16_t x236 = UINT16_MAX;
	static volatile int32_t t52 = -90;

	t52 = (x233<(x234+(x235/x236)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x237 = INT32_MIN;
	int32_t x239 = -1;
	volatile int16_t x240 = -1;
	int32_t t53 = -1;

	t53 = (x237<(x238+(x239/x240)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x242 = INT16_MIN;
	int64_t x243 = INT64_MAX;
	uint64_t x244 = 16061628341195286LLU;
	int32_t t54 = 289;

	t54 = (x241<(x242+(x243/x244)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x246 = 1U;
	volatile int16_t x247 = INT16_MIN;
	uint64_t x248 = 1825084997LLU;
	volatile int32_t t55 = -201;

	t55 = (x245<(x246+(x247/x248)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x250 = UINT16_MAX;
	volatile int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MIN;
	int32_t t56 = 960936500;

	t56 = (x249<(x250+(x251/x252)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x254 = 119151493U;
	uint32_t x255 = 48U;
	static int64_t x256 = INT64_MIN;
	volatile int32_t t57 = -7230231;

	t57 = (x253<(x254+(x255/x256)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = 376843879;
	int64_t x258 = 27LL;
	volatile uint8_t x259 = 2U;
	int32_t t58 = -397;

	t58 = (x257<(x258+(x259/x260)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x261 = INT32_MIN;
	volatile uint8_t x262 = 2U;
	uint64_t x263 = 1978560376096317LLU;
	int8_t x264 = INT8_MIN;
	static int32_t t59 = 1;

	t59 = (x261<(x262+(x263/x264)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x265 = 4635006023868LL;
	int64_t x266 = -7LL;
	volatile int32_t x267 = -1;
	int32_t x268 = INT32_MIN;
	volatile int32_t t60 = -48381461;

	t60 = (x265<(x266+(x267/x268)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x269 = INT64_MIN;
	volatile uint8_t x270 = 0U;
	int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MIN;
	volatile int32_t t61 = -41;

	t61 = (x269<(x270+(x271/x272)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x273 = 5U;
	static int16_t x274 = -1;
	int32_t x275 = 340;
	uint8_t x276 = UINT8_MAX;
	static int32_t t62 = -47;

	t62 = (x273<(x274+(x275/x276)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x277 = -1230538293476805LL;
	static int32_t x278 = -69;
	int8_t x279 = -1;
	int64_t x280 = -1LL;
	volatile int32_t t63 = 54120073;

	t63 = (x277<(x278+(x279/x280)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x281 = INT16_MAX;
	static int8_t x282 = 0;
	int8_t x283 = -1;
	int8_t x284 = INT8_MAX;

	t64 = (x281<(x282+(x283/x284)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x285 = 11U;
	int64_t x286 = -1LL;
	static int8_t x288 = -1;
	static volatile int32_t t65 = 0;

	t65 = (x285<(x286+(x287/x288)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x289 = UINT32_MAX;
	uint64_t x290 = 368579117649649LLU;
	static int32_t x291 = INT32_MIN;
	static int64_t x292 = INT64_MIN;
	volatile int32_t t66 = -1;

	t66 = (x289<(x290+(x291/x292)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x293 = 42;
	volatile int8_t x294 = INT8_MAX;
	static volatile uint64_t x295 = 4249351LLU;
	static int16_t x296 = 1;
	static volatile int32_t t67 = 37372;

	t67 = (x293<(x294+(x295/x296)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x298 = INT32_MIN;
	int16_t x300 = -1427;
	int32_t t68 = -9651;

	t68 = (x297<(x298+(x299/x300)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = INT8_MIN;
	uint64_t x302 = 2569192019LLU;
	int8_t x303 = -19;
	static volatile uint16_t x304 = 41U;
	volatile int32_t t69 = -1;

	t69 = (x301<(x302+(x303/x304)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x305 = 323436U;
	uint32_t x306 = 347U;
	int64_t x307 = 0LL;
	uint64_t x308 = 19988004738LLU;
	int32_t t70 = -995360033;

	t70 = (x305<(x306+(x307/x308)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = INT8_MIN;
	uint16_t x310 = UINT16_MAX;
	volatile uint32_t x311 = 2490U;
	int16_t x312 = -1;
	static volatile int32_t t71 = 135627;

	t71 = (x309<(x310+(x311/x312)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x313 = 0U;
	static int8_t x314 = -1;
	volatile int32_t x315 = INT32_MIN;
	volatile uint8_t x316 = 87U;
	static int32_t t72 = -4672;

	t72 = (x313<(x314+(x315/x316)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x321 = -26190455839LL;
	volatile int8_t x322 = 1;
	static volatile int8_t x323 = INT8_MIN;
	volatile int32_t t73 = -3;

	t73 = (x321<(x322+(x323/x324)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x325 = UINT32_MAX;
	int64_t x326 = -473826098LL;
	static uint32_t x327 = UINT32_MAX;
	int32_t t74 = 13;

	t74 = (x325<(x326+(x327/x328)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x329 = 5U;
	static volatile int32_t x330 = -1;
	int16_t x331 = INT16_MIN;
	int64_t x332 = INT64_MAX;

	t75 = (x329<(x330+(x331/x332)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = INT8_MIN;
	static int32_t x334 = 0;
	int32_t x335 = INT32_MIN;
	static int8_t x336 = -6;
	volatile int32_t t76 = 7310080;

	t76 = (x333<(x334+(x335/x336)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = -1;
	volatile int8_t x338 = INT8_MIN;
	int32_t t77 = 464;

	t77 = (x337<(x338+(x339/x340)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x341 = INT8_MIN;
	volatile uint32_t x342 = UINT32_MAX;
	int8_t x343 = -1;
	static int32_t x344 = INT32_MIN;
	static int32_t t78 = -2275243;

	t78 = (x341<(x342+(x343/x344)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x346 = INT32_MAX;
	int16_t x347 = -1;
	volatile int16_t x348 = INT16_MAX;

	t79 = (x345<(x346+(x347/x348)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MIN;
	uint8_t x351 = 3U;
	uint16_t x352 = 407U;
	volatile int32_t t80 = -96;

	t80 = (x349<(x350+(x351/x352)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x353 = INT8_MAX;
	int16_t x354 = -8827;
	static int8_t x356 = INT8_MIN;
	int32_t t81 = -6;

	t81 = (x353<(x354+(x355/x356)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x357 = 88U;
	int32_t x358 = -58536;
	int16_t x359 = -7;
	volatile int32_t t82 = -25771;

	t82 = (x357<(x358+(x359/x360)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x361 = 4211U;
	int32_t x363 = -1;
	volatile int32_t t83 = 14652730;

	t83 = (x361<(x362+(x363/x364)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x370 = 118419U;
	static volatile int32_t x371 = 11756339;
	uint32_t x372 = UINT32_MAX;
	static volatile int32_t t84 = 1;

	t84 = (x369<(x370+(x371/x372)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x373 = -174433729;
	int16_t x374 = INT16_MIN;
	int32_t x375 = INT32_MIN;
	uint8_t x376 = 8U;
	volatile int32_t t85 = 849574140;

	t85 = (x373<(x374+(x375/x376)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = -13;
	uint16_t x378 = UINT16_MAX;
	uint16_t x379 = UINT16_MAX;
	volatile int16_t x380 = 6;
	int32_t t86 = 1695;

	t86 = (x377<(x378+(x379/x380)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x381 = -1;
	volatile int64_t x382 = -1LL;
	uint8_t x383 = UINT8_MAX;
	static uint64_t x384 = 29718844LLU;
	volatile int32_t t87 = 0;

	t87 = (x381<(x382+(x383/x384)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x385 = 2;
	int64_t x386 = 847201158256LL;
	int16_t x387 = INT16_MIN;
	int32_t t88 = -11318015;

	t88 = (x385<(x386+(x387/x388)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x389 = 100187;
	int8_t x391 = -1;
	static volatile int64_t x392 = -1LL;

	t89 = (x389<(x390+(x391/x392)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x393 = -730042;
	int32_t x394 = 184399252;
	int64_t x395 = INT64_MAX;
	static volatile int32_t t90 = -56228278;

	t90 = (x393<(x394+(x395/x396)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x397 = -1LL;
	int32_t x398 = -36;
	int8_t x399 = -3;
	static volatile uint32_t x400 = UINT32_MAX;
	volatile int32_t t91 = -3;

	t91 = (x397<(x398+(x399/x400)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x401 = 1566132219U;
	static volatile int64_t x402 = INT64_MIN;
	static uint64_t x403 = 393515379LLU;
	uint8_t x404 = UINT8_MAX;
	static volatile int32_t t92 = -623224414;

	t92 = (x401<(x402+(x403/x404)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x405 = -1150;
	static int64_t x406 = 130245LL;
	int32_t x407 = INT32_MAX;
	int32_t x408 = INT32_MAX;

	t93 = (x405<(x406+(x407/x408)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x409 = 18U;
	int8_t x411 = INT8_MAX;
	int64_t x412 = -1LL;
	volatile int32_t t94 = 76096180;

	t94 = (x409<(x410+(x411/x412)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x421 = 8297U;
	int16_t x422 = INT16_MIN;
	uint16_t x423 = 27960U;
	static int32_t x424 = -4;

	t95 = (x421<(x422+(x423/x424)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x425 = 3U;
	uint16_t x426 = 1U;
	uint32_t x427 = UINT32_MAX;
	uint32_t x428 = UINT32_MAX;

	t96 = (x425<(x426+(x427/x428)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x429 = INT32_MAX;
	int8_t x430 = INT8_MIN;
	static uint8_t x432 = 122U;
	static int32_t t97 = -184863654;

	t97 = (x429<(x430+(x431/x432)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x433 = -1;
	uint16_t x435 = 728U;
	int8_t x436 = INT8_MIN;
	volatile int32_t t98 = -2737;

	t98 = (x433<(x434+(x435/x436)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x438 = INT16_MAX;
	int16_t x439 = INT16_MAX;
	uint16_t x440 = 5611U;
	static volatile int32_t t99 = -1866;

	t99 = (x437<(x438+(x439/x440)));

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

