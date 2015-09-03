#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x9 = 1494643LLU;
int64_t x13 = 7042085LL;
static volatile int32_t x16 = INT32_MIN;
int64_t t2 = 21389263LL;
uint64_t x19 = 67947908332232042LLU;
int32_t x21 = -1;
static uint8_t x22 = 110U;
int32_t x24 = -1;
uint32_t x26 = 6U;
static int16_t x28 = INT16_MIN;
uint8_t x31 = 38U;
static volatile int32_t t6 = 23095;
int8_t x36 = -1;
uint32_t t7 = 17837245U;
volatile int32_t x44 = -1105896;
static volatile uint64_t t11 = 2LLU;
int32_t x54 = 19;
static uint16_t x68 = 376U;
static volatile int64_t t15 = 0LL;
int8_t x70 = -1;
uint64_t x72 = 129LLU;
int8_t x80 = INT8_MAX;
static int32_t x85 = 9;
volatile int64_t t20 = -133860353271013717LL;
static volatile int16_t x100 = INT16_MIN;
int64_t t22 = -40771188863LL;
int16_t x107 = -10;
volatile int32_t t23 = -257742;
volatile int8_t x117 = 1;
volatile int32_t x118 = INT32_MAX;
int16_t x119 = INT16_MAX;
int64_t x122 = 99877LL;
int64_t t29 = 2996657918LL;
static int32_t x137 = -1;
volatile int16_t x139 = 74;
volatile int64_t x143 = -1LL;
uint16_t x146 = UINT16_MAX;
int32_t t32 = 0;
int8_t x152 = INT8_MIN;
int8_t x153 = INT8_MIN;
volatile int64_t t34 = -16296659LL;
int32_t x157 = INT32_MIN;
volatile int8_t x165 = INT8_MIN;
uint64_t x171 = UINT64_MAX;
volatile int8_t x176 = INT8_MIN;
uint16_t x178 = 7185U;
int8_t x179 = 1;
int16_t x185 = -1;
int8_t x186 = -1;
int8_t x193 = INT8_MAX;
static uint64_t x195 = 16728717009LLU;
static int64_t x199 = INT64_MIN;
static uint8_t x200 = 6U;
int64_t t44 = -5264580725674LL;
uint32_t x210 = 68670982U;
uint32_t x212 = 76460U;
volatile int64_t x213 = INT64_MAX;
static int16_t x216 = -1;
int32_t x217 = INT32_MIN;
static int16_t x218 = -1;
int64_t x219 = -771357872598536LL;
int64_t t48 = -5585335LL;
static volatile int64_t t49 = 4228354LL;
int32_t x229 = -19;
volatile uint32_t x234 = 1807U;
int8_t x235 = INT8_MAX;
uint64_t x238 = UINT64_MAX;
int16_t x241 = INT16_MIN;
static uint64_t t55 = 3606LLU;
uint8_t x259 = 34U;
int8_t x262 = 0;
volatile int32_t t58 = -116636;
volatile int8_t x270 = INT8_MAX;
uint8_t x292 = 2U;
int64_t t63 = -2772532007796598LL;
volatile int32_t x308 = INT32_MAX;
volatile uint64_t t67 = 196544357041448LLU;
volatile int32_t t68 = -2533;
int8_t x318 = INT8_MIN;
static volatile int32_t x331 = 507;
volatile int8_t x341 = INT8_MAX;
static uint16_t x344 = 13399U;
static volatile uint32_t x349 = 254821174U;
static volatile uint32_t t76 = 46957877U;
int16_t x367 = INT16_MAX;
int64_t t79 = -191686078425951129LL;
uint16_t x377 = UINT16_MAX;
int64_t x381 = INT64_MIN;
int8_t x382 = INT8_MIN;
int8_t x383 = INT8_MAX;
int64_t x385 = 0LL;
int8_t x395 = INT8_MIN;
uint32_t x400 = 52U;
volatile int32_t t88 = -1164606;
uint8_t x416 = 0U;
int32_t x422 = -1;
volatile uint32_t t91 = 1225023U;
uint8_t x429 = 7U;
volatile int64_t x430 = INT64_MAX;
volatile int64_t x431 = INT64_MAX;
static int64_t x443 = INT64_MIN;
static int8_t x448 = INT8_MAX;
uint64_t x449 = 209633664840431274LLU;
static volatile uint64_t t97 = 18LLU;
static int16_t x458 = INT16_MIN;
volatile int32_t x460 = INT32_MAX;
uint64_t t99 = 100LLU;


