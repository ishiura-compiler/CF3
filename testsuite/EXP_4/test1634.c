#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x4 = INT32_MIN;
uint32_t x11 = UINT32_MAX;
uint16_t x13 = UINT16_MAX;
volatile int32_t t4 = -112;
int8_t x29 = 1;
static int8_t x30 = INT8_MIN;
static volatile uint32_t x34 = 63U;
uint32_t x39 = 342878U;
volatile int32_t t9 = 8232;
volatile int32_t t10 = 0;
int32_t x46 = 966133181;
int8_t x50 = INT8_MAX;
int32_t x56 = INT32_MAX;
int32_t t14 = -114946244;
int8_t x69 = INT8_MAX;
uint8_t x70 = 10U;
static uint16_t x72 = 133U;
int8_t x77 = -25;
int32_t t21 = -200;
static volatile int32_t t23 = -2;
static int16_t x102 = INT16_MIN;
int32_t t26 = 74879671;
int64_t x109 = 212516414310350878LL;
int32_t x111 = 89;
volatile int32_t t29 = -8550191;
int8_t x129 = -2;
volatile int32_t t33 = -337045;
volatile int64_t x144 = INT64_MIN;
static int32_t t35 = -14252992;
uint32_t x151 = 420079391U;
int8_t x152 = INT8_MIN;
static uint16_t x155 = 3068U;
volatile uint32_t x158 = 356340U;
int8_t x159 = INT8_MIN;
uint64_t x167 = 80387LLU;
volatile uint8_t x176 = UINT8_MAX;
int8_t x184 = -1;
volatile int32_t t48 = 5279;
int32_t x200 = -1;
uint64_t x204 = 179356491LLU;
static uint8_t x206 = 70U;
static volatile int8_t x211 = INT8_MAX;
uint8_t x214 = 35U;
static volatile uint32_t x220 = 12U;
volatile int32_t t54 = -619;
int16_t x228 = 7602;
int64_t x231 = INT64_MIN;
static volatile int8_t x234 = -1;
static volatile int8_t x235 = INT8_MAX;
static int16_t x238 = -1;
volatile uint64_t x239 = 3573933656LLU;
uint8_t x242 = 35U;
volatile int8_t x243 = 31;
int8_t x251 = INT8_MAX;
volatile int32_t x257 = -1;
volatile int8_t x263 = -2;
int8_t x264 = 1;
int8_t x265 = -22;
volatile uint16_t x272 = 126U;
volatile int8_t x274 = INT8_MIN;
int32_t t68 = 4683;
uint32_t x291 = 70U;
int16_t x295 = INT16_MAX;
volatile uint16_t x302 = UINT16_MAX;
static int64_t x303 = INT64_MIN;
volatile int32_t x308 = 20;
int64_t x316 = -1LL;
volatile uint32_t x318 = 251U;
static int8_t x321 = -12;
volatile int32_t t80 = 1;
int64_t x327 = 80076229649557844LL;
int8_t x339 = 7;
int64_t x343 = 3LL;
volatile int16_t x348 = -1;
uint32_t x352 = UINT32_MAX;
volatile int16_t x354 = 773;
static volatile int32_t t89 = 15122;
static int64_t x366 = INT64_MAX;
volatile int8_t x373 = INT8_MIN;
int64_t x377 = INT64_MAX;
uint64_t x378 = UINT64_MAX;
static volatile uint32_t x383 = 17U;
int32_t x386 = -19188002;
int32_t x390 = INT32_MIN;


