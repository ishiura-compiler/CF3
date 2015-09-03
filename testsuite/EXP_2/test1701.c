#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 4U;
int64_t x7 = -1LL;
static uint64_t t2 = 12LLU;
int8_t x16 = -1;
int64_t t3 = -137947308921274LL;
static int32_t x21 = INT32_MAX;
int64_t x22 = -1LL;
volatile uint16_t x25 = 2442U;
volatile int64_t t5 = -2LL;
int64_t x29 = -1LL;
int64_t t6 = 357LL;
int16_t x35 = -66;
static int16_t x41 = 15236;
int8_t x50 = INT8_MIN;
uint32_t x55 = UINT32_MAX;
uint16_t x56 = 276U;
uint32_t x57 = 7U;
int64_t t13 = 89991116264898LL;
int32_t t14 = 8;
static uint32_t x77 = 0U;
static uint64_t x88 = UINT64_MAX;
volatile uint64_t t19 = 175088004435219076LLU;
int64_t x94 = INT64_MIN;
static int64_t t21 = INT64_MIN;
int16_t x97 = INT16_MIN;
static uint64_t x98 = 3LLU;
volatile uint8_t x101 = UINT8_MAX;
int64_t x102 = INT64_MAX;
volatile int32_t x106 = -1;
static volatile int16_t x109 = INT16_MIN;
static int32_t x113 = -1;
int8_t x116 = -1;
uint32_t t26 = 51780U;
int32_t x122 = INT32_MIN;
uint8_t x124 = UINT8_MAX;
int8_t x129 = -2;
volatile uint16_t x131 = 518U;
uint64_t x138 = 3LLU;
static int64_t x139 = INT64_MAX;
int64_t t34 = -741022917LL;
static int8_t x157 = 0;
volatile uint32_t x158 = UINT32_MAX;
int64_t x160 = INT64_MAX;
int16_t x169 = 109;
static int16_t x179 = INT16_MAX;
int32_t x185 = INT32_MAX;
static int16_t x191 = INT16_MIN;
volatile int64_t x192 = -23172486812816LL;
int64_t t44 = 126LL;
int8_t x195 = INT8_MIN;
int16_t x199 = INT16_MIN;
int32_t t46 = -250;
int8_t x206 = INT8_MAX;
int64_t x210 = INT64_MIN;
volatile int8_t x212 = -12;
int8_t x216 = INT8_MIN;
int32_t x217 = 29210;
static int32_t x218 = INT32_MAX;
uint8_t x219 = UINT8_MAX;
uint64_t x222 = 554772313679745264LLU;
int64_t x225 = -61LL;
uint32_t x240 = UINT32_MAX;
uint16_t x241 = 4421U;
static uint32_t x242 = 5555U;
int32_t x244 = -50329;
static int32_t x254 = INT32_MAX;
int64_t t60 = -2LL;
int16_t x260 = -1;
static volatile uint64_t x271 = 2941112841176LLU;
int64_t x280 = 339LL;
static volatile int64_t t66 = 1061741320796744LL;
int32_t x285 = INT32_MAX;
uint16_t x287 = UINT16_MAX;
uint64_t x289 = UINT64_MAX;
uint16_t x290 = UINT16_MAX;
static volatile int32_t x298 = -1;
static volatile int64_t x300 = -1LL;
int32_t x302 = -3187170;
int8_t x304 = -4;
int64_t x310 = INT64_MAX;
volatile uint32_t x316 = 1301U;
int32_t x318 = 32924444;
volatile uint64_t t76 = 496427LLU;
static uint64_t t77 = 28720534857732795LLU;
uint16_t x330 = 83U;
int64_t x335 = 90588246LL;
int64_t t79 = 3410531487LL;
int16_t x338 = -1;
volatile uint64_t t80 = 11033600092455LLU;
uint32_t x345 = 8531243U;
uint64_t x347 = 370026463958LLU;
uint8_t x350 = UINT8_MAX;
volatile int64_t t85 = -46894523291LL;
static uint64_t t86 = 473830653052LLU;
volatile uint64_t x376 = 58124LLU;
volatile int64_t t91 = 85931LL;
static volatile uint64_t x389 = 2236891372518846LLU;
uint32_t x392 = 1691045U;
volatile uint64_t t92 = 62240607033LLU;
int64_t x397 = -238177484375877634LL;
static int64_t x401 = -1LL;
volatile int8_t x404 = 41;
static int64_t t95 = 354432912488551741LL;
volatile int32_t x408 = INT32_MIN;
int32_t x412 = INT32_MIN;
uint32_t x413 = 321450033U;
uint64_t x414 = 44068LLU;
volatile int64_t x422 = 73053593500LL;
volatile uint64_t t99 = 82953814134779714LLU;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static volatile int16_t x3 = INT16_MAX;
	int16_t x4 = -1;
	int64_t t0 = 17240LL;

	t0 = ((x1+(x2&x3))&x4);

	if (t0 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = 15;
	int64_t x6 = -1LL;
	uint8_t x8 = UINT8_MAX;
	int64_t t1 = 64552LL;

	t1 = ((x5+(x6&x7))&x8);

	if (t1 != 14LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 95332265421738842LLU;
	volatile uint8_t x10 = 3U;
	int64_t x11 = -7459125504740222LL;
	int16_t x12 = -323;

	t2 = ((x9+(x10&x11))&x12);

	if (t2 != 95332265421738524LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MAX;
	int64_t x14 = INT64_MAX;
	int64_t x15 = INT64_MIN;

	t3 = ((x13+(x14&x15))&x16);

	if (t3 != 32767LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x23 = -190;
	int16_t x24 = -1;
	volatile int64_t t4 = 1LL;

	t4 = ((x21+(x22&x23))&x24);

	if (t4 != 2147483457LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x26 = 472761LL;
	static uint16_t x27 = UINT16_MAX;
	static volatile uint32_t x28 = 15546991U;

	t5 = ((x25+(x26&x27))&x28);

	if (t5 != 67LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = -3;
	uint32_t x31 = 1171U;
	int8_t x32 = INT8_MAX;

	t6 = ((x29+(x30&x31))&x32);

	if (t6 != 16LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	uint16_t x34 = 8U;
	int64_t x36 = -1LL;
	volatile int64_t t7 = 113481LL;

	t7 = ((x33+(x34&x35))&x36);

	if (t7 != 7LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int64_t x38 = -1LL;
	int16_t x39 = -1;
	static int8_t x40 = INT8_MIN;
	static int64_t t8 = 1969067276920215758LL;

	t8 = ((x37+(x38&x39))&x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x42 = INT8_MAX;
	static int16_t x43 = INT16_MIN;
	uint16_t x44 = 0U;
	volatile int32_t t9 = -4716785;

	t9 = ((x41+(x42&x43))&x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = -1810133277991520LL;
	uint8_t x46 = 6U;
	volatile int32_t x47 = 1527;
	int16_t x48 = INT16_MAX;
	volatile int64_t t10 = -136982882804LL;

	t10 = ((x45+(x46&x47))&x48);

	if (t10 != 7590LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	volatile int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MAX;
	int64_t t11 = -8111LL;

	t11 = ((x49+(x50&x51))&x52);

	if (t11 != 32767LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	int16_t x54 = -1;
	volatile int64_t t12 = 1042542LL;

	t12 = ((x53+(x54&x55))&x56);

	if (t12 != 276LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x58 = -8LL;
	volatile uint32_t x59 = 187963U;
	int16_t x60 = -914;

	t13 = ((x57+(x58&x59))&x60);

	if (t13 != 187438LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x61 = INT16_MIN;
	int16_t x62 = -1;
	int8_t x63 = -24;
	int8_t x64 = INT8_MIN;

	t14 = ((x61+(x62&x63))&x64);

	if (t14 != -32896) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -10;
	int64_t x66 = 38977LL;
	int8_t x67 = -1;
	int16_t x68 = -1;
	volatile int64_t t15 = 5646628907007459LL;

	t15 = ((x65+(x66&x67))&x68);

	if (t15 != 38967LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -124060074LL;
	int8_t x74 = 3;
	int8_t x75 = INT8_MIN;
	uint32_t x76 = 9187620U;
	volatile int64_t t16 = 119816852363LL;

	t16 = ((x73+(x74&x75))&x76);

	if (t16 != 8925188LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x78 = UINT8_MAX;
	int32_t x79 = 266;
	static uint16_t x80 = 5U;
	volatile uint32_t t17 = 986U;

	t17 = ((x77+(x78&x79))&x80);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MAX;
	int8_t x82 = 0;
	int32_t x83 = -3;
	volatile int16_t x84 = INT16_MIN;
	static volatile int32_t t18 = -1570;

	t18 = ((x81+(x82&x83))&x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = 112310177;
	uint64_t x86 = UINT64_MAX;
	int8_t x87 = 0;

	t19 = ((x85+(x86&x87))&x88);

	if (t19 != 112310177LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = INT16_MIN;
	int64_t x90 = -51892489553899237LL;
	int16_t x91 = INT16_MIN;
	static int8_t x92 = INT8_MIN;
	static volatile int64_t t20 = 39205222LL;

	t20 = ((x89+(x90&x91))&x92);

	if (t20 != -51892489553936384LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x93 = INT64_MIN;
	uint16_t x95 = UINT16_MAX;
	int32_t x96 = INT32_MIN;

	t21 = ((x93+(x94&x95))&x96);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x99 = 2386132534517LLU;
	static int16_t x100 = 1;
	volatile uint64_t t22 = 15592LLU;

	t22 = ((x97+(x98&x99))&x100);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x103 = 9;
	static volatile int16_t x104 = INT16_MIN;
	volatile int64_t t23 = -1LL;

	t23 = ((x101+(x102&x103))&x104);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 10196U;
	volatile int16_t x107 = -1;
	uint8_t x108 = 0U;
	static volatile int32_t t24 = -19;

	t24 = ((x105+(x106&x107))&x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x110 = 5;
	int32_t x111 = INT32_MIN;
	static int32_t x112 = INT32_MAX;
	volatile int32_t t25 = -105871598;

	t25 = ((x109+(x110&x111))&x112);

	if (t25 != 2147450880) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x114 = -1;
	uint32_t x115 = UINT32_MAX;

	t26 = ((x113+(x114&x115))&x116);

	if (t26 != 4294967294U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	volatile uint32_t x118 = 12U;
	int64_t x119 = INT64_MIN;
	uint8_t x120 = 51U;
	static int64_t t27 = 124165859969841LL;

	t27 = ((x117+(x118&x119))&x120);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x121 = INT32_MAX;
	int64_t x123 = -1LL;
	volatile int64_t t28 = -5857LL;

	t28 = ((x121+(x122&x123))&x124);

	if (t28 != 255LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MIN;
	int16_t x126 = INT16_MAX;
	volatile int32_t x127 = -1;
	uint64_t x128 = 3165LLU;
	uint64_t t29 = 2208415052348130LLU;

	t29 = ((x125+(x126&x127))&x128);

	if (t29 != 3165LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x130 = 146076673825852LLU;
	static int16_t x132 = INT16_MIN;
	uint64_t t30 = 30LLU;

	t30 = ((x129+(x130&x131))&x132);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 422752157LLU;
	uint8_t x134 = 67U;
	volatile int16_t x135 = -20;
	int16_t x136 = INT16_MIN;
	static volatile uint64_t t31 = 1351848990090862LLU;

	t31 = ((x133+(x134&x135))&x136);

	if (t31 != 422739968LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 14160U;
	int16_t x140 = INT16_MAX;
	static uint64_t t32 = 2411271767574564729LLU;

	t32 = ((x137+(x138&x139))&x140);

	if (t32 != 14163LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x141 = UINT64_MAX;
	int64_t x142 = INT64_MAX;
	volatile int32_t x143 = 27;
	int64_t x144 = -1239573213205LL;
	static uint64_t t33 = 35896092921188LLU;

	t33 = ((x141+(x142&x143))&x144);

	if (t33 != 10LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x145 = -1;
	int64_t x146 = INT64_MAX;
	int32_t x147 = 6541592;
	uint32_t x148 = 29394U;

	t34 = ((x145+(x146&x147))&x148);

	if (t34 != 20498LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x149 = 27U;
	volatile uint32_t x150 = UINT32_MAX;
	volatile uint32_t x151 = 7U;
	int32_t x152 = INT32_MIN;
	uint32_t t35 = 1399U;

	t35 = ((x149+(x150&x151))&x152);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x153 = UINT8_MAX;
	static uint16_t x154 = 17886U;
	int16_t x155 = -8617;
	static volatile int16_t x156 = INT16_MIN;
	static int32_t t36 = 68559;

	t36 = ((x153+(x154&x155))&x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x159 = INT64_MIN;
	int64_t t37 = -2120069293440134665LL;

	t37 = ((x157+(x158&x159))&x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x161 = 14U;
	int8_t x162 = 0;
	static int8_t x163 = -5;
	uint8_t x164 = 97U;
	volatile uint32_t t38 = 11306603U;

	t38 = ((x161+(x162&x163))&x164);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MAX;
	uint32_t x166 = UINT32_MAX;
	int16_t x167 = INT16_MAX;
	uint32_t x168 = UINT32_MAX;
	uint32_t t39 = 30U;

	t39 = ((x165+(x166&x167))&x168);

	if (t39 != 65534U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x170 = 9420627282087LLU;
	int64_t x171 = INT64_MIN;
	int16_t x172 = 281;
	uint64_t t40 = 51328972LLU;

	t40 = ((x169+(x170&x171))&x172);

	if (t40 != 9LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = UINT16_MAX;
	static int64_t x174 = 0LL;
	int64_t x175 = INT64_MIN;
	static uint16_t x176 = UINT16_MAX;
	volatile int64_t t41 = 215583LL;

	t41 = ((x173+(x174&x175))&x176);

	if (t41 != 65535LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = 7;
	int32_t x178 = INT32_MIN;
	int8_t x180 = -59;
	volatile int32_t t42 = -378683;

	t42 = ((x177+(x178&x179))&x180);

	if (t42 != 5) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x186 = 25U;
	int32_t x187 = INT32_MAX;
	int8_t x188 = INT8_MIN;
	static volatile uint32_t t43 = 624641U;

	t43 = ((x185+(x186&x187))&x188);

	if (t43 != 2147483648U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x189 = UINT16_MAX;
	int32_t x190 = INT32_MIN;

	t44 = ((x189+(x190&x191))&x192);

	if (t44 != -23173496001680LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x193 = 6518U;
	int64_t x194 = 20154296LL;
	int64_t x196 = -10357911LL;
	int64_t t45 = 22191LL;

	t45 = ((x193+(x194&x195))&x196);

	if (t45 != 18980960LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x197 = 14;
	uint16_t x198 = UINT16_MAX;
	uint8_t x200 = 1U;

	t46 = ((x197+(x198&x199))&x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MAX;
	int8_t x202 = -1;
	int64_t x203 = INT64_MIN;
	int16_t x204 = -1;
	volatile int64_t t47 = -57152915124472867LL;

	t47 = ((x201+(x202&x203))&x204);

	if (t47 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = 13U;
	volatile int64_t x207 = 87415923991563501LL;
	volatile int64_t x208 = -1LL;
	int64_t t48 = -7989183762LL;

	t48 = ((x205+(x206&x207))&x208);

	if (t48 != 122LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = 814874377LL;
	int64_t x211 = -1527326056LL;
	static int64_t t49 = -33686422LL;

	t49 = ((x209+(x210&x211))&x212);

	if (t49 != -9223372036039901440LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x213 = 66U;
	volatile int64_t x214 = -242LL;
	static volatile int8_t x215 = INT8_MIN;
	volatile int64_t t50 = 2LL;

	t50 = ((x213+(x214&x215))&x216);

	if (t50 != -256LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x220 = 1058230171U;
	static uint32_t t51 = 1014272822U;

	t51 = ((x217+(x218&x219))&x220);

	if (t51 != 17177U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = INT64_MIN;
	static int64_t x223 = -514908522378250LL;
	uint64_t x224 = 10594939941LLU;
	volatile uint64_t t52 = 16296168613LLU;

	t52 = ((x221+(x222&x223))&x224);

	if (t52 != 32LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x226 = INT8_MAX;
	int64_t x227 = INT64_MIN;
	volatile int8_t x228 = INT8_MIN;
	static volatile int64_t t53 = -2625166842452509858LL;

	t53 = ((x225+(x226&x227))&x228);

	if (t53 != -128LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = INT16_MIN;
	uint64_t x230 = 122254946704232LLU;
	int32_t x231 = 95;
	volatile uint64_t x232 = 733346LLU;
	volatile uint64_t t54 = 8090711LLU;

	t54 = ((x229+(x230&x231))&x232);

	if (t54 != 720896LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = INT32_MIN;
	static uint32_t x234 = 40862452U;
	static uint16_t x235 = UINT16_MAX;
	uint8_t x236 = 1U;
	volatile uint32_t t55 = 1884770715U;

	t55 = ((x233+(x234&x235))&x236);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x237 = 5299LL;
	int16_t x238 = 0;
	static int8_t x239 = INT8_MIN;
	volatile int64_t t56 = 243LL;

	t56 = ((x237+(x238&x239))&x240);

	if (t56 != 5299LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x243 = INT8_MAX;
	uint32_t t57 = 212U;

	t57 = ((x241+(x242&x243))&x244);

	if (t57 != 4448U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = -1LL;
	volatile int64_t x246 = 13534398726LL;
	int8_t x247 = -1;
	static int8_t x248 = INT8_MIN;
	volatile int64_t t58 = 19313710LL;

	t58 = ((x245+(x246&x247))&x248);

	if (t58 != 13534398720LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x249 = UINT64_MAX;
	volatile uint32_t x250 = 291828757U;
	uint32_t x251 = 5U;
	static int16_t x252 = -1;
	uint64_t t59 = 14442634052LLU;

	t59 = ((x249+(x250&x251))&x252);

	if (t59 != 4LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = INT64_MIN;
	volatile int16_t x255 = INT16_MIN;
	int64_t x256 = -1LL;

	t60 = ((x253+(x254&x255))&x256);

	if (t60 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x257 = 19258LLU;
	volatile int8_t x258 = -13;
	int8_t x259 = INT8_MIN;
	volatile uint64_t t61 = 34259836012301LLU;

	t61 = ((x257+(x258&x259))&x260);

	if (t61 != 19130LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x261 = 2U;
	uint64_t x262 = 125546LLU;
	int8_t x263 = 2;
	volatile uint8_t x264 = 13U;
	uint64_t t62 = 75265LLU;

	t62 = ((x261+(x262&x263))&x264);

	if (t62 != 4LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = -1;
	static uint64_t x266 = 7LLU;
	static uint32_t x267 = 169U;
	int16_t x268 = INT16_MAX;
	uint64_t t63 = 1509677375818979791LLU;

	t63 = ((x265+(x266&x267))&x268);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = -1;
	uint16_t x272 = 1780U;
	volatile uint64_t t64 = 14LLU;

	t64 = ((x269+(x270&x271))&x272);

	if (t64 != 720LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x273 = 1755U;
	int32_t x274 = 61340498;
	int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MIN;
	static volatile int32_t t65 = -128245550;

	t65 = ((x273+(x274&x275))&x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = -1;
	int16_t x278 = INT16_MIN;
	int64_t x279 = 9856116703LL;

	t66 = ((x277+(x278&x279))&x280);

	if (t66 != 339LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = INT64_MIN;
	uint64_t x282 = 1LLU;
	uint32_t x283 = UINT32_MAX;
	uint8_t x284 = 6U;
	volatile uint64_t t67 = 42560280402LLU;

	t67 = ((x281+(x282&x283))&x284);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x286 = INT64_MIN;
	uint64_t x288 = 45LLU;
	volatile uint64_t t68 = 592969LLU;

	t68 = ((x285+(x286&x287))&x288);

	if (t68 != 45LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x291 = -1LL;
	int32_t x292 = INT32_MIN;
	static volatile uint64_t t69 = 24942647LLU;

	t69 = ((x289+(x290&x291))&x292);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x293 = INT64_MIN;
	volatile uint8_t x294 = 51U;
	static uint8_t x295 = UINT8_MAX;
	volatile int64_t x296 = INT64_MIN;
	volatile int64_t t70 = INT64_MIN;

	t70 = ((x293+(x294&x295))&x296);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x297 = -22;
	int32_t x299 = 912726;
	volatile int64_t t71 = -5775995LL;

	t71 = ((x297+(x298&x299))&x300);

	if (t71 != 912704LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x301 = INT32_MAX;
	volatile uint64_t x303 = 256528968LLU;
	uint64_t t72 = 32665LLU;

	t72 = ((x301+(x302&x303))&x304);

	if (t72 != 2404012548LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x305 = INT64_MIN;
	int32_t x306 = -1;
	static uint64_t x307 = 905856LLU;
	int64_t x308 = 287LL;
	static uint64_t t73 = 4666736408400390LLU;

	t73 = ((x305+(x306&x307))&x308);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = 2;
	static uint8_t x311 = UINT8_MAX;
	int64_t x312 = INT64_MAX;
	volatile int64_t t74 = -1136LL;

	t74 = ((x309+(x310&x311))&x312);

	if (t74 != 257LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = -1LL;
	int8_t x314 = INT8_MAX;
	int16_t x315 = INT16_MIN;
	int64_t t75 = -161260593LL;

	t75 = ((x313+(x314&x315))&x316);

	if (t75 != 1301LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x317 = 21727352LLU;
	uint64_t x319 = UINT64_MAX;
	int8_t x320 = INT8_MIN;

	t76 = ((x317+(x318&x319))&x320);

	if (t76 != 54651776LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x321 = UINT64_MAX;
	uint64_t x322 = 18057320690LLU;
	int8_t x323 = INT8_MAX;
	int32_t x324 = 5;

	t77 = ((x321+(x322&x323))&x324);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x329 = UINT64_MAX;
	volatile int32_t x331 = -39375259;
	int32_t x332 = INT32_MIN;
	uint64_t t78 = 242593290779585LLU;

	t78 = ((x329+(x330&x331))&x332);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = -1;
	volatile int64_t x334 = 142514728079819651LL;
	static int8_t x336 = INT8_MIN;

	t79 = ((x333+(x334&x335))&x336);

	if (t79 != 73662464LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x337 = INT8_MIN;
	int32_t x339 = 3;
	volatile uint64_t x340 = UINT64_MAX;

	t80 = ((x337+(x338&x339))&x340);

	if (t80 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = 1093;
	int64_t x342 = -1LL;
	static int8_t x343 = -1;
	static int64_t x344 = -1LL;
	int64_t t81 = 1374LL;

	t81 = ((x341+(x342&x343))&x344);

	if (t81 != 1092LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x346 = 58U;
	int64_t x348 = -1LL;
	volatile uint64_t t82 = 6692355675LLU;

	t82 = ((x345+(x346&x347))&x348);

	if (t82 != 8531261LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x349 = INT8_MIN;
	int64_t x351 = -1LL;
	static uint64_t x352 = UINT64_MAX;
	uint64_t t83 = 586182399071LLU;

	t83 = ((x349+(x350&x351))&x352);

	if (t83 != 127LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x353 = INT8_MAX;
	volatile int32_t x354 = -1;
	int8_t x355 = 1;
	int32_t x356 = -1;
	static volatile int32_t t84 = -6;

	t84 = ((x353+(x354&x355))&x356);

	if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = -8209LL;
	int64_t x358 = -1LL;
	int8_t x359 = 50;
	uint8_t x360 = 43U;

	t85 = ((x357+(x358&x359))&x360);

	if (t85 != 33LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x361 = 1LLU;
	uint64_t x362 = 493144317LLU;
	int32_t x363 = -1;
	static int16_t x364 = -1;

	t86 = ((x361+(x362&x363))&x364);

	if (t86 != 493144318LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x365 = INT32_MAX;
	volatile int8_t x366 = -1;
	int8_t x367 = INT8_MIN;
	volatile int16_t x368 = INT16_MAX;
	int32_t t87 = 10082480;

	t87 = ((x365+(x366&x367))&x368);

	if (t87 != 32639) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = INT64_MAX;
	int16_t x370 = 0;
	static volatile int16_t x371 = -7530;
	uint32_t x372 = UINT32_MAX;
	int64_t t88 = -804879353681207908LL;

	t88 = ((x369+(x370&x371))&x372);

	if (t88 != 4294967295LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x373 = -2325343LL;
	uint64_t x374 = 237452964752LLU;
	static uint8_t x375 = UINT8_MAX;
	uint64_t t89 = 513602LLU;

	t89 = ((x373+(x374&x375))&x376);

	if (t89 != 33024LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x377 = 6U;
	static int64_t x378 = -402043803241383729LL;
	int8_t x379 = -1;
	int64_t x380 = 15589828461649549LL;
	volatile int64_t t90 = -1LL;

	t90 = ((x377+(x378&x379))&x380);

	if (t90 != 9889319024089221LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x385 = -1;
	int64_t x386 = INT64_MAX;
	int32_t x387 = 97917;
	uint16_t x388 = 231U;

	t91 = ((x385+(x386&x387))&x388);

	if (t91 != 100LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x390 = INT64_MAX;
	uint16_t x391 = 39U;

	t92 = ((x389+(x390&x391))&x392);

	if (t92 != 576933LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = INT64_MAX;
	int8_t x394 = INT8_MIN;
	int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MIN;
	volatile int64_t t93 = 19LL;

	t93 = ((x393+(x394&x395))&x396);

	if (t93 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x398 = -1;
	uint32_t x399 = 305439U;
	int8_t x400 = INT8_MIN;
	int64_t t94 = 1019114921LL;

	t94 = ((x397+(x398&x399))&x400);

	if (t94 != -238177484375572224LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x402 = INT16_MIN;
	static volatile int32_t x403 = 555359010;

	t95 = ((x401+(x402&x403))&x404);

	if (t95 != 41LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x405 = -1;
	uint16_t x406 = 6519U;
	volatile int64_t x407 = -1LL;
	int64_t t96 = 228645565207LL;

	t96 = ((x405+(x406&x407))&x408);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x409 = INT32_MIN;
	int16_t x410 = INT16_MAX;
	int64_t x411 = INT64_MAX;
	volatile int64_t t97 = 2032939660711220LL;

	t97 = ((x409+(x410&x411))&x412);

	if (t97 != -2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x415 = 1202U;
	static uint16_t x416 = UINT16_MAX;
	volatile uint64_t t98 = 223235LLU;

	t98 = ((x413+(x414&x415))&x416);

	if (t98 != 62545LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x421 = -1743092743LL;
	int8_t x423 = INT8_MIN;
	uint64_t x424 = 984782395LLU;

	t99 = ((x421+(x422&x423))&x424);

	if (t99 != 438469177LLU) { NG(); } else { ; }
	
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

