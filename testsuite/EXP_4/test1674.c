#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = 2;
volatile int32_t t1 = 9320765;
static int64_t x10 = -1LL;
int32_t t3 = -17764;
uint64_t x18 = UINT64_MAX;
volatile int64_t x19 = INT64_MIN;
int32_t t4 = -138;
static volatile uint16_t x21 = 2023U;
uint16_t x24 = UINT16_MAX;
int32_t t5 = 1114330;
static int16_t x40 = INT16_MIN;
volatile int32_t t9 = 38;
int32_t x48 = -1;
uint16_t x49 = UINT16_MAX;
volatile int32_t x50 = -22032068;
volatile int16_t x52 = -1;
uint64_t x54 = 2034006271417147LLU;
volatile int64_t x55 = INT64_MIN;
int64_t x58 = INT64_MIN;
int8_t x69 = INT8_MIN;
int8_t x78 = INT8_MIN;
int64_t x81 = -7LL;
static uint32_t x87 = 4260U;
volatile int16_t x89 = INT16_MAX;
static int8_t x92 = -54;
static int16_t x93 = -1;
static int32_t x102 = 0;
int16_t x111 = INT16_MIN;
volatile uint32_t x115 = UINT32_MAX;
uint8_t x116 = 8U;
static volatile int8_t x117 = 1;
int64_t x120 = INT64_MIN;
int32_t t29 = -3;
int64_t x124 = 1183668LL;
uint32_t x128 = 1959985081U;
static int32_t t32 = -233;
static int64_t x133 = INT64_MAX;
int8_t x135 = INT8_MAX;
static int8_t x139 = INT8_MIN;
uint64_t x140 = UINT64_MAX;
int32_t t34 = -1484;
static int64_t x147 = 946478LL;
int8_t x157 = -2;
int32_t x159 = INT32_MIN;
uint32_t x163 = 611828U;
int8_t x166 = INT8_MIN;
static uint32_t x171 = UINT32_MAX;
uint16_t x173 = UINT16_MAX;
int8_t x181 = -1;
volatile int64_t x194 = -1LL;
uint64_t x196 = 215777274224558LLU;
int32_t t51 = -99265;
int8_t x210 = -1;
int32_t x212 = -802387753;
int64_t x214 = -60276504LL;
int64_t x215 = 1817123677LL;
static uint64_t x218 = 803708386195342LLU;
volatile int32_t t54 = -605;
int8_t x222 = -40;
int32_t x224 = INT32_MIN;
volatile int32_t t57 = 0;
volatile uint64_t x233 = 24298500417062LLU;
uint64_t x241 = UINT64_MAX;
static volatile int32_t t61 = -234;
int32_t x255 = -1;
int8_t x256 = INT8_MIN;
int32_t x259 = -26772395;
int8_t x260 = INT8_MIN;
int16_t x267 = INT16_MAX;
static volatile int32_t t67 = -305;
static int8_t x278 = INT8_MIN;
int32_t t69 = 1;
uint16_t x283 = UINT16_MAX;
uint32_t x286 = 1226U;
static volatile int16_t x291 = -1;
int64_t x297 = INT64_MIN;
int8_t x299 = INT8_MIN;
int16_t x301 = -83;
int16_t x304 = -447;
static int8_t x311 = -8;
int32_t x313 = 0;
uint8_t x319 = 2U;
int32_t t79 = -3;
int32_t t81 = 13670811;
int32_t t82 = -50797634;
int8_t x333 = -1;
static int16_t x337 = 57;
static volatile int8_t x338 = -10;
int16_t x340 = INT16_MIN;
int32_t t84 = 508132555;
static int32_t x343 = 244989;
static volatile int16_t x349 = -1;
static volatile int64_t x351 = INT64_MIN;
int64_t x352 = -543067509296489524LL;
int32_t t89 = 118295;
static int16_t x361 = INT16_MAX;
int8_t x365 = INT8_MIN;
static int8_t x366 = -7;
uint64_t x367 = UINT64_MAX;
int8_t x371 = -1;
uint8_t x374 = 49U;
volatile uint16_t x375 = UINT16_MAX;
uint8_t x378 = 25U;
static int64_t x388 = 429527LL;
static int32_t t96 = -477;
volatile int64_t x391 = 13LL;
volatile uint32_t x395 = 55351351U;
int32_t t98 = 6;
static int64_t x400 = INT64_MAX;


