#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 5U;
int8_t x10 = -1;
int16_t x12 = -1;
int8_t x14 = INT8_MIN;
volatile uint16_t x15 = 5155U;
volatile int16_t x17 = INT16_MIN;
int32_t x25 = -1;
uint64_t t6 = 1LLU;
int8_t x29 = 2;
uint64_t x32 = 71184805576002741LLU;
uint64_t x34 = 3295187LLU;
static volatile uint64_t t8 = 4931238910LLU;
volatile uint16_t x40 = 3U;
int32_t x42 = INT32_MIN;
int32_t x49 = 3;
static int64_t x50 = INT64_MIN;
static volatile uint64_t x71 = 9104599705490LLU;
uint8_t x78 = 0U;
int16_t x83 = -1;
uint16_t x89 = 4U;
uint16_t x90 = 9U;
static int32_t x92 = INT32_MIN;
static int64_t t20 = 257350522741LL;
int64_t x93 = -1LL;
static volatile int16_t x101 = -1;
uint32_t x102 = 19976U;
uint64_t x115 = UINT64_MAX;
volatile int16_t x116 = 4;
uint32_t t25 = 2058U;
static int64_t x123 = INT64_MIN;
int8_t x125 = INT8_MIN;
int32_t x126 = 1;
static int16_t x127 = INT16_MIN;
int32_t t27 = 1;
int16_t x136 = INT16_MIN;
uint64_t t29 = 83236701431078013LLU;
static int64_t x144 = INT64_MIN;
int64_t t31 = -135728992825458938LL;
volatile uint8_t x146 = 36U;
static int32_t x148 = INT32_MIN;
static volatile int8_t x158 = INT8_MIN;
int8_t x164 = -1;
uint64_t x170 = 3957391LLU;
static int8_t x171 = 1;
volatile int32_t x173 = 695317716;
volatile int64_t x177 = 11LL;
static int64_t t40 = -849585041425437739LL;
static int64_t x185 = 8288491LL;
static uint32_t x186 = UINT32_MAX;
static volatile uint32_t x189 = 3723U;
volatile int8_t x191 = INT8_MIN;
uint64_t x193 = 596600LLU;
int16_t x200 = INT16_MIN;
uint8_t x208 = UINT8_MAX;
static uint32_t x222 = 442938U;
int8_t x227 = -1;
static int8_t x228 = INT8_MIN;
static uint64_t t52 = 40229787803LLU;
int64_t x255 = 1751LL;
volatile int32_t x263 = INT32_MIN;
int64_t x264 = -38192LL;
int64_t t58 = 7988838LL;
int16_t x268 = INT16_MIN;
int16_t x273 = 0;
int64_t x283 = INT64_MIN;
int32_t x284 = 24032889;
int64_t x292 = -1LL;
uint8_t x295 = UINT8_MAX;
int8_t x306 = INT8_MAX;
static int32_t x307 = INT32_MIN;
int8_t x314 = 2;
int8_t x319 = INT8_MIN;
static int32_t x322 = -11;
uint16_t x325 = 15738U;
volatile int64_t x339 = INT64_MIN;
uint64_t t76 = 4LLU;
static int32_t x348 = INT32_MAX;
static volatile uint32_t x365 = UINT32_MAX;
int8_t x368 = INT8_MIN;
uint32_t x369 = UINT32_MAX;
int32_t x372 = -992642700;
uint16_t x373 = 11U;
int32_t x378 = INT32_MIN;
volatile int32_t x383 = -1;
uint32_t x385 = 629036U;
int64_t x389 = INT64_MAX;
volatile int16_t x391 = -22;
volatile int64_t x394 = 520681543020034059LL;
volatile int8_t x398 = 33;
int8_t x404 = -1;
volatile uint8_t x408 = 71U;
int8_t x425 = INT8_MIN;
uint16_t x427 = UINT16_MAX;
volatile int32_t t97 = -3022329;
uint32_t x436 = UINT32_MAX;
uint32_t x438 = 0U;


