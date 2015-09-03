#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = INT8_MIN;
volatile int64_t x2 = -1LL;
volatile uint8_t x3 = UINT8_MAX;
static uint64_t x6 = 2704458626373LLU;
int32_t t1 = -5530;
volatile int64_t x10 = INT64_MIN;
uint64_t t2 = 83747LLU;
volatile int32_t t3 = -248;
uint16_t x26 = UINT16_MAX;
static int8_t x29 = INT8_MIN;
uint64_t x38 = 7284393404745LLU;
int64_t x54 = INT64_MIN;
int8_t x55 = -1;
static uint64_t x58 = UINT64_MAX;
int32_t x65 = -1;
volatile int32_t t12 = -176;
int16_t x73 = -1;
volatile uint16_t x74 = UINT16_MAX;
volatile int32_t x82 = -1;
volatile int64_t t16 = -7520882927203LL;
int32_t x89 = INT32_MAX;
static int32_t t17 = -14053256;
static volatile int32_t t18 = -38;
volatile int64_t x106 = -1LL;
uint32_t t22 = 5871104U;
int64_t x115 = -217655LL;
static int64_t x119 = INT64_MIN;
uint8_t x137 = UINT8_MAX;
int32_t t27 = 40102348;
volatile uint64_t x147 = UINT64_MAX;
static int8_t x151 = INT8_MIN;
int32_t x155 = -1;
int64_t t30 = 98LL;
uint8_t x158 = 20U;
uint64_t x161 = 10075LLU;
uint32_t x163 = UINT32_MAX;
uint64_t t32 = 29894LLU;
int16_t x166 = -2582;
int16_t x170 = INT16_MIN;
uint64_t x178 = 497835LLU;
uint64_t x189 = UINT64_MAX;
volatile int64_t x194 = -1LL;
int32_t t39 = 10914977;
static volatile int32_t x198 = INT32_MAX;
uint32_t t41 = 1007U;
static uint32_t x211 = 954318032U;
int32_t x222 = -205718;
volatile int64_t t45 = 1836000282276LL;
volatile int64_t x226 = -1LL;
int8_t x230 = 0;
volatile int64_t x231 = INT64_MIN;
static volatile uint32_t t47 = 5853U;
int32_t t48 = -43;
volatile uint16_t x238 = 29U;
int64_t x240 = -1LL;
volatile int32_t t52 = 3;
static volatile int32_t t53 = 7314671;
uint16_t x269 = 10368U;
static volatile int64_t x270 = -2361976202044007945LL;
volatile uint8_t x272 = 21U;
volatile int32_t t55 = -3851260;
int64_t x282 = INT64_MAX;
static uint64_t x292 = 8278432766352964LLU;
volatile uint64_t t58 = 368463335960LLU;
uint16_t x299 = 28U;
int32_t t60 = -99586562;
static int64_t x306 = INT64_MIN;
volatile int8_t x307 = 2;
int64_t t62 = -4LL;
volatile int64_t x315 = -6525481657LL;
volatile int32_t t65 = -2181237;
uint8_t x323 = UINT8_MAX;
static int8_t x326 = -1;
volatile int32_t t67 = 21;
int8_t x329 = INT8_MIN;
int16_t x331 = INT16_MAX;
volatile uint32_t t69 = 780U;
int16_t x340 = INT16_MIN;
uint32_t t70 = 222U;
uint8_t x348 = UINT8_MAX;
volatile int32_t x353 = -8817;
int64_t t74 = -466120050283986793LL;
uint16_t x363 = 194U;
int32_t t76 = -45;
int32_t x373 = 2413761;
int64_t x374 = -27824118355LL;
int8_t x380 = INT8_MIN;
uint32_t t80 = 1950261U;
int16_t x388 = -1;
static uint8_t x390 = 14U;
int16_t x395 = -1;
volatile int8_t x398 = INT8_MIN;
uint32_t t84 = 2428909U;
uint64_t x401 = 861280612874865LLU;
static int32_t x408 = -1;
volatile int32_t t87 = 60173662;
int32_t x416 = -1;
int64_t x419 = INT64_MIN;
int32_t x420 = -784;
static int32_t x421 = INT32_MIN;
int8_t x422 = 2;
int32_t x424 = 7;
int8_t x433 = INT8_MIN;
volatile int16_t x435 = -1;
volatile uint16_t x441 = UINT16_MAX;
int32_t x442 = -1;
static int8_t x443 = 0;
int8_t x446 = 0;
int64_t x447 = INT64_MAX;
static int8_t x450 = 3;
int32_t t97 = -842743707;
int64_t x455 = INT64_MIN;


