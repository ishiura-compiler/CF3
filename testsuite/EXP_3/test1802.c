#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x14 = 5U;
int8_t x16 = -22;
int16_t x24 = INT16_MAX;
uint32_t x25 = UINT32_MAX;
int16_t x34 = -1;
int64_t x36 = -1LL;
int64_t x40 = 561LL;
int32_t t9 = -1;
int32_t t10 = 1;
volatile int8_t x45 = 1;
volatile int32_t t11 = -115;
volatile int32_t t12 = 210;
uint16_t x60 = 3832U;
int32_t t14 = -10;
uint64_t x65 = UINT64_MAX;
int64_t x73 = INT64_MIN;
int8_t x78 = -21;
volatile int64_t x81 = -1LL;
static int16_t x84 = INT16_MAX;
volatile int32_t t20 = 6533513;
volatile int32_t t21 = -112736;
uint64_t x91 = 1LLU;
int32_t t22 = 12;
int64_t x95 = INT64_MAX;
int32_t t23 = -2646311;
volatile uint32_t x101 = UINT32_MAX;
int16_t x103 = -6606;
uint8_t x104 = 3U;
int8_t x122 = -1;
volatile int8_t x126 = -1;
volatile int8_t x134 = INT8_MIN;
volatile int32_t t33 = 1521453;
int32_t t35 = 39044;
volatile int16_t x148 = 26;
static int32_t t39 = -7;
uint16_t x161 = UINT16_MAX;
static uint32_t x163 = UINT32_MAX;
static volatile int8_t x171 = 25;
volatile int32_t t42 = -437563;
volatile int32_t t43 = -8;
int64_t x179 = INT64_MIN;
uint64_t x192 = 53LLU;
uint8_t x194 = UINT8_MAX;
int8_t x196 = INT8_MAX;
static int32_t t48 = -12315;
int8_t x205 = 27;
int32_t x208 = INT32_MIN;
volatile int32_t x218 = 96777;
volatile uint64_t x221 = 476115LLU;
int32_t x227 = INT32_MIN;
int32_t t59 = -3150;
static volatile int32_t x242 = -9526;
int8_t x243 = INT8_MIN;
uint32_t x244 = UINT32_MAX;
volatile uint64_t x255 = UINT64_MAX;
int32_t t63 = 2546;
uint8_t x258 = 14U;
int32_t t66 = -93671038;
static volatile uint32_t x270 = 879356U;
uint16_t x272 = 23093U;
volatile int32_t t68 = 201;
static uint16_t x281 = 51U;
uint16_t x283 = UINT16_MAX;
int32_t t72 = 13764271;
volatile int64_t x295 = INT64_MAX;
int8_t x300 = INT8_MIN;
int32_t t74 = 59115;
static int16_t x306 = INT16_MIN;
int64_t x307 = -717LL;
int32_t t76 = -2767388;
static int32_t t77 = 13616;
int64_t x324 = -26793888514632114LL;
int8_t x325 = -1;
volatile int16_t x334 = INT16_MAX;
int16_t x340 = -6922;
uint8_t x343 = UINT8_MAX;
static uint16_t x346 = 6032U;
int32_t x349 = -1;
static int16_t x354 = INT16_MIN;
int16_t x356 = -1;
int8_t x357 = -7;
volatile int32_t t89 = 435178290;
int64_t x361 = INT64_MIN;
int32_t t90 = 639;
int8_t x365 = INT8_MIN;
static int8_t x372 = 0;
int16_t x374 = INT16_MIN;
static uint16_t x378 = 885U;
int32_t t94 = -48;
int16_t x383 = 3748;
uint64_t x389 = UINT64_MAX;
static int64_t x390 = INT64_MIN;
int32_t t97 = -35;
int32_t x398 = -1;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	volatile uint64_t x2 = UINT64_MAX;
	volatile int8_t x3 = INT8_MIN;
	uint64_t x4 = 768687LLU;
	volatile int32_t t0 = 2;

	t0 = ((x1<x2)==(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -851462382325339LL;
	volatile int64_t x6 = INT64_MIN;
	int16_t x7 = -1;
	volatile int64_t x8 = INT64_MIN;
	static int32_t t1 = 105;

	t1 = ((x5<x6)==(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 308U;
	int16_t x10 = 78;
	uint16_t x11 = 5654U;
	static uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = -19565;

	t2 = ((x9<x10)==(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = 1;
	uint32_t x15 = 307680508U;
	int32_t t3 = 28125;

	t3 = ((x13<x14)==(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static int32_t x18 = 7758569;
	int16_t x19 = INT16_MIN;
	uint64_t x20 = UINT64_MAX;
	volatile int32_t t4 = 3666703;

	t4 = ((x17<x18)==(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	uint64_t x22 = 3878808LLU;
	uint32_t x23 = 35U;
	static volatile int32_t t5 = -29056;

	t5 = ((x21<x22)==(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	int32_t x27 = 13;
	static uint32_t x28 = UINT32_MAX;
	int32_t t6 = 5202;

	t6 = ((x25<x26)==(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	static int8_t x30 = -1;
	int8_t x31 = INT8_MIN;
	static int8_t x32 = 14;
	volatile int32_t t7 = -30937283;

	t7 = ((x29<x30)==(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 1;
	static int8_t x35 = INT8_MIN;
	static int32_t t8 = 311221187;

	t8 = ((x33<x34)==(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int32_t x38 = INT32_MAX;
	static uint16_t x39 = 18693U;

	t9 = ((x37<x38)==(x39&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = -522453LL;
	volatile int32_t x42 = INT32_MAX;
	static volatile int64_t x43 = INT64_MIN;
	static uint64_t x44 = UINT64_MAX;

	t10 = ((x41<x42)==(x43&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MIN;
	int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MIN;

	t11 = ((x45<x46)==(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	static uint16_t x50 = 30113U;
	static int8_t x51 = INT8_MIN;
	int8_t x52 = 63;

	t12 = ((x49<x50)==(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1549981493380LL;
	static int8_t x54 = -1;
	volatile uint64_t x55 = 106490250449808LLU;
	uint16_t x56 = 7634U;
	volatile int32_t t13 = -49;

	t13 = ((x53<x54)==(x55&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 3705873521453098LL;
	uint32_t x58 = 777586726U;
	uint64_t x59 = 3730317210LLU;

	t14 = ((x57<x58)==(x59&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	volatile uint8_t x62 = 113U;
	volatile int8_t x63 = -8;
	int16_t x64 = INT16_MAX;
	volatile int32_t t15 = -1;

	t15 = ((x61<x62)==(x63&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x66 = INT16_MIN;
	int64_t x67 = INT64_MIN;
	volatile int8_t x68 = INT8_MIN;
	int32_t t16 = -11386;

	t16 = ((x65<x66)==(x67&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x69 = 23952;
	int32_t x70 = -1;
	volatile int8_t x71 = 20;
	int32_t x72 = -1;
	int32_t t17 = -2;

	t17 = ((x69<x70)==(x71&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x74 = INT8_MAX;
	int16_t x75 = -163;
	uint64_t x76 = 786LLU;
	volatile int32_t t18 = 8266;

	t18 = ((x73<x74)==(x75&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = INT8_MAX;
	int32_t x79 = -1;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 240514;

	t19 = ((x77<x78)==(x79&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 6304U;
	int64_t x83 = INT64_MAX;

	t20 = ((x81<x82)==(x83&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = -1;
	volatile int16_t x86 = INT16_MIN;
	volatile int64_t x87 = -17LL;
	int64_t x88 = INT64_MAX;

	t21 = ((x85<x86)==(x87&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 5808U;
	volatile int16_t x90 = INT16_MIN;
	uint32_t x92 = 193U;

	t22 = ((x89<x90)==(x91&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int32_t x94 = -3012372;
	static int8_t x96 = -1;

	t23 = ((x93<x94)==(x95&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 195;
	int16_t x98 = 8;
	uint16_t x99 = UINT16_MAX;
	uint32_t x100 = UINT32_MAX;
	int32_t t24 = 1527;

	t24 = ((x97<x98)==(x99&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = INT32_MIN;
	static volatile int32_t t25 = -2685;

	t25 = ((x101<x102)==(x103&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -1;
	int8_t x106 = INT8_MAX;
	int16_t x107 = 0;
	int64_t x108 = INT64_MIN;
	int32_t t26 = 0;

	t26 = ((x105<x106)==(x107&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	uint32_t x110 = 5U;
	int64_t x111 = -1LL;
	uint64_t x112 = 114445659380998LLU;
	int32_t t27 = 249008710;

	t27 = ((x109<x110)==(x111&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	uint8_t x114 = 12U;
	int64_t x115 = -1LL;
	volatile uint16_t x116 = 2U;
	volatile int32_t t28 = -122099;

	t28 = ((x113<x114)==(x115&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = 7147973;
	volatile int64_t x118 = -199910729106LL;
	volatile int64_t x119 = INT64_MIN;
	int64_t x120 = INT64_MAX;
	int32_t t29 = -2;

	t29 = ((x117<x118)==(x119&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 85329874438LLU;
	volatile int16_t x123 = INT16_MIN;
	static int8_t x124 = INT8_MIN;
	int32_t t30 = -1;

	t30 = ((x121<x122)==(x123&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int32_t x127 = INT32_MIN;
	int8_t x128 = INT8_MIN;
	int32_t t31 = 692616;

	t31 = ((x125<x126)==(x127&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	volatile uint32_t x130 = 1331561U;
	static int64_t x131 = INT64_MIN;
	volatile int8_t x132 = INT8_MIN;
	volatile int32_t t32 = -42588762;

	t32 = ((x129<x130)==(x131&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MIN;
	int64_t x135 = INT64_MIN;
	volatile int64_t x136 = -15893LL;

	t33 = ((x133<x134)==(x135&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	uint8_t x138 = 28U;
	int32_t x139 = INT32_MAX;
	int32_t x140 = 801164966;
	volatile int32_t t34 = 14263349;

	t34 = ((x137<x138)==(x139&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	int8_t x142 = INT8_MIN;
	static int32_t x143 = 1236816;
	volatile int64_t x144 = INT64_MIN;

	t35 = ((x141<x142)==(x143&x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	uint32_t x146 = 3304895U;
	int32_t x147 = INT32_MIN;
	static volatile int32_t t36 = 200293021;

	t36 = ((x145<x146)==(x147&x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	static int64_t x150 = 3354926698258156808LL;
	int16_t x151 = INT16_MAX;
	static int16_t x152 = INT16_MAX;
	volatile int32_t t37 = -532647847;

	t37 = ((x149<x150)==(x151&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 1;
	static int32_t x154 = INT32_MAX;
	uint16_t x155 = 139U;
	uint16_t x156 = UINT16_MAX;
	int32_t t38 = -198947;

	t38 = ((x153<x154)==(x155&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 0U;
	uint32_t x158 = 3U;
	volatile int8_t x159 = 3;
	int64_t x160 = INT64_MIN;

	t39 = ((x157<x158)==(x159&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = -4;
	int32_t x164 = INT32_MIN;
	int32_t t40 = 1;

	t40 = ((x161<x162)==(x163&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MAX;
	volatile int16_t x167 = INT16_MIN;
	int64_t x168 = 45LL;
	int32_t t41 = 23769;

	t41 = ((x165<x166)==(x167&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x169 = 4582479U;
	uint32_t x170 = UINT32_MAX;
	int32_t x172 = INT32_MIN;

	t42 = ((x169<x170)==(x171&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	static volatile uint64_t x174 = 278793639198LLU;
	uint16_t x175 = UINT16_MAX;
	uint16_t x176 = 5442U;

	t43 = ((x173<x174)==(x175&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	volatile int8_t x178 = -1;
	static int32_t x180 = -1;
	int32_t t44 = 61033511;

	t44 = ((x177<x178)==(x179&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	volatile int32_t x182 = INT32_MIN;
	uint64_t x183 = 7408456812465LLU;
	int64_t x184 = -1LL;
	static volatile int32_t t45 = -13290702;

	t45 = ((x181<x182)==(x183&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 50U;
	int8_t x186 = -1;
	static volatile int64_t x187 = 20601LL;
	static int32_t x188 = INT32_MAX;
	static int32_t t46 = -793220;

	t46 = ((x185<x186)==(x187&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 1;
	int64_t x190 = -60103LL;
	int8_t x191 = 0;
	volatile int32_t t47 = 43602;

	t47 = ((x189<x190)==(x191&x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	uint32_t x195 = UINT32_MAX;

	t48 = ((x193<x194)==(x195&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = -2698;
	uint16_t x198 = UINT16_MAX;
	static int64_t x199 = -499708483221LL;
	static uint32_t x200 = 22507600U;
	static int32_t t49 = 194461;

	t49 = ((x197<x198)==(x199&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = UINT8_MAX;
	int64_t x202 = INT64_MIN;
	uint64_t x203 = 4030399LLU;
	static int32_t x204 = INT32_MIN;
	volatile int32_t t50 = -13536;

	t50 = ((x201<x202)==(x203&x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x206 = UINT8_MAX;
	volatile int16_t x207 = INT16_MIN;
	static volatile int32_t t51 = 0;

	t51 = ((x205<x206)==(x207&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 50U;
	volatile int64_t x210 = 190LL;
	uint64_t x211 = 5904665LLU;
	int64_t x212 = INT64_MIN;
	static volatile int32_t t52 = 426645;

	t52 = ((x209<x210)==(x211&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	int16_t x214 = -4;
	static int16_t x215 = -8381;
	int64_t x216 = -4132766800761LL;
	volatile int32_t t53 = 0;

	t53 = ((x213<x214)==(x215&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 4445;
	int64_t x219 = -129060983450LL;
	uint8_t x220 = 1U;
	int32_t t54 = 61282231;

	t54 = ((x217<x218)==(x219&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = INT8_MAX;
	int64_t x223 = -1LL;
	uint64_t x224 = UINT64_MAX;
	int32_t t55 = -965514630;

	t55 = ((x221<x222)==(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 0;
	int16_t x226 = INT16_MAX;
	int32_t x228 = INT32_MIN;
	static volatile int32_t t56 = 1568549;

	t56 = ((x225<x226)==(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -3932201;
	int8_t x230 = INT8_MIN;
	uint64_t x231 = 61106545202288672LLU;
	volatile int32_t x232 = -1;
	static int32_t t57 = 803624617;

	t57 = ((x229<x230)==(x231&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -91;
	uint16_t x234 = 52U;
	static uint8_t x235 = UINT8_MAX;
	uint8_t x236 = UINT8_MAX;
	int32_t t58 = -1968;

	t58 = ((x233<x234)==(x235&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = -20262;
	int64_t x238 = -1056766706028282251LL;
	static volatile int16_t x239 = -941;
	int16_t x240 = INT16_MIN;

	t59 = ((x237<x238)==(x239&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 539429272944024705LL;
	int32_t t60 = -16;

	t60 = ((x241<x242)==(x243&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 3;
	int64_t x246 = INT64_MIN;
	int64_t x247 = 7LL;
	uint8_t x248 = UINT8_MAX;
	static volatile int32_t t61 = -122646;

	t61 = ((x245<x246)==(x247&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = 28;
	uint32_t x250 = UINT32_MAX;
	static int64_t x251 = INT64_MAX;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = -1;

	t62 = ((x249<x250)==(x251&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = UINT64_MAX;
	int8_t x254 = 2;
	int8_t x256 = INT8_MAX;

	t63 = ((x253<x254)==(x255&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = INT8_MAX;
	int32_t x259 = -1;
	static int16_t x260 = INT16_MIN;
	static int32_t t64 = -1;

	t64 = ((x257<x258)==(x259&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = UINT8_MAX;
	int64_t x262 = INT64_MIN;
	static int16_t x263 = INT16_MIN;
	static int64_t x264 = -17064485804LL;
	volatile int32_t t65 = -17;

	t65 = ((x261<x262)==(x263&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = 9115575961092904LLU;
	int8_t x266 = INT8_MIN;
	volatile int8_t x267 = INT8_MAX;
	volatile int16_t x268 = INT16_MAX;

	t66 = ((x265<x266)==(x267&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	uint32_t x271 = UINT32_MAX;
	int32_t t67 = 20136500;

	t67 = ((x269<x270)==(x271&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 8385717826361602LL;
	uint32_t x274 = 12006030U;
	int16_t x275 = INT16_MIN;
	int8_t x276 = 0;

	t68 = ((x273<x274)==(x275&x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x277 = 2U;
	uint32_t x278 = 12807U;
	int16_t x279 = INT16_MAX;
	uint16_t x280 = 0U;
	volatile int32_t t69 = -13;

	t69 = ((x277<x278)==(x279&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = -28;
	static uint64_t x284 = 53876LLU;
	volatile int32_t t70 = -1;

	t70 = ((x281<x282)==(x283&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 1U;
	volatile int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MIN;
	uint32_t x288 = 57772U;
	int32_t t71 = -906936311;

	t71 = ((x285<x286)==(x287&x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x289 = 57889269898LLU;
	static int16_t x290 = -1;
	uint64_t x291 = UINT64_MAX;
	int16_t x292 = INT16_MAX;

	t72 = ((x289<x290)==(x291&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 41;
	int16_t x294 = -1;
	int16_t x296 = INT16_MIN;
	int32_t t73 = 916856248;

	t73 = ((x293<x294)==(x295&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	int64_t x298 = INT64_MAX;
	uint64_t x299 = 7406047653871LLU;

	t74 = ((x297<x298)==(x299&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MIN;
	uint32_t x303 = 252777524U;
	int32_t x304 = -1;
	volatile int32_t t75 = 48082624;

	t75 = ((x301<x302)==(x303&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = -1LL;
	int16_t x308 = INT16_MAX;

	t76 = ((x305<x306)==(x307&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 226982;
	uint16_t x310 = 3U;
	uint8_t x311 = 1U;
	volatile int32_t x312 = INT32_MIN;

	t77 = ((x309<x310)==(x311&x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = INT16_MIN;
	uint32_t x314 = 13624U;
	uint16_t x315 = UINT16_MAX;
	volatile int64_t x316 = INT64_MIN;
	int32_t t78 = -6;

	t78 = ((x313<x314)==(x315&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 13U;
	int32_t x318 = INT32_MIN;
	int32_t x319 = -24;
	int64_t x320 = INT64_MAX;
	static int32_t t79 = 646;

	t79 = ((x317<x318)==(x319&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 32U;
	uint16_t x322 = 2U;
	int32_t x323 = 88782;
	volatile int32_t t80 = -618239;

	t80 = ((x321<x322)==(x323&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x326 = -1LL;
	uint64_t x327 = 15675865713LLU;
	uint16_t x328 = 0U;
	static int32_t t81 = -5;

	t81 = ((x325<x326)==(x327&x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = INT16_MIN;
	static int32_t x330 = 1;
	int16_t x331 = INT16_MIN;
	int16_t x332 = 1;
	volatile int32_t t82 = 14778;

	t82 = ((x329<x330)==(x331&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	int32_t x335 = -1500;
	int16_t x336 = -1;
	int32_t t83 = 108;

	t83 = ((x333<x334)==(x335&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	int16_t x338 = -15484;
	uint64_t x339 = UINT64_MAX;
	int32_t t84 = -3916485;

	t84 = ((x337<x338)==(x339&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 17;
	volatile int16_t x342 = INT16_MAX;
	uint8_t x344 = UINT8_MAX;
	int32_t t85 = 39610;

	t85 = ((x341<x342)==(x343&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = -259;
	static int64_t x347 = 5163201135310469LL;
	static int32_t x348 = INT32_MAX;
	int32_t t86 = -1043327120;

	t86 = ((x345<x346)==(x347&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x350 = UINT32_MAX;
	int32_t x351 = 395;
	volatile int64_t x352 = -1LL;
	volatile int32_t t87 = -10;

	t87 = ((x349<x350)==(x351&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	int8_t x355 = -37;
	static int32_t t88 = -25267775;

	t88 = ((x353<x354)==(x355&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x358 = INT32_MAX;
	int16_t x359 = -13;
	int32_t x360 = INT32_MAX;

	t89 = ((x357<x358)==(x359&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x362 = INT16_MAX;
	int8_t x363 = 11;
	static int16_t x364 = INT16_MAX;

	t90 = ((x361<x362)==(x363&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x366 = UINT32_MAX;
	int64_t x367 = -30LL;
	volatile int16_t x368 = INT16_MIN;
	int32_t t91 = -15;

	t91 = ((x365<x366)==(x367&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = INT32_MAX;
	static volatile int64_t x370 = INT64_MAX;
	int16_t x371 = 546;
	volatile int32_t t92 = -153;

	t92 = ((x369<x370)==(x371&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x373 = UINT64_MAX;
	int16_t x375 = INT16_MAX;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = 860822;

	t93 = ((x373<x374)==(x375&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	int8_t x379 = INT8_MIN;
	int64_t x380 = 118730601LL;

	t94 = ((x377<x378)==(x379&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MIN;
	int32_t x382 = 359;
	volatile int8_t x384 = INT8_MIN;
	int32_t t95 = -5639;

	t95 = ((x381<x382)==(x383&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 0;
	static volatile int16_t x386 = 1;
	static uint64_t x387 = 386913LLU;
	static int16_t x388 = INT16_MIN;
	static volatile int32_t t96 = 108;

	t96 = ((x385<x386)==(x387&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x391 = INT8_MIN;
	uint8_t x392 = 6U;

	t97 = ((x389<x390)==(x391&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = 134;
	int32_t x394 = INT32_MAX;
	int8_t x395 = INT8_MIN;
	uint64_t x396 = 59244849826LLU;
	static volatile int32_t t98 = 176;

	t98 = ((x393<x394)==(x395&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = INT64_MIN;
	static volatile uint64_t x399 = 5322LLU;
	static volatile int32_t x400 = 1776;
	static int32_t t99 = -465517932;

	t99 = ((x397<x398)==(x399&x400));

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

