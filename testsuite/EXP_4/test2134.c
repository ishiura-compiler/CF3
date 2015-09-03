#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 1;
int16_t x7 = 3;
static int64_t t1 = 2LL;
uint8_t x10 = 25U;
int16_t x11 = INT16_MAX;
volatile int32_t x12 = INT32_MIN;
static uint64_t x18 = 23245763624LLU;
static uint16_t x28 = UINT16_MAX;
static uint64_t t6 = 530801860LLU;
volatile int16_t x32 = 1;
volatile int32_t t8 = 3127778;
int8_t x44 = -1;
int32_t x47 = INT32_MAX;
static int8_t x48 = INT8_MIN;
static int32_t x53 = INT32_MAX;
uint32_t x56 = 62233U;
volatile uint64_t x66 = UINT64_MAX;
int32_t x67 = -36;
uint16_t x75 = 13576U;
static int16_t x80 = INT16_MAX;
static volatile int32_t t18 = -537351;
static int8_t x84 = -1;
static volatile int8_t x85 = INT8_MIN;
int32_t t21 = -44;
int64_t x95 = INT64_MIN;
uint8_t x96 = 22U;
uint16_t x97 = 1690U;
uint8_t x103 = 116U;
volatile int32_t t24 = -155554920;
uint32_t t26 = UINT32_MAX;
static int64_t x114 = -1LL;
int16_t x123 = INT16_MIN;
static int8_t x144 = -1;
int8_t x146 = INT8_MAX;
volatile int32_t t36 = -7;
volatile int32_t x159 = INT32_MIN;
static uint8_t x168 = UINT8_MAX;
int8_t x173 = INT8_MAX;
volatile int64_t x177 = INT64_MIN;
int32_t x181 = 34;
int32_t x182 = 17756334;
int64_t x186 = INT64_MAX;
int8_t x187 = -14;
int32_t t44 = INT32_MAX;
int16_t x191 = -10;
int32_t t45 = INT32_MIN;
volatile int64_t t46 = 97698912578967604LL;
static int32_t x230 = 0;
volatile int8_t x232 = -1;
static int64_t x235 = 844984527655LL;
static int32_t x237 = 218;
volatile int32_t t58 = 114947830;
volatile uint32_t t60 = 780847939U;
static int32_t x269 = -1;
static uint16_t x277 = UINT16_MAX;
volatile uint64_t x279 = 645LLU;
int16_t x280 = -15906;
int32_t x284 = INT32_MAX;
int32_t x285 = -1;
int32_t x293 = 91555;
uint32_t x297 = UINT32_MAX;
uint64_t x299 = 41774491LLU;
volatile int32_t x303 = -257455508;
volatile int32_t t72 = INT32_MIN;
static int16_t x310 = INT16_MIN;
int64_t t77 = -273715192653636LL;
int64_t x330 = INT64_MAX;
static int32_t t78 = 16784;
static uint16_t x337 = 2U;
uint16_t x338 = 15U;
int32_t x340 = -14166988;
volatile int32_t t82 = INT32_MAX;
static int64_t x351 = 1LL;
volatile int32_t t84 = 1321;
uint16_t x361 = 170U;
static int64_t x364 = INT64_MAX;
volatile int16_t x365 = INT16_MIN;
static uint64_t x379 = 1100688008228265494LLU;
int64_t t89 = -2237432499LL;
uint64_t x384 = UINT64_MAX;
int32_t t90 = 549;
int64_t x388 = -3372859672953852830LL;
int32_t t94 = -5171;
static int16_t x403 = 1996;
static volatile int64_t x404 = 128880755088LL;
int8_t x405 = -1;
int32_t x406 = -1;
int8_t x407 = INT8_MAX;
volatile int64_t t97 = 862LL;
int8_t x419 = -1;