void f0(void) {
	volatile uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -13442;

	t0 = (x1%((x2<x3)-x4));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = -1;
	int32_t x7 = INT32_MIN;
	uint16_t x8 = 2488U;

	t1 = (x5%((x6<x7)-x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 1009488LLU;
	uint64_t x11 = UINT64_MAX;
	uint64_t x12 = 1809825LLU;

	t2 = (x9%((x10<x11)-x12));

	if (t2 != 1009488LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x17 = -1;
	uint16_t x18 = UINT16_MAX;
	uint8_t x19 = 18U;
	int16_t x20 = -37;

	t3 = (x17%((x18<x19)-x20));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = 2543735974461LL;
	static int64_t x27 = INT64_MAX;
	static uint32_t x28 = UINT32_MAX;
	static int64_t t4 = -81881555727331581LL;

	t4 = (x25%((x26<x27)-x28));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x30 = INT32_MIN;
	static uint64_t x31 = UINT64_MAX;
	static uint64_t x32 = UINT64_MAX;
	uint64_t t5 = 3152LLU;

	t5 = (x29%((x30<x31)-x32));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = INT64_MIN;
	int8_t x39 = 3;
	int16_t x40 = -1;
	int64_t t6 = -28507738639813819LL;

	t6 = (x37%((x38<x39)-x40));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = 557;
	int32_t x42 = 344;
	int64_t x43 = 37120208668LL;
	uint32_t x44 = UINT32_MAX;
	uint32_t t7 = 869716U;

	t7 = (x41%((x42<x43)-x44));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x45 = 8U;
	volatile uint16_t x46 = UINT16_MAX;
	int16_t x47 = 206;
	volatile int16_t x48 = -4;
	int32_t t8 = 8;

	t8 = (x45%((x46<x47)-x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x53 = 1;
	int8_t x56 = INT8_MAX;
	volatile int32_t t9 = -623695592;

	t9 = (x53%((x54<x55)-x56));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = -94219095;
	int32_t x59 = -5;
	int16_t x60 = INT16_MAX;
	volatile int32_t t10 = 6099;

	t10 = (x57%((x58<x59)-x60));

	if (t10 != -13970) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = 0;
	static uint64_t x62 = 16763441839184LLU;
	int32_t x63 = -120392122;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t11 = -640;

	t11 = (x61%((x62<x63)-x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x66 = INT16_MAX;
	int8_t x67 = 0;
	static volatile int16_t x68 = -1;

	t12 = (x65%((x66<x67)-x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x69 = -17153062;
	static int32_t x70 = -1;
	static int8_t x71 = -1;
	uint32_t x72 = 100438561U;
	volatile uint32_t t13 = 15342U;

	t13 = (x69%((x70<x71)-x72));

	if (t13 != 83285499U) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x75 = INT32_MAX;
	int16_t x76 = INT16_MIN;
	volatile int32_t t14 = -8367629;

	t14 = (x73%((x74<x75)-x76));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = -12;
	uint8_t x78 = 13U;
	static int8_t x79 = 45;
	int64_t x80 = -4214230562LL;
	volatile int64_t t15 = -12180897201572LL;

	t15 = (x77%((x78<x79)-x80));

	if (t15 != -12LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MAX;
	int8_t x83 = -1;
	int64_t x84 = -301552083LL;

	t16 = (x81%((x82<x83)-x84));

	if (t16 != 127LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x90 = 1U;
	int8_t x91 = INT8_MIN;
	int16_t x92 = -1;

	t17 = (x89%((x90<x91)-x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = -1;
	uint8_t x94 = 0U;
	uint32_t x95 = 25U;
	uint16_t x96 = 518U;

	t18 = (x93%((x94<x95)-x96));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = 2087864584LL;
	int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MIN;
	uint32_t x100 = UINT32_MAX;
	int64_t t19 = 11845986465LL;

	t19 = (x97%((x98<x99)-x100));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = INT64_MIN;
	int32_t x102 = INT32_MIN;
	static volatile int16_t x103 = 6086;
	static int16_t x104 = -6028;
	int64_t t20 = -1LL;

	t20 = (x101%((x102<x103)-x104));

	if (t20 != -1185LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = INT32_MIN;
	int16_t x107 = INT16_MIN;
	int16_t x108 = INT16_MAX;
	static int32_t t21 = -61656546;

	t21 = (x105%((x106<x107)-x108));

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x109 = -1;
	uint8_t x110 = UINT8_MAX;
	uint16_t x111 = 0U;
	uint32_t x112 = 68555643U;

	t22 = (x109%((x110<x111)-x112));

	if (t22 != 68555642U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = INT32_MIN;
	uint8_t x114 = 2U;
	int64_t x116 = INT64_MAX;
	static int64_t t23 = 31370193LL;

	t23 = (x113%((x114<x115)-x116));

	if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = -1;
	uint16_t x118 = 7U;
	int32_t x120 = 1976;
	volatile int32_t t24 = 2;

	t24 = (x117%((x118<x119)-x120));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x121 = UINT8_MAX;
	int32_t x122 = INT32_MAX;
	static int64_t x123 = 1LL;
	volatile int16_t x124 = INT16_MIN;
	int32_t t25 = -2371807;

	t25 = (x121%((x122<x123)-x124));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x133 = 21U;
	uint64_t x134 = UINT64_MAX;
	int64_t x135 = -109482660916LL;
	int8_t x136 = -10;
	volatile int32_t t26 = -2203;

	t26 = (x133%((x134<x135)-x136));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x138 = -1;
	int16_t x139 = 1868;
	static int32_t x140 = 129160021;

	t27 = (x137%((x138<x139)-x140));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x145 = UINT8_MAX;
	int8_t x146 = -1;
	volatile uint64_t x148 = UINT64_MAX;
	volatile uint64_t t28 = 238469LLU;

	t28 = (x145%((x146<x147)-x148));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = INT32_MIN;
	int32_t x150 = INT32_MIN;
	int8_t x152 = INT8_MIN;
	volatile int32_t t29 = 3719;

	t29 = (x149%((x150<x151)-x152));

	if (t29 != -8) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x153 = -2433488088294080584LL;
	int32_t x154 = 2322770;
	volatile int32_t x156 = INT32_MAX;

	t30 = (x153%((x154<x155)-x156));

	if (t30 != -796178772LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x157 = INT32_MIN;
	static uint64_t x159 = UINT64_MAX;
	uint16_t x160 = 15014U;
	int32_t t31 = -7312892;

	t31 = (x157%((x158<x159)-x160));

	if (t31 != -9115) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x162 = -24;
	uint32_t x164 = 22753336U;

	t32 = (x161%((x162<x163)-x164));

	if (t32 != 10075LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x165 = 142947784956LLU;
	static volatile int8_t x167 = INT8_MIN;
	int32_t x168 = -1;
	volatile uint64_t t33 = 240596LLU;

	t33 = (x165%((x166<x167)-x168));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x169 = INT8_MIN;
	uint16_t x171 = 281U;
	int8_t x172 = -1;
	volatile int32_t t34 = 0;

	t34 = (x169%((x170<x171)-x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x173 = -15894;
	int16_t x174 = INT16_MAX;
	static volatile int8_t x175 = INT8_MIN;
	int64_t x176 = -277LL;
	volatile int64_t t35 = -120599LL;

	t35 = (x173%((x174<x175)-x176));

	if (t35 != -105LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x177 = INT8_MIN;
	static int64_t x179 = INT64_MAX;
	uint16_t x180 = 4290U;
	int32_t t36 = 5;

	t36 = (x177%((x178<x179)-x180));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x185 = INT64_MIN;
	uint32_t x186 = 166U;
	int32_t x187 = INT32_MIN;
	uint32_t x188 = 24U;
	static int64_t t37 = 9761242841LL;

	t37 = (x185%((x186<x187)-x188));

	if (t37 != -2147483901LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x190 = 1U;
	static uint16_t x191 = 176U;
	volatile int8_t x192 = 0;
	volatile uint64_t t38 = 6034364660477LLU;

	t38 = (x189%((x190<x191)-x192));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x193 = INT8_MIN;
	static uint8_t x195 = 62U;
	static uint16_t x196 = 0U;

	t39 = (x193%((x194<x195)-x196));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x197 = INT8_MAX;
	static int64_t x199 = -10773LL;
	uint64_t x200 = 1949601009428576LLU;
	static volatile uint64_t t40 = 148832064082LLU;

	t40 = (x197%((x198<x199)-x200));

	if (t40 != 127LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x205 = 15U;
	int8_t x206 = INT8_MIN;
	int16_t x207 = -940;
	uint16_t x208 = 26551U;

	t41 = (x205%((x206<x207)-x208));

	if (t41 != 15U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = -1;
	int16_t x210 = -1;
	int16_t x212 = -7;
	int32_t t42 = -51;

	t42 = (x209%((x210<x211)-x212));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x213 = INT32_MAX;
	int64_t x214 = INT64_MAX;
	volatile uint64_t x215 = 1709LLU;
	uint64_t x216 = 1LLU;
	volatile uint64_t t43 = 13LLU;

	t43 = (x213%((x214<x215)-x216));

	if (t43 != 2147483647LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x217 = INT64_MIN;
	static uint64_t x218 = UINT64_MAX;
	int8_t x219 = -1;
	static int16_t x220 = -1;
	volatile int64_t t44 = -707049965591897026LL;

	t44 = (x217%((x218<x219)-x220));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x221 = -2221LL;
	uint16_t x223 = 3U;
	static uint32_t x224 = 714738719U;

	t45 = (x221%((x222<x223)-x224));

	if (t45 != -2221LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x225 = 197;
	static uint8_t x227 = 5U;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t46 = -9;

	t46 = (x225%((x226<x227)-x228));

	if (t46 != 197) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x229 = 84U;
	volatile uint32_t x232 = 34U;

	t47 = (x229%((x230<x231)-x232));

	if (t47 != 84U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = -43657;
	static volatile int16_t x234 = INT16_MIN;
	int16_t x235 = -1;
	int32_t x236 = 861576296;

	t48 = (x233%((x234<x235)-x236));

	if (t48 != -43657) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x237 = -1LL;
	uint16_t x239 = 353U;
	int64_t t49 = 246LL;

	t49 = (x237%((x238<x239)-x240));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x241 = INT16_MIN;
	uint64_t x242 = UINT64_MAX;
	static volatile int64_t x243 = -1LL;
	int32_t x244 = -1;
	static int32_t t50 = 20006;

	t50 = (x241%((x242<x243)-x244));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x245 = 0;
	static int8_t x246 = -1;
	int64_t x247 = INT64_MIN;
	static int16_t x248 = -26;
	static int32_t t51 = -6;

	t51 = (x245%((x246<x247)-x248));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x249 = 9266U;
	static uint16_t x250 = 1850U;
	static uint8_t x251 = UINT8_MAX;
	static volatile int8_t x252 = -1;

	t52 = (x249%((x250<x251)-x252));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x257 = -1;
	static int64_t x258 = INT64_MIN;
	int64_t x259 = INT64_MIN;
	uint8_t x260 = UINT8_MAX;

	t53 = (x257%((x258<x259)-x260));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x265 = 102U;
	uint16_t x266 = 11U;
	uint32_t x267 = UINT32_MAX;
	int64_t x268 = -109LL;
	static int64_t t54 = -9536350980598097LL;

	t54 = (x265%((x266<x267)-x268));

	if (t54 != 102LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x271 = 3650;

	t55 = (x269%((x270<x271)-x272));

	if (t55 != 8) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x281 = 24U;
	uint16_t x283 = UINT16_MAX;
	static volatile int64_t x284 = -1LL;
	int64_t t56 = -8022371023795LL;

	t56 = (x281%((x282<x283)-x284));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x285 = 1LLU;
	int16_t x286 = -114;
	int16_t x287 = -1;
	uint64_t x288 = 756781468116766LLU;
	volatile uint64_t t57 = 67154885473994944LLU;

	t57 = (x285%((x286<x287)-x288));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x289 = 1583;
	uint8_t x290 = 0U;
	uint32_t x291 = UINT32_MAX;

	t58 = (x289%((x290<x291)-x292));

	if (t58 != 1583LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x293 = 2U;
	static int16_t x294 = -1;
	int8_t x295 = -1;
	volatile uint32_t x296 = 512977601U;
	static volatile uint32_t t59 = 498U;

	t59 = (x293%((x294<x295)-x296));

	if (t59 != 2U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x297 = -2;
	int32_t x298 = 1;
	int16_t x300 = -1;

	t60 = (x297%((x298<x299)-x300));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x301 = 2;
	int32_t x302 = INT32_MIN;
	int16_t x303 = INT16_MIN;
	static int8_t x304 = -1;
	int32_t t61 = -6879;

	t61 = (x301%((x302<x303)-x304));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x305 = -4060LL;
	static uint32_t x308 = UINT32_MAX;

	t62 = (x305%((x306<x307)-x308));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x309 = 3763;
	uint32_t x310 = 12299096U;
	uint8_t x311 = 5U;
	volatile int8_t x312 = INT8_MIN;
	static volatile int32_t t63 = -96548;

	t63 = (x309%((x310<x311)-x312));

	if (t63 != 51) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x313 = INT64_MIN;
	int8_t x314 = INT8_MAX;
	static int16_t x316 = INT16_MIN;
	volatile int64_t t64 = 0LL;

	t64 = (x313%((x314<x315)-x316));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x317 = INT8_MIN;
	static uint32_t x318 = 7U;
	uint16_t x319 = 20U;
	int32_t x320 = 2;

	t65 = (x317%((x318<x319)-x320));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x321 = INT64_MIN;
	uint8_t x322 = 108U;
	int32_t x324 = -1;
	int64_t t66 = -163604829285LL;

	t66 = (x321%((x322<x323)-x324));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x325 = 4U;
	static volatile int8_t x327 = -6;
	int8_t x328 = 1;

	t67 = (x325%((x326<x327)-x328));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x330 = INT64_MAX;
	volatile int8_t x332 = -1;
	int32_t t68 = 1;

	t68 = (x329%((x330<x331)-x332));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x333 = UINT32_MAX;
	static int8_t x334 = INT8_MIN;
	uint32_t x335 = 3U;
	int16_t x336 = INT16_MAX;

	t69 = (x333%((x334<x335)-x336));

	if (t69 != 32766U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x337 = 73855U;
	volatile uint64_t x338 = 3102991084743547828LLU;
	static uint8_t x339 = 4U;

	t70 = (x337%((x338<x339)-x340));

	if (t70 != 8319U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x341 = -1;
	static int32_t x342 = INT32_MIN;
	int8_t x343 = -1;
	int64_t x344 = -6444023287857909LL;
	volatile int64_t t71 = 15197282LL;

	t71 = (x341%((x342<x343)-x344));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = 2703255;
	int16_t x346 = 5759;
	int32_t x347 = -199933;
	volatile int32_t t72 = -39541;

	t72 = (x345%((x346<x347)-x348));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x349 = -1;
	int16_t x350 = 1;
	int64_t x351 = -1LL;
	volatile int16_t x352 = 1;
	volatile int32_t t73 = -3066836;

	t73 = (x349%((x350<x351)-x352));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x354 = INT8_MIN;
	volatile int8_t x355 = -1;
	int64_t x356 = -23546LL;

	t74 = (x353%((x354<x355)-x356));

	if (t74 != -8817LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x357 = 127039473U;
	static uint16_t x358 = 1323U;
	static int64_t x359 = 1643889LL;
	volatile int64_t x360 = -1LL;
	static int64_t t75 = 23971937997088054LL;

	t75 = (x357%((x358<x359)-x360));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x361 = INT16_MIN;
	uint8_t x362 = 2U;
	volatile int16_t x364 = -1;

	t76 = (x361%((x362<x363)-x364));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x365 = 2U;
	uint64_t x366 = UINT64_MAX;
	uint8_t x367 = UINT8_MAX;
	volatile int8_t x368 = -1;
	volatile int32_t t77 = 1075;

	t77 = (x365%((x366<x367)-x368));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = INT16_MIN;
	volatile int64_t x370 = -4LL;
	int32_t x371 = INT32_MIN;
	volatile uint32_t x372 = 44U;
	volatile uint32_t t78 = 250U;

	t78 = (x369%((x370<x371)-x372));

	if (t78 != 4294934528U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x375 = 806U;
	static uint8_t x376 = UINT8_MAX;
	int32_t t79 = 193;

	t79 = (x373%((x374<x375)-x376));

	if (t79 != 253) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x377 = UINT32_MAX;
	int8_t x378 = INT8_MIN;
	volatile int64_t x379 = 199029707418LL;

	t80 = (x377%((x378<x379)-x380));

	if (t80 != 15U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x385 = INT32_MIN;
	int64_t x386 = INT64_MIN;
	int64_t x387 = -1LL;
	static int32_t t81 = -13045;

	t81 = (x385%((x386<x387)-x388));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x389 = INT32_MIN;
	volatile int32_t x391 = INT32_MAX;
	volatile uint16_t x392 = UINT16_MAX;
	static volatile int32_t t82 = -462454;

	t82 = (x389%((x390<x391)-x392));

	if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x393 = 3U;
	volatile int16_t x394 = 5;
	uint64_t x396 = 6508LLU;
	uint64_t t83 = 0LLU;

	t83 = (x393%((x394<x395)-x396));

	if (t83 != 3LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x397 = -1;
	uint8_t x399 = UINT8_MAX;
	static uint32_t x400 = 800070U;

	t84 = (x397%((x398<x399)-x400));

	if (t84 != 800068U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x402 = 0;
	int32_t x403 = -25;
	uint32_t x404 = 77U;
	volatile uint64_t t85 = 1LLU;

	t85 = (x401%((x402<x403)-x404));

	if (t85 != 2246514357LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x405 = INT32_MIN;
	int64_t x406 = INT64_MIN;
	int16_t x407 = 2030;
	volatile int32_t t86 = 2873;

	t86 = (x405%((x406<x407)-x408));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x409 = INT8_MIN;
	volatile int16_t x410 = -1;
	int32_t x411 = -1;
	uint16_t x412 = UINT16_MAX;

	t87 = (x409%((x410<x411)-x412));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = INT16_MAX;
	int32_t x414 = INT32_MIN;
	int32_t x415 = -3;
	volatile int32_t t88 = 61867674;

	t88 = (x413%((x414<x415)-x416));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x417 = INT64_MIN;
	static int64_t x418 = -7540573945130LL;
	int64_t t89 = 129805664896645LL;

	t89 = (x417%((x418<x419)-x420));

	if (t89 != -736LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x423 = -1LL;
	volatile int32_t t90 = -303;

	t90 = (x421%((x422<x423)-x424));

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x425 = INT16_MIN;
	volatile uint32_t x426 = UINT32_MAX;
	uint64_t x427 = UINT64_MAX;
	int64_t x428 = -55896042683237LL;
	volatile int64_t t91 = -1368LL;

	t91 = (x425%((x426<x427)-x428));

	if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x429 = INT16_MAX;
	volatile uint8_t x430 = 14U;
	static uint8_t x431 = UINT8_MAX;
	volatile int32_t x432 = 275120;
	int32_t t92 = 7;

	t92 = (x429%((x430<x431)-x432));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x434 = -1;
	int16_t x436 = INT16_MAX;
	static int32_t t93 = 74387301;

	t93 = (x433%((x434<x435)-x436));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x437 = -68589284867955776LL;
	int64_t x438 = INT64_MIN;
	int16_t x439 = 3679;
	volatile int16_t x440 = 10;
	volatile int64_t t94 = -175LL;

	t94 = (x437%((x438<x439)-x440));

	if (t94 != -2LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x444 = 424492400110817593LLU;
	volatile uint64_t t95 = 43611648LLU;

	t95 = (x441%((x442<x443)-x444));

	if (t95 != 65535LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x445 = INT8_MIN;
	uint16_t x448 = UINT16_MAX;
	volatile int32_t t96 = 997944;

	t96 = (x445%((x446<x447)-x448));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x449 = UINT16_MAX;
	int32_t x451 = INT32_MIN;
	int8_t x452 = -1;

	t97 = (x449%((x450<x451)-x452));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x453 = 817;
	int32_t x454 = -1;
	int32_t x456 = 90;
	static volatile int32_t t98 = -294094;

	t98 = (x453%((x454<x455)-x456));

	if (t98 != 7) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x457 = INT64_MIN;
	volatile int64_t x458 = INT64_MIN;
	volatile uint16_t x459 = 386U;
	int32_t x460 = -1;
	static volatile int64_t t99 = -89LL;

	t99 = (x457%((x458<x459)-x460));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

