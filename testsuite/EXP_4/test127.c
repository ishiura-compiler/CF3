#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
int8_t x3 = -1;
volatile int16_t x4 = -1;
volatile uint8_t x10 = UINT8_MAX;
int64_t x13 = 16803LL;
uint64_t x17 = 223773070478746011LLU;
uint32_t x25 = UINT32_MAX;
int32_t x28 = INT32_MIN;
volatile int32_t t5 = 4452;
int32_t x34 = INT32_MIN;
uint32_t x38 = 109008U;
int8_t x40 = -1;
volatile int32_t t9 = 3122;
int32_t x48 = INT32_MAX;
volatile int64_t x52 = INT64_MIN;
int32_t t11 = -484;
int32_t t12 = -469;
static int8_t x64 = -1;
volatile int16_t x82 = INT16_MAX;
int32_t x86 = INT32_MAX;
uint16_t x94 = 25531U;
volatile int8_t x95 = INT8_MAX;
static int8_t x99 = -1;
uint8_t x104 = 2U;
static uint16_t x108 = 8U;
static int8_t x110 = 36;
uint16_t x120 = 5145U;
static int8_t x123 = INT8_MAX;
uint64_t x128 = UINT64_MAX;
int32_t t31 = -1429076;
static volatile uint64_t x145 = 12LLU;
int8_t x146 = -45;
volatile int32_t t34 = 387320;
int64_t x153 = -1LL;
int32_t t35 = 0;
int8_t x159 = 11;
static int32_t t36 = -1772993;
int8_t x163 = -31;
int16_t x169 = INT16_MIN;
int8_t x171 = INT8_MAX;
int32_t t41 = 57964;
int32_t t42 = 7422;
int8_t x188 = INT8_MIN;
static volatile int8_t x189 = INT8_MAX;
uint32_t x191 = UINT32_MAX;
volatile uint8_t x192 = UINT8_MAX;
int32_t t44 = -4520;
volatile int64_t x194 = INT64_MIN;
int8_t x195 = INT8_MIN;
int32_t x196 = -1;
int32_t t45 = -63210198;
int16_t x198 = INT16_MIN;
uint8_t x207 = UINT8_MAX;
int16_t x210 = -1229;
uint64_t x218 = 23261LLU;
int32_t t51 = -17289;
static int32_t x223 = INT32_MIN;
int32_t t53 = 26678475;
uint8_t x245 = 1U;
int8_t x255 = INT8_MIN;
static uint32_t x261 = UINT32_MAX;
int16_t x263 = INT16_MIN;
static uint64_t x271 = 61164292LLU;
int32_t x274 = INT32_MAX;
int64_t x276 = 2LL;
static int32_t t64 = 218;
volatile int64_t x277 = -1LL;
uint8_t x288 = UINT8_MAX;
int64_t x289 = -1LL;
int8_t x293 = INT8_MAX;
int16_t x297 = INT16_MIN;
int8_t x298 = -1;
int64_t x299 = -1LL;
int32_t t71 = -2022076;
int32_t t72 = -6;
static int32_t x318 = 81528841;
static int32_t x321 = INT32_MAX;
volatile int32_t t75 = 1152307;
static int32_t x329 = INT32_MIN;
int16_t x334 = INT16_MIN;
int32_t t77 = 60249;
uint64_t x343 = UINT64_MAX;
int32_t x345 = -22;
static uint16_t x350 = UINT16_MAX;
int16_t x355 = INT16_MIN;
static uint32_t x357 = UINT32_MAX;
volatile int32_t t83 = -34129607;
uint16_t x365 = UINT16_MAX;
int8_t x374 = INT8_MIN;
int16_t x376 = -1;
static int32_t t87 = -1793796;
int64_t x378 = INT64_MIN;
volatile int32_t t91 = 2894;
int8_t x400 = INT8_MIN;
uint64_t x406 = UINT64_MAX;
int32_t x407 = -21902;
int64_t x412 = -1LL;
volatile uint16_t x415 = UINT16_MAX;
static volatile int8_t x420 = -1;
int16_t x421 = -29;
uint32_t x426 = UINT32_MAX;
uint64_t x427 = 106831958442602LLU;