void f0(void) {
	int64_t x2 = INT64_MIN;
	static uint8_t x3 = 1U;
	uint16_t x4 = 184U;
	int32_t t0 = -78765600;

	t0 = (x1-(x2<(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 1615LL;
	static int16_t x6 = -1;
	volatile int32_t x8 = INT32_MIN;

	t1 = (x5-(x6<(x7^x8)));

	if (t1 != 1615LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x9 = 2U;
	volatile int32_t t2 = 0;

	t2 = (x9-(x10<(x11^x12)));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 7;
	static int16_t x14 = INT16_MIN;
	static uint16_t x15 = 6143U;
	volatile int8_t x16 = INT8_MAX;
	int32_t t3 = 259516;

	t3 = (x13-(x14<(x15^x16)));

	if (t3 != 6) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MAX;
	uint8_t x19 = UINT8_MAX;
	int32_t x20 = 3268;
	static int64_t t4 = INT64_MAX;

	t4 = (x17-(x18<(x19^x20)));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	uint32_t x22 = 4291990U;
	int64_t x23 = INT64_MIN;
	uint16_t x24 = 11U;
	int32_t t5 = 29931270;

	t5 = (x21-(x22<(x23^x24)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = 2107808722LLU;
	int32_t x26 = -122536;
	int64_t x27 = INT64_MIN;

	t6 = (x25-(x26<(x27^x28)));

	if (t6 != 2107808722LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 0LLU;
	int32_t x30 = INT32_MIN;
	uint64_t x31 = 9587320623671601LLU;
	uint64_t t7 = 7632332339488028291LLU;

	t7 = (x29-(x30<(x31^x32)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = INT8_MIN;
	static int16_t x34 = INT16_MAX;
	int32_t x35 = INT32_MIN;
	int32_t x36 = INT32_MIN;

	t8 = (x33-(x34<(x35^x36)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 51U;
	int16_t x38 = 11544;
	static int32_t x39 = INT32_MIN;
	uint32_t x40 = UINT32_MAX;
	int32_t t9 = 5;

	t9 = (x37-(x38<(x39^x40)));

	if (t9 != 50) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MIN;
	volatile int64_t x42 = 63LL;
	volatile uint8_t x43 = UINT8_MAX;
	int32_t t10 = INT32_MIN;

	t10 = (x41-(x42<(x43^x44)));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int32_t x46 = 129;
	int32_t t11 = -156109841;

	t11 = (x45-(x46<(x47^x48)));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x54 = UINT32_MAX;
	static int8_t x55 = INT8_MIN;
	volatile int32_t t12 = INT32_MAX;

	t12 = (x53-(x54<(x55^x56)));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x57 = 1113412U;
	static volatile int8_t x58 = INT8_MAX;
	int16_t x59 = INT16_MIN;
	int64_t x60 = INT64_MIN;
	static uint32_t t13 = 31279U;

	t13 = (x57-(x58<(x59^x60)));

	if (t13 != 1113411U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -9;
	static int16_t x62 = -1;
	static int16_t x63 = -1;
	int64_t x64 = 1387LL;
	volatile int32_t t14 = 16790;

	t14 = (x61-(x62<(x63^x64)));

	if (t14 != -9) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 4U;
	static int8_t x68 = INT8_MIN;
	static volatile int32_t t15 = -70;

	t15 = (x65-(x66<(x67^x68)));

	if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -113;
	volatile int8_t x70 = -1;
	uint32_t x71 = 450210696U;
	int16_t x72 = INT16_MIN;
	int32_t t16 = 0;

	t16 = (x69-(x70<(x71^x72)));

	if (t16 != -113) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = INT16_MIN;
	static int64_t x74 = 43848240400LL;
	volatile int64_t x76 = -1LL;
	volatile int32_t t17 = -4328;

	t17 = (x73-(x74<(x75^x76)));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -35;
	static uint8_t x78 = 121U;
	volatile int8_t x79 = -17;

	t18 = (x77-(x78<(x79^x80)));

	if (t18 != -35) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x81 = 0U;
	volatile int32_t x82 = INT32_MIN;
	static volatile int8_t x83 = INT8_MAX;
	static int32_t t19 = 9311628;

	t19 = (x81-(x82<(x83^x84)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x86 = 506511;
	static uint8_t x87 = UINT8_MAX;
	int16_t x88 = -73;
	static volatile int32_t t20 = 3;

	t20 = (x85-(x86<(x87^x88)));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x89 = 396;
	static int32_t x90 = INT32_MIN;
	int64_t x91 = -20560740348LL;
	volatile uint8_t x92 = 7U;

	t21 = (x89-(x90<(x91^x92)));

	if (t21 != 396) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 1;
	static uint8_t x94 = 7U;
	static int32_t t22 = -3;

	t22 = (x93-(x94<(x95^x96)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x98 = INT8_MAX;
	static uint64_t x99 = 8982433693605504354LLU;
	static uint16_t x100 = 7612U;
	static int32_t t23 = -211035;

	t23 = (x97-(x98<(x99^x100)));

	if (t23 != 1689) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	volatile int64_t x102 = -1LL;
	uint16_t x104 = 1U;

	t24 = (x101-(x102<(x103^x104)));

	if (t24 != 126) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	static int64_t x106 = INT64_MAX;
	int64_t x107 = 35607334378549230LL;
	int16_t x108 = 96;
	volatile int32_t t25 = INT32_MIN;

	t25 = (x105-(x106<(x107^x108)));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x109 = UINT32_MAX;
	int64_t x110 = INT64_MAX;
	int16_t x111 = INT16_MIN;
	int64_t x112 = -2LL;

	t26 = (x109-(x110<(x111^x112)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MAX;
	int16_t x115 = -21;
	int64_t x116 = INT64_MIN;
	volatile int32_t t27 = -292;

	t27 = (x113-(x114<(x115^x116)));

	if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	int16_t x118 = INT16_MAX;
	volatile int64_t x119 = INT64_MIN;
	int16_t x120 = INT16_MAX;
	volatile int64_t t28 = INT64_MIN;

	t28 = (x117-(x118<(x119^x120)));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = INT32_MIN;
	volatile int64_t x122 = INT64_MAX;
	static volatile int64_t x124 = INT64_MIN;
	volatile int32_t t29 = INT32_MIN;

	t29 = (x121-(x122<(x123^x124)));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = INT16_MAX;
	int8_t x127 = -1;
	static volatile uint64_t x128 = UINT64_MAX;
	int32_t t30 = -229446;

	t30 = (x125-(x126<(x127^x128)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = 52U;
	static int64_t x130 = INT64_MIN;
	volatile int8_t x131 = -3;
	int16_t x132 = 103;
	int32_t t31 = 1752;

	t31 = (x129-(x130<(x131^x132)));

	if (t31 != 51) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x133 = INT8_MIN;
	int32_t x134 = INT32_MIN;
	int8_t x135 = -4;
	static int32_t x136 = INT32_MAX;
	int32_t t32 = 4050735;

	t32 = (x133-(x134<(x135^x136)));

	if (t32 != -129) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x137 = 2026U;
	int64_t x138 = INT64_MIN;
	uint32_t x139 = 12632U;
	int64_t x140 = INT64_MIN;
	static volatile int32_t t33 = -636708;

	t33 = (x137-(x138<(x139^x140)));

	if (t33 != 2025) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = 197919858287049355LL;
	volatile int16_t x142 = -1;
	int32_t x143 = 219165;
	int64_t t34 = 16488687011098206LL;

	t34 = (x141-(x142<(x143^x144)));

	if (t34 != 197919858287049355LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 182884245U;
	volatile int16_t x147 = -1;
	int16_t x148 = -1;
	uint32_t t35 = 769U;

	t35 = (x145-(x146<(x147^x148)));

	if (t35 != 182884245U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = 158879;
	volatile int8_t x154 = INT8_MIN;
	int64_t x155 = -28990028972848LL;
	uint16_t x156 = 11U;

	t36 = (x153-(x154<(x155^x156)));

	if (t36 != 158879) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MIN;
	int64_t x158 = -1LL;
	static uint16_t x160 = UINT16_MAX;
	int32_t t37 = INT32_MIN;

	t37 = (x157-(x158<(x159^x160)));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 1782098028908LLU;
	static uint16_t x162 = 225U;
	uint16_t x163 = 164U;
	int8_t x164 = INT8_MAX;
	uint64_t t38 = 5491207747LLU;

	t38 = (x161-(x162<(x163^x164)));

	if (t38 != 1782098028908LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = -1;
	int16_t x166 = INT16_MAX;
	static int16_t x167 = -24;
	volatile int32_t t39 = -425004263;

	t39 = (x165-(x166<(x167^x168)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x169 = INT16_MIN;
	volatile int16_t x170 = INT16_MIN;
	uint32_t x171 = 15623560U;
	int64_t x172 = INT64_MIN;
	volatile int32_t t40 = 5676;

	t40 = (x169-(x170<(x171^x172)));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x174 = -252LL;
	int32_t x175 = INT32_MIN;
	int64_t x176 = INT64_MAX;
	static volatile int32_t t41 = -92;

	t41 = (x173-(x174<(x175^x176)));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x178 = 313;
	int8_t x179 = INT8_MIN;
	int32_t x180 = INT32_MAX;
	static volatile int64_t t42 = INT64_MIN;

	t42 = (x177-(x178<(x179^x180)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x183 = 26U;
	static int16_t x184 = 0;
	int32_t t43 = -1111;

	t43 = (x181-(x182<(x183^x184)));

	if (t43 != 34) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MAX;
	int32_t x188 = INT32_MIN;

	t44 = (x185-(x186<(x187^x188)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x189 = INT32_MIN;
	volatile uint8_t x190 = 14U;
	volatile int8_t x192 = 17;

	t45 = (x189-(x190<(x191^x192)));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -1LL;
	volatile uint64_t x194 = UINT64_MAX;
	uint64_t x195 = 1LLU;
	int64_t x196 = INT64_MAX;

	t46 = (x193-(x194<(x195^x196)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x197 = 8491;
	volatile int8_t x198 = -2;
	static int16_t x199 = INT16_MIN;
	int64_t x200 = INT64_MIN;
	int32_t t47 = -10058993;

	t47 = (x197-(x198<(x199^x200)));

	if (t47 != 8490) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x201 = 19611174150LLU;
	int64_t x202 = -1LL;
	volatile int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MAX;
	static volatile uint64_t t48 = 3490LLU;

	t48 = (x201-(x202<(x203^x204)));

	if (t48 != 19611174149LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x209 = UINT16_MAX;
	int64_t x210 = INT64_MIN;
	volatile int16_t x211 = 50;
	volatile uint8_t x212 = UINT8_MAX;
	int32_t t49 = 56;

	t49 = (x209-(x210<(x211^x212)));

	if (t49 != 65534) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = -1;
	uint16_t x218 = 186U;
	static int64_t x219 = INT64_MAX;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t50 = 126753;

	t50 = (x217-(x218<(x219^x220)));

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = INT32_MIN;
	int16_t x222 = 733;
	int16_t x223 = 0;
	int64_t x224 = -166437934211539609LL;
	int32_t t51 = INT32_MIN;

	t51 = (x221-(x222<(x223^x224)));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x225 = INT8_MIN;
	uint8_t x226 = 2U;
	int32_t x227 = INT32_MIN;
	int16_t x228 = 2183;
	volatile int32_t t52 = -13;

	t52 = (x225-(x226<(x227^x228)));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = 330;
	int8_t x231 = -11;
	volatile int32_t t53 = -749083144;

	t53 = (x229-(x230<(x231^x232)));

	if (t53 != 329) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x233 = INT8_MAX;
	int32_t x234 = INT32_MIN;
	int8_t x236 = INT8_MIN;
	static int32_t t54 = -72952771;

	t54 = (x233-(x234<(x235^x236)));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x238 = 9U;
	int8_t x239 = 4;
	volatile uint32_t x240 = UINT32_MAX;
	volatile int32_t t55 = 627405;

	t55 = (x237-(x238<(x239^x240)));

	if (t55 != 217) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x241 = 5;
	uint16_t x242 = UINT16_MAX;
	int32_t x243 = -15483416;
	int8_t x244 = -9;
	int32_t t56 = -56;

	t56 = (x241-(x242<(x243^x244)));

	if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x245 = UINT32_MAX;
	int64_t x246 = INT64_MAX;
	int8_t x247 = 9;
	int64_t x248 = -5762382518434LL;
	static volatile uint32_t t57 = UINT32_MAX;

	t57 = (x245-(x246<(x247^x248)));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x249 = UINT8_MAX;
	int64_t x250 = -16164433234336067LL;
	volatile uint16_t x251 = 12U;
	uint8_t x252 = 2U;

	t58 = (x249-(x250<(x251^x252)));

	if (t58 != 254) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x253 = INT8_MIN;
	int16_t x254 = INT16_MAX;
	int32_t x255 = -1;
	int8_t x256 = 1;
	volatile int32_t t59 = 1;

	t59 = (x253-(x254<(x255^x256)));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x257 = 6414556U;
	volatile int32_t x258 = INT32_MAX;
	int16_t x259 = 35;
	int32_t x260 = INT32_MIN;

	t60 = (x257-(x258<(x259^x260)));

	if (t60 != 6414556U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x261 = 493325U;
	int64_t x262 = INT64_MIN;
	int16_t x263 = -1;
	uint32_t x264 = UINT32_MAX;
	volatile uint32_t t61 = 3259576U;

	t61 = (x261-(x262<(x263^x264)));

	if (t61 != 493324U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x265 = 12U;
	uint8_t x266 = UINT8_MAX;
	uint32_t x267 = UINT32_MAX;
	static int32_t x268 = -1;
	int32_t t62 = -460655580;

	t62 = (x265-(x266<(x267^x268)));

	if (t62 != 12) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x270 = 1794389204025206LLU;
	static int64_t x271 = INT64_MIN;
	uint8_t x272 = UINT8_MAX;
	static volatile int32_t t63 = 3040;

	t63 = (x269-(x270<(x271^x272)));

	if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x273 = INT8_MAX;
	int64_t x274 = INT64_MIN;
	int64_t x275 = INT64_MIN;
	static uint64_t x276 = 103539LLU;
	int32_t t64 = -40754269;

	t64 = (x273-(x274<(x275^x276)));

	if (t64 != 126) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x278 = -10682LL;
	int32_t t65 = -113632384;

	t65 = (x277-(x278<(x279^x280)));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x281 = 886013962LLU;
	int8_t x282 = -1;
	static uint8_t x283 = UINT8_MAX;
	uint64_t t66 = 93171LLU;

	t66 = (x281-(x282<(x283^x284)));

	if (t66 != 886013961LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x286 = INT16_MIN;
	int8_t x287 = INT8_MIN;
	int16_t x288 = 7363;
	volatile int32_t t67 = 10;

	t67 = (x285-(x286<(x287^x288)));

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = -2533;
	volatile int64_t x290 = 8445066LL;
	int16_t x291 = INT16_MIN;
	uint8_t x292 = UINT8_MAX;
	int32_t t68 = 370;

	t68 = (x289-(x290<(x291^x292)));

	if (t68 != -2533) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x294 = UINT32_MAX;
	static uint8_t x295 = UINT8_MAX;
	int32_t x296 = INT32_MAX;
	int32_t t69 = 151;

	t69 = (x293-(x294<(x295^x296)));

	if (t69 != 91555) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x298 = INT64_MIN;
	static int16_t x300 = INT16_MIN;
	uint32_t t70 = 41149U;

	t70 = (x297-(x298<(x299^x300)));

	if (t70 != 4294967294U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = -4;
	uint16_t x302 = 1900U;
	int16_t x304 = INT16_MAX;
	volatile int32_t t71 = -174;

	t71 = (x301-(x302<(x303^x304)));

	if (t71 != -4) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x305 = INT32_MIN;
	int64_t x306 = -1LL;
	volatile int8_t x307 = INT8_MAX;
	int16_t x308 = INT16_MIN;

	t72 = (x305-(x306<(x307^x308)));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = 14;
	int8_t x311 = -2;
	int8_t x312 = INT8_MIN;
	static int32_t t73 = -1455;

	t73 = (x309-(x310<(x311^x312)));

	if (t73 != 13) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = INT64_MIN;
	uint32_t x314 = UINT32_MAX;
	uint16_t x315 = 0U;
	static int32_t x316 = -1;
	int64_t t74 = INT64_MIN;

	t74 = (x313-(x314<(x315^x316)));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x317 = 3337U;
	int16_t x318 = -488;
	volatile int8_t x319 = INT8_MAX;
	volatile int8_t x320 = 4;
	volatile uint32_t t75 = 25101U;

	t75 = (x317-(x318<(x319^x320)));

	if (t75 != 3336U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x321 = 25944U;
	volatile int32_t x322 = 6680;
	volatile uint8_t x323 = UINT8_MAX;
	int32_t x324 = -1;
	uint32_t t76 = 102721U;

	t76 = (x321-(x322<(x323^x324)));

	if (t76 != 25944U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = -14624LL;
	int8_t x326 = 4;
	int16_t x327 = INT16_MAX;
	int16_t x328 = INT16_MAX;

	t77 = (x325-(x326<(x327^x328)));

	if (t77 != -14624LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MAX;
	int16_t x331 = INT16_MIN;
	uint8_t x332 = 1U;

	t78 = (x329-(x330<(x331^x332)));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = 36;
	volatile int32_t x334 = INT32_MAX;
	static int16_t x335 = INT16_MIN;
	volatile int64_t x336 = 7424LL;
	int32_t t79 = 13741714;

	t79 = (x333-(x334<(x335^x336)));

	if (t79 != 36) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x339 = UINT8_MAX;
	volatile int32_t t80 = 97243;

	t80 = (x337-(x338<(x339^x340)));

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = 24;
	uint64_t x342 = 134193020957LLU;
	volatile uint64_t x343 = 3722083329782657LLU;
	int16_t x344 = INT16_MIN;
	int32_t t81 = 55439;

	t81 = (x341-(x342<(x343^x344)));

	if (t81 != 23) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x345 = INT32_MAX;
	int8_t x346 = -1;
	uint64_t x347 = 3046461929170LLU;
	static int8_t x348 = INT8_MAX;

	t82 = (x345-(x346<(x347^x348)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = INT16_MIN;
	volatile uint64_t x350 = UINT64_MAX;
	volatile uint32_t x352 = UINT32_MAX;
	volatile int32_t t83 = 310184316;

	t83 = (x349-(x350<(x351^x352)));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x353 = INT16_MIN;
	uint64_t x354 = UINT64_MAX;
	int64_t x355 = -1968041915462216LL;
	int16_t x356 = INT16_MIN;

	t84 = (x353-(x354<(x355^x356)));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x357 = 12U;
	uint64_t x358 = 113199623LLU;
	volatile uint64_t x359 = 175LLU;
	static int64_t x360 = INT64_MIN;
	static volatile int32_t t85 = 649723;

	t85 = (x357-(x358<(x359^x360)));

	if (t85 != 11) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x362 = UINT16_MAX;
	uint8_t x363 = 2U;
	volatile int32_t t86 = 134597;

	t86 = (x361-(x362<(x363^x364)));

	if (t86 != 169) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x366 = 62609665184172LL;
	int8_t x367 = 18;
	volatile int32_t x368 = -7213;
	int32_t t87 = -6208;

	t87 = (x365-(x366<(x367^x368)));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x369 = UINT64_MAX;
	volatile uint8_t x370 = 1U;
	static int16_t x371 = 1;
	int64_t x372 = INT64_MIN;
	volatile uint64_t t88 = UINT64_MAX;

	t88 = (x369-(x370<(x371^x372)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = 120614776186LL;
	int8_t x378 = -8;
	static uint8_t x380 = 17U;

	t89 = (x377-(x378<(x379^x380)));

	if (t89 != 120614776186LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = -1;
	uint64_t x382 = UINT64_MAX;
	int32_t x383 = -4277;

	t90 = (x381-(x382<(x383^x384)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x385 = UINT8_MAX;
	uint32_t x386 = UINT32_MAX;
	int16_t x387 = -157;
	volatile int32_t t91 = -1940590;

	t91 = (x385-(x386<(x387^x388)));

	if (t91 != 254) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = INT8_MIN;
	volatile uint32_t x390 = 10231U;
	volatile uint64_t x391 = UINT64_MAX;
	volatile uint8_t x392 = 0U;
	int32_t t92 = -61;

	t92 = (x389-(x390<(x391^x392)));

	if (t92 != -129) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = INT64_MAX;
	int8_t x394 = 58;
	uint64_t x395 = UINT64_MAX;
	volatile int16_t x396 = 5;
	int64_t t93 = 78536119462908LL;

	t93 = (x393-(x394<(x395^x396)));

	if (t93 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x397 = INT16_MIN;
	int64_t x398 = -1LL;
	int64_t x399 = -1LL;
	static int8_t x400 = INT8_MIN;

	t94 = (x397-(x398<(x399^x400)));

	if (t94 != -32769) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = 501897;
	int64_t x402 = -1LL;
	static int32_t t95 = -202;

	t95 = (x401-(x402<(x403^x404)));

	if (t95 != 501896) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x408 = 56746439U;
	volatile int32_t t96 = -867;

	t96 = (x405-(x406<(x407^x408)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x409 = 7856092909982LL;
	int64_t x410 = INT64_MIN;
	uint32_t x411 = 5U;
	int32_t x412 = INT32_MIN;

	t97 = (x409-(x410<(x411^x412)));

	if (t97 != 7856092909981LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x413 = 2702U;
	static uint32_t x414 = 799744426U;
	int8_t x415 = INT8_MIN;
	int64_t x416 = INT64_MIN;
	volatile int32_t t98 = 764045;

	t98 = (x413-(x414<(x415^x416)));

	if (t98 != 2701) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = -1;
	int8_t x418 = INT8_MIN;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t99 = -21204837;

	t99 = (x417-(x418<(x419^x420)));

	if (t99 != -1) { NG(); } else { ; }
	
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

