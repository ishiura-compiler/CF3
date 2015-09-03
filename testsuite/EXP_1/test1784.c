#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = 7U;
int32_t x14 = 531670432;
int32_t x15 = -1;
int32_t x20 = INT32_MIN;
int16_t x21 = INT16_MAX;
int8_t x26 = INT8_MIN;
int16_t x33 = INT16_MAX;
uint32_t x34 = UINT32_MAX;
int32_t x35 = INT32_MIN;
uint8_t x38 = UINT8_MAX;
int16_t x41 = INT16_MAX;
int8_t x44 = -1;
volatile int8_t x46 = -1;
static int64_t t11 = 35830381LL;
volatile int64_t x51 = -1LL;
static volatile uint8_t x56 = 22U;
volatile int64_t x57 = INT64_MAX;
int8_t x64 = -41;
int16_t x65 = -2;
volatile int64_t x68 = -1LL;
static int16_t x74 = INT16_MIN;
int8_t x79 = INT8_MIN;
int32_t x80 = 10212;
volatile int32_t t19 = -6582;
int8_t x88 = INT8_MIN;
int64_t x89 = INT64_MIN;
int16_t x91 = 1;
int32_t x92 = 265183336;
volatile int32_t t22 = -47;
int64_t x100 = -1LL;
static uint32_t x105 = UINT32_MAX;
int64_t x107 = INT64_MAX;
int32_t t26 = -241;
int64_t x109 = -1LL;
volatile int8_t x112 = 0;
int32_t t27 = -978;
int64_t x115 = -1LL;
int16_t x129 = INT16_MAX;
int32_t x132 = INT32_MIN;
int8_t x142 = -3;
int64_t x144 = INT64_MAX;
static int64_t t35 = 32031728375554LL;
uint16_t x146 = 4112U;
static int8_t x149 = INT8_MAX;
uint16_t x159 = UINT16_MAX;
static int16_t x163 = 1;
int32_t t40 = -214489588;
static volatile int64_t x167 = INT64_MAX;
volatile int32_t t44 = 7527;
int32_t x181 = 5895830;
static int16_t x189 = INT16_MIN;
int64_t x191 = INT64_MIN;
uint8_t x192 = 0U;
volatile int32_t t47 = 724;
static volatile uint64_t t49 = 140565588719005LLU;
static volatile int32_t t51 = -774048020;
static uint16_t x222 = 825U;
volatile int8_t x226 = -1;
uint64_t t57 = 5172156LLU;
int16_t x233 = INT16_MIN;
int64_t x241 = -1LL;
static int16_t x243 = INT16_MIN;
uint32_t x247 = 983564U;
volatile uint16_t x254 = 29433U;
uint64_t x256 = 460032589215LLU;
uint64_t t63 = 285760807015LLU;
static int16_t x259 = INT16_MIN;
int64_t x264 = 99742603848LL;
int16_t x269 = -1;
uint16_t x270 = UINT16_MAX;
int8_t x271 = -12;
volatile int32_t t68 = -1;
int64_t t69 = 3145882588954410LL;
volatile int64_t x291 = INT64_MIN;
int32_t t72 = 327;
uint64_t x296 = UINT64_MAX;
volatile uint64_t t73 = 497768LLU;
int16_t x300 = INT16_MIN;
int8_t x301 = INT8_MAX;
int8_t x307 = INT8_MIN;
volatile uint8_t x308 = UINT8_MAX;
static volatile int32_t t76 = -26975;
static int64_t x309 = -1839693LL;
volatile uint32_t x315 = 6U;
volatile int32_t t78 = 542816050;
int16_t x324 = -1;
int8_t x326 = INT8_MIN;
int16_t x331 = -1;
int64_t x334 = -416881871669LL;
volatile int8_t x340 = -1;
static volatile int32_t x344 = 1;
uint16_t x358 = 31661U;
volatile int64_t x360 = INT64_MIN;
static int64_t x364 = INT64_MAX;
uint64_t x372 = 454043697080548LLU;
static volatile uint64_t t92 = 30494LLU;
uint32_t x380 = UINT32_MAX;
static uint32_t t94 = 6419481U;
volatile uint8_t x385 = UINT8_MAX;
uint64_t x386 = 3523720783976746LLU;
int64_t x392 = INT64_MIN;
int64_t t97 = 31387747147LL;
volatile int32_t x393 = INT32_MIN;
static int64_t x398 = 437317LL;
volatile int64_t x400 = 423231535451611333LL;