void f0(void) {
	volatile int32_t x5 = INT32_MAX;
	static uint64_t x6 = 3LLU;
	int16_t x7 = INT16_MIN;
	int16_t x8 = -1;
	volatile uint64_t t0 = 0LLU;

	t0 = ((x5-(x6%x7))+x8);

	if (t0 != 2147483643LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = -2;
	int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MAX;
	volatile uint64_t t1 = 102LLU;

	t1 = ((x9-(x10%x11))+x12);

	if (t1 != 1494772LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = -1LL;
	uint32_t x15 = 782866743U;

	t2 = ((x13-(x14%x15))+x16);

	if (t2 != -2140441562LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	int16_t x18 = INT16_MIN;
	uint8_t x20 = 98U;
	volatile uint64_t t3 = 1394705669207LLU;

	t3 = ((x17-(x18%x19))+x20);

	if (t3 != 18413883158034916247LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x23 = 7U;
	volatile int32_t t4 = 3311;

	t4 = ((x21-(x22%x23))+x24);

	if (t4 != -7) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = INT32_MAX;
	int8_t x27 = INT8_MIN;
	volatile uint32_t t5 = 14962U;

	t5 = ((x25-(x26%x27))+x28);

	if (t5 != 2147450873U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 4;
	static int8_t x30 = INT8_MIN;
	uint16_t x32 = 58U;

	t6 = ((x29-(x30%x31))+x32);

	if (t6 != 76) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = UINT32_MAX;
	int32_t x34 = INT32_MIN;
	int8_t x35 = -1;

	t7 = ((x33-(x34%x35))+x36);

	if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	int8_t x38 = INT8_MIN;
	volatile int8_t x39 = INT8_MIN;
	uint32_t x40 = 51U;
	volatile uint32_t t8 = 23U;

	t8 = ((x37-(x38%x39))+x40);

	if (t8 != 32818U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	static int64_t x42 = INT64_MAX;
	int64_t x43 = 1LL;
	static int64_t t9 = -253975LL;

	t9 = ((x41-(x42%x43))+x44);

	if (t9 != 2146377751LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = INT8_MIN;
	static uint64_t x46 = UINT64_MAX;
	static int8_t x47 = -1;
	int64_t x48 = -1LL;
	volatile uint64_t t10 = 18LLU;

	t10 = ((x45-(x46%x47))+x48);

	if (t10 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	volatile uint16_t x50 = UINT16_MAX;
	uint64_t x51 = 25023477LLU;
	int32_t x52 = INT32_MIN;

	t11 = ((x49-(x50%x51))+x52);

	if (t11 != 9223372034707226625LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MAX;
	volatile uint32_t x55 = 8180U;
	volatile uint32_t x56 = 378U;
	static volatile uint32_t t12 = 153292U;

	t12 = ((x53-(x54%x55))+x56);

	if (t12 != 2147484006U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	int64_t x58 = -1LL;
	static int8_t x59 = INT8_MIN;
	volatile uint32_t x60 = UINT32_MAX;
	int64_t t13 = 157559346697222235LL;

	t13 = ((x57-(x58%x59))+x60);

	if (t13 != 2147483648LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	static volatile int32_t x62 = INT32_MAX;
	uint16_t x63 = 8U;
	int8_t x64 = INT8_MIN;
	static int32_t t14 = 5322;

	t14 = ((x61-(x62%x63))+x64);

	if (t14 != -263) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1LL;
	int16_t x66 = -286;
	volatile int8_t x67 = INT8_MIN;

	t15 = ((x65-(x66%x67))+x68);

	if (t15 != 405LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x69 = 19707U;
	int8_t x71 = INT8_MAX;
	uint64_t t16 = 61851838LLU;

	t16 = ((x69-(x70%x71))+x72);

	if (t16 != 19837LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = INT16_MIN;
	int32_t x74 = INT32_MIN;
	int16_t x75 = INT16_MIN;
	volatile int64_t x76 = -161831038LL;
	volatile int64_t t17 = -617955259862607LL;

	t17 = ((x73-(x74%x75))+x76);

	if (t17 != -161863806LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MAX;
	int8_t x78 = -1;
	uint32_t x79 = 12141799U;
	volatile uint32_t t18 = 90U;

	t18 = ((x77-(x78%x79))+x80);

	if (t18 != 4286055302U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x86 = -5408559845LL;
	int64_t x87 = -1LL;
	volatile int64_t x88 = 117738306933LL;
	volatile int64_t t19 = -436703593500446LL;

	t19 = ((x85-(x86%x87))+x88);

	if (t19 != 117738306942LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = -1;
	int16_t x94 = -169;
	volatile int8_t x95 = INT8_MAX;
	volatile int64_t x96 = INT64_MIN;

	t20 = ((x93-(x94%x95))+x96);

	if (t20 != -9223372036854775767LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 6419U;
	volatile int8_t x98 = INT8_MIN;
	uint32_t x99 = UINT32_MAX;
	static uint32_t t21 = 11181259U;

	t21 = ((x97-(x98%x99))+x100);

	if (t21 != 4294941075U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = 10794154752083997LL;
	static int64_t x102 = 30LL;
	int32_t x103 = 1835397;
	int8_t x104 = INT8_MIN;

	t22 = ((x101-(x102%x103))+x104);

	if (t22 != 10794154752083839LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = 1U;
	uint16_t x106 = UINT16_MAX;
	int8_t x108 = -1;

	t23 = ((x105-(x106%x107))+x108);

	if (t23 != -5) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = 33;
	int16_t x110 = -14941;
	int8_t x111 = 25;
	volatile int32_t x112 = 1;
	int32_t t24 = -864;

	t24 = ((x109-(x110%x111))+x112);

	if (t24 != 50) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x120 = -71LL;
	int64_t t25 = 41378240270798645LL;

	t25 = ((x117-(x118%x119))+x120);

	if (t25 != -71LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = 1333LLU;
	static int64_t x123 = 11LL;
	uint64_t x124 = UINT64_MAX;
	uint64_t t26 = 35591LLU;

	t26 = ((x121-(x122%x123))+x124);

	if (t26 != 1324LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = 15265572LLU;
	static int16_t x126 = INT16_MAX;
	static uint64_t x127 = 5535283361094LLU;
	int8_t x128 = INT8_MAX;
	static uint64_t t27 = 103626907750315LLU;

	t27 = ((x125-(x126%x127))+x128);

	if (t27 != 15232932LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = -28016LL;
	int32_t x130 = -1;
	static int16_t x131 = 141;
	static int8_t x132 = 33;
	volatile int64_t t28 = -4466207649LL;

	t28 = ((x129-(x130%x131))+x132);

	if (t28 != -27982LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = 73U;
	int32_t x134 = INT32_MAX;
	volatile int64_t x135 = INT64_MIN;
	static int64_t x136 = -1LL;

	t29 = ((x133-(x134%x135))+x136);

	if (t29 != -2147483575LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x138 = 1U;
	volatile int32_t x140 = -1;
	int32_t t30 = 473;

	t30 = ((x137-(x138%x139))+x140);

	if (t30 != -3) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x141 = 1169LL;
	static uint32_t x142 = UINT32_MAX;
	int16_t x144 = -1;
	static int64_t t31 = 8331534LL;

	t31 = ((x141-(x142%x143))+x144);

	if (t31 != 1168LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = 1;
	int16_t x147 = INT16_MAX;
	volatile uint8_t x148 = 71U;

	t32 = ((x145-(x146%x147))+x148);

	if (t32 != 71) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x149 = UINT64_MAX;
	static uint64_t x150 = 937340295LLU;
	static int8_t x151 = INT8_MAX;
	volatile uint64_t t33 = 70102LLU;

	t33 = ((x149-(x150%x151))+x152);

	if (t33 != 18446744073709551456LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x154 = INT32_MIN;
	volatile int32_t x155 = 630;
	int64_t x156 = -1LL;

	t34 = ((x153-(x154%x155))+x156);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x158 = 15336294771380201LLU;
	uint16_t x159 = UINT16_MAX;
	uint32_t x160 = UINT32_MAX;
	volatile uint64_t t35 = 243287931577LLU;

	t35 = ((x157-(x158%x159))+x160);

	if (t35 != 2147438996LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = -84030260;
	uint8_t x162 = 6U;
	int64_t x163 = INT64_MAX;
	volatile int64_t x164 = -7061891030822LL;
	int64_t t36 = 10060642950LL;

	t36 = ((x161-(x162%x163))+x164);

	if (t36 != -7061975061088LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x166 = -11;
	static uint32_t x167 = UINT32_MAX;
	volatile int32_t x168 = 72243;
	volatile uint32_t t37 = 75576398U;

	t37 = ((x165-(x166%x167))+x168);

	if (t37 != 72126U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x169 = -1LL;
	uint16_t x170 = UINT16_MAX;
	int16_t x172 = INT16_MAX;
	volatile uint64_t t38 = 943425782LLU;

	t38 = ((x169-(x170%x171))+x172);

	if (t38 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x173 = -1LL;
	static int16_t x174 = INT16_MAX;
	uint16_t x175 = UINT16_MAX;
	int64_t t39 = 1LL;

	t39 = ((x173-(x174%x175))+x176);

	if (t39 != -32896LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = -1;
	volatile int64_t x180 = -1LL;
	volatile int64_t t40 = 302853LL;

	t40 = ((x177-(x178%x179))+x180);

	if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x187 = INT64_MIN;
	volatile int8_t x188 = 2;
	static volatile int64_t t41 = 11856899742LL;

	t41 = ((x185-(x186%x187))+x188);

	if (t41 != 2LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x194 = 0;
	int64_t x196 = -1LL;
	volatile uint64_t t42 = 8792988196860LLU;

	t42 = ((x193-(x194%x195))+x196);

	if (t42 != 126LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x197 = 0;
	int32_t x198 = INT32_MIN;
	static int64_t t43 = 1LL;

	t43 = ((x197-(x198%x199))+x200);

	if (t43 != 2147483654LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = -9192;
	int8_t x202 = -1;
	uint8_t x203 = 33U;
	int64_t x204 = -1LL;

	t44 = ((x201-(x202%x203))+x204);

	if (t44 != -9192LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x205 = UINT8_MAX;
	static int32_t x206 = INT32_MAX;
	static volatile uint8_t x207 = 56U;
	uint16_t x208 = UINT16_MAX;
	int32_t t45 = 0;

	t45 = ((x205-(x206%x207))+x208);

	if (t45 != 65775) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x209 = INT8_MIN;
	volatile int32_t x211 = -42563374;
	volatile uint32_t t46 = 254U;

	t46 = ((x209-(x210%x211))+x212);

	if (t46 != 4226372646U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x214 = UINT16_MAX;
	volatile uint8_t x215 = 1U;
	int64_t t47 = -232223936LL;

	t47 = ((x213-(x214%x215))+x216);

	if (t47 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x220 = -4191655LL;

	t48 = ((x217-(x218%x219))+x220);

	if (t48 != -2151675302LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = 14059;
	int64_t x222 = INT64_MIN;
	static volatile int32_t x223 = 5081;
	uint16_t x224 = 446U;

	t49 = ((x221-(x222%x223))+x224);

	if (t49 != 15518LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x230 = INT64_MIN;
	volatile int8_t x231 = -10;
	volatile int16_t x232 = 0;
	volatile int64_t t50 = 178345573LL;

	t50 = ((x229-(x230%x231))+x232);

	if (t50 != -11LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x233 = -1;
	int8_t x236 = INT8_MAX;
	uint32_t t51 = 12101911U;

	t51 = ((x233-(x234%x235))+x236);

	if (t51 != 97U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = INT8_MIN;
	int16_t x239 = INT16_MIN;
	static int32_t x240 = INT32_MAX;
	volatile uint64_t t52 = 6412873184319LLU;

	t52 = ((x237-(x238%x239))+x240);

	if (t52 != 2147450752LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x242 = -3585;
	uint8_t x243 = UINT8_MAX;
	int32_t x244 = -355456038;
	int32_t t53 = 649128;

	t53 = ((x241-(x242%x243))+x244);

	if (t53 != -355488791) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x245 = INT16_MIN;
	int32_t x246 = 3623112;
	static int16_t x247 = INT16_MIN;
	volatile int32_t x248 = -1;
	int32_t t54 = -133015873;

	t54 = ((x245-(x246%x247))+x248);

	if (t54 != -51401) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x253 = 2U;
	static int8_t x254 = INT8_MAX;
	int32_t x255 = INT32_MAX;
	uint64_t x256 = 1LLU;

	t55 = ((x253-(x254%x255))+x256);

	if (t55 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x257 = -1;
	uint32_t x258 = 247379U;
	int32_t x260 = -1;
	uint32_t t56 = 74976U;

	t56 = ((x257-(x258%x259))+x260);

	if (t56 != 4294967265U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x261 = 1990U;
	int32_t x263 = -1;
	uint32_t x264 = 59742U;
	uint32_t t57 = 2U;

	t57 = ((x261-(x262%x263))+x264);

	if (t57 != 61732U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = -1;
	volatile int16_t x266 = INT16_MAX;
	int32_t x267 = INT32_MIN;
	int8_t x268 = INT8_MIN;

	t58 = ((x265-(x266%x267))+x268);

	if (t58 != -32896) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x269 = INT16_MIN;
	volatile uint32_t x271 = 180626526U;
	static volatile uint64_t x272 = UINT64_MAX;
	volatile uint64_t t59 = 5491389LLU;

	t59 = ((x269-(x270%x271))+x272);

	if (t59 != 4294934400LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = INT8_MIN;
	int32_t x274 = INT32_MIN;
	uint16_t x275 = 3352U;
	volatile int8_t x276 = -1;
	volatile int32_t t60 = 4700905;

	t60 = ((x273-(x274%x275))+x276);

	if (t60 != 1255) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = INT16_MIN;
	int64_t x278 = -1LL;
	static volatile uint16_t x279 = UINT16_MAX;
	int32_t x280 = INT32_MAX;
	int64_t t61 = -371LL;

	t61 = ((x277-(x278%x279))+x280);

	if (t61 != 2147450880LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = INT64_MIN;
	uint64_t x286 = UINT64_MAX;
	volatile int32_t x287 = INT32_MAX;
	static int64_t x288 = -55234794310770LL;
	uint64_t t62 = 44485098326244LLU;

	t62 = ((x285-(x286%x287))+x288);

	if (t62 != 9223316802060465035LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x289 = 23;
	int64_t x290 = -1LL;
	uint16_t x291 = 3U;

	t63 = ((x289-(x290%x291))+x292);

	if (t63 != 26LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = -1;
	uint32_t x295 = 812800U;
	static int32_t x296 = -1203005;
	uint32_t t64 = 29566U;

	t64 = ((x293-(x294%x295))+x296);

	if (t64 != 4293599428U) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MAX;
	uint64_t x299 = 207760737321913LLU;
	volatile uint64_t x300 = 61536502503649LLU;
	uint64_t t65 = 152195351LLU;

	t65 = ((x297-(x298%x299))+x300);

	if (t65 != 9223433571209795810LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x301 = 502055339313619774LLU;
	int64_t x302 = -1LL;
	int32_t x303 = INT32_MAX;
	volatile int8_t x304 = INT8_MAX;
	volatile uint64_t t66 = 610030709738426LLU;

	t66 = ((x301-(x302%x303))+x304);

	if (t66 != 502055339313619902LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x305 = 44U;
	int8_t x306 = -25;
	uint64_t x307 = 212358947LLU;

	t67 = ((x305-(x306%x307))+x308);

	if (t67 != 1981926316LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = 1071;
	volatile int32_t x310 = INT32_MIN;
	int8_t x311 = INT8_MIN;
	uint8_t x312 = 6U;

	t68 = ((x309-(x310%x311))+x312);

	if (t68 != 1077) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x313 = INT8_MAX;
	uint32_t x314 = 6226161U;
	volatile int64_t x315 = INT64_MAX;
	static volatile uint16_t x316 = 58U;
	int64_t t69 = 104809955344LL;

	t69 = ((x313-(x314%x315))+x316);

	if (t69 != -6225976LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x317 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t70 = -284822638;

	t70 = ((x317-(x318%x319))+x320);

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = -30735963LL;
	int8_t x326 = -15;
	int64_t x327 = INT64_MAX;
	static uint32_t x328 = 4229668U;
	int64_t t71 = -6LL;

	t71 = ((x325-(x326%x327))+x328);

	if (t71 != -26506280LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x329 = -132529566;
	volatile uint64_t x330 = 99975LLU;
	int16_t x332 = -7371;
	static volatile uint64_t t72 = 5LLU;

	t72 = ((x329-(x330%x331))+x332);

	if (t72 != 18446744073577014583LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x337 = 78U;
	volatile uint8_t x338 = UINT8_MAX;
	int32_t x339 = 66598;
	int8_t x340 = INT8_MIN;
	volatile int32_t t73 = -42559806;

	t73 = ((x337-(x338%x339))+x340);

	if (t73 != -305) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x342 = INT8_MAX;
	static uint32_t x343 = 192587U;
	static volatile uint32_t t74 = 3419U;

	t74 = ((x341-(x342%x343))+x344);

	if (t74 != 13399U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x345 = INT8_MAX;
	int32_t x346 = 16;
	int32_t x347 = INT32_MIN;
	int8_t x348 = -1;
	volatile int32_t t75 = -1;

	t75 = ((x345-(x346%x347))+x348);

	if (t75 != 110) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x350 = -1;
	int32_t x351 = 60709;
	volatile int16_t x352 = 0;

	t76 = ((x349-(x350%x351))+x352);

	if (t76 != 254821175U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MIN;
	int64_t x355 = -196481LL;
	uint32_t x356 = UINT32_MAX;
	static int64_t t77 = 15089818770LL;

	t77 = ((x353-(x354%x355))+x356);

	if (t77 != 4294967295LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x365 = INT32_MIN;
	volatile int64_t x366 = -1LL;
	uint16_t x368 = 3U;
	int64_t t78 = -95838202LL;

	t78 = ((x365-(x366%x367))+x368);

	if (t78 != -2147483644LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x373 = 13U;
	int32_t x374 = INT32_MAX;
	static int16_t x375 = -8862;
	int64_t x376 = -160074153LL;

	t79 = ((x373-(x374%x375))+x376);

	if (t79 != -160082499LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x378 = INT16_MIN;
	volatile uint32_t x379 = 70119U;
	int16_t x380 = 9688;
	uint32_t t80 = 2966U;

	t80 = ((x377-(x378%x379))+x380);

	if (t80 != 69683U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x384 = -1;
	int64_t t81 = INT64_MIN;

	t81 = ((x381-(x382%x383))+x384);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x386 = -1LL;
	volatile uint16_t x387 = UINT16_MAX;
	int8_t x388 = INT8_MAX;
	int64_t t82 = 79976762LL;

	t82 = ((x385-(x386%x387))+x388);

	if (t82 != 128LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x389 = UINT16_MAX;
	static int32_t x390 = INT32_MIN;
	int16_t x391 = INT16_MAX;
	uint16_t x392 = 1100U;
	volatile int32_t t83 = 29770;

	t83 = ((x389-(x390%x391))+x392);

	if (t83 != 66637) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x393 = UINT64_MAX;
	int16_t x394 = INT16_MIN;
	uint32_t x396 = 15550855U;
	uint64_t t84 = 66037181LLU;

	t84 = ((x393-(x394%x395))+x396);

	if (t84 != 15550854LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x397 = 134173;
	static int32_t x398 = INT32_MIN;
	int64_t x399 = 990101213886LL;
	int64_t t85 = 10289651488LL;

	t85 = ((x397-(x398%x399))+x400);

	if (t85 != 2147617873LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x401 = -1;
	uint8_t x402 = 0U;
	static int8_t x403 = INT8_MAX;
	static uint8_t x404 = UINT8_MAX;
	int32_t t86 = -12391392;

	t86 = ((x401-(x402%x403))+x404);

	if (t86 != 254) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x405 = INT16_MIN;
	static int32_t x406 = 3584951;
	uint64_t x407 = UINT64_MAX;
	int32_t x408 = 422591;
	volatile uint64_t t87 = 547308997767821LLU;

	t87 = ((x405-(x406%x407))+x408);

	if (t87 != 18446744073706356488LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x409 = INT32_MAX;
	static uint8_t x410 = 103U;
	volatile int16_t x411 = 22;
	int8_t x412 = INT8_MIN;

	t88 = ((x409-(x410%x411))+x412);

	if (t88 != 2147483504) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x413 = 6U;
	static uint32_t x414 = UINT32_MAX;
	static int64_t x415 = INT64_MAX;
	volatile int64_t t89 = -220531362675LL;

	t89 = ((x413-(x414%x415))+x416);

	if (t89 != -4294967289LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x421 = -11;
	int32_t x423 = -1;
	int8_t x424 = INT8_MAX;
	int32_t t90 = -21896515;

	t90 = ((x421-(x422%x423))+x424);

	if (t90 != 116) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x425 = -1;
	static volatile uint32_t x426 = 113U;
	int8_t x427 = INT8_MIN;
	volatile uint32_t x428 = 19030922U;

	t91 = ((x425-(x426%x427))+x428);

	if (t91 != 19030808U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x432 = 4U;
	int64_t t92 = -169LL;

	t92 = ((x429-(x430%x431))+x432);

	if (t92 != 11LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x433 = -1;
	static uint16_t x434 = 0U;
	uint32_t x435 = 22522389U;
	uint8_t x436 = 13U;
	volatile uint32_t t93 = 32256U;

	t93 = ((x433-(x434%x435))+x436);

	if (t93 != 12U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x437 = -1020296;
	uint8_t x438 = UINT8_MAX;
	static int16_t x439 = -482;
	int32_t x440 = INT32_MAX;
	static volatile int32_t t94 = 62;

	t94 = ((x437-(x438%x439))+x440);

	if (t94 != 2146463096) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x441 = 80U;
	uint8_t x442 = 10U;
	int32_t x444 = -1;
	volatile int64_t t95 = -438147237025LL;

	t95 = ((x441-(x442%x443))+x444);

	if (t95 != 69LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x445 = 246081149U;
	int8_t x446 = -1;
	int32_t x447 = INT32_MIN;
	static uint32_t t96 = 32599U;

	t96 = ((x445-(x446%x447))+x448);

	if (t96 != 246081277U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x450 = 8058756U;
	uint8_t x451 = 17U;
	uint16_t x452 = UINT16_MAX;

	t97 = ((x449-(x450%x451))+x452);

	if (t97 != 209633664840496801LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x453 = -1;
	static uint32_t x454 = 2U;
	uint8_t x455 = 30U;
	volatile int8_t x456 = -14;
	uint32_t t98 = 46907U;

	t98 = ((x453-(x454%x455))+x456);

	if (t98 != 4294967279U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x457 = UINT64_MAX;
	int32_t x459 = 47;

	t99 = ((x457-(x458%x459))+x460);

	if (t99 != 2147483655LLU) { NG(); } else { ; }
	
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