void f0(void) {
	uint8_t x1 = 39U;
	static int64_t x2 = -1LL;
	uint32_t x3 = 11778192U;
	int16_t x4 = -1;
	int32_t t0 = 1;

	t0 = (x1<=(x2|(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = UINT8_MAX;
	static uint64_t x7 = UINT64_MAX;
	int32_t x8 = INT32_MIN;

	t1 = (x5<=(x6|(x7<=x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int32_t x11 = -1;
	int64_t x12 = INT64_MAX;
	int32_t t2 = -657;

	t2 = (x9<=(x10|(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 36142561U;
	int8_t x14 = INT8_MIN;
	volatile uint64_t x15 = 211533LLU;
	int16_t x16 = -1;

	t3 = (x13<=(x14|(x15<=x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 157553043LLU;
	int64_t x20 = -1LL;

	t4 = (x17<=(x18|(x19<=x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -1;
	int16_t x23 = INT16_MIN;

	t5 = (x21<=(x22|(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int64_t x26 = 1423552LL;
	int32_t x27 = INT32_MIN;
	volatile int16_t x28 = 29;
	volatile int32_t t6 = 517815;

	t6 = (x25<=(x26|(x27<=x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int16_t x30 = INT16_MAX;
	static uint32_t x31 = 102U;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -87232343;

	t7 = (x29<=(x30|(x31<=x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 891402383;
	static int8_t x34 = INT8_MAX;
	int8_t x35 = 0;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -491049;

	t8 = (x33<=(x34|(x35<=x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	int8_t x38 = INT8_MIN;
	int64_t x39 = -1LL;

	t9 = (x37<=(x38|(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	static int32_t x42 = 5998;
	volatile int32_t x43 = INT32_MAX;
	static volatile int16_t x44 = -1;
	static volatile int32_t t10 = -266640692;

	t10 = (x41<=(x42|(x43<=x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	uint32_t x46 = 723729U;
	volatile int16_t x47 = INT16_MIN;
	int32_t t11 = -19222;

	t11 = (x45<=(x46|(x47<=x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x51 = UINT64_MAX;
	volatile int32_t t12 = 1;

	t12 = (x49<=(x50|(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = -41880475;
	int16_t x56 = 8187;
	static volatile int32_t t13 = -4506632;

	t13 = (x53<=(x54|(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 0U;
	int8_t x59 = INT8_MIN;
	static uint16_t x60 = 103U;
	volatile int32_t t14 = 1176066;

	t14 = (x57<=(x58|(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 52;
	static volatile int32_t x62 = INT32_MIN;
	int32_t x63 = 12873;
	static int8_t x64 = 4;
	int32_t t15 = 2269321;

	t15 = (x61<=(x62|(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	int64_t x66 = -1LL;
	int32_t x67 = INT32_MIN;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 392822;

	t16 = (x65<=(x66|(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x70 = 89295400990LLU;
	int64_t x71 = INT64_MIN;
	uint8_t x72 = UINT8_MAX;
	int32_t t17 = 6627;

	t17 = (x69<=(x70|(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = 438295LLU;
	volatile uint8_t x74 = 43U;
	int64_t x75 = INT64_MIN;
	uint64_t x76 = 920845328929191032LLU;
	int32_t t18 = -868;

	t18 = (x73<=(x74|(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x77 = INT64_MIN;
	int32_t x79 = INT32_MAX;
	static volatile uint64_t x80 = 1643113585153407610LLU;
	volatile int32_t t19 = 5788233;

	t19 = (x77<=(x78|(x79<=x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 246U;
	volatile int64_t x83 = -79564752LL;
	static volatile int8_t x84 = 0;
	int32_t t20 = 288;

	t20 = (x81<=(x82|(x83<=x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -4;
	uint64_t x86 = 324726LLU;
	int8_t x88 = 6;
	int32_t t21 = -1;

	t21 = (x85<=(x86|(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x90 = UINT64_MAX;
	static int8_t x91 = INT8_MIN;
	volatile int32_t t22 = 24717066;

	t22 = (x89<=(x90|(x91<=x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = -1;
	int64_t x95 = INT64_MIN;
	uint32_t x96 = UINT32_MAX;
	int32_t t23 = 4598220;

	t23 = (x93<=(x94|(x95<=x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 102U;
	volatile int64_t x98 = INT64_MIN;
	uint64_t x99 = 131873525580366597LLU;
	int64_t x100 = -1LL;
	int32_t t24 = -5439;

	t24 = (x97<=(x98|(x99<=x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 197762975783LL;
	uint32_t x103 = 1U;
	uint16_t x104 = 351U;
	volatile int32_t t25 = 34640;

	t25 = (x101<=(x102|(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	uint64_t x106 = 17140713LLU;
	int16_t x107 = 0;
	uint16_t x108 = UINT16_MAX;
	int32_t t26 = 1393;

	t26 = (x105<=(x106|(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	static uint32_t x110 = 3058358U;
	static uint64_t x112 = UINT64_MAX;
	static int32_t t27 = 19;

	t27 = (x109<=(x110|(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -7;
	int16_t x114 = 0;
	volatile int32_t t28 = 336666733;

	t28 = (x113<=(x114|(x115<=x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x118 = 3198U;
	int64_t x119 = INT64_MIN;

	t29 = (x117<=(x118|(x119<=x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 2U;
	int64_t x122 = INT64_MIN;
	int32_t x123 = 7;
	int32_t t30 = 29;

	t30 = (x121<=(x122|(x123<=x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	static int64_t x126 = INT64_MIN;
	int32_t x127 = 235395087;
	int32_t t31 = -10212018;

	t31 = (x125<=(x126|(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = INT64_MIN;
	int64_t x131 = INT64_MIN;
	static int32_t x132 = -1;

	t32 = (x129<=(x130|(x131<=x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x134 = 1;
	int32_t x136 = -1;
	static int32_t t33 = 1;

	t33 = (x133<=(x134|(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;

	t34 = (x137<=(x138|(x139<=x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = 45762377LL;
	uint32_t x142 = 95832U;
	static int8_t x143 = 4;
	volatile uint16_t x144 = 1447U;
	volatile int32_t t35 = 2278593;

	t35 = (x141<=(x142|(x143<=x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	int32_t x146 = -1120601;
	int16_t x148 = INT16_MAX;
	int32_t t36 = -2051464;

	t36 = (x145<=(x146|(x147<=x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	uint32_t x150 = 444U;
	static int8_t x151 = 6;
	int16_t x152 = -3204;
	volatile int32_t t37 = 24;

	t37 = (x149<=(x150|(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x153 = UINT8_MAX;
	volatile int16_t x154 = INT16_MAX;
	static int16_t x155 = 1;
	uint32_t x156 = UINT32_MAX;
	volatile int32_t t38 = 1;

	t38 = (x153<=(x154|(x155<=x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = INT8_MAX;
	static int64_t x160 = -267639802074006LL;
	volatile int32_t t39 = 1;

	t39 = (x157<=(x158|(x159<=x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = INT8_MIN;
	int64_t x162 = -443932LL;
	volatile int16_t x164 = 639;
	volatile int32_t t40 = -3;

	t40 = (x161<=(x162|(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -839170;
	volatile int64_t x167 = -1LL;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = 3899;

	t41 = (x165<=(x166|(x167<=x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	volatile uint16_t x170 = UINT16_MAX;
	int8_t x172 = INT8_MAX;
	volatile int32_t t42 = 190;

	t42 = (x169<=(x170|(x171<=x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x174 = -175468LL;
	uint16_t x175 = 2U;
	int16_t x176 = -1;
	int32_t t43 = 3369;

	t43 = (x173<=(x174|(x175<=x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 66U;
	int16_t x178 = -1;
	static int16_t x179 = INT16_MAX;
	int32_t x180 = -368037516;
	int32_t t44 = 6039784;

	t44 = (x177<=(x178|(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x182 = UINT16_MAX;
	int64_t x183 = INT64_MIN;
	volatile int32_t x184 = -3419;
	volatile int32_t t45 = -23356;

	t45 = (x181<=(x182|(x183<=x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x185 = 142U;
	uint8_t x186 = UINT8_MAX;
	volatile int16_t x187 = INT16_MIN;
	static uint64_t x188 = 14LLU;
	volatile int32_t t46 = -14;

	t46 = (x185<=(x186|(x187<=x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = -1LL;
	int64_t x190 = INT64_MIN;
	int16_t x191 = -1;
	int64_t x192 = INT64_MAX;
	volatile int32_t t47 = 42938;

	t47 = (x189<=(x190|(x191<=x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	static int64_t x195 = -1LL;
	static volatile int32_t t48 = -88690;

	t48 = (x193<=(x194|(x195<=x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	uint8_t x198 = UINT8_MAX;
	uint8_t x199 = 1U;
	static int64_t x200 = INT64_MIN;
	int32_t t49 = 28963111;

	t49 = (x197<=(x198|(x199<=x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	static uint8_t x202 = UINT8_MAX;
	uint16_t x203 = 9709U;
	static int64_t x204 = INT64_MAX;
	static int32_t t50 = 6402603;

	t50 = (x201<=(x202|(x203<=x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MAX;
	static int8_t x207 = -1;
	int16_t x208 = -1;

	t51 = (x205<=(x206|(x207<=x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	uint32_t x211 = 64076U;
	volatile int32_t t52 = 10358732;

	t52 = (x209<=(x210|(x211<=x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 12514U;
	volatile int16_t x216 = -1;
	volatile int32_t t53 = -333;

	t53 = (x213<=(x214|(x215<=x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = UINT64_MAX;
	static volatile int8_t x219 = INT8_MIN;
	int16_t x220 = INT16_MIN;

	t54 = (x217<=(x218|(x219<=x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = 309187876563LLU;
	uint8_t x223 = UINT8_MAX;
	volatile int32_t t55 = -2117;

	t55 = (x221<=(x222|(x223<=x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	static volatile int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MIN;
	static int8_t x228 = 0;
	int32_t t56 = 7720;

	t56 = (x225<=(x226|(x227<=x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = -184743823570349422LL;
	uint8_t x230 = 59U;
	static int32_t x231 = -199709;
	volatile uint16_t x232 = 2634U;

	t57 = (x229<=(x230|(x231<=x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x234 = -1;
	uint16_t x235 = 10135U;
	uint32_t x236 = 0U;
	volatile int32_t t58 = -27;

	t58 = (x233<=(x234|(x235<=x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = -8;
	int64_t x238 = 424430LL;
	int64_t x239 = INT64_MIN;
	int16_t x240 = -1;
	volatile int32_t t59 = 1;

	t59 = (x237<=(x238|(x239<=x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x242 = 59U;
	int64_t x243 = -24LL;
	int32_t x244 = -1;
	static volatile int32_t t60 = -1781650;

	t60 = (x241<=(x242|(x243<=x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = -133542944688LL;
	static int16_t x246 = -1972;
	static int16_t x247 = INT16_MIN;
	uint64_t x248 = 21946395537LLU;

	t61 = (x245<=(x246|(x247<=x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	static int16_t x250 = -21;
	int8_t x251 = INT8_MAX;
	int16_t x252 = -24;
	int32_t t62 = -441;

	t62 = (x249<=(x250|(x251<=x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 5;
	int64_t x254 = INT64_MAX;
	int32_t t63 = -1;

	t63 = (x253<=(x254|(x255<=x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 6298U;
	int32_t x258 = 3640;
	volatile int32_t t64 = -219403;

	t64 = (x257<=(x258|(x259<=x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = 2542496406243366LLU;
	int16_t x262 = INT16_MAX;
	static int16_t x263 = -1280;
	uint64_t x264 = UINT64_MAX;
	static int32_t t65 = -9327132;

	t65 = (x261<=(x262|(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -1;
	int32_t x266 = -12480973;
	int64_t x268 = INT64_MIN;
	static volatile int32_t t66 = 15;

	t66 = (x265<=(x266|(x267<=x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = 31;
	int16_t x270 = 1;
	uint16_t x271 = 20U;
	volatile uint64_t x272 = 6331472LLU;

	t67 = (x269<=(x270|(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	volatile uint64_t x274 = 34773836088586LLU;
	int32_t x275 = -1;
	int8_t x276 = 1;
	static int32_t t68 = 2184;

	t68 = (x273<=(x274|(x275<=x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MAX;
	int16_t x279 = -1;
	static uint16_t x280 = 5382U;

	t69 = (x277<=(x278|(x279<=x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = UINT16_MAX;
	uint16_t x282 = 1U;
	volatile int64_t x284 = INT64_MAX;
	static int32_t t70 = 448041117;

	t70 = (x281<=(x282|(x283<=x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 20U;
	uint8_t x287 = UINT8_MAX;
	static int8_t x288 = INT8_MIN;
	static int32_t t71 = -3855;

	t71 = (x285<=(x286|(x287<=x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MAX;
	int64_t x290 = -1LL;
	int32_t x292 = -1;
	static int32_t t72 = 7;

	t72 = (x289<=(x290|(x291<=x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	volatile int64_t x294 = -116527535809LL;
	volatile uint32_t x295 = 445U;
	int8_t x296 = INT8_MIN;
	static volatile int32_t t73 = 6233529;

	t73 = (x293<=(x294|(x295<=x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x298 = INT32_MAX;
	static volatile int64_t x300 = INT64_MIN;
	int32_t t74 = 7;

	t74 = (x297<=(x298|(x299<=x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x302 = 69423U;
	int64_t x303 = -47837112LL;
	int32_t t75 = 2573;

	t75 = (x301<=(x302|(x303<=x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 0U;
	volatile int16_t x306 = INT16_MIN;
	int16_t x307 = 1435;
	static uint64_t x308 = UINT64_MAX;
	static int32_t t76 = -504343;

	t76 = (x305<=(x306|(x307<=x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = 60U;
	int16_t x310 = INT16_MAX;
	int64_t x312 = -899662955842LL;
	int32_t t77 = -1;

	t77 = (x309<=(x310|(x311<=x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x314 = -49;
	static volatile uint32_t x315 = 1852700U;
	volatile int32_t x316 = INT32_MIN;
	int32_t t78 = -7;

	t78 = (x313<=(x314|(x315<=x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 103U;
	int8_t x318 = -1;
	uint8_t x320 = 18U;

	t79 = (x317<=(x318|(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -4457374;
	uint16_t x322 = 362U;
	uint16_t x323 = 1U;
	static uint16_t x324 = UINT16_MAX;
	volatile int32_t t80 = 37558361;

	t80 = (x321<=(x322|(x323<=x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x325 = 166076U;
	uint8_t x326 = 2U;
	int8_t x327 = -4;
	static int8_t x328 = INT8_MIN;

	t81 = (x325<=(x326|(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	int64_t x330 = INT64_MIN;
	static uint16_t x331 = UINT16_MAX;
	int32_t x332 = -1;

	t82 = (x329<=(x330|(x331<=x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = 7;
	uint16_t x335 = 213U;
	int8_t x336 = INT8_MIN;
	volatile int32_t t83 = -18799;

	t83 = (x333<=(x334|(x335<=x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x339 = -1;

	t84 = (x337<=(x338|(x339<=x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MAX;
	int16_t x342 = INT16_MAX;
	int32_t x344 = INT32_MAX;
	static int32_t t85 = 2052;

	t85 = (x341<=(x342|(x343<=x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = INT16_MAX;
	int8_t x346 = -1;
	int8_t x347 = INT8_MIN;
	static int16_t x348 = -11;
	volatile int32_t t86 = -3106951;

	t86 = (x345<=(x346|(x347<=x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = -71793LL;
	static volatile int32_t t87 = -3779;

	t87 = (x349<=(x350|(x351<=x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = -59;
	static uint64_t x354 = 3620541LLU;
	uint64_t x355 = 2291374098519608097LLU;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t88 = -44;

	t88 = (x353<=(x354|(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 20994107542869833LLU;
	uint32_t x358 = 8961917U;
	int32_t x359 = 13315713;
	int32_t x360 = 38605;

	t89 = (x357<=(x358|(x359<=x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = 1;
	int64_t x363 = -25LL;
	uint32_t x364 = 324642741U;
	volatile int32_t t90 = 56240;

	t90 = (x361<=(x362|(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x368 = -5151556463LL;
	volatile int32_t t91 = 35;

	t91 = (x365<=(x366|(x367<=x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	uint16_t x370 = 1089U;
	static int32_t x372 = -1;
	int32_t t92 = -7724031;

	t92 = (x369<=(x370|(x371<=x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 0;
	static int32_t x376 = 349;
	volatile int32_t t93 = -1;

	t93 = (x373<=(x374|(x375<=x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x377 = UINT8_MAX;
	volatile uint16_t x379 = 0U;
	int64_t x380 = -1LL;
	volatile int32_t t94 = 80160;

	t94 = (x377<=(x378|(x379<=x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x381 = 0U;
	int32_t x382 = INT32_MAX;
	static volatile int64_t x383 = -1355321LL;
	uint16_t x384 = 7224U;
	int32_t t95 = 614126;

	t95 = (x381<=(x382|(x383<=x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MIN;
	int16_t x386 = -1;
	volatile int32_t x387 = -1;

	t96 = (x385<=(x386|(x387<=x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = 60771531619LLU;
	uint8_t x390 = 1U;
	int32_t x392 = INT32_MAX;
	int32_t t97 = 25;

	t97 = (x389<=(x390|(x391<=x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = 1;
	int64_t x394 = 18511091846LL;
	uint32_t x396 = 1708U;

	t98 = (x393<=(x394|(x395<=x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x397 = UINT16_MAX;
	uint8_t x398 = UINT8_MAX;
	int64_t x399 = 185LL;
	int32_t t99 = 625315588;

	t99 = (x397<=(x398|(x399<=x400)));

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