void f0(void) {
	uint8_t x1 = 126U;
	static uint8_t x2 = UINT8_MAX;
	static volatile uint64_t x3 = 24697532645LLU;
	static volatile int64_t x4 = INT64_MIN;
	int64_t t0 = 251965589593951316LL;

	t0 = (((x1&x2)==x3)*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -234920484;
	int32_t x6 = INT32_MAX;
	volatile int8_t x8 = 1;
	static int32_t t1 = 681913;

	t1 = (((x5&x6)==x7)*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MAX;
	static int64_t x10 = -1LL;
	static volatile uint16_t x11 = 202U;
	volatile uint32_t x12 = 782771020U;
	uint32_t t2 = 949840U;

	t2 = (((x9&x10)==x11)*x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 2U;
	int8_t x16 = 6;
	volatile int32_t t3 = 1589;

	t3 = (((x13&x14)==x15)*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 3213U;
	int16_t x18 = -65;
	static volatile uint16_t x19 = 54U;
	volatile int32_t t4 = -148707;

	t4 = (((x17&x18)==x19)*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x22 = INT64_MIN;
	int32_t x23 = 10896199;
	int64_t x24 = INT64_MAX;
	static int64_t t5 = -1439037704LL;

	t5 = (((x21&x22)==x23)*x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = UINT16_MAX;
	uint32_t x27 = 1605607259U;
	uint32_t x28 = UINT32_MAX;
	volatile uint32_t t6 = 7319U;

	t6 = (((x25&x26)==x27)*x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 377208U;
	int16_t x30 = -1;
	volatile int16_t x31 = 5;
	volatile int16_t x32 = -1;
	static int32_t t7 = 188;

	t7 = (((x29&x30)==x31)*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = -1825;

	t8 = (((x33&x34)==x35)*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MAX;
	int16_t x39 = -1;
	static uint64_t x40 = 52190967531351643LLU;
	uint64_t t9 = 372237637LLU;

	t9 = (((x37&x38)==x39)*x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x42 = 5573U;
	int8_t x43 = INT8_MAX;
	int32_t t10 = 114431869;

	t10 = (((x41&x42)==x43)*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	volatile int64_t x47 = 188614845531963LL;
	int64_t x48 = INT64_MAX;

	t11 = (((x45&x46)==x47)*x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 1;
	uint8_t x50 = 6U;
	int64_t x52 = -11LL;
	volatile int64_t t12 = -60114715953249827LL;

	t12 = (((x49&x50)==x51)*x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	volatile int32_t x54 = -1;
	volatile int64_t x55 = 63652829724371923LL;
	int32_t t13 = 2239816;

	t13 = (((x53&x54)==x55)*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -1LL;
	uint16_t x59 = 81U;
	static uint64_t x60 = 7524882886120LLU;
	uint64_t t14 = 15401LLU;

	t14 = (((x57&x58)==x59)*x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	static int64_t x62 = INT64_MAX;
	int16_t x63 = INT16_MIN;
	int32_t t15 = 1;

	t15 = (((x61&x62)==x63)*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x66 = UINT64_MAX;
	uint16_t x67 = 4U;
	int64_t t16 = -1723111149245779LL;

	t16 = (((x65&x66)==x67)*x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	int64_t x70 = INT64_MAX;
	int64_t x71 = -89LL;
	static int64_t x72 = INT64_MIN;
	int64_t t17 = 2429LL;

	t17 = (((x69&x70)==x71)*x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 45;
	uint32_t x75 = UINT32_MAX;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -29876594;

	t18 = (((x73&x74)==x75)*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int32_t x78 = INT32_MIN;

	t19 = (((x77&x78)==x79)*x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MIN;
	static volatile int32_t x82 = -311;
	static int16_t x83 = INT16_MIN;
	static volatile int8_t x84 = INT8_MIN;
	int32_t t20 = 1;

	t20 = (((x81&x82)==x83)*x84);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 1789208460U;
	volatile uint8_t x86 = 12U;
	int64_t x87 = 19235859LL;
	volatile int32_t t21 = -57;

	t21 = (((x85&x86)==x87)*x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x90 = 25U;

	t22 = (((x89&x90)==x91)*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = 0;
	int16_t x95 = INT16_MIN;
	volatile uint16_t x96 = UINT16_MAX;
	static int32_t t23 = 5613;

	t23 = (((x93&x94)==x95)*x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = UINT32_MAX;
	int64_t x98 = INT64_MAX;
	uint8_t x99 = 108U;
	volatile int64_t t24 = -1648LL;

	t24 = (((x97&x98)==x99)*x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 70842134798142656LLU;
	volatile int32_t x102 = INT32_MIN;
	int8_t x103 = INT8_MAX;
	uint32_t x104 = 160U;
	volatile uint32_t t25 = 802704791U;

	t25 = (((x101&x102)==x103)*x104);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = 43746U;
	volatile int16_t x108 = INT16_MIN;

	t26 = (((x105&x106)==x107)*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = 0;
	uint16_t x111 = UINT16_MAX;

	t27 = (((x109&x110)==x111)*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 159076;
	uint8_t x114 = 2U;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -204778;

	t28 = (((x113&x114)==x115)*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MAX;
	int16_t x118 = INT16_MIN;
	volatile int8_t x119 = 3;
	static volatile int16_t x120 = INT16_MAX;
	volatile int32_t t29 = -316;

	t29 = (((x117&x118)==x119)*x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	uint8_t x122 = UINT8_MAX;
	static volatile int32_t x123 = INT32_MAX;
	static volatile int32_t x124 = INT32_MIN;
	int32_t t30 = 2356;

	t30 = (((x121&x122)==x123)*x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	static int8_t x126 = 5;
	int8_t x127 = -1;
	int32_t x128 = -39800561;
	volatile int32_t t31 = -48563;

	t31 = (((x125&x126)==x127)*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x130 = 26934100465286357LLU;
	volatile uint16_t x131 = 0U;
	int32_t t32 = -35479060;

	t32 = (((x129&x130)==x131)*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	uint16_t x134 = 27301U;
	static volatile uint64_t x135 = 60615109622645LLU;
	uint32_t x136 = 68220U;
	uint32_t t33 = 24U;

	t33 = (((x133&x134)==x135)*x136);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 3U;
	int16_t x138 = INT16_MIN;
	static volatile int16_t x139 = -1;
	int32_t x140 = -1;
	volatile int32_t t34 = -42;

	t34 = (((x137&x138)==x139)*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	static int8_t x143 = 4;

	t35 = (((x141&x142)==x143)*x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MAX;
	int64_t x147 = INT64_MIN;
	uint64_t x148 = 57396152977LLU;
	volatile uint64_t t36 = 446319301551144249LLU;

	t36 = (((x145&x146)==x147)*x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = -1;
	volatile int8_t x151 = INT8_MAX;
	int16_t x152 = -7;
	int32_t t37 = -315;

	t37 = (((x149&x150)==x151)*x152);

	if (t37 != -7) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MAX;
	static volatile int32_t x154 = INT32_MAX;
	uint16_t x155 = 13U;
	static uint32_t x156 = UINT32_MAX;
	uint32_t t38 = 18192U;

	t38 = (((x153&x154)==x155)*x156);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 27640U;
	int64_t x158 = -1LL;
	int64_t x160 = INT64_MIN;
	int64_t t39 = -922068330LL;

	t39 = (((x157&x158)==x159)*x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	static uint32_t x162 = UINT32_MAX;
	static uint8_t x164 = 70U;

	t40 = (((x161&x162)==x163)*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	volatile int8_t x166 = -1;
	volatile int64_t x168 = INT64_MIN;
	volatile int64_t t41 = -13466LL;

	t41 = (((x165&x166)==x167)*x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = -479;
	int16_t x170 = 52;
	int32_t x171 = INT32_MIN;
	uint64_t x172 = 169843933816665922LLU;
	uint64_t t42 = 230LLU;

	t42 = (((x169&x170)==x171)*x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 55273435241LL;
	int8_t x174 = INT8_MAX;
	static volatile uint32_t x175 = 73285537U;
	int64_t x176 = -1LL;
	int64_t t43 = 7010248786LL;

	t43 = (((x173&x174)==x175)*x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x177 = UINT16_MAX;
	static volatile int16_t x178 = INT16_MIN;
	int8_t x179 = -1;
	int16_t x180 = -598;

	t44 = (((x177&x178)==x179)*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x182 = -2;
	int64_t x183 = INT64_MAX;
	static uint32_t x184 = 50879088U;
	static uint32_t t45 = 5842812U;

	t45 = (((x181&x182)==x183)*x184);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	volatile uint32_t x186 = 32344U;
	int16_t x187 = 24;
	int16_t x188 = 11;
	volatile int32_t t46 = -3384;

	t46 = (((x185&x186)==x187)*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x190 = INT8_MAX;

	t47 = (((x189&x190)==x191)*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -645;
	int64_t x194 = 32746387585016626LL;
	int64_t x195 = INT64_MIN;
	int32_t x196 = 97;
	int32_t t48 = -7242;

	t48 = (((x193&x194)==x195)*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MAX;
	static uint64_t x198 = 1LLU;
	int16_t x199 = INT16_MIN;
	uint64_t x200 = UINT64_MAX;

	t49 = (((x197&x198)==x199)*x200);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	uint8_t x202 = UINT8_MAX;
	int8_t x203 = -1;
	int16_t x204 = -1;
	static volatile int32_t t50 = -77608;

	t50 = (((x201&x202)==x203)*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	static volatile int64_t x206 = -1LL;
	int64_t x207 = 6538204729LL;
	int8_t x208 = -1;

	t51 = (((x205&x206)==x207)*x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	volatile int64_t x210 = -25986660468932LL;
	int64_t x211 = INT64_MIN;
	volatile int8_t x212 = INT8_MIN;
	int32_t t52 = 113059;

	t52 = (((x209&x210)==x211)*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x213 = 3U;
	static volatile uint64_t x214 = 14715LLU;
	static int64_t x215 = INT64_MIN;
	int32_t x216 = -5068;
	volatile int32_t t53 = -25;

	t53 = (((x213&x214)==x215)*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x217 = UINT32_MAX;
	int8_t x218 = 0;
	static int8_t x219 = INT8_MAX;
	int32_t x220 = -17421411;
	static int32_t t54 = 2569;

	t54 = (((x217&x218)==x219)*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int64_t x223 = INT64_MIN;
	int64_t x224 = -9685LL;
	static int64_t t55 = 832043642374LL;

	t55 = (((x221&x222)==x223)*x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = -1;
	volatile int64_t x227 = -1649404LL;
	int8_t x228 = INT8_MIN;
	int32_t t56 = 410;

	t56 = (((x225&x226)==x227)*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 9U;
	int8_t x230 = INT8_MIN;
	int64_t x231 = -1LL;
	uint64_t x232 = 2063225LLU;

	t57 = (((x229&x230)==x231)*x232);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x234 = INT8_MAX;
	int8_t x235 = -11;
	int64_t x236 = -104639LL;
	static int64_t t58 = 122892045138LL;

	t58 = (((x233&x234)==x235)*x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MIN;
	int32_t x238 = -23;
	volatile int16_t x239 = INT16_MIN;
	int32_t x240 = -79;
	volatile int32_t t59 = -111;

	t59 = (((x237&x238)==x239)*x240);

	if (t59 != -79) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x242 = -517340644;
	static uint8_t x244 = 90U;
	int32_t t60 = -1271897;

	t60 = (((x241&x242)==x243)*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 94U;
	int8_t x246 = INT8_MAX;
	int16_t x248 = INT16_MIN;
	int32_t t61 = 74858237;

	t61 = (((x245&x246)==x247)*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MAX;
	volatile int16_t x250 = 1429;
	int16_t x251 = -1;
	uint16_t x252 = 25U;
	static int32_t t62 = 871275361;

	t62 = (((x249&x250)==x251)*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 496U;
	int8_t x255 = INT8_MIN;

	t63 = (((x253&x254)==x255)*x256);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = 1035;
	static uint8_t x258 = 105U;
	int16_t x260 = INT16_MIN;
	static int32_t t64 = 8;

	t64 = (((x257&x258)==x259)*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = -3599;
	volatile uint64_t x262 = 291766LLU;
	uint64_t x263 = 248798LLU;
	volatile int64_t t65 = 78145517LL;

	t65 = (((x261&x262)==x263)*x264);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 3U;
	int64_t x266 = -1LL;
	int16_t x267 = 0;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t66 = 3LLU;

	t66 = (((x265&x266)==x267)*x268);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x272 = 14U;
	int32_t t67 = 27665505;

	t67 = (((x269&x270)==x271)*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = 0LLU;
	int16_t x274 = INT16_MIN;
	int32_t x275 = 23;
	uint16_t x276 = 7624U;

	t68 = (((x273&x274)==x275)*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	int8_t x278 = 18;
	volatile int32_t x279 = -739050522;
	int64_t x280 = INT64_MIN;

	t69 = (((x277&x278)==x279)*x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 4907U;
	static int16_t x282 = -645;
	volatile uint16_t x283 = UINT16_MAX;
	static int64_t x284 = -1LL;
	volatile int64_t t70 = -3225624320LL;

	t70 = (((x281&x282)==x283)*x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = 24;
	int8_t x286 = INT8_MIN;
	volatile int16_t x287 = -1;
	int8_t x288 = -21;
	int32_t t71 = 14;

	t71 = (((x285&x286)==x287)*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MAX;
	uint32_t x290 = 3U;
	int16_t x292 = 562;

	t72 = (((x289&x290)==x291)*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MIN;
	int32_t x294 = 1047450;
	volatile uint64_t x295 = 30339827LLU;

	t73 = (((x293&x294)==x295)*x296);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x297 = 21632U;
	volatile int64_t x298 = INT64_MIN;
	uint32_t x299 = 42296U;
	volatile int32_t t74 = -90;

	t74 = (((x297&x298)==x299)*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x302 = 144208220049LLU;
	int64_t x303 = INT64_MIN;
	uint16_t x304 = 432U;
	static int32_t t75 = -88;

	t75 = (((x301&x302)==x303)*x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = -14107654352328976LL;
	uint8_t x306 = 8U;

	t76 = (((x305&x306)==x307)*x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x310 = INT32_MAX;
	static uint8_t x311 = 31U;
	static int16_t x312 = 324;
	int32_t t77 = -1;

	t77 = (((x309&x310)==x311)*x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	static int32_t x314 = INT32_MIN;
	uint16_t x316 = 2332U;

	t78 = (((x313&x314)==x315)*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 474U;
	volatile int64_t x318 = -1LL;
	volatile int16_t x319 = -1;
	int32_t x320 = INT32_MIN;
	int32_t t79 = 13526;

	t79 = (((x317&x318)==x319)*x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MAX;
	static int16_t x322 = -1;
	int64_t x323 = -596137LL;
	static int32_t t80 = -52;

	t80 = (((x321&x322)==x323)*x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = INT32_MAX;
	uint16_t x327 = UINT16_MAX;
	int64_t x328 = -1LL;
	int64_t t81 = 177LL;

	t81 = (((x325&x326)==x327)*x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 368371U;
	static uint32_t x330 = UINT32_MAX;
	volatile int32_t x332 = INT32_MIN;
	int32_t t82 = 8655;

	t82 = (((x329&x330)==x331)*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MIN;
	volatile uint32_t x335 = 69U;
	volatile uint16_t x336 = 9275U;
	volatile int32_t t83 = 94379;

	t83 = (((x333&x334)==x335)*x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = 1811404693LL;
	volatile int32_t x338 = -2673;
	volatile int32_t x339 = INT32_MAX;
	volatile int32_t t84 = 1325;

	t84 = (((x337&x338)==x339)*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	static uint8_t x342 = 5U;
	uint8_t x343 = UINT8_MAX;
	int32_t t85 = 14;

	t85 = (((x341&x342)==x343)*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x345 = UINT64_MAX;
	static int16_t x346 = 6;
	uint64_t x347 = 4612611976573077400LLU;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t86 = 2409426;

	t86 = (((x345&x346)==x347)*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = -1;
	int8_t x350 = INT8_MIN;
	int16_t x351 = -1;
	volatile int32_t x352 = INT32_MAX;
	int32_t t87 = -5002;

	t87 = (((x349&x350)==x351)*x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 31U;
	uint64_t x354 = UINT64_MAX;
	int64_t x355 = INT64_MAX;
	int8_t x356 = -2;
	int32_t t88 = -50;

	t88 = (((x353&x354)==x355)*x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x357 = -554602241445102LL;
	volatile int16_t x359 = 88;
	int64_t t89 = -368LL;

	t89 = (((x357&x358)==x359)*x360);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = 1005026773287756LL;
	int64_t x362 = INT64_MAX;
	static int64_t x363 = INT64_MIN;
	volatile int64_t t90 = 318LL;

	t90 = (((x361&x362)==x363)*x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = INT8_MIN;
	volatile int16_t x366 = -1;
	static int32_t x367 = INT32_MIN;
	int8_t x368 = INT8_MIN;
	int32_t t91 = 86394;

	t91 = (((x365&x366)==x367)*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	int16_t x370 = 1;
	static volatile uint64_t x371 = 4996LLU;

	t92 = (((x369&x370)==x371)*x372);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -6;
	static uint32_t x374 = UINT32_MAX;
	uint32_t x375 = 1364643742U;
	int32_t x376 = -25535;
	static volatile int32_t t93 = -7986;

	t93 = (((x373&x374)==x375)*x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = 0;
	static uint16_t x378 = 0U;
	int32_t x379 = 10;

	t94 = (((x377&x378)==x379)*x380);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 0U;
	int64_t x382 = INT64_MIN;
	static int32_t x383 = -836606;
	volatile int16_t x384 = INT16_MIN;
	static volatile int32_t t95 = 0;

	t95 = (((x381&x382)==x383)*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x387 = INT16_MIN;
	volatile int16_t x388 = -1;
	volatile int32_t t96 = 0;

	t96 = (((x385&x386)==x387)*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x389 = INT64_MIN;
	static int8_t x390 = -58;
	int64_t x391 = -41223364866LL;

	t97 = (((x389&x390)==x391)*x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = INT16_MIN;
	volatile int16_t x395 = -1;
	static uint16_t x396 = UINT16_MAX;
	volatile int32_t t98 = 659905;

	t98 = (((x393&x394)==x395)*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	int16_t x399 = 2020;
	static int64_t t99 = -27421LL;

	t99 = (((x397&x398)==x399)*x400);

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

