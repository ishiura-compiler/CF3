#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x12 = UINT32_MAX;
static int32_t x13 = -1;
static int16_t x19 = INT16_MIN;
int8_t x20 = INT8_MIN;
volatile int64_t x24 = -1LL;
int8_t x25 = -1;
int64_t x27 = INT64_MAX;
volatile int64_t x28 = INT64_MIN;
volatile int64_t t6 = 4068608288232991LL;
uint8_t x29 = 0U;
uint8_t x31 = UINT8_MAX;
int64_t x32 = INT64_MIN;
int64_t t7 = -2124214LL;
uint32_t x41 = 0U;
int32_t x46 = INT32_MIN;
int16_t x52 = INT16_MIN;
uint64_t x58 = 53957LLU;
volatile uint64_t t12 = 1LLU;
int16_t x64 = INT16_MIN;
volatile uint64_t t14 = 3072297019768847LLU;
uint32_t x75 = 3799066U;
uint64_t x76 = 28487061195673270LLU;
volatile uint64_t t16 = 4063817LLU;
volatile int8_t x94 = INT8_MIN;
uint16_t x95 = UINT16_MAX;
int8_t x98 = INT8_MIN;
int8_t x99 = INT8_MAX;
int8_t x101 = -14;
int64_t x106 = -1LL;
int64_t t22 = -173664517LL;
volatile uint32_t x111 = 58705U;
int64_t t23 = 75LL;
static uint8_t x117 = 2U;
uint16_t x118 = 5786U;
int64_t x124 = INT64_MIN;
int64_t x125 = INT64_MIN;
static volatile int64_t t26 = 165853572954379235LL;
uint32_t x136 = 7271U;
volatile uint64_t t29 = 397215LLU;
static int32_t x147 = -465;
volatile uint32_t x148 = 7730U;
uint32_t x151 = 448U;
static volatile uint64_t x153 = 362265831887194LLU;
uint8_t x158 = 54U;
int16_t x168 = INT16_MIN;
volatile int8_t x175 = INT8_MIN;
uint32_t x177 = UINT32_MAX;
int64_t t40 = 4430732683316LL;
static uint64_t x203 = UINT64_MAX;
int32_t x204 = -15721952;
uint32_t x206 = UINT32_MAX;
static uint64_t x209 = UINT64_MAX;
uint16_t x217 = 13U;
uint64_t x220 = UINT64_MAX;
int64_t x222 = -1LL;
static int8_t x224 = INT8_MIN;
static int8_t x240 = 4;
uint32_t x241 = 1875U;
uint16_t x242 = UINT16_MAX;
uint64_t x245 = 1107881705283686LLU;
uint64_t x247 = UINT64_MAX;
uint64_t t54 = 139LLU;
volatile int8_t x250 = INT8_MIN;
volatile int64_t t55 = -14383LL;
static volatile int64_t t57 = 4235074472773299927LL;
volatile int64_t x264 = -1LL;
volatile uint64_t t58 = 6900434LLU;
int16_t x282 = 5;
volatile int8_t x298 = INT8_MIN;
uint8_t x299 = 23U;
static int16_t x318 = INT16_MIN;
volatile int32_t x326 = INT32_MIN;
uint64_t x329 = 28076125709LLU;
int16_t x331 = INT16_MAX;
int64_t x341 = 259376LL;
int32_t x345 = INT32_MAX;
static int16_t x349 = INT16_MAX;
volatile int16_t x350 = 1;
static uint32_t x352 = 701U;
volatile int64_t x356 = INT64_MIN;
volatile int64_t t75 = -1LL;
int8_t x369 = INT8_MIN;
uint8_t x372 = 22U;
volatile int64_t t79 = -8410324326LL;
volatile int8_t x377 = 2;
int64_t x380 = -2717696639013LL;
uint64_t x382 = 28713853514LLU;
volatile int32_t x389 = -744062;
uint16_t x390 = 343U;
volatile int64_t x396 = 21702718886LL;
int8_t x398 = INT8_MAX;
uint32_t t86 = 7U;
uint16_t x408 = UINT16_MAX;
volatile int64_t t89 = 5478699958LL;
uint64_t x416 = 43665714953726412LLU;
int8_t x418 = -1;
static uint32_t x424 = UINT32_MAX;
uint32_t x428 = 4031U;
volatile int64_t t93 = -841085868LL;
static uint64_t t94 = 188249165909LLU;
volatile int8_t x437 = INT8_MAX;
int64_t x444 = -123984933230437LL;
volatile uint32_t x447 = UINT32_MAX;
static volatile uint16_t x449 = 6053U;
int64_t x451 = -1LL;
int32_t x454 = INT32_MIN;
int32_t x455 = -105950;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	int16_t x2 = -1;
	volatile int16_t x3 = -59;
	int32_t x4 = INT32_MIN;
	static int32_t t0 = -95;

	t0 = (x1+(x2|(x3/x4)));

	if (t0 != -32769) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int32_t x6 = -1;
	uint8_t x7 = 1U;
	uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = 10940U;

	t1 = (x5+(x6|(x7/x8)));

	if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 576;
	volatile int32_t x10 = INT32_MAX;
	volatile int8_t x11 = INT8_MAX;
	static volatile uint32_t t2 = 197U;

	t2 = (x9+(x10|(x11/x12)));

	if (t2 != 2147484223U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MAX;
	uint32_t x15 = 88U;
	volatile int32_t x16 = -10;
	static uint32_t t3 = 5600U;

	t3 = (x13+(x14|(x15/x16)));

	if (t3 != 126U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 51431364U;
	int8_t x18 = 4;
	volatile uint32_t t4 = 1648006104U;

	t4 = (x17+(x18|(x19/x20)));

	if (t4 != 51431624U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	volatile uint64_t x22 = UINT64_MAX;
	volatile int16_t x23 = -1;
	volatile uint64_t t5 = 36LLU;

	t5 = (x21+(x22|(x23/x24)));

	if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = -1;

	t6 = (x25+(x26|(x27/x28)));

	if (t6 != -2LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;

	t7 = (x29+(x30|(x31/x32)));

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x42 = -1;
	int32_t x43 = 41906632;
	int64_t x44 = INT64_MIN;
	volatile int64_t t8 = -69774LL;

	t8 = (x41+(x42|(x43/x44)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 20514U;
	uint32_t x47 = 2492U;
	int16_t x48 = INT16_MIN;
	uint32_t t9 = 149013370U;

	t9 = (x45+(x46|(x47/x48)));

	if (t9 != 2147504162U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = UINT64_MAX;
	int16_t x50 = -1;
	int64_t x51 = INT64_MAX;
	uint64_t t10 = 8191487252463950LLU;

	t10 = (x49+(x50|(x51/x52)));

	if (t10 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = UINT16_MAX;
	int32_t x54 = INT32_MIN;
	static uint8_t x55 = 101U;
	volatile int8_t x56 = INT8_MIN;
	static volatile int32_t t11 = -41322;

	t11 = (x53+(x54|(x55/x56)));

	if (t11 != -2147418113) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 18U;
	uint32_t x59 = 59682487U;
	int32_t x60 = -2090767;

	t12 = (x57+(x58|(x59/x60)));

	if (t12 != 53975LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = -1;
	int8_t x62 = INT8_MIN;
	uint32_t x63 = 45993686U;
	volatile uint32_t t13 = 21U;

	t13 = (x61+(x62|(x63/x64)));

	if (t13 != 4294967167U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -29251044075LL;
	uint64_t x66 = 10056920411LLU;
	static int64_t x67 = INT64_MAX;
	uint64_t x68 = 97434708257545633LLU;

	t14 = (x65+(x66|(x67/x68)));

	if (t14 != 18446744054515427956LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x69 = INT8_MAX;
	volatile int8_t x70 = 0;
	int8_t x71 = INT8_MIN;
	static int8_t x72 = -1;
	int32_t t15 = -21072;

	t15 = (x69+(x70|(x71/x72)));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x73 = -1;
	int32_t x74 = -1;

	t16 = (x73+(x74|(x75/x76)));

	if (t16 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = 58;
	uint16_t x82 = 13U;
	uint32_t x83 = 620U;
	uint8_t x84 = 1U;
	static volatile uint32_t t17 = 135U;

	t17 = (x81+(x82|(x83/x84)));

	if (t17 != 679U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MAX;
	uint64_t x86 = UINT64_MAX;
	uint64_t x87 = UINT64_MAX;
	volatile int64_t x88 = INT64_MAX;
	static uint64_t t18 = 2327292331179LLU;

	t18 = (x85+(x86|(x87/x88)));

	if (t18 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MIN;
	uint32_t x96 = 19197146U;
	volatile int64_t t19 = 375144256015214269LL;

	t19 = (x93+(x94|(x95/x96)));

	if (t19 != -9223372032559808640LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = INT64_MAX;
	static int64_t x100 = -1LL;
	int64_t t20 = -116996LL;

	t20 = (x97+(x98|(x99/x100)));

	if (t20 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x102 = UINT32_MAX;
	static int32_t x103 = INT32_MAX;
	volatile int8_t x104 = 1;
	volatile uint32_t t21 = 465701787U;

	t21 = (x101+(x102|(x103/x104)));

	if (t21 != 4294967281U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = UINT16_MAX;
	int64_t x107 = INT64_MIN;
	int32_t x108 = 21;

	t22 = (x105+(x106|(x107/x108)));

	if (t22 != 65534LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = 20642265827649718LL;
	int16_t x110 = -3480;
	uint32_t x112 = 1293U;

	t23 = (x109+(x110|(x111/x112)));

	if (t23 != 20642270122613539LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x119 = 19254348LLU;
	static int64_t x120 = INT64_MIN;
	static volatile uint64_t t24 = 239762203562LLU;

	t24 = (x117+(x118|(x119/x120)));

	if (t24 != 5788LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = -1;
	volatile int16_t x122 = -1;
	static uint8_t x123 = UINT8_MAX;
	volatile int64_t t25 = -749680432804LL;

	t25 = (x121+(x122|(x123/x124)));

	if (t25 != -2LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x126 = UINT32_MAX;
	static int32_t x127 = INT32_MAX;
	int64_t x128 = 48487LL;

	t26 = (x125+(x126|(x127/x128)));

	if (t26 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x129 = 81U;
	uint64_t x130 = UINT64_MAX;
	volatile int16_t x131 = INT16_MAX;
	int64_t x132 = -5138489672LL;
	static uint64_t t27 = 43LLU;

	t27 = (x129+(x130|(x131/x132)));

	if (t27 != 80LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x133 = UINT16_MAX;
	static int16_t x134 = INT16_MAX;
	volatile uint8_t x135 = UINT8_MAX;
	volatile uint32_t t28 = 584663637U;

	t28 = (x133+(x134|(x135/x136)));

	if (t28 != 98302U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x137 = UINT32_MAX;
	static int8_t x138 = INT8_MAX;
	uint8_t x139 = 38U;
	uint64_t x140 = UINT64_MAX;

	t29 = (x137+(x138|(x139/x140)));

	if (t29 != 4294967422LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = 125403;
	static volatile int16_t x142 = INT16_MAX;
	int64_t x143 = 6135LL;
	uint16_t x144 = 23592U;
	volatile int64_t t30 = 28LL;

	t30 = (x141+(x142|(x143/x144)));

	if (t30 != 158170LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = 82LL;
	uint16_t x146 = 6U;
	volatile int64_t t31 = -3170993613046444683LL;

	t31 = (x145+(x146|(x147/x148)));

	if (t31 != 555705LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x149 = 0U;
	int8_t x150 = -1;
	uint16_t x152 = 10U;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (x149+(x150|(x151/x152)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x154 = INT16_MAX;
	static int32_t x155 = INT32_MIN;
	uint8_t x156 = 83U;
	uint64_t t33 = 5450610225698951228LLU;

	t33 = (x153+(x154|(x155/x156)));

	if (t33 != 362265806033241LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x157 = 5348265787LLU;
	int16_t x159 = INT16_MIN;
	volatile int64_t x160 = INT64_MIN;
	volatile uint64_t t34 = 22194946LLU;

	t34 = (x157+(x158|(x159/x160)));

	if (t34 != 5348265841LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = 15344645237427LLU;
	int8_t x162 = INT8_MAX;
	volatile uint64_t x163 = 2070LLU;
	int8_t x164 = 4;
	volatile uint64_t t35 = 1370614649LLU;

	t35 = (x161+(x162|(x163/x164)));

	if (t35 != 15344645238066LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x165 = 7511U;
	int64_t x166 = -1LL;
	uint64_t x167 = 64604LLU;
	volatile uint64_t t36 = 336346552LLU;

	t36 = (x165+(x166|(x167/x168)));

	if (t36 != 7510LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = -495;
	volatile int32_t x170 = INT32_MIN;
	uint64_t x171 = 2914879LLU;
	int64_t x172 = INT64_MIN;
	uint64_t t37 = 25035335355LLU;

	t37 = (x169+(x170|(x171/x172)));

	if (t37 != 18446744071562067473LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x173 = 869023;
	volatile uint16_t x174 = 0U;
	static int64_t x176 = INT64_MIN;
	int64_t t38 = 3799118405110933598LL;

	t38 = (x173+(x174|(x175/x176)));

	if (t38 != 869023LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x178 = 22033530LLU;
	static int8_t x179 = -1;
	volatile uint8_t x180 = 6U;
	uint64_t t39 = 580388088207LLU;

	t39 = (x177+(x178|(x179/x180)));

	if (t39 != 4317000825LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = 2338397361082373671LL;
	volatile int16_t x186 = INT16_MIN;
	static volatile int16_t x187 = 0;
	static volatile int8_t x188 = INT8_MIN;

	t40 = (x185+(x186|(x187/x188)));

	if (t40 != 2338397361082340903LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x189 = INT32_MIN;
	int64_t x190 = INT64_MAX;
	volatile uint64_t x191 = 2028673LLU;
	uint32_t x192 = UINT32_MAX;
	uint64_t t41 = 3945052LLU;

	t41 = (x189+(x190|(x191/x192)));

	if (t41 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = -1;
	static uint64_t x194 = UINT64_MAX;
	volatile uint8_t x195 = 0U;
	static int8_t x196 = -1;
	static uint64_t t42 = 24656416381907LLU;

	t42 = (x193+(x194|(x195/x196)));

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x197 = UINT8_MAX;
	uint32_t x198 = UINT32_MAX;
	static int16_t x199 = 12177;
	volatile int8_t x200 = -30;
	uint32_t t43 = 401729162U;

	t43 = (x197+(x198|(x199/x200)));

	if (t43 != 254U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x201 = UINT32_MAX;
	uint32_t x202 = 14838307U;
	uint64_t t44 = 8468519019LLU;

	t44 = (x201+(x202|(x203/x204)));

	if (t44 != 4309805602LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x205 = -1;
	int16_t x207 = INT16_MIN;
	volatile int8_t x208 = INT8_MIN;
	volatile uint32_t t45 = 254800U;

	t45 = (x205+(x206|(x207/x208)));

	if (t45 != 4294967294U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x210 = INT32_MAX;
	uint8_t x211 = 77U;
	static int8_t x212 = INT8_MAX;
	volatile uint64_t t46 = 25882270187370482LLU;

	t46 = (x209+(x210|(x211/x212)));

	if (t46 != 2147483646LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x213 = INT64_MIN;
	volatile int8_t x214 = INT8_MAX;
	uint64_t x215 = UINT64_MAX;
	int64_t x216 = INT64_MAX;
	uint64_t t47 = 166063285LLU;

	t47 = (x213+(x214|(x215/x216)));

	if (t47 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x218 = 25126255U;
	uint64_t x219 = 26089026777LLU;
	volatile uint64_t t48 = 30864617297708LLU;

	t48 = (x217+(x218|(x219/x220)));

	if (t48 != 25126268LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = 17;
	static volatile int64_t x223 = -1LL;
	static volatile int64_t t49 = -38520LL;

	t49 = (x221+(x222|(x223/x224)));

	if (t49 != 16LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = 0;
	uint8_t x230 = 6U;
	static int8_t x231 = INT8_MIN;
	static int16_t x232 = INT16_MIN;
	int32_t t50 = 156147784;

	t50 = (x229+(x230|(x231/x232)));

	if (t50 != 6) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = 93331LL;
	uint64_t x234 = 32502582593LLU;
	static uint32_t x235 = 137U;
	int64_t x236 = -53035LL;
	static uint64_t t51 = 23224069LLU;

	t51 = (x233+(x234|(x235/x236)));

	if (t51 != 32502675924LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x237 = 20U;
	uint16_t x238 = 242U;
	uint8_t x239 = 0U;
	int32_t t52 = 104675811;

	t52 = (x237+(x238|(x239/x240)));

	if (t52 != 262) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x243 = 11341670086816634LLU;
	static uint8_t x244 = UINT8_MAX;
	volatile uint64_t t53 = 728918789846LLU;

	t53 = (x241+(x242|(x243/x244)));

	if (t53 != 44477137618770LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x246 = UINT64_MAX;
	static int16_t x248 = 2;

	t54 = (x245+(x246|(x247/x248)));

	if (t54 != 1107881705283685LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MIN;
	int32_t x251 = 0;
	int64_t x252 = -1LL;

	t55 = (x249+(x250|(x251/x252)));

	if (t55 != -256LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = 3;
	int16_t x254 = 7444;
	uint64_t x255 = 59292614564191LLU;
	static int16_t x256 = INT16_MIN;
	uint64_t t56 = 477908307251932LLU;

	t56 = (x253+(x254|(x255/x256)));

	if (t56 != 7447LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x257 = -682131224443LL;
	int16_t x258 = -3203;
	static uint32_t x259 = UINT32_MAX;
	int16_t x260 = 1;

	t57 = (x257+(x258|(x259/x260)));

	if (t57 != -677836257148LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = -840618556721200LL;
	volatile uint64_t x262 = 2380079999LLU;
	volatile int64_t x263 = -23397075840LL;

	t58 = (x261+(x262|(x263/x264)));

	if (t58 != 18445903480920482767LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x269 = UINT16_MAX;
	int64_t x270 = INT64_MIN;
	uint16_t x271 = 1281U;
	int64_t x272 = -621322261716LL;
	int64_t t59 = -15LL;

	t59 = (x269+(x270|(x271/x272)));

	if (t59 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x273 = 18696U;
	static int16_t x274 = INT16_MIN;
	uint32_t x275 = UINT32_MAX;
	int64_t x276 = INT64_MIN;
	int64_t t60 = 536918889743LL;

	t60 = (x273+(x274|(x275/x276)));

	if (t60 != -14072LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x281 = 29U;
	int8_t x283 = INT8_MAX;
	uint64_t x284 = 34949476238391295LLU;
	static uint64_t t61 = 12105768164LLU;

	t61 = (x281+(x282|(x283/x284)));

	if (t61 != 34LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x289 = INT8_MIN;
	int32_t x290 = -1;
	uint8_t x291 = UINT8_MAX;
	int32_t x292 = -1;
	int32_t t62 = -1;

	t62 = (x289+(x290|(x291/x292)));

	if (t62 != -129) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x293 = INT32_MIN;
	uint32_t x294 = 182183203U;
	int16_t x295 = 15;
	int64_t x296 = INT64_MAX;
	volatile int64_t t63 = -51546126680544LL;

	t63 = (x293+(x294|(x295/x296)));

	if (t63 != -1965300445LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x297 = -1;
	uint32_t x300 = 3044189U;
	volatile uint32_t t64 = 55053446U;

	t64 = (x297+(x298|(x299/x300)));

	if (t64 != 4294967167U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x301 = -33705379;
	int32_t x302 = -261;
	uint16_t x303 = 1811U;
	volatile uint64_t x304 = UINT64_MAX;
	static uint64_t t65 = 8357LLU;

	t65 = (x301+(x302|(x303/x304)));

	if (t65 != 18446744073675845976LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x313 = UINT64_MAX;
	static uint16_t x314 = 7U;
	static int16_t x315 = -7;
	int8_t x316 = 8;
	volatile uint64_t t66 = 2222400294951LLU;

	t66 = (x313+(x314|(x315/x316)));

	if (t66 != 6LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = -30;
	volatile int8_t x319 = INT8_MIN;
	uint64_t x320 = UINT64_MAX;
	uint64_t t67 = 561059LLU;

	t67 = (x317+(x318|(x319/x320)));

	if (t67 != 18446744073709518818LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = -5;
	uint16_t x327 = 56U;
	static uint16_t x328 = 1U;
	int32_t t68 = -50834361;

	t68 = (x325+(x326|(x327/x328)));

	if (t68 != -2147483597) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x330 = 192U;
	int16_t x332 = INT16_MAX;
	uint64_t t69 = 604850379670412778LLU;

	t69 = (x329+(x330|(x331/x332)));

	if (t69 != 28076125902LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x333 = INT8_MIN;
	int8_t x334 = INT8_MIN;
	volatile int8_t x335 = -37;
	uint8_t x336 = 46U;
	int32_t t70 = -175608499;

	t70 = (x333+(x334|(x335/x336)));

	if (t70 != -256) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x337 = -1;
	int16_t x338 = 5136;
	volatile int64_t x339 = 1LL;
	uint64_t x340 = UINT64_MAX;
	static volatile uint64_t t71 = 4094017085231LLU;

	t71 = (x337+(x338|(x339/x340)));

	if (t71 != 5135LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x342 = INT8_MAX;
	volatile int16_t x343 = 3;
	static uint32_t x344 = 921716U;
	int64_t t72 = -129827095961LL;

	t72 = (x341+(x342|(x343/x344)));

	if (t72 != 259503LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x346 = 97388954826166433LL;
	int16_t x347 = -29;
	int16_t x348 = INT16_MAX;
	static volatile int64_t t73 = 2151006036304555793LL;

	t73 = (x345+(x346|(x347/x348)));

	if (t73 != 97388956973650080LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x351 = INT32_MIN;
	volatile uint32_t t74 = 170U;

	t74 = (x349+(x350|(x351/x352)));

	if (t74 != 3096224U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = 11868090;
	uint8_t x354 = 0U;
	uint32_t x355 = 481U;

	t75 = (x353+(x354|(x355/x356)));

	if (t75 != 11868090LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x357 = INT8_MIN;
	int16_t x358 = 727;
	int16_t x359 = INT16_MIN;
	static int64_t x360 = -11799366990640781LL;
	int64_t t76 = -13667254129753264LL;

	t76 = (x357+(x358|(x359/x360)));

	if (t76 != 599LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x361 = -14077662702LL;
	int8_t x362 = -1;
	static int8_t x363 = INT8_MAX;
	uint64_t x364 = UINT64_MAX;
	uint64_t t77 = 7423429LLU;

	t77 = (x361+(x362|(x363/x364)));

	if (t77 != 18446744059631888913LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x365 = UINT8_MAX;
	int16_t x366 = -3;
	int16_t x367 = INT16_MAX;
	int32_t x368 = INT32_MIN;
	volatile int32_t t78 = -14090292;

	t78 = (x365+(x366|(x367/x368)));

	if (t78 != 252) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x370 = -5887683199253LL;
	volatile uint16_t x371 = 2870U;

	t79 = (x369+(x370|(x371/x372)));

	if (t79 != -5887683199381LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x373 = INT8_MIN;
	uint8_t x374 = UINT8_MAX;
	static volatile int32_t x375 = -1;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t80 = 425483144770473LLU;

	t80 = (x373+(x374|(x375/x376)));

	if (t80 != 127LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x378 = INT8_MIN;
	static int32_t x379 = INT32_MIN;
	int64_t t81 = -9LL;

	t81 = (x377+(x378|(x379/x380)));

	if (t81 != -126LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x381 = 129U;
	static volatile int32_t x383 = -4;
	int8_t x384 = -1;
	volatile uint64_t t82 = 38LLU;

	t82 = (x381+(x382|(x383/x384)));

	if (t82 != 28713853647LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x385 = INT32_MIN;
	static int32_t x386 = 35;
	volatile int8_t x387 = INT8_MIN;
	int64_t x388 = -32979635787041337LL;
	volatile int64_t t83 = -52196LL;

	t83 = (x385+(x386|(x387/x388)));

	if (t83 != -2147483613LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x391 = INT16_MIN;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t84 = -3858;

	t84 = (x389+(x390|(x391/x392)));

	if (t84 != -744103) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x393 = INT8_MIN;
	int32_t x394 = 112;
	int16_t x395 = 11;
	int64_t t85 = 12250LL;

	t85 = (x393+(x394|(x395/x396)));

	if (t85 != -16LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x397 = INT8_MIN;
	volatile int32_t x399 = INT32_MIN;
	uint32_t x400 = 25197U;

	t86 = (x397+(x398|(x399/x400)));

	if (t86 != 85119U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x401 = 56462822LLU;
	int32_t x402 = 5178;
	int32_t x403 = 650;
	uint16_t x404 = 37U;
	volatile uint64_t t87 = 7LLU;

	t87 = (x401+(x402|(x403/x404)));

	if (t87 != 56468001LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x405 = UINT8_MAX;
	int8_t x406 = INT8_MIN;
	int32_t x407 = -1;
	static volatile int32_t t88 = -1;

	t88 = (x405+(x406|(x407/x408)));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x409 = -1LL;
	int32_t x410 = -1;
	int8_t x411 = INT8_MIN;
	int32_t x412 = INT32_MIN;

	t89 = (x409+(x410|(x411/x412)));

	if (t89 != -2LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x413 = INT32_MIN;
	int8_t x414 = -1;
	int8_t x415 = INT8_MIN;
	volatile uint64_t t90 = 0LLU;

	t90 = (x413+(x414|(x415/x416)));

	if (t90 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x417 = -3927770663221348645LL;
	volatile int16_t x419 = INT16_MAX;
	uint8_t x420 = 15U;
	int64_t t91 = 568741860607939610LL;

	t91 = (x417+(x418|(x419/x420)));

	if (t91 != -3927770663221348646LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x421 = UINT16_MAX;
	static uint8_t x422 = 37U;
	volatile int32_t x423 = 2;
	static uint32_t t92 = 1U;

	t92 = (x421+(x422|(x423/x424)));

	if (t92 != 65572U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x425 = INT64_MIN;
	uint8_t x426 = 2U;
	int16_t x427 = INT16_MAX;

	t93 = (x425+(x426|(x427/x428)));

	if (t93 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x429 = INT16_MIN;
	volatile int16_t x430 = -1;
	uint16_t x431 = 125U;
	uint64_t x432 = UINT64_MAX;

	t94 = (x429+(x430|(x431/x432)));

	if (t94 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x438 = INT32_MIN;
	volatile uint16_t x439 = 446U;
	int64_t x440 = INT64_MAX;
	static int64_t t95 = -588079904100LL;

	t95 = (x437+(x438|(x439/x440)));

	if (t95 != -2147483521LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x441 = 11477412LLU;
	int32_t x442 = -1;
	static int32_t x443 = INT32_MAX;
	uint64_t t96 = 4635865LLU;

	t96 = (x441+(x442|(x443/x444)));

	if (t96 != 11477411LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x445 = -1;
	volatile uint32_t x446 = 46U;
	int64_t x448 = -8225131230LL;
	volatile int64_t t97 = 92097723665263LL;

	t97 = (x445+(x446|(x447/x448)));

	if (t97 != 45LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x450 = INT16_MAX;
	int64_t x452 = INT64_MAX;
	int64_t t98 = 90LL;

	t98 = (x449+(x450|(x451/x452)));

	if (t98 != 38820LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x453 = -1;
	int8_t x456 = 11;
	volatile int32_t t99 = -670;

	t99 = (x453+(x454|(x455/x456)));

	if (t99 != -9632) { NG(); } else { ; }
	
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

