#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x4 = 15948177;
static int32_t x5 = INT32_MAX;
int64_t x12 = 128LL;
int8_t x16 = INT8_MIN;
uint32_t x21 = 5081U;
volatile int64_t x23 = -1LL;
uint64_t x27 = 17LLU;
static volatile int32_t t6 = 5547;
static int32_t x29 = INT32_MAX;
uint64_t x35 = 66981979529LLU;
uint8_t x37 = UINT8_MAX;
int32_t x39 = -1;
int32_t t9 = 450594;
volatile int32_t t10 = -2778;
int64_t x48 = -1084178863655812LL;
int32_t t13 = -2763695;
int64_t x57 = INT64_MIN;
int16_t x60 = INT16_MIN;
int64_t x64 = -1LL;
int32_t t15 = -41245177;
int64_t x68 = -18LL;
int32_t t16 = 112373;
int8_t x69 = INT8_MAX;
int16_t x80 = 0;
uint16_t x84 = 503U;
int32_t t20 = -5488;
static int16_t x87 = -7;
int16_t x93 = -11950;
volatile uint32_t x102 = UINT32_MAX;
static volatile uint8_t x112 = 20U;
volatile uint32_t x114 = UINT32_MAX;
static volatile uint64_t x117 = UINT64_MAX;
int32_t x124 = INT32_MIN;
int32_t t32 = 0;
static int8_t x134 = INT8_MIN;
volatile int8_t x135 = -1;
volatile int16_t x139 = INT16_MIN;
int16_t x144 = -6;
uint16_t x148 = 6U;
uint32_t x152 = 5837617U;
int32_t t37 = 526084;
int32_t x159 = INT32_MIN;
uint32_t x163 = UINT32_MAX;
int64_t x164 = INT64_MIN;
int16_t x167 = INT16_MIN;
volatile int32_t t41 = 4552613;
int16_t x169 = -1;
uint64_t x180 = UINT64_MAX;
int64_t x183 = 43428263553974316LL;
uint8_t x197 = 3U;
uint64_t x198 = UINT64_MAX;
uint64_t x204 = UINT64_MAX;
static int32_t t50 = 15983247;
int32_t x209 = -1;
static int64_t x213 = -1LL;
volatile int8_t x219 = INT8_MAX;
volatile int32_t t58 = 973;
int32_t x243 = INT32_MAX;
int8_t x249 = 6;
static uint8_t x257 = 0U;
int32_t t64 = -278070438;
uint64_t x261 = UINT64_MAX;
volatile int32_t t65 = 0;
volatile uint64_t x265 = UINT64_MAX;
int32_t t67 = -1;
int16_t x275 = INT16_MIN;
uint16_t x276 = 37U;
volatile uint8_t x278 = 2U;
volatile uint16_t x280 = 481U;
uint32_t x281 = UINT32_MAX;
volatile int32_t t70 = 4777;
uint8_t x287 = 3U;
uint8_t x290 = 0U;
int64_t x291 = 3077995374265079279LL;
int64_t x293 = -177852LL;
volatile int16_t x294 = 189;
static int32_t x295 = -1;
int32_t t74 = 119445;
int16_t x303 = -1;
uint8_t x311 = UINT8_MAX;
static int64_t x312 = 361203791855LL;
int32_t x315 = 14751;
uint8_t x319 = 3U;
static int8_t x323 = INT8_MIN;
int16_t x326 = INT16_MIN;
volatile int32_t t83 = 110081;
int32_t t86 = 8;
static volatile int8_t x349 = INT8_MIN;
int32_t x356 = 96;
int64_t x357 = -1LL;
volatile int32_t x366 = INT32_MAX;
int64_t x370 = INT64_MIN;
int8_t x374 = INT8_MIN;
int32_t x375 = 114;
volatile int64_t x383 = INT64_MIN;
int32_t t95 = 5038877;
int64_t x385 = INT64_MIN;
int64_t x387 = -93159091978LL;
uint32_t x388 = UINT32_MAX;
int16_t x399 = -1;
int32_t t99 = -17;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int64_t x2 = INT64_MIN;
	volatile int8_t x3 = INT8_MIN;
	int32_t t0 = 135;

	t0 = (x1<=(x2==(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = INT16_MIN;
	uint16_t x7 = 12U;
	volatile uint32_t x8 = UINT32_MAX;
	int32_t t1 = 5;

	t1 = (x5<=(x6==(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 52006005LLU;
	int32_t x10 = INT32_MAX;
	uint32_t x11 = 44U;
	volatile int32_t t2 = 81848;

	t2 = (x9<=(x10==(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	static volatile uint8_t x14 = UINT8_MAX;
	static int16_t x15 = -1;
	int32_t t3 = -544;

	t3 = (x13<=(x14==(x15<x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 7465LLU;
	int8_t x18 = INT8_MAX;
	int8_t x19 = INT8_MIN;
	static int32_t x20 = INT32_MAX;
	volatile int32_t t4 = -12336679;

	t4 = (x17<=(x18==(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = 9;
	volatile uint16_t x24 = UINT16_MAX;
	int32_t t5 = -10038;

	t5 = (x21<=(x22==(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 18241079LLU;
	uint16_t x26 = 6U;
	static volatile uint32_t x28 = 417087306U;

	t6 = (x25<=(x26==(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	int64_t x31 = -1LL;
	uint8_t x32 = 7U;
	volatile int32_t t7 = 1307362;

	t7 = (x29<=(x30==(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	static uint8_t x34 = 16U;
	volatile uint64_t x36 = 12124875872LLU;
	volatile int32_t t8 = 1295778;

	t8 = (x33<=(x34==(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = 1;
	int16_t x40 = 83;

	t9 = (x37<=(x38==(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = -32673770LL;
	volatile uint32_t x42 = 28374358U;
	volatile uint8_t x43 = 0U;
	static int64_t x44 = INT64_MIN;

	t10 = (x41<=(x42==(x43<x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MIN;
	uint16_t x46 = 2919U;
	int16_t x47 = INT16_MIN;
	int32_t t11 = 6287;

	t11 = (x45<=(x46==(x47<x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	int8_t x50 = -1;
	volatile int16_t x51 = INT16_MAX;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 22123218;

	t12 = (x49<=(x50==(x51<x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 40U;
	uint32_t x54 = 92U;
	static uint16_t x55 = 1U;
	uint64_t x56 = 8502LLU;

	t13 = (x53<=(x54==(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x58 = INT8_MIN;
	volatile int16_t x59 = INT16_MIN;
	int32_t t14 = 1265;

	t14 = (x57<=(x58==(x59<x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	uint16_t x62 = 1956U;
	uint16_t x63 = 1942U;

	t15 = (x61<=(x62==(x63<x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 330530U;
	uint32_t x66 = UINT32_MAX;
	int8_t x67 = -6;

	t16 = (x65<=(x66==(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MIN;
	volatile int64_t x71 = -1LL;
	int64_t x72 = 43529110165LL;
	volatile int32_t t17 = -216537553;

	t17 = (x69<=(x70==(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	static volatile int16_t x74 = -1;
	int32_t x75 = -121;
	uint64_t x76 = 944811996673682LLU;
	static volatile int32_t t18 = -7;

	t18 = (x73<=(x74==(x75<x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -1;
	int8_t x78 = -1;
	int64_t x79 = INT64_MAX;
	int32_t t19 = 123211;

	t19 = (x77<=(x78==(x79<x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = UINT8_MAX;
	int16_t x82 = 3601;
	uint8_t x83 = UINT8_MAX;

	t20 = (x81<=(x82==(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 0;
	int64_t x86 = INT64_MIN;
	int8_t x88 = -4;
	int32_t t21 = 3633780;

	t21 = (x85<=(x86==(x87<x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	int16_t x90 = -1;
	int16_t x91 = INT16_MIN;
	volatile uint64_t x92 = 148733972379661304LLU;
	volatile int32_t t22 = 573058;

	t22 = (x89<=(x90==(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = INT8_MIN;
	uint64_t x95 = UINT64_MAX;
	volatile int32_t x96 = 33486845;
	static int32_t t23 = 165195;

	t23 = (x93<=(x94==(x95<x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	uint16_t x98 = 3U;
	int8_t x99 = -1;
	static uint16_t x100 = 1U;
	static volatile int32_t t24 = 1571806;

	t24 = (x97<=(x98==(x99<x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 11325816514LL;
	int32_t x103 = 14397337;
	static volatile uint64_t x104 = 1099370678831170820LLU;
	volatile int32_t t25 = 0;

	t25 = (x101<=(x102==(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int64_t x106 = -1LL;
	int32_t x107 = INT32_MIN;
	int64_t x108 = -33385359737LL;
	int32_t t26 = 120296;

	t26 = (x105<=(x106==(x107<x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 0;
	int16_t x110 = -1;
	uint64_t x111 = 223574084453LLU;
	volatile int32_t t27 = 1791873;

	t27 = (x109<=(x110==(x111<x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int16_t x115 = INT16_MAX;
	static volatile uint8_t x116 = 9U;
	static int32_t t28 = -30491231;

	t28 = (x113<=(x114==(x115<x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x118 = UINT8_MAX;
	int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MAX;
	int32_t t29 = -693045;

	t29 = (x117<=(x118==(x119<x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 1U;
	volatile uint64_t x122 = UINT64_MAX;
	volatile uint32_t x123 = UINT32_MAX;
	volatile int32_t t30 = 32;

	t30 = (x121<=(x122==(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = -1;
	int32_t x126 = INT32_MAX;
	uint16_t x127 = 18U;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = 275113;

	t31 = (x125<=(x126==(x127<x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = INT8_MAX;
	volatile int64_t x130 = -3406391931LL;
	int8_t x131 = -16;
	volatile uint16_t x132 = 54U;

	t32 = (x129<=(x130==(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 0;
	volatile int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 2;

	t33 = (x133<=(x134==(x135<x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	volatile uint8_t x138 = UINT8_MAX;
	int32_t x140 = -8320;
	volatile int32_t t34 = 189081597;

	t34 = (x137<=(x138==(x139<x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	int32_t x142 = INT32_MIN;
	uint64_t x143 = 450221LLU;
	int32_t t35 = 2;

	t35 = (x141<=(x142==(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = 6133U;
	volatile uint32_t x146 = UINT32_MAX;
	int32_t x147 = INT32_MIN;
	volatile int32_t t36 = -54610;

	t36 = (x145<=(x146==(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 2324U;
	static volatile int32_t x150 = 1;
	uint16_t x151 = 971U;

	t37 = (x149<=(x150==(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -7;
	volatile int64_t x154 = -1LL;
	uint16_t x155 = UINT16_MAX;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = -257;

	t38 = (x153<=(x154==(x155<x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	static int8_t x158 = 31;
	int8_t x160 = INT8_MIN;
	volatile int32_t t39 = 4;

	t39 = (x157<=(x158==(x159<x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 67U;
	static int32_t x162 = INT32_MIN;
	volatile int32_t t40 = 2;

	t40 = (x161<=(x162==(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 37U;
	volatile int8_t x166 = -1;
	int16_t x168 = 78;

	t41 = (x165<=(x166==(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MIN;
	volatile int64_t x171 = INT64_MIN;
	int32_t x172 = INT32_MIN;
	int32_t t42 = 1392252;

	t42 = (x169<=(x170==(x171<x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 12;
	uint32_t x174 = UINT32_MAX;
	uint8_t x175 = 19U;
	uint64_t x176 = 4923805LLU;
	int32_t t43 = 19566;

	t43 = (x173<=(x174==(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = -12;
	static volatile int64_t x178 = -4360991005107174LL;
	static volatile int64_t x179 = 1761947692LL;
	int32_t t44 = -31508;

	t44 = (x177<=(x178==(x179<x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = 5;
	int8_t x182 = -22;
	int32_t x184 = INT32_MIN;
	static volatile int32_t t45 = 11;

	t45 = (x181<=(x182==(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	static uint8_t x186 = UINT8_MAX;
	uint16_t x187 = 48U;
	int64_t x188 = INT64_MIN;
	int32_t t46 = -2;

	t46 = (x185<=(x186==(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 1U;
	static int32_t x190 = 0;
	int16_t x191 = INT16_MAX;
	uint16_t x192 = 3264U;
	static int32_t t47 = -44097236;

	t47 = (x189<=(x190==(x191<x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = INT64_MIN;
	int8_t x194 = -7;
	int64_t x195 = -1LL;
	static int8_t x196 = INT8_MIN;
	volatile int32_t t48 = -174;

	t48 = (x193<=(x194==(x195<x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x199 = INT32_MIN;
	int8_t x200 = INT8_MAX;
	int32_t t49 = -58;

	t49 = (x197<=(x198==(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	volatile int8_t x202 = INT8_MIN;
	int64_t x203 = INT64_MIN;

	t50 = (x201<=(x202==(x203<x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	static int16_t x206 = INT16_MIN;
	static int8_t x207 = INT8_MAX;
	uint64_t x208 = 1214766485103LLU;
	int32_t t51 = 186;

	t51 = (x205<=(x206==(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = INT32_MIN;
	volatile int16_t x211 = -1;
	uint32_t x212 = UINT32_MAX;
	volatile int32_t t52 = 114022374;

	t52 = (x209<=(x210==(x211<x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = 0U;
	volatile int64_t x215 = -1LL;
	volatile int32_t x216 = INT32_MIN;
	int32_t t53 = 41326;

	t53 = (x213<=(x214==(x215<x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 44;
	static int32_t x218 = -3829590;
	volatile int8_t x220 = INT8_MAX;
	int32_t t54 = -27092;

	t54 = (x217<=(x218==(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int8_t x222 = 2;
	int32_t x223 = -1;
	volatile int8_t x224 = -1;
	volatile int32_t t55 = -575;

	t55 = (x221<=(x222==(x223<x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = -20;
	int8_t x227 = -2;
	volatile uint8_t x228 = 10U;
	int32_t t56 = -3089214;

	t56 = (x225<=(x226==(x227<x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x229 = UINT16_MAX;
	int8_t x230 = INT8_MIN;
	int64_t x231 = 21403663213938LL;
	uint32_t x232 = 15640U;
	int32_t t57 = -38812864;

	t57 = (x229<=(x230==(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MAX;
	uint32_t x234 = 220653770U;
	int64_t x235 = INT64_MIN;
	int32_t x236 = INT32_MIN;

	t58 = (x233<=(x234==(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	static volatile int8_t x238 = INT8_MIN;
	int8_t x239 = -1;
	uint32_t x240 = 7158U;
	int32_t t59 = 9721;

	t59 = (x237<=(x238==(x239<x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -14243;
	static int64_t x242 = INT64_MAX;
	int64_t x244 = -1LL;
	volatile int32_t t60 = 122175;

	t60 = (x241<=(x242==(x243<x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x245 = 4991U;
	int64_t x246 = -1LL;
	uint32_t x247 = 15U;
	uint8_t x248 = 108U;
	volatile int32_t t61 = 18826;

	t61 = (x245<=(x246==(x247<x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = -160943754;
	int64_t x251 = -1LL;
	uint32_t x252 = UINT32_MAX;
	static int32_t t62 = 9;

	t62 = (x249<=(x250==(x251<x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = INT8_MIN;
	static int64_t x254 = INT64_MAX;
	uint16_t x255 = UINT16_MAX;
	int8_t x256 = INT8_MAX;
	int32_t t63 = 4568453;

	t63 = (x253<=(x254==(x255<x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = INT8_MAX;
	static int16_t x259 = 134;
	int32_t x260 = -1;

	t64 = (x257<=(x258==(x259<x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x262 = UINT64_MAX;
	static int16_t x263 = 1;
	uint32_t x264 = 186431U;

	t65 = (x261<=(x262==(x263<x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x266 = 28133U;
	int32_t x267 = INT32_MIN;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t66 = 210;

	t66 = (x265<=(x266==(x267<x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 661U;
	volatile int32_t x270 = 261263459;
	static uint8_t x271 = UINT8_MAX;
	int32_t x272 = 481235;

	t67 = (x269<=(x270==(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 14U;
	int32_t x274 = -231;
	volatile int32_t t68 = -379;

	t68 = (x273<=(x274==(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 1;
	int16_t x279 = INT16_MAX;
	int32_t t69 = -4;

	t69 = (x277<=(x278==(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x282 = INT16_MAX;
	uint16_t x283 = 288U;
	int32_t x284 = -71302251;

	t70 = (x281<=(x282==(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	static uint16_t x286 = UINT16_MAX;
	static volatile uint32_t x288 = 10995961U;
	int32_t t71 = 115;

	t71 = (x285<=(x286==(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	int64_t x292 = INT64_MIN;
	int32_t t72 = -164;

	t72 = (x289<=(x290==(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x296 = -12LL;
	int32_t t73 = -6;

	t73 = (x293<=(x294==(x295<x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = 1;
	int8_t x298 = -1;
	int8_t x299 = -1;
	uint64_t x300 = 1435LLU;

	t74 = (x297<=(x298==(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 6854166LL;
	int8_t x302 = -3;
	int8_t x304 = -7;
	static int32_t t75 = -229;

	t75 = (x301<=(x302==(x303<x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	volatile uint8_t x306 = UINT8_MAX;
	uint8_t x307 = UINT8_MAX;
	int16_t x308 = INT16_MIN;
	volatile int32_t t76 = -383977870;

	t76 = (x305<=(x306==(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int64_t x310 = INT64_MIN;
	int32_t t77 = 52628;

	t77 = (x309<=(x310==(x311<x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = INT64_MIN;
	static int64_t x314 = 0LL;
	int8_t x316 = INT8_MIN;
	static int32_t t78 = 40147787;

	t78 = (x313<=(x314==(x315<x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	static int64_t x318 = INT64_MIN;
	volatile int32_t x320 = INT32_MAX;
	int32_t t79 = -8246379;

	t79 = (x317<=(x318==(x319<x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MAX;
	uint32_t x324 = UINT32_MAX;
	volatile int32_t t80 = 13;

	t80 = (x321<=(x322==(x323<x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = 0;
	int16_t x327 = INT16_MIN;
	static int64_t x328 = INT64_MIN;
	volatile int32_t t81 = -155;

	t81 = (x325<=(x326==(x327<x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	volatile uint32_t x330 = 371908U;
	int64_t x331 = INT64_MIN;
	int64_t x332 = INT64_MIN;
	static int32_t t82 = 87822659;

	t82 = (x329<=(x330==(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	uint8_t x334 = UINT8_MAX;
	uint16_t x335 = UINT16_MAX;
	uint32_t x336 = 1U;

	t83 = (x333<=(x334==(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = -4101985;
	int8_t x338 = INT8_MAX;
	uint64_t x339 = 15957697476374LLU;
	int16_t x340 = INT16_MAX;
	volatile int32_t t84 = -2456;

	t84 = (x337<=(x338==(x339<x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = 1288U;
	uint16_t x342 = 1U;
	int16_t x343 = 22;
	volatile int16_t x344 = INT16_MAX;
	int32_t t85 = 1060;

	t85 = (x341<=(x342==(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = -1;
	int8_t x346 = INT8_MAX;
	static int8_t x347 = INT8_MIN;
	uint32_t x348 = 16U;

	t86 = (x345<=(x346==(x347<x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x350 = UINT32_MAX;
	static int8_t x351 = INT8_MIN;
	uint8_t x352 = UINT8_MAX;
	int32_t t87 = 5511;

	t87 = (x349<=(x350==(x351<x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = -364470412357LL;
	volatile uint64_t x354 = UINT64_MAX;
	int8_t x355 = 0;
	volatile int32_t t88 = 2087136;

	t88 = (x353<=(x354==(x355<x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = INT8_MAX;
	volatile int16_t x359 = -201;
	static uint32_t x360 = 111U;
	volatile int32_t t89 = 27;

	t89 = (x357<=(x358==(x359<x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = 3230U;
	int32_t x362 = -51;
	int64_t x363 = INT64_MIN;
	uint8_t x364 = 0U;
	int32_t t90 = 554;

	t90 = (x361<=(x362==(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = UINT32_MAX;
	uint8_t x367 = 19U;
	int32_t x368 = INT32_MIN;
	int32_t t91 = -317743;

	t91 = (x365<=(x366==(x367<x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -827LL;
	int32_t x371 = INT32_MAX;
	int64_t x372 = -1135320697LL;
	volatile int32_t t92 = -1;

	t92 = (x369<=(x370==(x371<x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = -480064224034956291LL;
	uint64_t x376 = 160394259073163LLU;
	volatile int32_t t93 = 6234;

	t93 = (x373<=(x374==(x375<x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x377 = -1;
	static uint32_t x378 = 64420523U;
	int64_t x379 = 7434341091LL;
	uint16_t x380 = 6U;
	static int32_t t94 = 0;

	t94 = (x377<=(x378==(x379<x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	int32_t x382 = -6485;
	int16_t x384 = -1;

	t95 = (x381<=(x382==(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x386 = 22241U;
	int32_t t96 = 281;

	t96 = (x385<=(x386==(x387<x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 29;
	uint16_t x390 = 1307U;
	uint16_t x391 = 3U;
	int8_t x392 = 5;
	int32_t t97 = -14812;

	t97 = (x389<=(x390==(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = INT16_MIN;
	int8_t x394 = -1;
	volatile int8_t x395 = 8;
	uint8_t x396 = UINT8_MAX;
	int32_t t98 = 244475;

	t98 = (x393<=(x394==(x395<x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = INT64_MIN;
	uint32_t x398 = 250476U;
	static uint16_t x400 = 0U;

	t99 = (x397<=(x398==(x399<x400)));

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