void f0(void) {
	int16_t x1 = 880;
	static int8_t x2 = INT8_MAX;
	volatile uint32_t x3 = UINT32_MAX;
	volatile int8_t x4 = -1;
	uint32_t t0 = 3U;

	t0 = (x1+(x2|(x3&x4)));

	if (t0 != 879U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x6 = INT8_MIN;
	volatile uint64_t x7 = 2LLU;
	static int8_t x8 = INT8_MIN;
	volatile uint64_t t1 = 12051LLU;

	t1 = (x5+(x6|(x7&x8)));

	if (t1 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -1;
	int16_t x11 = INT16_MIN;
	int32_t t2 = -1;

	t2 = (x9+(x10|(x11&x12)));

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -1;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -15;

	t3 = (x13+(x14|(x15&x16)));

	if (t3 != -129) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = 11LL;
	uint8_t x19 = UINT8_MAX;
	static int8_t x20 = INT8_MIN;
	volatile int64_t t4 = 825450LL;

	t4 = (x17+(x18|(x19&x20)));

	if (t4 != -32629LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = UINT8_MAX;
	int32_t x22 = -1;
	volatile uint32_t x23 = 3U;
	uint32_t x24 = 5805725U;
	volatile uint32_t t5 = 53610U;

	t5 = (x21+(x22|(x23&x24)));

	if (t5 != 254U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 556955LLU;
	int64_t x27 = INT64_MAX;
	static uint8_t x28 = 1U;

	t6 = (x25+(x26|(x27&x28)));

	if (t6 != 556954LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x30 = -2543;
	int32_t x31 = INT32_MIN;
	static uint64_t t7 = 31583LLU;

	t7 = (x29+(x30|(x31&x32)));

	if (t7 != 18446744073709549075LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint32_t x35 = 104994423U;
	int32_t x36 = INT32_MIN;

	t8 = (x33+(x34|(x35&x36)));

	if (t8 != 3295186LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x37 = 58334LLU;
	int8_t x38 = 1;
	uint64_t x39 = 12485081395446LLU;
	uint64_t t9 = 394855131LLU;

	t9 = (x37+(x38|(x39&x40)));

	if (t9 != 58337LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	static uint64_t x43 = 251343LLU;
	int16_t x44 = INT16_MAX;
	volatile uint64_t t10 = 15118456668656LLU;

	t10 = (x41+(x42|(x43&x44)));

	if (t10 != 18446744071562089807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 7;
	static volatile int32_t x46 = INT32_MIN;
	static volatile int16_t x47 = 0;
	volatile int8_t x48 = 3;
	volatile int32_t t11 = -176895918;

	t11 = (x45+(x46|(x47&x48)));

	if (t11 != -2147483641) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x51 = -2;
	int16_t x52 = INT16_MIN;
	volatile int64_t t12 = 336346271217036LL;

	t12 = (x49+(x50|(x51&x52)));

	if (t12 != -32765LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -1;
	uint64_t x54 = 135588544165LLU;
	volatile int32_t x55 = -1;
	static int16_t x56 = 2488;
	uint64_t t13 = 55708891135LLU;

	t13 = (x53+(x54|(x55&x56)));

	if (t13 != 135588544444LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	uint64_t x62 = UINT64_MAX;
	uint64_t x63 = UINT64_MAX;
	int64_t x64 = 66734522891187LL;
	volatile uint64_t t14 = 255LLU;

	t14 = (x61+(x62|(x63&x64)));

	if (t14 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1LL;
	static uint16_t x66 = 193U;
	static volatile int64_t x67 = INT64_MIN;
	int32_t x68 = INT32_MAX;
	static volatile int64_t t15 = 7LL;

	t15 = (x65+(x66|(x67&x68)));

	if (t15 != 192LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = UINT32_MAX;
	volatile int8_t x70 = -1;
	volatile uint16_t x72 = 26U;
	uint64_t t16 = 409LLU;

	t16 = (x69+(x70|(x71&x72)));

	if (t16 != 4294967294LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -1LL;
	int32_t x79 = INT32_MAX;
	int16_t x80 = -164;
	volatile int64_t t17 = 46154065204LL;

	t17 = (x77+(x78|(x79&x80)));

	if (t17 != 2147483483LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MIN;
	volatile int8_t x82 = -17;
	static volatile uint32_t x84 = 10U;
	uint32_t t18 = 1200783294U;

	t18 = (x81+(x82|(x83&x84)));

	if (t18 != 4294934511U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	uint64_t x86 = UINT64_MAX;
	int32_t x87 = INT32_MAX;
	volatile int8_t x88 = 7;
	volatile uint64_t t19 = 80519706766068911LLU;

	t19 = (x85+(x86|(x87&x88)));

	if (t19 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x91 = INT64_MAX;

	t20 = (x89+(x90|(x91&x92)));

	if (t20 != 9223372034707292173LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x94 = -42;
	static int8_t x95 = INT8_MIN;
	uint32_t x96 = UINT32_MAX;
	volatile int64_t t21 = 578LL;

	t21 = (x93+(x94|(x95&x96)));

	if (t21 != 4294967253LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x103 = UINT16_MAX;
	static uint64_t x104 = UINT64_MAX;
	volatile uint64_t t22 = 140615559846364LLU;

	t22 = (x101+(x102|(x103&x104)));

	if (t22 != 65534LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = 3058502LLU;
	uint64_t x106 = 5168529326484020177LLU;
	volatile int16_t x107 = INT16_MIN;
	volatile int32_t x108 = INT32_MAX;
	uint64_t t23 = 1092503595899872909LLU;

	t23 = (x105+(x106|(x107&x108)));

	if (t23 != 5168529327220754199LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MIN;
	int8_t x114 = -1;
	static uint64_t t24 = 2141594819304565LLU;

	t24 = (x113+(x114|(x115&x116)));

	if (t24 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = UINT32_MAX;
	volatile int32_t x118 = -5;
	uint32_t x119 = 52U;
	static volatile uint16_t x120 = UINT16_MAX;

	t25 = (x117+(x118|(x119&x120)));

	if (t25 != 4294967294U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x121 = 116LLU;
	volatile int8_t x122 = INT8_MAX;
	uint16_t x124 = 6U;
	uint64_t t26 = 412247489717095483LLU;

	t26 = (x121+(x122|(x123&x124)));

	if (t26 != 243LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x128 = 44U;

	t27 = (x125+(x126|(x127&x128)));

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = 38541077066448LL;
	static volatile uint8_t x130 = UINT8_MAX;
	int64_t x131 = INT64_MIN;
	static volatile int8_t x132 = -3;
	int64_t t28 = 2115041LL;

	t28 = (x129+(x130|(x131&x132)));

	if (t28 != -9223333495777709105LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = 499535237296618LLU;
	static int16_t x134 = 0;
	static int64_t x135 = -1LL;

	t29 = (x133+(x134|(x135&x136)));

	if (t29 != 499535237263850LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x137 = 777U;
	int32_t x138 = -1;
	int16_t x139 = INT16_MIN;
	uint64_t x140 = 62737522LLU;
	uint64_t t30 = 73335889LLU;

	t30 = (x137+(x138|(x139&x140)));

	if (t30 != 776LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = 1;
	volatile int64_t x142 = INT64_MIN;
	uint8_t x143 = 13U;

	t31 = (x141+(x142|(x143&x144)));

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = INT64_MAX;
	int32_t x147 = INT32_MIN;
	int64_t t32 = 37405757370LL;

	t32 = (x145+(x146|(x147&x148)));

	if (t32 != 9223372034707292195LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MIN;
	uint64_t x150 = UINT64_MAX;
	volatile int8_t x151 = INT8_MAX;
	uint64_t x152 = 111964985LLU;
	uint64_t t33 = 675246085LLU;

	t33 = (x149+(x150|(x151&x152)));

	if (t33 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = INT32_MAX;
	volatile uint64_t x159 = UINT64_MAX;
	volatile int32_t x160 = -1710316;
	volatile uint64_t t34 = 9284926692392193LLU;

	t34 = (x157+(x158|(x159&x160)));

	if (t34 != 2147483539LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x161 = UINT32_MAX;
	int16_t x162 = -1;
	static int32_t x163 = -1;
	static uint32_t t35 = 213514U;

	t35 = (x161+(x162|(x163&x164)));

	if (t35 != 4294967294U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x165 = 28095573U;
	uint64_t x166 = 39801LLU;
	uint64_t x167 = UINT64_MAX;
	uint32_t x168 = 2U;
	static uint64_t t36 = 1326485552464132299LLU;

	t36 = (x165+(x166|(x167&x168)));

	if (t36 != 28135376LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = -1;
	int64_t x172 = INT64_MIN;
	uint64_t t37 = 984014LLU;

	t37 = (x169+(x170|(x171&x172)));

	if (t37 != 3957390LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x174 = INT16_MIN;
	volatile uint32_t x175 = 6721030U;
	uint32_t x176 = 199U;
	uint32_t t38 = 12926072U;

	t38 = (x173+(x174|(x175&x176)));

	if (t38 != 695284954U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x178 = 1U;
	uint32_t x179 = 102U;
	int8_t x180 = INT8_MIN;
	volatile int64_t t39 = -5334LL;

	t39 = (x177+(x178|(x179&x180)));

	if (t39 != 12LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x181 = 4;
	static uint8_t x182 = UINT8_MAX;
	volatile int16_t x183 = -1;
	int64_t x184 = -3779048744418774LL;

	t40 = (x181+(x182|(x183&x184)));

	if (t40 != -3779048744418557LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x187 = 0;
	int64_t x188 = 1778983659337LL;
	static volatile int64_t t41 = -3066124693LL;

	t41 = (x185+(x186|(x187&x188)));

	if (t41 != 4303255786LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x190 = 1;
	uint64_t x192 = 107497365821877LLU;
	volatile uint64_t t42 = 143LLU;

	t42 = (x189+(x190|(x191&x192)));

	if (t42 != 107497365825548LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x194 = 0;
	volatile int16_t x195 = 13298;
	uint16_t x196 = UINT16_MAX;
	uint64_t t43 = 14LLU;

	t43 = (x193+(x194|(x195&x196)));

	if (t43 != 609898LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x197 = 14233383U;
	volatile int32_t x198 = INT32_MAX;
	uint8_t x199 = 6U;
	uint32_t t44 = 3U;

	t44 = (x197+(x198|(x199&x200)));

	if (t44 != 2161717030U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = INT64_MAX;
	int64_t x206 = INT64_MIN;
	uint16_t x207 = UINT16_MAX;
	volatile int64_t t45 = -441316401873654LL;

	t45 = (x205+(x206|(x207&x208)));

	if (t45 != 254LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x209 = -1LL;
	int64_t x210 = -330854562378LL;
	uint32_t x211 = 308U;
	int8_t x212 = INT8_MAX;
	int64_t t46 = 5LL;

	t46 = (x209+(x210|(x211&x212)));

	if (t46 != -330854562379LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = -1;
	uint16_t x214 = UINT16_MAX;
	int8_t x215 = 1;
	int8_t x216 = -62;
	int32_t t47 = -3519403;

	t47 = (x213+(x214|(x215&x216)));

	if (t47 != 65534) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x221 = 464005U;
	uint64_t x223 = 2609725833LLU;
	uint16_t x224 = 3738U;
	static volatile uint64_t t48 = 79394LLU;

	t48 = (x221+(x222|(x223&x224)));

	if (t48 != 907071LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x225 = 4168;
	uint16_t x226 = UINT16_MAX;
	static int32_t t49 = -36;

	t49 = (x225+(x226|(x227&x228)));

	if (t49 != 4167) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x229 = 821U;
	volatile uint8_t x230 = UINT8_MAX;
	uint32_t x231 = 7U;
	static uint64_t x232 = 6933510LLU;
	uint64_t t50 = 4524277LLU;

	t50 = (x229+(x230|(x231&x232)));

	if (t50 != 1076LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x233 = 248666LLU;
	int16_t x234 = -7276;
	int32_t x235 = -1;
	int8_t x236 = -1;
	uint64_t t51 = 28042505LLU;

	t51 = (x233+(x234|(x235&x236)));

	if (t51 != 248665LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x237 = 29U;
	uint8_t x238 = 2U;
	static uint64_t x239 = 3745402LLU;
	int64_t x240 = INT64_MIN;

	t52 = (x237+(x238|(x239&x240)));

	if (t52 != 31LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = INT8_MIN;
	static int32_t x242 = 141;
	int64_t x243 = -15423304246513LL;
	int16_t x244 = -1;
	int64_t t53 = 20203400094803153LL;

	t53 = (x241+(x242|(x243&x244)));

	if (t53 != -15423304246513LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x245 = 13401LLU;
	int64_t x246 = INT64_MAX;
	int8_t x247 = -8;
	int16_t x248 = INT16_MAX;
	volatile uint64_t t54 = 1794227761953LLU;

	t54 = (x245+(x246|(x247&x248)));

	if (t54 != 9223372036854789208LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = INT64_MAX;
	static int16_t x250 = -10272;
	int64_t x251 = INT64_MIN;
	volatile uint16_t x252 = 136U;
	int64_t t55 = -1606844LL;

	t55 = (x249+(x250|(x251&x252)));

	if (t55 != 9223372036854765535LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x253 = 56U;
	static uint16_t x254 = 9U;
	static int32_t x256 = INT32_MIN;
	static int64_t t56 = 2LL;

	t56 = (x253+(x254|(x255&x256)));

	if (t56 != 65LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x257 = 231881U;
	int64_t x258 = -3LL;
	int16_t x259 = INT16_MAX;
	uint64_t x260 = UINT64_MAX;
	uint64_t t57 = 444022182946147LLU;

	t57 = (x257+(x258|(x259&x260)));

	if (t57 != 231880LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = INT16_MAX;
	int32_t x262 = INT32_MAX;

	t58 = (x261+(x262|(x263&x264)));

	if (t58 != 32766LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x265 = -186314069;
	static volatile uint32_t x266 = UINT32_MAX;
	int8_t x267 = -1;
	uint32_t t59 = 10497U;

	t59 = (x265+(x266|(x267&x268)));

	if (t59 != 4108653226U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x274 = 196U;
	static int16_t x275 = INT16_MIN;
	int16_t x276 = INT16_MAX;
	int32_t t60 = 1429;

	t60 = (x273+(x274|(x275&x276)));

	if (t60 != 196) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x277 = 118U;
	int64_t x278 = INT64_MIN;
	int8_t x279 = -1;
	uint64_t x280 = UINT64_MAX;
	uint64_t t61 = 392189744311LLU;

	t61 = (x277+(x278|(x279&x280)));

	if (t61 != 117LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = INT8_MIN;
	static uint32_t x282 = UINT32_MAX;
	volatile int64_t t62 = 3LL;

	t62 = (x281+(x282|(x283&x284)));

	if (t62 != 4294967167LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x289 = INT8_MIN;
	int16_t x290 = INT16_MIN;
	static int8_t x291 = -43;
	int64_t t63 = -4319252939448965LL;

	t63 = (x289+(x290|(x291&x292)));

	if (t63 != -171LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x293 = INT64_MIN;
	volatile int8_t x294 = INT8_MAX;
	int32_t x296 = INT32_MIN;
	static int64_t t64 = -4271778879LL;

	t64 = (x293+(x294|(x295&x296)));

	if (t64 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x297 = 0;
	volatile int16_t x298 = -1;
	int32_t x299 = INT32_MAX;
	int64_t x300 = 1363291462726392598LL;
	volatile int64_t t65 = -39532757814LL;

	t65 = (x297+(x298|(x299&x300)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x301 = 18595569U;
	int8_t x302 = -1;
	int32_t x303 = INT32_MIN;
	uint32_t x304 = 75U;
	uint32_t t66 = 4U;

	t66 = (x301+(x302|(x303&x304)));

	if (t66 != 18595568U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x305 = UINT16_MAX;
	uint8_t x308 = 13U;
	int32_t t67 = -3497;

	t67 = (x305+(x306|(x307&x308)));

	if (t67 != 65662) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x309 = 1574U;
	uint64_t x310 = 654216LLU;
	static int32_t x311 = -1;
	int32_t x312 = INT32_MIN;
	volatile uint64_t t68 = 58311804715299994LLU;

	t68 = (x309+(x310|(x311&x312)));

	if (t68 != 18446744071562723758LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x313 = INT8_MIN;
	int8_t x315 = INT8_MIN;
	static volatile uint16_t x316 = 311U;
	int32_t t69 = -48;

	t69 = (x313+(x314|(x315&x316)));

	if (t69 != 130) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x317 = 1;
	uint32_t x318 = UINT32_MAX;
	int8_t x320 = 1;
	uint32_t t70 = 3U;

	t70 = (x317+(x318|(x319&x320)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x321 = UINT8_MAX;
	static uint16_t x323 = UINT16_MAX;
	static uint32_t x324 = UINT32_MAX;
	uint32_t t71 = 468652029U;

	t71 = (x321+(x322|(x323&x324)));

	if (t71 != 254U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x326 = 1506530341315359LLU;
	uint8_t x327 = 1U;
	int64_t x328 = -1LL;
	uint64_t t72 = 10533238LLU;

	t72 = (x325+(x326|(x327&x328)));

	if (t72 != 1506530341331097LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x329 = 13U;
	uint16_t x330 = UINT16_MAX;
	int8_t x331 = -13;
	static volatile int16_t x332 = INT16_MIN;
	volatile int32_t t73 = -518173;

	t73 = (x329+(x330|(x331&x332)));

	if (t73 != 12) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x333 = 1;
	int8_t x334 = -3;
	uint16_t x335 = 29U;
	volatile int8_t x336 = INT8_MIN;
	int32_t t74 = -113637227;

	t74 = (x333+(x334|(x335&x336)));

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x337 = -1;
	static int64_t x338 = 33386904487369LL;
	int32_t x340 = -1;
	int64_t t75 = -29814081426718LL;

	t75 = (x337+(x338|(x339&x340)));

	if (t75 != -9223338649950288440LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x341 = 1284299304921264088LLU;
	int16_t x342 = -1;
	int16_t x343 = -4;
	static uint32_t x344 = 244413U;

	t76 = (x341+(x342|(x343&x344)));

	if (t76 != 1284299309216231383LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x345 = 1003122LLU;
	uint8_t x346 = 10U;
	static volatile uint8_t x347 = UINT8_MAX;
	uint64_t t77 = 705343345LLU;

	t77 = (x345+(x346|(x347&x348)));

	if (t77 != 1003377LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x349 = 1561012692858480LL;
	uint32_t x350 = 51122923U;
	int64_t x351 = -1LL;
	uint64_t x352 = 1171770284849LLU;
	uint64_t t78 = 387429LLU;

	t78 = (x349+(x350|(x351&x352)));

	if (t78 != 1562184480707179LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x353 = 138264LLU;
	uint32_t x354 = 43659U;
	static uint32_t x355 = UINT32_MAX;
	volatile int64_t x356 = -733321029LL;
	uint64_t t79 = 59822LLU;

	t79 = (x353+(x354|(x355&x356)));

	if (t79 != 3561817811LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x357 = UINT32_MAX;
	static int64_t x358 = INT64_MAX;
	uint64_t x359 = 2563153142795LLU;
	volatile int16_t x360 = INT16_MAX;
	uint64_t t80 = 3468558083316LLU;

	t80 = (x357+(x358|(x359&x360)));

	if (t80 != 9223372041149743102LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x361 = 448373LLU;
	static int32_t x362 = 6;
	int8_t x363 = INT8_MIN;
	static int64_t x364 = -2LL;
	volatile uint64_t t81 = 895476LLU;

	t81 = (x361+(x362|(x363&x364)));

	if (t81 != 448251LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x366 = -1;
	volatile int64_t x367 = -67687538620LL;
	int64_t t82 = 1103257436923988LL;

	t82 = (x365+(x366|(x367&x368)));

	if (t82 != 4294967294LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x370 = INT16_MIN;
	int32_t x371 = -468532656;
	static uint32_t t83 = 5788U;

	t83 = (x369+(x370|(x371&x372)));

	if (t83 != 4294950991U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x374 = INT32_MIN;
	uint8_t x375 = UINT8_MAX;
	static int32_t x376 = -3889693;
	volatile int32_t t84 = -1220;

	t84 = (x373+(x374|(x375&x376)));

	if (t84 != -2147483410) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x377 = -1LL;
	static int16_t x379 = INT16_MAX;
	uint64_t x380 = 4593351LLU;
	uint64_t t85 = 593676225078172LLU;

	t85 = (x377+(x378|(x379&x380)));

	if (t85 != 18446744071562073798LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x381 = 92U;
	int64_t x382 = INT64_MIN;
	uint32_t x384 = 3U;
	int64_t t86 = 7565124LL;

	t86 = (x381+(x382|(x383&x384)));

	if (t86 != -9223372036854775713LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x386 = INT16_MAX;
	static int64_t x387 = 66958139714164843LL;
	int64_t x388 = 3LL;
	volatile int64_t t87 = -22061990810570LL;

	t87 = (x385+(x386|(x387&x388)));

	if (t87 != 661803LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x390 = 15U;
	int32_t x392 = INT32_MIN;
	volatile int64_t t88 = 29LL;

	t88 = (x389+(x390|(x391&x392)));

	if (t88 != 9223372034707292174LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x393 = UINT32_MAX;
	uint64_t x395 = 1993084LLU;
	int8_t x396 = -7;
	static volatile uint64_t t89 = 205361077490851LLU;

	t89 = (x393+(x394|(x395&x396)));

	if (t89 != 520681547316066682LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x397 = INT64_MIN;
	uint64_t x399 = 8281LLU;
	uint16_t x400 = 3U;
	uint64_t t90 = 7135003574583871795LLU;

	t90 = (x397+(x398|(x399&x400)));

	if (t90 != 9223372036854775841LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x401 = -1LL;
	static int64_t x402 = INT64_MIN;
	static int64_t x403 = -1LL;
	int64_t t91 = 6LL;

	t91 = (x401+(x402|(x403&x404)));

	if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x405 = INT64_MIN;
	volatile int64_t x406 = 459381569682885568LL;
	uint32_t x407 = 29U;
	int64_t t92 = 180345LL;

	t92 = (x405+(x406|(x407&x408)));

	if (t92 != -8763990467171890235LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x409 = UINT8_MAX;
	static uint16_t x410 = 9509U;
	volatile int16_t x411 = -1;
	static int32_t x412 = -24;
	int32_t t93 = -54;

	t93 = (x409+(x410|(x411&x412)));

	if (t93 != 236) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x413 = 3;
	uint16_t x414 = 5430U;
	uint64_t x415 = 7391153532LLU;
	static int16_t x416 = INT16_MIN;
	static uint64_t t94 = 80150940740LLU;

	t94 = (x413+(x414|(x415&x416)));

	if (t94 != 7391155513LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x417 = 16LLU;
	volatile int64_t x418 = INT64_MIN;
	uint16_t x419 = 3028U;
	uint8_t x420 = UINT8_MAX;
	uint64_t t95 = 463926531706440388LLU;

	t95 = (x417+(x418|(x419&x420)));

	if (t95 != 9223372036854776036LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = INT16_MIN;
	static int16_t x422 = INT16_MIN;
	static int64_t x423 = INT64_MIN;
	volatile int8_t x424 = 1;
	static volatile int64_t t96 = 914430905063046LL;

	t96 = (x421+(x422|(x423&x424)));

	if (t96 != -65536LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x426 = UINT8_MAX;
	volatile int32_t x428 = INT32_MAX;

	t97 = (x425+(x426|(x427&x428)));

	if (t97 != 65407) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x433 = 1;
	static int8_t x434 = 9;
	int8_t x435 = -54;
	static volatile uint32_t t98 = 1728465957U;

	t98 = (x433+(x434|(x435&x436)));

	if (t98 != 4294967244U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x437 = INT32_MIN;
	static int8_t x439 = -4;
	uint64_t x440 = UINT64_MAX;
	uint64_t t99 = 9118382LLU;

	t99 = (x437+(x438|(x439&x440)));

	if (t99 != 18446744071562067964LLU) { NG(); } else { ; }
	
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

