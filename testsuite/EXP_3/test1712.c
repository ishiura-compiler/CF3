#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = UINT64_MAX;
uint64_t x11 = 6017944427831501LLU;
int32_t t2 = -16028;
int32_t x13 = -903160974;
static int32_t x22 = INT32_MAX;
int32_t t5 = -776585;
static int64_t x36 = INT64_MIN;
int16_t x55 = INT16_MIN;
uint16_t x56 = UINT16_MAX;
int16_t x58 = INT16_MIN;
static int32_t t14 = 14409;
static uint64_t x62 = 47815LLU;
static uint32_t x63 = 56140781U;
int8_t x67 = INT8_MIN;
uint64_t x68 = UINT64_MAX;
volatile int8_t x70 = 0;
volatile int32_t t17 = -11;
int64_t x73 = 0LL;
volatile int16_t x74 = -34;
int32_t x75 = -1;
int64_t x81 = -1LL;
int16_t x82 = INT16_MAX;
int64_t x83 = INT64_MIN;
int32_t t19 = 3;
int8_t x108 = INT8_MAX;
int16_t x112 = INT16_MIN;
uint8_t x117 = UINT8_MAX;
int32_t t26 = -11483202;
volatile int32_t t28 = -68423;
int16_t x148 = INT16_MIN;
uint64_t x167 = 554595LLU;
static volatile int32_t t37 = 2181;
int8_t x173 = 0;
int8_t x176 = -1;
uint32_t x179 = 458120412U;
int32_t t40 = -980069;
uint16_t x183 = 173U;
static int32_t x184 = INT32_MIN;
static int8_t x204 = INT8_MAX;
uint8_t x208 = 51U;
int16_t x230 = INT16_MIN;
int8_t x235 = INT8_MIN;
volatile int32_t t51 = 951301;
uint16_t x252 = 35U;
volatile int8_t x256 = INT8_MAX;
int32_t x257 = -1;
int16_t x260 = INT16_MIN;
volatile int32_t t57 = 1729;
int64_t x261 = INT64_MIN;
int16_t x263 = INT16_MIN;
int16_t x266 = 46;
int32_t x268 = INT32_MIN;
int32_t t59 = 931;
static volatile int64_t x269 = -18891592368LL;
volatile int16_t x276 = -1;
static int8_t x277 = INT8_MIN;
volatile int64_t x286 = -1LL;
volatile int16_t x288 = -1;
int32_t x293 = 1815797;
volatile uint32_t x294 = 0U;
uint16_t x297 = UINT16_MAX;
int64_t x299 = INT64_MIN;
int8_t x300 = INT8_MAX;
int8_t x301 = -1;
int32_t t70 = -13531;
int32_t x314 = -25563328;
uint32_t x315 = 25295300U;
int32_t t71 = -167;
uint16_t x328 = 48U;
int32_t t75 = 45939;
int16_t x334 = INT16_MAX;
int8_t x340 = INT8_MAX;
int64_t x342 = -1LL;
int32_t x343 = INT32_MIN;
volatile int32_t t78 = 7;
static volatile int32_t t79 = -2;
uint32_t x350 = 7945817U;
uint64_t x352 = 11LLU;
uint64_t x357 = UINT64_MAX;
int32_t t83 = 17;
int32_t t84 = 135518427;
volatile uint64_t x383 = UINT64_MAX;
int64_t x386 = INT64_MIN;
uint16_t x393 = 651U;
uint32_t x397 = 196604U;
volatile int8_t x400 = -3;
int8_t x401 = 3;
int32_t t92 = 14805654;
uint8_t x406 = 4U;
static int32_t t93 = -499;
static int64_t x414 = INT64_MIN;
int16_t x417 = -1;
int32_t t96 = -507;
volatile int32_t x421 = -81615604;
int32_t t98 = 7998;
uint32_t x430 = UINT32_MAX;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	int64_t x2 = INT64_MIN;
	volatile int64_t x3 = -1147316067LL;
	static int32_t t0 = -3;

	t0 = ((x1-x2)<(x3&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int32_t x6 = INT32_MIN;
	static int64_t x7 = 1658631222555LL;
	static uint64_t x8 = 8128747108173LLU;
	volatile int32_t t1 = -4;

	t1 = ((x5-x6)<(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	uint16_t x10 = 9978U;
	int16_t x12 = -2;

	t2 = ((x9-x10)<(x11&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = UINT8_MAX;
	uint64_t x15 = 393048LLU;
	uint64_t x16 = 31442065498LLU;
	int32_t t3 = 52;

	t3 = ((x13-x14)<(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	uint32_t x18 = 15061U;
	int8_t x19 = INT8_MAX;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -236;

	t4 = ((x17-x18)<(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int64_t x23 = INT64_MIN;
	int16_t x24 = -6;

	t5 = ((x21-x22)<(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -946073;
	volatile uint64_t x26 = 90511LLU;
	volatile uint8_t x27 = 52U;
	uint16_t x28 = 1619U;
	static int32_t t6 = 0;

	t6 = ((x25-x26)<(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	static int64_t x30 = INT64_MIN;
	int16_t x31 = -674;
	int32_t x32 = -1;
	int32_t t7 = 1;

	t7 = ((x29-x30)<(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 117246942LLU;
	static int64_t x34 = -423596980LL;
	int32_t x35 = INT32_MIN;
	volatile int32_t t8 = -3745;

	t8 = ((x33-x34)<(x35&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int8_t x38 = INT8_MIN;
	int64_t x39 = INT64_MIN;
	static int16_t x40 = INT16_MIN;
	static volatile int32_t t9 = -11155058;

	t9 = ((x37-x38)<(x39&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 0;
	int16_t x42 = 0;
	int16_t x43 = INT16_MAX;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = 940513665;

	t10 = ((x41-x42)<(x43&x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = UINT64_MAX;
	int32_t x46 = INT32_MIN;
	static uint8_t x47 = 0U;
	uint8_t x48 = 33U;
	int32_t t11 = -7257726;

	t11 = ((x45-x46)<(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -42;
	int32_t x50 = 798;
	int16_t x51 = -1;
	static uint64_t x52 = UINT64_MAX;
	int32_t t12 = -7;

	t12 = ((x49-x50)<(x51&x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -1;
	volatile int32_t x54 = INT32_MIN;
	int32_t t13 = 10722;

	t13 = ((x53-x54)<(x55&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 93U;
	volatile int32_t x59 = -11;
	int32_t x60 = INT32_MAX;

	t14 = ((x57-x58)<(x59&x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 18;

	t15 = ((x61-x62)<(x63&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = UINT8_MAX;
	static uint8_t x66 = UINT8_MAX;
	int32_t t16 = -1;

	t16 = ((x65-x66)<(x67&x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -868570LL;
	uint8_t x71 = 2U;
	uint16_t x72 = 73U;

	t17 = ((x69-x70)<(x71&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x76 = -259368;
	volatile int32_t t18 = 88;

	t18 = ((x73-x74)<(x75&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x84 = INT8_MIN;

	t19 = ((x81-x82)<(x83&x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -1LL;
	int64_t x86 = -24447581282577LL;
	int8_t x87 = -1;
	int8_t x88 = -1;
	volatile int32_t t20 = 6706905;

	t20 = ((x85-x86)<(x87&x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x89 = 2782494686LLU;
	int32_t x90 = -1;
	int8_t x91 = 60;
	uint32_t x92 = UINT32_MAX;
	int32_t t21 = 9945740;

	t21 = ((x89-x90)<(x91&x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x101 = 34U;
	int64_t x102 = -1LL;
	static int64_t x103 = INT64_MIN;
	static int8_t x104 = INT8_MIN;
	static volatile int32_t t22 = -540634;

	t22 = ((x101-x102)<(x103&x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x105 = 134150U;
	int16_t x106 = INT16_MAX;
	int32_t x107 = 10617;
	static int32_t t23 = 160275026;

	t23 = ((x105-x106)<(x107&x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x109 = 2U;
	static int8_t x110 = INT8_MIN;
	int16_t x111 = -4;
	int32_t t24 = -6;

	t24 = ((x109-x110)<(x111&x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x118 = 755974911121888LLU;
	int32_t x119 = INT32_MIN;
	volatile int8_t x120 = INT8_MIN;
	int32_t t25 = -1;

	t25 = ((x117-x118)<(x119&x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = INT64_MIN;
	uint64_t x122 = UINT64_MAX;
	volatile uint8_t x123 = UINT8_MAX;
	uint64_t x124 = 472836672LLU;

	t26 = ((x121-x122)<(x123&x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = 21U;
	int16_t x126 = 1155;
	static uint8_t x127 = 0U;
	static volatile int32_t x128 = 50;
	static int32_t t27 = 481870;

	t27 = ((x125-x126)<(x127&x128));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MAX;
	uint32_t x130 = 11535U;
	int8_t x131 = INT8_MAX;
	uint8_t x132 = 1U;

	t28 = ((x129-x130)<(x131&x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x133 = -1LL;
	static int32_t x134 = INT32_MIN;
	int16_t x135 = INT16_MIN;
	static int16_t x136 = 12;
	static volatile int32_t t29 = 808;

	t29 = ((x133-x134)<(x135&x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x137 = 99887668901678286LL;
	int32_t x138 = 389;
	static uint16_t x139 = 1U;
	int16_t x140 = -1;
	volatile int32_t t30 = -15888942;

	t30 = ((x137-x138)<(x139&x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x141 = UINT16_MAX;
	static volatile int8_t x142 = 0;
	static int8_t x143 = -1;
	int8_t x144 = INT8_MIN;
	int32_t t31 = -76;

	t31 = ((x141-x142)<(x143&x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x145 = UINT8_MAX;
	volatile int8_t x146 = INT8_MAX;
	static int16_t x147 = 3;
	int32_t t32 = 1;

	t32 = ((x145-x146)<(x147&x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = -1;
	int8_t x150 = 18;
	volatile uint64_t x151 = UINT64_MAX;
	int16_t x152 = INT16_MIN;
	volatile int32_t t33 = 113;

	t33 = ((x149-x150)<(x151&x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = -1;
	int8_t x154 = INT8_MAX;
	int8_t x155 = INT8_MIN;
	static uint64_t x156 = 94506917420LLU;
	static int32_t t34 = -8;

	t34 = ((x153-x154)<(x155&x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = INT64_MAX;
	volatile uint32_t x158 = 18U;
	volatile int8_t x159 = -1;
	volatile int8_t x160 = INT8_MAX;
	volatile int32_t t35 = -398156;

	t35 = ((x157-x158)<(x159&x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = 6U;
	int64_t x162 = INT64_MAX;
	uint8_t x163 = UINT8_MAX;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t36 = -5;

	t36 = ((x161-x162)<(x163&x164));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x165 = 23U;
	int64_t x166 = INT64_MAX;
	static uint8_t x168 = 88U;

	t37 = ((x165-x166)<(x167&x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = UINT32_MAX;
	int64_t x170 = INT64_MAX;
	int8_t x171 = -1;
	uint16_t x172 = 790U;
	int32_t t38 = 622150551;

	t38 = ((x169-x170)<(x171&x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x174 = UINT16_MAX;
	uint64_t x175 = UINT64_MAX;
	volatile int32_t t39 = -3888;

	t39 = ((x173-x174)<(x175&x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x177 = 7606814288991489165LLU;
	volatile int8_t x178 = INT8_MAX;
	int8_t x180 = INT8_MIN;

	t40 = ((x177-x178)<(x179&x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = 1;
	static int32_t x182 = -1;
	static int32_t t41 = -28;

	t41 = ((x181-x182)<(x183&x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = -1;
	uint16_t x186 = UINT16_MAX;
	uint64_t x187 = 7427398777440663LLU;
	int32_t x188 = INT32_MIN;
	int32_t t42 = -2;

	t42 = ((x185-x186)<(x187&x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = 2444229982683370LLU;
	volatile uint32_t x194 = 351945U;
	static uint64_t x195 = UINT64_MAX;
	uint32_t x196 = UINT32_MAX;
	volatile int32_t t43 = -3451658;

	t43 = ((x193-x194)<(x195&x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x197 = UINT32_MAX;
	int16_t x198 = 159;
	uint16_t x199 = 210U;
	int8_t x200 = 1;
	int32_t t44 = 844511;

	t44 = ((x197-x198)<(x199&x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = 37;
	volatile int64_t x202 = -1LL;
	int32_t x203 = INT32_MAX;
	volatile int32_t t45 = 1;

	t45 = ((x201-x202)<(x203&x204));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MIN;
	static uint64_t x207 = 439204LLU;
	static volatile int32_t t46 = 36720;

	t46 = ((x205-x206)<(x207&x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x209 = 996U;
	uint16_t x210 = 181U;
	static uint64_t x211 = UINT64_MAX;
	int16_t x212 = INT16_MIN;
	static int32_t t47 = -1;

	t47 = ((x209-x210)<(x211&x212));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = 476966LL;
	static int16_t x214 = -1;
	int8_t x215 = -1;
	uint64_t x216 = 20758825473049LLU;
	static int32_t t48 = -3502;

	t48 = ((x213-x214)<(x215&x216));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x225 = 1791503LLU;
	int16_t x226 = INT16_MIN;
	static int64_t x227 = INT64_MIN;
	static uint8_t x228 = UINT8_MAX;
	volatile int32_t t49 = 150757;

	t49 = ((x225-x226)<(x227&x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x229 = UINT16_MAX;
	int16_t x231 = 16;
	int32_t x232 = INT32_MIN;
	volatile int32_t t50 = 0;

	t50 = ((x229-x230)<(x231&x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x233 = -1;
	static int32_t x234 = INT32_MIN;
	int16_t x236 = -1;

	t51 = ((x233-x234)<(x235&x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x237 = -4784;
	int64_t x238 = INT64_MIN;
	uint64_t x239 = 188257280822464695LLU;
	volatile int16_t x240 = 4;
	int32_t t52 = -96102;

	t52 = ((x237-x238)<(x239&x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x241 = UINT32_MAX;
	int64_t x242 = -1LL;
	uint32_t x243 = 114633U;
	volatile int32_t x244 = INT32_MIN;
	int32_t t53 = -284;

	t53 = ((x241-x242)<(x243&x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x245 = UINT32_MAX;
	int64_t x246 = -1LL;
	uint64_t x247 = 30547970LLU;
	uint32_t x248 = 9555U;
	volatile int32_t t54 = 324;

	t54 = ((x245-x246)<(x247&x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x250 = INT16_MIN;
	volatile int16_t x251 = INT16_MIN;
	static volatile int32_t t55 = -6608307;

	t55 = ((x249-x250)<(x251&x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = INT16_MIN;
	volatile uint64_t x254 = 103121707885LLU;
	uint64_t x255 = UINT64_MAX;
	int32_t t56 = -29373909;

	t56 = ((x253-x254)<(x255&x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x258 = 233973LLU;
	int8_t x259 = -1;

	t57 = ((x257-x258)<(x259&x260));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x262 = -1LL;
	uint64_t x264 = UINT64_MAX;
	int32_t t58 = 80;

	t58 = ((x261-x262)<(x263&x264));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x265 = INT16_MIN;
	int8_t x267 = INT8_MAX;

	t59 = ((x265-x266)<(x267&x268));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x270 = -1;
	static uint8_t x271 = 8U;
	int32_t x272 = INT32_MAX;
	volatile int32_t t60 = 0;

	t60 = ((x269-x270)<(x271&x272));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x273 = INT8_MIN;
	int64_t x274 = 998318LL;
	int8_t x275 = INT8_MAX;
	int32_t t61 = 257299;

	t61 = ((x273-x274)<(x275&x276));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x278 = -9;
	int8_t x279 = -1;
	volatile uint64_t x280 = UINT64_MAX;
	volatile int32_t t62 = 48;

	t62 = ((x277-x278)<(x279&x280));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = INT16_MAX;
	int32_t x282 = -1;
	int8_t x283 = INT8_MIN;
	uint64_t x284 = 410LLU;
	static volatile int32_t t63 = 821;

	t63 = ((x281-x282)<(x283&x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x285 = 55U;
	uint64_t x287 = 282514LLU;
	volatile int32_t t64 = 1;

	t64 = ((x285-x286)<(x287&x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x289 = 17U;
	int32_t x290 = -1;
	static int8_t x291 = -1;
	uint16_t x292 = 9U;
	volatile int32_t t65 = 188302;

	t65 = ((x289-x290)<(x291&x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x295 = 659U;
	uint16_t x296 = 323U;
	static int32_t t66 = -1;

	t66 = ((x293-x294)<(x295&x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x298 = 1267431;
	int32_t t67 = 1335744;

	t67 = ((x297-x298)<(x299&x300));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x302 = 1880093LLU;
	int64_t x303 = -260696LL;
	uint32_t x304 = 30U;
	int32_t t68 = 9989003;

	t68 = ((x301-x302)<(x303&x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x305 = -90;
	int8_t x306 = INT8_MIN;
	static int8_t x307 = 0;
	int64_t x308 = INT64_MIN;
	static volatile int32_t t69 = 140;

	t69 = ((x305-x306)<(x307&x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x309 = INT32_MIN;
	volatile int64_t x310 = -8931665805602560LL;
	uint32_t x311 = 3997469U;
	uint64_t x312 = 259078952LLU;

	t70 = ((x309-x310)<(x311&x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x313 = -1LL;
	uint8_t x316 = 10U;

	t71 = ((x313-x314)<(x315&x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x317 = 35054077063098LLU;
	volatile uint8_t x318 = UINT8_MAX;
	uint64_t x319 = UINT64_MAX;
	uint32_t x320 = 279U;
	int32_t t72 = 70428;

	t72 = ((x317-x318)<(x319&x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = INT16_MIN;
	uint64_t x322 = 23LLU;
	int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	int32_t t73 = -98;

	t73 = ((x321-x322)<(x323&x324));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x325 = INT8_MAX;
	int32_t x326 = -1;
	int32_t x327 = -12371188;
	int32_t t74 = -21015376;

	t74 = ((x325-x326)<(x327&x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x329 = UINT8_MAX;
	int64_t x330 = INT64_MAX;
	static int64_t x331 = -1LL;
	volatile int16_t x332 = INT16_MAX;

	t75 = ((x329-x330)<(x331&x332));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x333 = -26;
	static int8_t x335 = INT8_MIN;
	int8_t x336 = 1;
	static int32_t t76 = 194;

	t76 = ((x333-x334)<(x335&x336));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x337 = -161LL;
	static int64_t x338 = 64310070094LL;
	int64_t x339 = -1LL;
	volatile int32_t t77 = 522046529;

	t77 = ((x337-x338)<(x339&x340));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x341 = 0U;
	int16_t x344 = -170;

	t78 = ((x341-x342)<(x343&x344));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x345 = -1;
	int64_t x346 = 4304946343LL;
	static volatile int16_t x347 = INT16_MIN;
	static int8_t x348 = INT8_MIN;

	t79 = ((x345-x346)<(x347&x348));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = -1;
	uint8_t x351 = 1U;
	volatile int32_t t80 = -1487;

	t80 = ((x349-x350)<(x351&x352));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x353 = -1;
	int64_t x354 = INT64_MAX;
	int16_t x355 = -1;
	volatile uint16_t x356 = 239U;
	int32_t t81 = 62;

	t81 = ((x353-x354)<(x355&x356));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x358 = -69087;
	static volatile uint32_t x359 = UINT32_MAX;
	static volatile uint16_t x360 = UINT16_MAX;
	volatile int32_t t82 = 226968;

	t82 = ((x357-x358)<(x359&x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x365 = INT8_MIN;
	uint32_t x366 = 38770U;
	uint64_t x367 = 28850602LLU;
	int8_t x368 = INT8_MIN;

	t83 = ((x365-x366)<(x367&x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x369 = 1175827LLU;
	uint32_t x370 = UINT32_MAX;
	uint64_t x371 = 1675925LLU;
	uint64_t x372 = 28244808LLU;

	t84 = ((x369-x370)<(x371&x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x373 = INT8_MAX;
	volatile int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MIN;
	uint16_t x376 = 3U;
	volatile int32_t t85 = -148034;

	t85 = ((x373-x374)<(x375&x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x377 = -1LL;
	int16_t x378 = INT16_MIN;
	volatile uint16_t x379 = UINT16_MAX;
	static volatile uint32_t x380 = 1508050210U;
	volatile int32_t t86 = 97234;

	t86 = ((x377-x378)<(x379&x380));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x381 = 4U;
	static int8_t x382 = -1;
	int32_t x384 = 1;
	static volatile int32_t t87 = -567790547;

	t87 = ((x381-x382)<(x383&x384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x385 = INT32_MIN;
	static uint16_t x387 = 1U;
	static uint32_t x388 = 457234U;
	volatile int32_t t88 = -238458537;

	t88 = ((x385-x386)<(x387&x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = -214391LL;
	int64_t x390 = INT64_MIN;
	static volatile uint64_t x391 = UINT64_MAX;
	volatile int32_t x392 = INT32_MAX;
	int32_t t89 = -12;

	t89 = ((x389-x390)<(x391&x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x394 = 25097137114132802LLU;
	uint64_t x395 = 11824768522638515LLU;
	uint16_t x396 = 34U;
	volatile int32_t t90 = 1386;

	t90 = ((x393-x394)<(x395&x396));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x398 = -59;
	uint64_t x399 = UINT64_MAX;
	static volatile int32_t t91 = -993816;

	t91 = ((x397-x398)<(x399&x400));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x402 = INT16_MIN;
	volatile uint32_t x403 = UINT32_MAX;
	static uint32_t x404 = UINT32_MAX;

	t92 = ((x401-x402)<(x403&x404));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x405 = 0;
	static int64_t x407 = INT64_MIN;
	uint8_t x408 = 5U;

	t93 = ((x405-x406)<(x407&x408));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = -17660728549344LL;
	uint16_t x410 = 26892U;
	int8_t x411 = 1;
	volatile int16_t x412 = INT16_MIN;
	int32_t t94 = -4092;

	t94 = ((x409-x410)<(x411&x412));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x413 = 4LLU;
	volatile int64_t x415 = INT64_MIN;
	int16_t x416 = -11363;
	volatile int32_t t95 = 515923;

	t95 = ((x413-x414)<(x415&x416));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x418 = -1;
	uint64_t x419 = 2152059584629388LLU;
	volatile int8_t x420 = INT8_MAX;

	t96 = ((x417-x418)<(x419&x420));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x422 = 15155424739333LLU;
	int8_t x423 = -1;
	static int8_t x424 = 1;
	volatile int32_t t97 = 70;

	t97 = ((x421-x422)<(x423&x424));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x425 = 879662;
	uint64_t x426 = UINT64_MAX;
	volatile uint32_t x427 = 59U;
	uint32_t x428 = 112905U;

	t98 = ((x425-x426)<(x427&x428));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x429 = 5921387LLU;
	uint64_t x431 = 2132030719261LLU;
	int32_t x432 = INT32_MIN;
	volatile int32_t t99 = 164;

	t99 = ((x429-x430)<(x431&x432));

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