void f0(void) {
	uint8_t x1 = 5U;
	uint16_t x2 = 383U;
	int32_t x3 = INT32_MAX;
	static int32_t t0 = -118;

	t0 = (x1<(x2<(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	static int32_t x6 = -2;
	uint32_t x7 = 2875U;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 147467133;

	t1 = (x5<(x6<(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	static uint8_t x10 = 1U;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = -2;

	t2 = (x9<(x10<(x11<=x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MAX;
	int16_t x15 = INT16_MIN;
	uint8_t x16 = 61U;
	volatile int32_t t3 = 10;

	t3 = (x13<(x14<(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1LL;
	int16_t x18 = INT16_MIN;
	uint8_t x19 = UINT8_MAX;
	int8_t x20 = -1;

	t4 = (x17<(x18<(x19<=x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1;
	volatile uint64_t x22 = 44252096477756LLU;
	int32_t x23 = INT32_MAX;
	static int32_t x24 = -337434258;
	volatile int32_t t5 = 1067917;

	t5 = (x21<(x22<(x23<=x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 3274967LL;
	int8_t x26 = 0;
	static uint32_t x27 = 2605U;
	int16_t x28 = 2;
	int32_t t6 = -2134;

	t6 = (x25<(x26<(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x31 = INT32_MAX;
	volatile uint16_t x32 = UINT16_MAX;
	int32_t t7 = 108850928;

	t7 = (x29<(x30<(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -262635489;
	int32_t x35 = INT32_MAX;
	static uint64_t x36 = 78016229LLU;
	static volatile int32_t t8 = 51723118;

	t8 = (x33<(x34<(x35<=x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -143034110674804LL;
	int8_t x38 = INT8_MIN;
	int16_t x40 = INT16_MIN;

	t9 = (x37<(x38<(x39<=x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 0U;
	static int8_t x42 = 1;
	volatile int8_t x43 = -1;
	int32_t x44 = INT32_MIN;

	t10 = (x41<(x42<(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MAX;
	int8_t x47 = INT8_MIN;
	uint32_t x48 = UINT32_MAX;
	int32_t t11 = -9334352;

	t11 = (x45<(x46<(x47<=x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = -1;
	uint8_t x51 = 12U;
	int8_t x52 = INT8_MIN;
	int32_t t12 = 6137;

	t12 = (x49<(x50<(x51<=x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 94U;
	int16_t x54 = INT16_MIN;
	uint16_t x55 = 1593U;
	int32_t t13 = 141449798;

	t13 = (x53<(x54<(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 119U;
	int16_t x58 = 2341;
	uint64_t x59 = UINT64_MAX;
	int64_t x60 = INT64_MIN;

	t14 = (x57<(x58<(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 28U;
	static uint16_t x62 = UINT16_MAX;
	uint8_t x63 = 22U;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 6984;

	t15 = (x61<(x62<(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MAX;
	int64_t x66 = INT64_MAX;
	int16_t x67 = INT16_MAX;
	int16_t x68 = INT16_MIN;
	int32_t t16 = 8883443;

	t16 = (x65<(x66<(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x71 = 391U;
	int32_t t17 = 0;

	t17 = (x69<(x70<(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -1;
	uint16_t x74 = UINT16_MAX;
	int16_t x75 = -106;
	int8_t x76 = INT8_MIN;
	int32_t t18 = -76976806;

	t18 = (x73<(x74<(x75<=x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = UINT64_MAX;
	volatile uint64_t x79 = 19445345890813798LLU;
	int64_t x80 = INT64_MIN;
	volatile int32_t t19 = 655176672;

	t19 = (x77<(x78<(x79<=x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = 16084;
	int64_t x82 = 212088738017515LL;
	static volatile int64_t x83 = 253LL;
	int64_t x84 = INT64_MAX;
	static int32_t t20 = 45;

	t20 = (x81<(x82<(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	volatile int32_t x86 = -1;
	uint64_t x87 = 378696363595LLU;
	uint16_t x88 = 22U;

	t21 = (x85<(x86<(x87<=x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = UINT32_MAX;
	uint16_t x90 = 28U;
	volatile int64_t x91 = INT64_MIN;
	int8_t x92 = 1;
	int32_t t22 = -32;

	t22 = (x89<(x90<(x91<=x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x93 = INT16_MIN;
	int8_t x94 = -1;
	uint16_t x95 = 5195U;
	uint32_t x96 = 1U;

	t23 = (x93<(x94<(x95<=x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -89678LL;
	int16_t x98 = INT16_MIN;
	int32_t x99 = INT32_MIN;
	int16_t x100 = -154;
	volatile int32_t t24 = 15;

	t24 = (x97<(x98<(x99<=x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -63;
	static uint64_t x103 = UINT64_MAX;
	int32_t x104 = INT32_MAX;
	static volatile int32_t t25 = 38743;

	t25 = (x101<(x102<(x103<=x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MIN;
	uint8_t x106 = 2U;
	volatile int32_t x107 = -395;
	uint8_t x108 = 2U;

	t26 = (x105<(x106<(x107<=x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x110 = INT16_MIN;
	static int32_t x112 = INT32_MAX;
	static int32_t t27 = 16426;

	t27 = (x109<(x110<(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 26;
	uint32_t x114 = 852U;
	static uint16_t x115 = UINT16_MAX;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = 150;

	t28 = (x113<(x114<(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 55U;
	int16_t x118 = 69;
	volatile int8_t x119 = INT8_MIN;
	volatile int16_t x120 = INT16_MIN;

	t29 = (x117<(x118<(x119<=x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	volatile int8_t x122 = 53;
	int16_t x123 = -1;
	volatile uint64_t x124 = UINT64_MAX;
	int32_t t30 = -8;

	t30 = (x121<(x122<(x123<=x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	static int32_t x126 = INT32_MIN;
	static int32_t x127 = -1;
	uint32_t x128 = 215418U;
	static int32_t t31 = 146;

	t31 = (x125<(x126<(x127<=x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x130 = 6346182LLU;
	volatile int64_t x131 = -1LL;
	uint8_t x132 = 3U;
	int32_t t32 = -434;

	t32 = (x129<(x130<(x131<=x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = 18U;
	int32_t x134 = 16114;
	uint32_t x135 = UINT32_MAX;
	static int16_t x136 = INT16_MIN;

	t33 = (x133<(x134<(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	int8_t x138 = -1;
	static volatile uint16_t x139 = 7760U;
	int32_t x140 = INT32_MIN;
	int32_t t34 = -898;

	t34 = (x137<(x138<(x139<=x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = 5811U;
	static int32_t x142 = 1;
	volatile int16_t x143 = 4;

	t35 = (x141<(x142<(x143<=x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = INT64_MIN;
	volatile int64_t x146 = -94081789702LL;
	uint64_t x147 = 146LLU;
	static uint64_t x148 = 28224LLU;
	int32_t t36 = -391188687;

	t36 = (x145<(x146<(x147<=x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = UINT16_MAX;
	uint16_t x150 = UINT16_MAX;
	volatile int32_t t37 = 201;

	t37 = (x149<(x150<(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	int8_t x154 = -1;
	uint32_t x156 = UINT32_MAX;
	int32_t t38 = 910;

	t38 = (x153<(x154<(x155<=x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	uint32_t x160 = UINT32_MAX;
	int32_t t39 = 2;

	t39 = (x157<(x158<(x159<=x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MIN;
	volatile int8_t x162 = INT8_MIN;
	uint8_t x163 = UINT8_MAX;
	static int32_t x164 = INT32_MIN;
	static volatile int32_t t40 = 148801428;

	t40 = (x161<(x162<(x163<=x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = -1;
	int8_t x166 = INT8_MIN;
	int16_t x168 = 2;
	static int32_t t41 = 1;

	t41 = (x165<(x166<(x167<=x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -174069167285053728LL;
	int16_t x170 = -4;
	uint64_t x171 = UINT64_MAX;
	static uint8_t x172 = UINT8_MAX;
	static int32_t t42 = -156072165;

	t42 = (x169<(x170<(x171<=x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MIN;
	static int64_t x174 = INT64_MIN;
	int32_t x175 = 8;
	int32_t t43 = 214;

	t43 = (x173<(x174<(x175<=x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	static uint64_t x178 = 1541891980065307LLU;
	int32_t x179 = INT32_MIN;
	static int64_t x180 = INT64_MAX;
	static int32_t t44 = -107996;

	t44 = (x177<(x178<(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MAX;
	int64_t x182 = -1LL;
	int32_t x183 = INT32_MIN;
	int32_t t45 = -2581061;

	t45 = (x181<(x182<(x183<=x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	static int64_t x186 = -1LL;
	volatile uint64_t x187 = 42684428292LLU;
	static uint8_t x188 = 0U;
	int32_t t46 = 192;

	t46 = (x185<(x186<(x187<=x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	uint16_t x191 = 44U;
	volatile uint8_t x192 = 33U;
	int32_t t47 = -59;

	t47 = (x189<(x190<(x191<=x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 997;
	int32_t x194 = -1;
	static int64_t x195 = -1LL;
	uint32_t x196 = UINT32_MAX;

	t48 = (x193<(x194<(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MAX;
	int8_t x198 = INT8_MIN;
	volatile uint8_t x199 = UINT8_MAX;
	volatile int32_t t49 = 1017;

	t49 = (x197<(x198<(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MAX;
	static int16_t x202 = -1;
	int32_t x203 = -90;
	volatile int32_t t50 = -8283247;

	t50 = (x201<(x202<(x203<=x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = 2;
	int16_t x207 = 2776;
	int32_t x208 = 1346;
	int32_t t51 = -84198777;

	t51 = (x205<(x206<(x207<=x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 6;
	volatile uint64_t x210 = UINT64_MAX;
	int16_t x212 = INT16_MAX;
	volatile int32_t t52 = 148627;

	t52 = (x209<(x210<(x211<=x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 1;
	int64_t x215 = -6LL;
	uint16_t x216 = 13933U;
	int32_t t53 = 228;

	t53 = (x213<(x214<(x215<=x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 15541U;
	volatile int16_t x218 = -1;
	volatile int64_t x219 = -1LL;

	t54 = (x217<(x218<(x219<=x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 5878637978520684LL;
	volatile int16_t x222 = INT16_MIN;
	uint32_t x223 = 521609453U;
	uint8_t x224 = 11U;
	static volatile int32_t t55 = -2;

	t55 = (x221<(x222<(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	uint16_t x226 = UINT16_MAX;
	uint16_t x227 = UINT16_MAX;
	volatile int32_t t56 = -912;

	t56 = (x225<(x226<(x227<=x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 122033LLU;
	volatile int16_t x230 = -1;
	static int16_t x232 = -1;
	volatile int32_t t57 = -76702683;

	t57 = (x229<(x230<(x231<=x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 161779258LLU;
	int32_t x236 = -6371;
	volatile int32_t t58 = 8029910;

	t58 = (x233<(x234<(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	int32_t x240 = 103393477;
	volatile int32_t t59 = 1;

	t59 = (x237<(x238<(x239<=x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MIN;
	uint64_t x244 = UINT64_MAX;
	int32_t t60 = 71;

	t60 = (x241<(x242<(x243<=x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	volatile int64_t x246 = INT64_MIN;
	int64_t x247 = 19744634895159LL;
	static int16_t x248 = -17;
	int32_t t61 = 3;

	t61 = (x245<(x246<(x247<=x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	volatile int32_t x250 = INT32_MAX;
	volatile uint32_t x252 = UINT32_MAX;
	int32_t t62 = -104017235;

	t62 = (x249<(x250<(x251<=x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	int16_t x254 = INT16_MIN;
	int16_t x255 = INT16_MIN;
	static int32_t x256 = -2984648;
	static int32_t t63 = 33259538;

	t63 = (x253<(x254<(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x258 = 7696U;
	int64_t x259 = INT64_MIN;
	uint32_t x260 = 80173U;
	int32_t t64 = -470300331;

	t64 = (x257<(x258<(x259<=x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = 1956U;
	int64_t x262 = INT64_MIN;
	static volatile int32_t t65 = 756562208;

	t65 = (x261<(x262<(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = 1;
	static int8_t x267 = 1;
	int8_t x268 = INT8_MAX;
	int32_t t66 = 2535500;

	t66 = (x265<(x266<(x267<=x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	uint8_t x270 = UINT8_MAX;
	int16_t x271 = INT16_MAX;
	int32_t t67 = -563;

	t67 = (x269<(x270<(x271<=x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 149LLU;
	int64_t x275 = INT64_MAX;
	int64_t x276 = -1LL;

	t68 = (x273<(x274<(x275<=x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	volatile int8_t x278 = -1;
	volatile uint64_t x279 = 137LLU;
	uint8_t x280 = 6U;
	volatile int32_t t69 = 469843147;

	t69 = (x277<(x278<(x279<=x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	uint16_t x282 = 253U;
	int32_t x283 = INT32_MAX;
	static uint8_t x284 = UINT8_MAX;
	volatile int32_t t70 = 0;

	t70 = (x281<(x282<(x283<=x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = 41;
	static volatile int16_t x286 = 5240;
	int8_t x287 = -1;
	volatile int64_t x288 = INT64_MAX;
	volatile int32_t t71 = 19;

	t71 = (x285<(x286<(x287<=x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MAX;
	uint8_t x290 = 82U;
	volatile int32_t x292 = -246552895;
	int32_t t72 = -10;

	t72 = (x289<(x290<(x291<=x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	volatile int32_t x294 = -1;
	int64_t x296 = INT64_MAX;
	volatile int32_t t73 = -6851790;

	t73 = (x293<(x294<(x295<=x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	uint8_t x298 = 9U;
	int32_t x299 = 726;
	int16_t x300 = -1;
	volatile int32_t t74 = 1536;

	t74 = (x297<(x298<(x299<=x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = -1LL;
	volatile int8_t x304 = -5;
	volatile int32_t t75 = 436542;

	t75 = (x301<(x302<(x303<=x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	int64_t x306 = INT64_MIN;
	volatile uint64_t x307 = 1731829099177444563LLU;
	int32_t t76 = 6774;

	t76 = (x305<(x306<(x307<=x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -29;
	volatile int8_t x310 = -9;
	uint32_t x311 = 19354U;
	int8_t x312 = INT8_MAX;
	volatile int32_t t77 = -13;

	t77 = (x309<(x310<(x311<=x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -5336486154223381LL;
	static uint64_t x314 = 239787978698799LLU;
	volatile int16_t x315 = -696;
	volatile int32_t t78 = 2;

	t78 = (x313<(x314<(x315<=x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -3;
	int16_t x319 = INT16_MAX;
	static int8_t x320 = 3;
	volatile int32_t t79 = 11;

	t79 = (x317<(x318<(x319<=x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x322 = -101134637332468987LL;
	int32_t x323 = INT32_MAX;
	int64_t x324 = INT64_MIN;

	t80 = (x321<(x322<(x323<=x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MAX;
	int8_t x326 = 14;
	int32_t x328 = INT32_MIN;
	int32_t t81 = -4031894;

	t81 = (x325<(x326<(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x329 = INT16_MIN;
	int64_t x330 = INT64_MIN;
	uint8_t x331 = 34U;
	uint64_t x332 = 15481544LLU;
	volatile int32_t t82 = -5617390;

	t82 = (x329<(x330<(x331<=x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = 28242992LLU;
	int16_t x334 = -174;
	uint16_t x335 = UINT16_MAX;
	int32_t x336 = INT32_MIN;
	int32_t t83 = 0;

	t83 = (x333<(x334<(x335<=x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 7U;
	static int16_t x338 = INT16_MIN;
	static int64_t x340 = -104LL;
	static int32_t t84 = -7509122;

	t84 = (x337<(x338<(x339<=x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = -1LL;
	static volatile int16_t x342 = INT16_MIN;
	uint32_t x344 = UINT32_MAX;
	int32_t t85 = -4415;

	t85 = (x341<(x342<(x343<=x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -66;
	uint32_t x346 = UINT32_MAX;
	int16_t x347 = INT16_MAX;
	volatile int32_t t86 = -71;

	t86 = (x345<(x346<(x347<=x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 0U;
	uint16_t x350 = 97U;
	uint32_t x351 = 106U;
	int32_t t87 = 974934;

	t87 = (x349<(x350<(x351<=x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = 1310;
	volatile int32_t x355 = INT32_MIN;
	static int16_t x356 = INT16_MIN;
	int32_t t88 = 5381831;

	t88 = (x353<(x354<(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	static volatile uint16_t x358 = 5U;
	int64_t x359 = INT64_MIN;
	int16_t x360 = 0;

	t89 = (x357<(x358<(x359<=x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -1;
	volatile uint64_t x362 = UINT64_MAX;
	int8_t x363 = INT8_MIN;
	static uint32_t x364 = 471410555U;
	volatile int32_t t90 = -730;

	t90 = (x361<(x362<(x363<=x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = -1;
	volatile int32_t x367 = 4048047;
	int64_t x368 = 27485529388LL;
	int32_t t91 = 97;

	t91 = (x365<(x366<(x367<=x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 478033LL;
	static volatile uint64_t x370 = UINT64_MAX;
	volatile int32_t x371 = 3;
	volatile int64_t x372 = INT64_MIN;
	volatile int32_t t92 = -2165844;

	t92 = (x369<(x370<(x371<=x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x374 = -1LL;
	uint8_t x375 = 4U;
	static int16_t x376 = -9;
	int32_t t93 = -1078;

	t93 = (x373<(x374<(x375<=x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x379 = 942;
	uint32_t x380 = UINT32_MAX;
	int32_t t94 = 707675;

	t94 = (x377<(x378<(x379<=x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = INT8_MIN;
	int32_t x382 = -132;
	int32_t x384 = -1;
	volatile int32_t t95 = 464600113;

	t95 = (x381<(x382<(x383<=x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x385 = 979U;
	int32_t x387 = INT32_MIN;
	static volatile int16_t x388 = -5624;
	int32_t t96 = -626;

	t96 = (x385<(x386<(x387<=x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int64_t x391 = 8160679159379895LL;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 1711949;

	t97 = (x389<(x390<(x391<=x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x393 = INT8_MAX;
	int32_t x394 = INT32_MIN;
	static int8_t x395 = -1;
	int16_t x396 = -1;
	volatile int32_t t98 = -8;

	t98 = (x393<(x394<(x395<=x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 4630U;
	static int8_t x398 = 2;
	int32_t x399 = INT32_MIN;
	volatile uint8_t x400 = 127U;
	volatile int32_t t99 = 10153;

	t99 = (x397<(x398<(x399<=x400)));

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

