#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -7542891;
int32_t t1 = -984;
uint16_t x10 = 2U;
volatile uint64_t x11 = 15LLU;
volatile int16_t x13 = INT16_MIN;
volatile int32_t t3 = 1362;
int8_t x34 = 0;
int32_t t9 = -806319;
static uint64_t x44 = UINT64_MAX;
uint8_t x47 = 0U;
uint64_t x53 = 64799674681048244LLU;
uint16_t x58 = 87U;
uint32_t x60 = 625200U;
static uint8_t x62 = UINT8_MAX;
volatile int32_t t15 = 3;
int8_t x66 = -1;
volatile int32_t x69 = -576656140;
uint64_t x73 = 12LLU;
int32_t x75 = INT32_MIN;
volatile int8_t x77 = -1;
static int64_t x80 = -1LL;
volatile int32_t t19 = 5;
int32_t x83 = INT32_MAX;
volatile int64_t x89 = -1LL;
uint64_t x92 = 248935LLU;
int32_t x95 = INT32_MIN;
volatile int32_t t24 = -26;
int64_t x103 = -2645902172LL;
static uint32_t x106 = UINT32_MAX;
volatile int32_t t26 = -1;
int16_t x111 = INT16_MIN;
uint32_t x114 = UINT32_MAX;
int16_t x127 = INT16_MAX;
int8_t x132 = INT8_MIN;
int16_t x135 = -1;
int64_t x138 = INT64_MAX;
volatile int32_t t34 = 0;
volatile uint8_t x145 = UINT8_MAX;
uint16_t x152 = 30344U;
static uint32_t x155 = UINT32_MAX;
static uint64_t x161 = 187042LLU;
int8_t x163 = 2;
int16_t x165 = INT16_MAX;
int8_t x166 = INT8_MIN;
int32_t x170 = INT32_MIN;
uint32_t x183 = 4U;
int16_t x186 = -1;
volatile int32_t x187 = -694;
volatile int32_t t46 = -69486;
static volatile int32_t t48 = 1;
static int8_t x197 = INT8_MIN;
uint16_t x208 = 10126U;
uint64_t x212 = UINT64_MAX;
static uint64_t x215 = UINT64_MAX;
int16_t x222 = -251;
int32_t x228 = INT32_MIN;
volatile int64_t x229 = -1LL;
uint8_t x232 = 0U;
int8_t x238 = INT8_MIN;
int32_t x249 = INT32_MIN;
volatile int8_t x250 = 0;
int32_t x251 = INT32_MIN;
uint16_t x252 = 55U;
volatile int32_t t62 = 5625221;
static int64_t x255 = 9519633LL;
int32_t t63 = -580067812;
volatile int32_t t65 = -47;
int8_t x273 = INT8_MIN;
static volatile int32_t x275 = INT32_MAX;
volatile int32_t t68 = 87266;
uint64_t x277 = UINT64_MAX;
int64_t x280 = -1LL;
volatile int32_t t69 = 0;
int64_t x284 = -1LL;
static uint8_t x288 = 5U;
volatile int32_t t71 = -22014;
volatile uint8_t x293 = UINT8_MAX;
volatile int16_t x297 = INT16_MIN;
int32_t x304 = INT32_MIN;
int8_t x306 = 0;
volatile int32_t x314 = INT32_MIN;
static int32_t x315 = INT32_MIN;
int16_t x320 = INT16_MIN;
volatile uint16_t x325 = 481U;
int8_t x326 = INT8_MIN;
uint8_t x327 = 67U;
volatile int8_t x329 = -1;
volatile int8_t x332 = 1;
uint16_t x337 = UINT16_MAX;
static uint32_t x342 = 397509871U;
volatile uint32_t x343 = 5U;
static volatile int32_t t87 = 239;
volatile int32_t t89 = 8;
int8_t x362 = INT8_MIN;
int8_t x370 = 25;
uint32_t x373 = UINT32_MAX;
static volatile int64_t x377 = -9799978312LL;
volatile int8_t x384 = INT8_MAX;
volatile int32_t t95 = 0;
static int32_t t98 = -68;
int8_t x399 = 32;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	volatile int16_t x2 = 3;
	uint8_t x3 = 1U;
	uint64_t x4 = 11598756639977136LLU;

	t0 = ((x1<x2)<=(x3<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int32_t x6 = -4;
	int32_t x7 = 79;
	int32_t x8 = INT32_MIN;

	t1 = ((x5<x6)<=(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int16_t x12 = 9013;
	int32_t t2 = 280652631;

	t2 = ((x9<x10)<=(x11<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 0U;
	static volatile uint8_t x15 = 57U;
	uint8_t x16 = 72U;

	t3 = ((x13<x14)<=(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	uint64_t x18 = 311714098LLU;
	static int64_t x19 = 9980LL;
	int8_t x20 = -1;
	int32_t t4 = 333;

	t4 = ((x17<x18)<=(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	static int32_t x22 = INT32_MAX;
	uint64_t x23 = UINT64_MAX;
	uint8_t x24 = 8U;
	int32_t t5 = -1314;

	t5 = ((x21<x22)<=(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	volatile uint32_t x26 = 0U;
	uint8_t x27 = 1U;
	int8_t x28 = 6;
	volatile int32_t t6 = -11;

	t6 = ((x25<x26)<=(x27<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	int64_t x30 = INT64_MIN;
	int8_t x31 = -14;
	static int16_t x32 = INT16_MIN;
	int32_t t7 = 22003;

	t7 = ((x29<x30)<=(x31<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 3770260U;
	int32_t x35 = 943668486;
	int64_t x36 = 24LL;
	static int32_t t8 = 73146;

	t8 = ((x33<x34)<=(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 3609307412820LL;
	int64_t x38 = INT64_MIN;
	int16_t x39 = 896;
	static volatile int32_t x40 = INT32_MIN;

	t9 = ((x37<x38)<=(x39<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x41 = 688964932U;
	static int64_t x42 = INT64_MIN;
	volatile uint32_t x43 = UINT32_MAX;
	int32_t t10 = 76815;

	t10 = ((x41<x42)<=(x43<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 22738U;
	uint32_t x46 = UINT32_MAX;
	uint64_t x48 = 132647566060737LLU;
	volatile int32_t t11 = 640;

	t11 = ((x45<x46)<=(x47<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	static int64_t x50 = INT64_MIN;
	static int16_t x51 = INT16_MAX;
	volatile uint32_t x52 = 487U;
	volatile int32_t t12 = 935131569;

	t12 = ((x49<x50)<=(x51<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	int64_t x55 = INT64_MIN;
	volatile int8_t x56 = 2;
	volatile int32_t t13 = 4336143;

	t13 = ((x53<x54)<=(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int64_t x59 = INT64_MIN;
	int32_t t14 = -144238817;

	t14 = ((x57<x58)<=(x59<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	int8_t x63 = -1;
	int16_t x64 = -1;

	t15 = ((x61<x62)<=(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 60875;
	uint16_t x67 = 25U;
	static volatile int32_t x68 = INT32_MIN;
	int32_t t16 = -53660214;

	t16 = ((x65<x66)<=(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x70 = UINT8_MAX;
	volatile int16_t x71 = -28;
	int8_t x72 = INT8_MIN;
	int32_t t17 = -150568;

	t17 = ((x69<x70)<=(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = 11U;
	uint32_t x76 = UINT32_MAX;
	int32_t t18 = 1067097800;

	t18 = ((x73<x74)<=(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MAX;
	static int16_t x79 = INT16_MIN;

	t19 = ((x77<x78)<=(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = 3;
	int16_t x82 = INT16_MIN;
	int32_t x84 = 1057465;
	volatile int32_t t20 = -139825964;

	t20 = ((x81<x82)<=(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	int16_t x86 = INT16_MIN;
	int8_t x87 = 0;
	int32_t x88 = -1;
	int32_t t21 = -124;

	t21 = ((x85<x86)<=(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = -1;
	volatile int64_t x91 = INT64_MIN;
	static volatile int32_t t22 = -410226720;

	t22 = ((x89<x90)<=(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MAX;
	int32_t x94 = INT32_MIN;
	int8_t x96 = INT8_MAX;
	int32_t t23 = 85598;

	t23 = ((x93<x94)<=(x95<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int8_t x98 = INT8_MIN;
	volatile int8_t x99 = INT8_MAX;
	static uint8_t x100 = 14U;

	t24 = ((x97<x98)<=(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x101 = -1;
	volatile uint8_t x102 = 5U;
	uint16_t x104 = 0U;
	static int32_t t25 = 254841636;

	t25 = ((x101<x102)<=(x103<x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -1;
	int64_t x107 = INT64_MIN;
	int8_t x108 = -1;

	t26 = ((x105<x106)<=(x107<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 0U;
	static uint16_t x110 = 3862U;
	volatile int8_t x112 = -1;
	volatile int32_t t27 = 668267424;

	t27 = ((x109<x110)<=(x111<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	int16_t x115 = 205;
	int64_t x116 = -1LL;
	static volatile int32_t t28 = -262838786;

	t28 = ((x113<x114)<=(x115<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	int64_t x118 = INT64_MIN;
	int8_t x119 = INT8_MAX;
	int16_t x120 = -1310;
	volatile int32_t t29 = 1517787;

	t29 = ((x117<x118)<=(x119<x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = INT64_MIN;
	uint8_t x122 = 1U;
	int32_t x123 = 13;
	int64_t x124 = -384832914499634787LL;
	volatile int32_t t30 = -377576;

	t30 = ((x121<x122)<=(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x125 = UINT16_MAX;
	static int8_t x126 = INT8_MAX;
	int32_t x128 = INT32_MAX;
	volatile int32_t t31 = -13374283;

	t31 = ((x125<x126)<=(x127<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int32_t x130 = 2165;
	volatile uint32_t x131 = UINT32_MAX;
	static int32_t t32 = 7514;

	t32 = ((x129<x130)<=(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 1;
	volatile int16_t x134 = INT16_MAX;
	uint8_t x136 = 24U;
	int32_t t33 = -1433;

	t33 = ((x133<x134)<=(x135<x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 3304548LLU;
	static int16_t x139 = INT16_MAX;
	static volatile int32_t x140 = 110269535;

	t34 = ((x137<x138)<=(x139<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MIN;
	uint8_t x143 = 15U;
	int64_t x144 = -757187023LL;
	int32_t t35 = 162275;

	t35 = ((x141<x142)<=(x143<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x146 = INT16_MIN;
	int16_t x147 = INT16_MIN;
	int8_t x148 = -1;
	static int32_t t36 = -640391263;

	t36 = ((x145<x146)<=(x147<x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	int8_t x150 = 0;
	int32_t x151 = INT32_MIN;
	static volatile int32_t t37 = 7776664;

	t37 = ((x149<x150)<=(x151<x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x153 = 16;
	volatile int16_t x154 = INT16_MAX;
	int16_t x156 = -396;
	static int32_t t38 = -1636102;

	t38 = ((x153<x154)<=(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	static int8_t x158 = -62;
	int32_t x159 = INT32_MIN;
	static uint8_t x160 = 10U;
	static volatile int32_t t39 = -12442;

	t39 = ((x157<x158)<=(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = INT64_MAX;
	int16_t x164 = -3;
	static int32_t t40 = -503154308;

	t40 = ((x161<x162)<=(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x167 = 716788242185442549LLU;
	int64_t x168 = -1LL;
	volatile int32_t t41 = -10542;

	t41 = ((x165<x166)<=(x167<x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = UINT8_MAX;
	static volatile int64_t x171 = INT64_MIN;
	int16_t x172 = 46;
	volatile int32_t t42 = 274115;

	t42 = ((x169<x170)<=(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MAX;
	int32_t x174 = -2084291;
	static volatile int16_t x175 = INT16_MIN;
	volatile uint8_t x176 = 0U;
	int32_t t43 = 4791038;

	t43 = ((x173<x174)<=(x175<x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 3929381;
	static int32_t x178 = INT32_MIN;
	static int32_t x179 = INT32_MIN;
	static volatile int32_t x180 = INT32_MIN;
	int32_t t44 = 10;

	t44 = ((x177<x178)<=(x179<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x181 = UINT64_MAX;
	volatile uint8_t x182 = UINT8_MAX;
	int32_t x184 = INT32_MAX;
	volatile int32_t t45 = 1268;

	t45 = ((x181<x182)<=(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	uint16_t x188 = UINT16_MAX;

	t46 = ((x185<x186)<=(x187<x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	int16_t x190 = -17;
	volatile int64_t x191 = -1LL;
	int32_t x192 = -1;
	volatile int32_t t47 = -75;

	t47 = ((x189<x190)<=(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	uint8_t x194 = 0U;
	uint64_t x195 = 642931520LLU;
	volatile int32_t x196 = -1;

	t48 = ((x193<x194)<=(x195<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x198 = 5U;
	volatile int16_t x199 = -1;
	int8_t x200 = INT8_MIN;
	static int32_t t49 = 21584453;

	t49 = ((x197<x198)<=(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 969;
	int64_t x202 = INT64_MAX;
	int64_t x203 = -1LL;
	static int16_t x204 = INT16_MIN;
	static volatile int32_t t50 = 2;

	t50 = ((x201<x202)<=(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	uint32_t x206 = 993U;
	int16_t x207 = INT16_MIN;
	volatile int32_t t51 = 750584914;

	t51 = ((x205<x206)<=(x207<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x209 = UINT16_MAX;
	uint32_t x210 = 353247038U;
	int16_t x211 = -1;
	int32_t t52 = 30;

	t52 = ((x209<x210)<=(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x213 = 1522202U;
	uint16_t x214 = 14U;
	static volatile int8_t x216 = -40;
	volatile int32_t t53 = -4030263;

	t53 = ((x213<x214)<=(x215<x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	volatile int8_t x218 = INT8_MAX;
	int64_t x219 = INT64_MIN;
	uint64_t x220 = 9209978LLU;
	volatile int32_t t54 = 102093;

	t54 = ((x217<x218)<=(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = UINT16_MAX;
	int8_t x223 = -6;
	int8_t x224 = -1;
	static int32_t t55 = 2;

	t55 = ((x221<x222)<=(x223<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int64_t x226 = -1LL;
	volatile int16_t x227 = INT16_MIN;
	int32_t t56 = -901223144;

	t56 = ((x225<x226)<=(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x230 = 0U;
	int32_t x231 = INT32_MIN;
	volatile int32_t t57 = -42;

	t57 = ((x229<x230)<=(x231<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	int8_t x234 = 1;
	int32_t x235 = INT32_MIN;
	int32_t x236 = -1;
	int32_t t58 = 454521;

	t58 = ((x233<x234)<=(x235<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = -1;
	uint32_t x239 = UINT32_MAX;
	int8_t x240 = INT8_MAX;
	int32_t t59 = -797375724;

	t59 = ((x237<x238)<=(x239<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	static uint8_t x242 = 50U;
	int32_t x243 = INT32_MIN;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t60 = -2;

	t60 = ((x241<x242)<=(x243<x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MIN;
	int64_t x246 = -1LL;
	int8_t x247 = -44;
	int8_t x248 = -1;
	volatile int32_t t61 = 72;

	t61 = ((x245<x246)<=(x247<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {


	t62 = ((x249<x250)<=(x251<x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 4U;
	static int16_t x254 = INT16_MIN;
	uint16_t x256 = 1636U;

	t63 = ((x253<x254)<=(x255<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	int8_t x258 = 1;
	volatile int64_t x259 = INT64_MIN;
	volatile uint32_t x260 = 184733708U;
	int32_t t64 = 33585;

	t64 = ((x257<x258)<=(x259<x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = -1;
	int64_t x262 = -1LL;
	volatile int16_t x263 = 0;
	static int64_t x264 = INT64_MIN;

	t65 = ((x261<x262)<=(x263<x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	uint16_t x266 = 13699U;
	int32_t x267 = INT32_MIN;
	static uint16_t x268 = UINT16_MAX;
	volatile int32_t t66 = 1241738;

	t66 = ((x265<x266)<=(x267<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = INT8_MIN;
	uint64_t x271 = 26864558LLU;
	uint32_t x272 = 1U;
	int32_t t67 = 1314;

	t67 = ((x269<x270)<=(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x274 = UINT8_MAX;
	int32_t x276 = -1;

	t68 = ((x273<x274)<=(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = -2814;
	uint16_t x279 = 84U;

	t69 = ((x277<x278)<=(x279<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int64_t x282 = INT64_MIN;
	int8_t x283 = INT8_MIN;
	int32_t t70 = 221;

	t70 = ((x281<x282)<=(x283<x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	uint8_t x286 = UINT8_MAX;
	int64_t x287 = -1LL;

	t71 = ((x285<x286)<=(x287<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = INT16_MIN;
	static uint8_t x290 = 0U;
	uint64_t x291 = 47LLU;
	int64_t x292 = 292LL;
	volatile int32_t t72 = -4;

	t72 = ((x289<x290)<=(x291<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x294 = 39220191171602LLU;
	int64_t x295 = INT64_MIN;
	volatile int64_t x296 = INT64_MAX;
	volatile int32_t t73 = -1048016687;

	t73 = ((x293<x294)<=(x295<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = 6675;
	int64_t x299 = 3369140304LL;
	volatile int8_t x300 = INT8_MAX;
	volatile int32_t t74 = -5606790;

	t74 = ((x297<x298)<=(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	static uint8_t x302 = 1U;
	uint32_t x303 = 7U;
	volatile int32_t t75 = -84626577;

	t75 = ((x301<x302)<=(x303<x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = 3016596195034791719LL;
	int32_t x307 = INT32_MIN;
	volatile int8_t x308 = -1;
	volatile int32_t t76 = -2811628;

	t76 = ((x305<x306)<=(x307<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 0U;
	static int64_t x310 = -1LL;
	int32_t x311 = -1;
	uint8_t x312 = 7U;
	int32_t t77 = -779;

	t77 = ((x309<x310)<=(x311<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	static int16_t x316 = -40;
	int32_t t78 = 100;

	t78 = ((x313<x314)<=(x315<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = -200564;
	int16_t x318 = -106;
	uint64_t x319 = UINT64_MAX;
	static int32_t t79 = 2524;

	t79 = ((x317<x318)<=(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MIN;
	int32_t x322 = -1;
	uint8_t x323 = 6U;
	int16_t x324 = -484;
	volatile int32_t t80 = 4;

	t80 = ((x321<x322)<=(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x328 = UINT64_MAX;
	volatile int32_t t81 = -128;

	t81 = ((x325<x326)<=(x327<x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = -13;
	static volatile uint32_t x331 = UINT32_MAX;
	static int32_t t82 = 3518;

	t82 = ((x329<x330)<=(x331<x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MIN;
	int8_t x334 = INT8_MAX;
	int32_t x335 = INT32_MIN;
	static uint16_t x336 = UINT16_MAX;
	int32_t t83 = 95027722;

	t83 = ((x333<x334)<=(x335<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = INT64_MIN;
	uint32_t x339 = 20188992U;
	int8_t x340 = -1;
	static int32_t t84 = 43;

	t84 = ((x337<x338)<=(x339<x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	uint64_t x344 = UINT64_MAX;
	static int32_t t85 = -1465488;

	t85 = ((x341<x342)<=(x343<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x345 = 1957992LLU;
	int8_t x346 = INT8_MAX;
	uint8_t x347 = UINT8_MAX;
	volatile int64_t x348 = INT64_MIN;
	int32_t t86 = 169;

	t86 = ((x345<x346)<=(x347<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 923969877;
	static int16_t x350 = INT16_MAX;
	static volatile int16_t x351 = -1612;
	int32_t x352 = INT32_MIN;

	t87 = ((x349<x350)<=(x351<x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	uint64_t x354 = 1295LLU;
	int8_t x355 = -1;
	static volatile int64_t x356 = INT64_MIN;
	int32_t t88 = 238681;

	t88 = ((x353<x354)<=(x355<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x357 = 119U;
	static int8_t x358 = INT8_MAX;
	volatile int64_t x359 = 5438LL;
	int32_t x360 = -1;

	t89 = ((x357<x358)<=(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	static int32_t x363 = INT32_MIN;
	int32_t x364 = 0;
	int32_t t90 = 9;

	t90 = ((x361<x362)<=(x363<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	volatile int8_t x366 = INT8_MIN;
	volatile int16_t x367 = INT16_MAX;
	uint64_t x368 = UINT64_MAX;
	int32_t t91 = -2;

	t91 = ((x365<x366)<=(x367<x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 1U;
	int16_t x371 = INT16_MIN;
	static int32_t x372 = -1;
	int32_t t92 = 25680;

	t92 = ((x369<x370)<=(x371<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x374 = 10U;
	int8_t x375 = 1;
	int64_t x376 = INT64_MIN;
	int32_t t93 = 33813;

	t93 = ((x373<x374)<=(x375<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = INT64_MIN;
	int8_t x379 = INT8_MIN;
	static int16_t x380 = -1;
	int32_t t94 = 214;

	t94 = ((x377<x378)<=(x379<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = UINT16_MAX;
	int8_t x382 = -1;
	int32_t x383 = INT32_MIN;

	t95 = ((x381<x382)<=(x383<x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = INT16_MIN;
	uint64_t x386 = UINT64_MAX;
	volatile int16_t x387 = -1;
	volatile int64_t x388 = INT64_MAX;
	int32_t t96 = -5136493;

	t96 = ((x385<x386)<=(x387<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = INT16_MAX;
	int8_t x390 = 1;
	int32_t x391 = INT32_MAX;
	uint64_t x392 = 1LLU;
	int32_t t97 = 30910390;

	t97 = ((x389<x390)<=(x391<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 0U;
	volatile int16_t x394 = 72;
	uint64_t x395 = UINT64_MAX;
	int16_t x396 = -1;

	t98 = ((x393<x394)<=(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -3666LL;
	uint8_t x398 = 6U;
	int64_t x400 = 2142460541LL;
	volatile int32_t t99 = 11153;

	t99 = ((x397<x398)<=(x399<x400));

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