void f0(void) {
	int32_t x2 = 88;
	volatile int32_t t0 = 9781360;

	t0 = (x1<=(x2<=(x3+x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 6U;
	static int8_t x11 = INT8_MIN;
	int64_t x12 = INT64_MAX;
	volatile int32_t t1 = -203;

	t1 = (x9<=(x10<=(x11+x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = -1749971770LL;
	static uint8_t x15 = 94U;
	int8_t x16 = INT8_MAX;
	static int32_t t2 = 0;

	t2 = (x13<=(x14<=(x15+x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = INT32_MIN;
	int16_t x19 = -787;
	uint16_t x20 = 8262U;
	volatile int32_t t3 = -1353;

	t3 = (x17<=(x18<=(x19+x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	uint16_t x22 = 3U;
	volatile int8_t x23 = INT8_MIN;
	volatile int64_t x24 = 23LL;
	int32_t t4 = 12710;

	t4 = (x21<=(x22<=(x23+x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = -727734;
	static volatile uint16_t x27 = UINT16_MAX;

	t5 = (x25<=(x26<=(x27+x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 1;
	int64_t x30 = 105168LL;
	static volatile int32_t x31 = INT32_MAX;
	int32_t x32 = INT32_MIN;
	volatile int32_t t6 = 124566486;

	t6 = (x29<=(x30<=(x31+x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	int64_t x35 = INT64_MAX;
	int8_t x36 = INT8_MIN;
	int32_t t7 = -6;

	t7 = (x33<=(x34<=(x35+x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = INT64_MIN;
	static uint16_t x39 = UINT16_MAX;
	static int32_t t8 = 12;

	t8 = (x37<=(x38<=(x39+x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x41 = 8065U;
	int8_t x42 = 3;
	uint64_t x43 = UINT64_MAX;
	static uint16_t x44 = 2U;

	t9 = (x41<=(x42<=(x43+x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -2726090;
	uint64_t x46 = UINT64_MAX;
	int8_t x47 = INT8_MIN;
	static int32_t t10 = 959326;

	t10 = (x45<=(x46<=(x47+x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	uint8_t x50 = 31U;
	uint64_t x51 = 29057LLU;

	t11 = (x49<=(x50<=(x51+x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -1;
	volatile uint8_t x54 = 2U;
	uint16_t x55 = 146U;
	int16_t x56 = -1;

	t12 = (x53<=(x54<=(x55+x56)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = UINT8_MAX;
	volatile int32_t x58 = INT32_MIN;
	int64_t x59 = 1022LL;
	volatile int16_t x60 = INT16_MIN;
	static int32_t t13 = 2716270;

	t13 = (x57<=(x58<=(x59+x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = UINT64_MAX;
	static volatile int8_t x62 = -4;
	uint8_t x63 = 19U;
	int32_t t14 = -6;

	t14 = (x61<=(x62<=(x63+x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 30U;
	int8_t x66 = -1;
	int8_t x67 = -1;
	int8_t x68 = INT8_MAX;
	static volatile int32_t t15 = 172;

	t15 = (x65<=(x66<=(x67+x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 0U;
	uint32_t x70 = 252U;
	uint16_t x71 = UINT16_MAX;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t16 = 6760373;

	t16 = (x69<=(x70<=(x71+x72)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x73 = UINT64_MAX;
	volatile int32_t x74 = INT32_MIN;
	uint8_t x75 = 1U;
	volatile uint16_t x76 = 1U;
	volatile int32_t t17 = -364042050;

	t17 = (x73<=(x74<=(x75+x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = UINT16_MAX;
	int32_t x78 = -1;
	int16_t x79 = INT16_MIN;
	static uint32_t x80 = 0U;
	int32_t t18 = 9;

	t18 = (x77<=(x78<=(x79+x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MAX;
	uint64_t x83 = 28036701LLU;
	uint16_t x84 = 6332U;
	static volatile int32_t t19 = 0;

	t19 = (x81<=(x82<=(x83+x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -66408727;
	int16_t x87 = INT16_MAX;
	uint32_t x88 = 1U;
	volatile int32_t t20 = 20410742;

	t20 = (x85<=(x86<=(x87+x88)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = -508;
	int8_t x96 = -1;
	int32_t t21 = -176128955;

	t21 = (x93<=(x94<=(x95+x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = 11617;
	int32_t x98 = -166;
	uint32_t x100 = 7U;
	int32_t t22 = -84652;

	t22 = (x97<=(x98<=(x99+x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MAX;
	uint16_t x102 = UINT16_MAX;
	volatile uint64_t x103 = 4420781154074097LLU;
	static volatile int32_t t23 = -2;

	t23 = (x101<=(x102<=(x103+x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = -744834531;
	uint8_t x106 = 1U;
	volatile int16_t x107 = INT16_MIN;
	volatile int32_t t24 = 4;

	t24 = (x105<=(x106<=(x107+x108)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MIN;
	uint8_t x111 = 52U;
	static volatile uint8_t x112 = 83U;
	volatile int32_t t25 = 203863627;

	t25 = (x109<=(x110<=(x111+x112)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MIN;
	uint8_t x114 = 83U;
	int8_t x115 = 45;
	int16_t x116 = INT16_MIN;
	volatile int32_t t26 = 45696;

	t26 = (x113<=(x114<=(x115+x116)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 245044543347844287LLU;
	static volatile int32_t x118 = INT32_MIN;
	static int32_t x119 = INT32_MIN;
	static int32_t t27 = 0;

	t27 = (x117<=(x118<=(x119+x120)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = -1;
	uint16_t x122 = UINT16_MAX;
	volatile uint8_t x124 = 63U;
	volatile int32_t t28 = -23;

	t28 = (x121<=(x122<=(x123+x124)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = INT32_MAX;
	static int8_t x126 = INT8_MIN;
	volatile int32_t x127 = INT32_MIN;
	int32_t t29 = -177524;

	t29 = (x125<=(x126<=(x127+x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MAX;
	int16_t x130 = INT16_MIN;
	volatile int8_t x131 = INT8_MIN;
	uint16_t x132 = 15U;
	int32_t t30 = 119656759;

	t30 = (x129<=(x130<=(x131+x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = 0;
	int64_t x134 = 14691050LL;
	int64_t x135 = -53005LL;
	int32_t x136 = 1;

	t31 = (x133<=(x134<=(x135+x136)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = 65LL;
	static int16_t x143 = 192;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t32 = -206211;

	t32 = (x141<=(x142<=(x143+x144)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x147 = 81U;
	volatile int32_t x148 = -1;
	static volatile int32_t t33 = 9524;

	t33 = (x145<=(x146<=(x147+x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = UINT64_MAX;
	uint16_t x150 = UINT16_MAX;
	uint64_t x151 = 1481439919LLU;
	uint64_t x152 = UINT64_MAX;

	t34 = (x149<=(x150<=(x151+x152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x154 = -1;
	uint64_t x155 = 678127963849351LLU;
	uint16_t x156 = 50U;

	t35 = (x153<=(x154<=(x155+x156)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = UINT32_MAX;
	int8_t x158 = INT8_MAX;
	int8_t x160 = -1;

	t36 = (x157<=(x158<=(x159+x160)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x161 = UINT32_MAX;
	int16_t x162 = -1;
	int16_t x164 = -1;
	volatile int32_t t37 = -32037;

	t37 = (x161<=(x162<=(x163+x164)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = 5249438317888LLU;
	int8_t x166 = INT8_MIN;
	static int16_t x167 = INT16_MIN;
	int16_t x168 = -246;
	int32_t t38 = -89;

	t38 = (x165<=(x166<=(x167+x168)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x170 = INT16_MIN;
	int16_t x172 = INT16_MIN;
	int32_t t39 = -12701;

	t39 = (x169<=(x170<=(x171+x172)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = 62135U;
	int64_t x174 = INT64_MAX;
	volatile int32_t x175 = 0;
	static int32_t x176 = INT32_MAX;
	volatile int32_t t40 = 7;

	t40 = (x173<=(x174<=(x175+x176)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MAX;
	int8_t x178 = INT8_MAX;
	int32_t x179 = -1;
	int16_t x180 = -1;

	t41 = (x177<=(x178<=(x179+x180)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x181 = INT32_MAX;
	int32_t x182 = -1;
	static int16_t x183 = INT16_MAX;
	volatile uint8_t x184 = 0U;

	t42 = (x181<=(x182<=(x183+x184)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x185 = 218U;
	int64_t x186 = -1LL;
	static volatile int32_t x187 = 3463739;
	volatile int32_t t43 = -5533618;

	t43 = (x185<=(x186<=(x187+x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x190 = 15U;

	t44 = (x189<=(x190<=(x191+x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MIN;

	t45 = (x193<=(x194<=(x195+x196)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = 1;
	volatile uint64_t x199 = 6119989360623LLU;
	volatile int64_t x200 = 22039355LL;
	int32_t t46 = 120682;

	t46 = (x197<=(x198<=(x199+x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = 64542421LL;
	volatile int8_t x202 = INT8_MAX;
	static int8_t x203 = INT8_MAX;
	uint32_t x204 = 442U;
	int32_t t47 = -2747;

	t47 = (x201<=(x202<=(x203+x204)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x205 = 74;
	int32_t x206 = -27622;
	int64_t x208 = -1LL;
	volatile int32_t t48 = 1044;

	t48 = (x205<=(x206<=(x207+x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = 30U;
	static uint8_t x211 = 5U;
	int16_t x212 = 0;
	int32_t t49 = -1;

	t49 = (x209<=(x210<=(x211+x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = -17;
	int16_t x214 = -1;
	static uint64_t x215 = UINT64_MAX;
	uint32_t x216 = 62U;
	volatile int32_t t50 = -4152349;

	t50 = (x213<=(x214<=(x215+x216)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x217 = UINT16_MAX;
	static int64_t x219 = INT64_MIN;
	uint32_t x220 = 70U;

	t51 = (x217<=(x218<=(x219+x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = INT8_MIN;
	int8_t x222 = 0;
	uint32_t x224 = 3U;
	int32_t t52 = -1;

	t52 = (x221<=(x222<=(x223+x224)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x225 = UINT32_MAX;
	volatile uint8_t x226 = 12U;
	int16_t x227 = -1;
	int8_t x228 = INT8_MIN;

	t53 = (x225<=(x226<=(x227+x228)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = INT32_MIN;
	uint8_t x230 = 64U;
	volatile uint16_t x231 = 2U;
	uint16_t x232 = 37U;
	int32_t t54 = 1593288;

	t54 = (x229<=(x230<=(x231+x232)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x233 = -1;
	volatile int64_t x234 = -1LL;
	uint8_t x235 = 7U;
	static volatile int16_t x236 = 3;
	int32_t t55 = -24;

	t55 = (x233<=(x234<=(x235+x236)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x237 = -1;
	static int64_t x238 = INT64_MIN;
	uint8_t x239 = 18U;
	int8_t x240 = INT8_MAX;
	volatile int32_t t56 = -51692070;

	t56 = (x237<=(x238<=(x239+x240)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x241 = -1;
	uint32_t x242 = 48652U;
	uint32_t x243 = 881U;
	volatile int32_t x244 = INT32_MIN;
	int32_t t57 = -844895;

	t57 = (x241<=(x242<=(x243+x244)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x246 = 28U;
	int32_t x247 = INT32_MAX;
	int8_t x248 = INT8_MIN;
	volatile int32_t t58 = -642;

	t58 = (x245<=(x246<=(x247+x248)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x253 = UINT32_MAX;
	volatile int32_t x254 = INT32_MIN;
	int16_t x256 = -50;
	int32_t t59 = -661;

	t59 = (x253<=(x254<=(x255+x256)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x257 = -1;
	int64_t x258 = INT64_MAX;
	uint32_t x259 = UINT32_MAX;
	volatile uint16_t x260 = 17U;
	volatile int32_t t60 = -9945;

	t60 = (x257<=(x258<=(x259+x260)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x262 = INT8_MIN;
	uint16_t x264 = UINT16_MAX;
	int32_t t61 = 451857224;

	t61 = (x261<=(x262<=(x263+x264)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x265 = 6628773LLU;
	int16_t x266 = INT16_MIN;
	static int32_t x267 = 28;
	int16_t x268 = 2192;
	int32_t t62 = -2637261;

	t62 = (x265<=(x266<=(x267+x268)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MAX;
	int64_t x270 = INT64_MAX;
	uint8_t x272 = 0U;
	static volatile int32_t t63 = 6;

	t63 = (x269<=(x270<=(x271+x272)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = -1;
	int16_t x275 = INT16_MIN;

	t64 = (x273<=(x274<=(x275+x276)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x278 = -1LL;
	static volatile int16_t x279 = INT16_MIN;
	uint8_t x280 = 0U;
	int32_t t65 = 69309;

	t65 = (x277<=(x278<=(x279+x280)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x281 = 955;
	int16_t x282 = 1;
	int8_t x283 = -5;
	int32_t x284 = -530916135;
	volatile int32_t t66 = 519370744;

	t66 = (x281<=(x282<=(x283+x284)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x285 = -30723557LL;
	static int8_t x286 = 13;
	uint16_t x287 = UINT16_MAX;
	int32_t t67 = -9860311;

	t67 = (x285<=(x286<=(x287+x288)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x290 = 93U;
	int16_t x291 = -1;
	int16_t x292 = -1;
	int32_t t68 = -102443455;

	t68 = (x289<=(x290<=(x291+x292)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x294 = 3U;
	int64_t x295 = -1LL;
	int64_t x296 = -55643487126LL;
	static int32_t t69 = 4;

	t69 = (x293<=(x294<=(x295+x296)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x300 = 1;
	static volatile int32_t t70 = 216943;

	t70 = (x297<=(x298<=(x299+x300)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x305 = UINT16_MAX;
	uint8_t x306 = 14U;
	int32_t x307 = INT32_MIN;
	static uint32_t x308 = UINT32_MAX;

	t71 = (x305<=(x306<=(x307+x308)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = -1;
	static volatile int32_t x310 = INT32_MAX;
	uint8_t x311 = 24U;
	int32_t x312 = 1;

	t72 = (x309<=(x310<=(x311+x312)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x317 = INT64_MIN;
	static uint64_t x319 = UINT64_MAX;
	int32_t x320 = INT32_MIN;
	volatile int32_t t73 = -6004308;

	t73 = (x317<=(x318<=(x319+x320)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x322 = INT64_MAX;
	static int32_t x323 = -17825;
	volatile uint64_t x324 = 102250650788LLU;
	int32_t t74 = 251237854;

	t74 = (x321<=(x322<=(x323+x324)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x325 = 15U;
	static int8_t x326 = INT8_MIN;
	volatile int32_t x327 = INT32_MAX;
	int8_t x328 = INT8_MIN;

	t75 = (x325<=(x326<=(x327+x328)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x330 = 338;
	volatile int64_t x331 = -16435341774057LL;
	int8_t x332 = INT8_MIN;
	int32_t t76 = -2978;

	t76 = (x329<=(x330<=(x331+x332)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x333 = 0U;
	int16_t x335 = INT16_MIN;
	int16_t x336 = INT16_MAX;

	t77 = (x333<=(x334<=(x335+x336)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x337 = -1;
	int32_t x338 = 49346298;
	static int8_t x339 = -1;
	int32_t x340 = 934721;
	int32_t t78 = -5;

	t78 = (x337<=(x338<=(x339+x340)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x341 = 4987520002829LLU;
	int16_t x342 = 11806;
	int16_t x344 = INT16_MIN;
	volatile int32_t t79 = 995602;

	t79 = (x341<=(x342<=(x343+x344)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x346 = -1LL;
	volatile int8_t x347 = INT8_MIN;
	volatile int8_t x348 = -1;
	volatile int32_t t80 = 3391038;

	t80 = (x345<=(x346<=(x347+x348)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = INT64_MAX;
	static int16_t x351 = 37;
	int8_t x352 = INT8_MIN;
	volatile int32_t t81 = -5899;

	t81 = (x349<=(x350<=(x351+x352)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x353 = -252;
	static int16_t x354 = 190;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t82 = -109949;

	t82 = (x353<=(x354<=(x355+x356)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x358 = -1;
	int8_t x359 = INT8_MIN;
	int8_t x360 = -56;

	t83 = (x357<=(x358<=(x359+x360)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x361 = INT64_MAX;
	static volatile int16_t x362 = INT16_MIN;
	volatile int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MIN;
	int32_t t84 = 111;

	t84 = (x361<=(x362<=(x363+x364)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x366 = INT32_MIN;
	static volatile int8_t x367 = INT8_MIN;
	volatile int32_t x368 = -1;
	static int32_t t85 = 680675;

	t85 = (x365<=(x366<=(x367+x368)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x369 = 257U;
	int16_t x370 = -15586;
	static int8_t x371 = INT8_MIN;
	int16_t x372 = INT16_MIN;
	int32_t t86 = 574513;

	t86 = (x369<=(x370<=(x371+x372)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x373 = 2;
	uint16_t x375 = 3763U;

	t87 = (x373<=(x374<=(x375+x376)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = INT8_MIN;
	volatile uint64_t x379 = 1335LLU;
	int64_t x380 = INT64_MIN;
	volatile int32_t t88 = 2;

	t88 = (x377<=(x378<=(x379+x380)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x381 = INT16_MIN;
	uint8_t x382 = 1U;
	static int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MIN;
	volatile int32_t t89 = 6225764;

	t89 = (x381<=(x382<=(x383+x384)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MIN;
	uint32_t x387 = 6653610U;
	int8_t x388 = INT8_MAX;
	volatile int32_t t90 = 16412192;

	t90 = (x385<=(x386<=(x387+x388)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x393 = -1;
	int16_t x394 = INT16_MIN;
	int8_t x395 = INT8_MIN;
	int32_t x396 = 205654260;

	t91 = (x393<=(x394<=(x395+x396)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x397 = UINT64_MAX;
	int32_t x398 = 0;
	static volatile uint32_t x399 = 196U;
	volatile int32_t t92 = 57;

	t92 = (x397<=(x398<=(x399+x400)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x401 = -1;
	static int64_t x402 = 92676830860629LL;
	uint8_t x403 = 1U;
	static uint32_t x404 = UINT32_MAX;
	static volatile int32_t t93 = 448068;

	t93 = (x401<=(x402<=(x403+x404)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x405 = INT32_MIN;
	static int32_t x408 = 20;
	int32_t t94 = -1;

	t94 = (x405<=(x406<=(x407+x408)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = -1;
	volatile int64_t x410 = -1LL;
	int8_t x411 = -1;
	volatile int32_t t95 = 97635373;

	t95 = (x409<=(x410<=(x411+x412)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x413 = -1;
	volatile uint16_t x414 = 4688U;
	int32_t x416 = 235558865;
	volatile int32_t t96 = 192118260;

	t96 = (x413<=(x414<=(x415+x416)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x417 = INT32_MIN;
	uint32_t x418 = 32360U;
	int64_t x419 = INT64_MAX;
	int32_t t97 = 924;

	t97 = (x417<=(x418<=(x419+x420)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x422 = -1;
	int64_t x423 = -2232193LL;
	uint64_t x424 = 5029833822260840849LLU;
	int32_t t98 = 8;

	t98 = (x421<=(x422<=(x423+x424)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x425 = 737160318U;
	uint64_t x428 = 296606650LLU;
	int32_t t99 = -230;

	t99 = (x425<=(x426<=(x427+x428)));

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

