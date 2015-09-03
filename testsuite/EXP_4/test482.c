#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 427U;
int64_t x7 = -1LL;
uint8_t x9 = 1U;
static int64_t x10 = -1LL;
volatile int8_t x17 = INT8_MAX;
volatile uint64_t t2 = 466LLU;
volatile uint32_t x23 = 3488U;
static uint32_t x30 = 603U;
volatile uint32_t t5 = 56235490U;
volatile int32_t t6 = -10799204;
uint64_t x45 = 0LLU;
static uint32_t x53 = 731600U;
uint64_t x54 = UINT64_MAX;
static uint8_t x69 = 5U;
int32_t x72 = 17780;
uint64_t x76 = UINT64_MAX;
static volatile uint64_t t16 = 33346806LLU;
uint8_t x84 = UINT8_MAX;
volatile int8_t x85 = INT8_MIN;
static uint16_t x88 = 4026U;
uint32_t x89 = 4221148U;
static uint16_t x91 = UINT16_MAX;
volatile uint32_t t19 = 5U;
uint32_t t20 = 6027U;
uint8_t x104 = 1U;
static volatile int16_t x118 = 79;
int64_t x130 = -1LL;
volatile int8_t x131 = -5;
int8_t x132 = -5;
uint64_t x134 = UINT64_MAX;
int8_t x137 = INT8_MIN;
volatile int8_t x139 = -5;
static uint32_t x141 = 35780U;
static volatile uint64_t x149 = UINT64_MAX;
int16_t x150 = INT16_MAX;
uint8_t x156 = 9U;
int64_t x164 = -90LL;
volatile uint64_t t32 = 4317165001099LLU;
static uint16_t x170 = 4553U;
int8_t x171 = -1;
int64_t x180 = -105212532088046158LL;
int8_t x182 = INT8_MIN;
int64_t t36 = -1LL;
int16_t x185 = INT16_MAX;
volatile uint64_t t41 = 57536327LLU;
uint16_t x210 = 0U;
int8_t x223 = INT8_MAX;
int8_t x225 = INT8_MAX;
volatile uint8_t x229 = UINT8_MAX;
volatile int64_t x231 = 34218LL;
static int16_t x245 = INT16_MIN;
volatile int16_t x248 = 2;
int32_t t49 = -24162;
uint64_t x251 = 7490003792771624LLU;
volatile int8_t x252 = INT8_MIN;
int16_t x253 = 767;
volatile uint64_t x254 = UINT64_MAX;
uint64_t t51 = 6745143721513460LLU;
int32_t x258 = 35;
int8_t x259 = INT8_MIN;
int16_t x264 = 226;
volatile uint32_t x266 = 334801U;
uint32_t x271 = 16785537U;
volatile uint16_t x272 = 29U;
static uint16_t x273 = UINT16_MAX;
uint8_t x280 = 105U;
static volatile int32_t t58 = 34682;
int64_t x293 = -1LL;
static volatile int64_t t60 = -284799442LL;
volatile int64_t x306 = INT64_MAX;
uint64_t x308 = UINT64_MAX;
static volatile uint64_t t63 = 58051LLU;
int8_t x349 = INT8_MIN;
int64_t x361 = -1LL;
int16_t x362 = -14;
static volatile int8_t x363 = INT8_MIN;
volatile int8_t x369 = -1;
int8_t x388 = INT8_MIN;
static int32_t x400 = -59309;
uint16_t x422 = 30893U;
int32_t x425 = -2177211;
uint64_t x428 = UINT64_MAX;
int8_t x444 = -1;
volatile int16_t x449 = INT16_MIN;
int16_t x456 = -1;
volatile int16_t x467 = INT16_MAX;
uint32_t x474 = UINT32_MAX;
volatile int64_t x476 = INT64_MAX;
volatile int16_t x483 = INT16_MIN;
volatile uint8_t x485 = 3U;
volatile int32_t t90 = -501336947;
static int8_t x506 = -1;
static int16_t x513 = 0;
static int16_t x514 = -8;
volatile uint16_t x517 = 30U;
int8_t x518 = -1;
int8_t x524 = INT8_MIN;
int8_t x533 = -1;
int16_t x534 = -2354;
static volatile int64_t x535 = 1067657LL;


void f0(void) {
	int8_t x6 = 0;
	volatile uint8_t x8 = 2U;
	int64_t t0 = 5622399078LL;

	t0 = (x5+(x6|(x7*x8)));

	if (t0 != 425LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x11 = INT16_MIN;
	volatile uint64_t x12 = 311811361613263LLU;
	static uint64_t t1 = 261490LLU;

	t1 = (x9+(x10|(x11*x12)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x18 = 524914040LLU;
	volatile int8_t x19 = INT8_MAX;
	uint8_t x20 = 0U;

	t2 = (x17+(x18|(x19*x20)));

	if (t2 != 524914167LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MIN;
	static int8_t x22 = -1;
	int8_t x24 = INT8_MAX;
	uint32_t t3 = 283583U;

	t3 = (x21+(x22|(x23*x24)));

	if (t3 != 4294934527U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = -1;
	int16_t x27 = INT16_MAX;
	static int64_t x28 = -1LL;
	static volatile int64_t t4 = -58LL;

	t4 = (x25+(x26|(x27*x28)));

	if (t4 != -129LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = 0U;
	volatile int8_t x31 = 8;
	int8_t x32 = INT8_MIN;

	t5 = (x29+(x30|(x31*x32)));

	if (t5 != 4294966875U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 584U;
	int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	static volatile int16_t x36 = INT16_MAX;

	t6 = (x33+(x34|(x35*x36)));

	if (t6 != -32184) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -2693;
	int64_t x38 = INT64_MAX;
	volatile int8_t x39 = 7;
	static volatile uint16_t x40 = UINT16_MAX;
	int64_t t7 = -59280718LL;

	t7 = (x37+(x38|(x39*x40)));

	if (t7 != 9223372036854773114LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -7874654;
	uint32_t x42 = 205U;
	int16_t x43 = 442;
	static int8_t x44 = -1;
	volatile uint32_t t8 = 29714845U;

	t8 = (x41+(x42|(x43*x44)));

	if (t8 != 4287092337U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x46 = 4;
	volatile int16_t x47 = -1;
	uint64_t x48 = 0LLU;
	static volatile uint64_t t9 = 2607124336LLU;

	t9 = (x45+(x46|(x47*x48)));

	if (t9 != 4LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = 1415LL;
	static int16_t x50 = 164;
	uint64_t x51 = UINT64_MAX;
	static int16_t x52 = INT16_MAX;
	volatile uint64_t t10 = 940694730135112283LLU;

	t10 = (x49+(x50|(x51*x52)));

	if (t10 != 18446744073709520428LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x55 = -54;
	uint32_t x56 = 261756181U;
	volatile uint64_t t11 = 37368856LLU;

	t11 = (x53+(x54|(x55*x56)));

	if (t11 != 731599LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -6;
	volatile int8_t x58 = INT8_MAX;
	int16_t x59 = -1;
	int16_t x60 = INT16_MIN;
	int32_t t12 = 9995462;

	t12 = (x57+(x58|(x59*x60)));

	if (t12 != 32889) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -155461274891597LL;
	int64_t x62 = -1LL;
	uint32_t x63 = 123525U;
	int32_t x64 = -130;
	static volatile int64_t t13 = -6LL;

	t13 = (x61+(x62|(x63*x64)));

	if (t13 != -155461274891598LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 12U;
	int64_t x66 = -1LL;
	int32_t x67 = 537;
	int64_t x68 = -2778527125899224LL;
	static volatile int64_t t14 = 210666745083583671LL;

	t14 = (x65+(x66|(x67*x68)));

	if (t14 != 11LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x70 = INT8_MAX;
	volatile uint8_t x71 = UINT8_MAX;
	static volatile int32_t t15 = 68307130;

	t15 = (x69+(x70|(x71*x72)));

	if (t15 != 4534020) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	uint16_t x74 = 44U;
	int16_t x75 = -1;

	t16 = (x73+(x74|(x75*x76)));

	if (t16 != 18446744073709518893LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x81 = INT64_MIN;
	int16_t x82 = 572;
	uint64_t x83 = 2687281613918710LLU;
	volatile uint64_t t17 = 501188447717LLU;

	t17 = (x81+(x82|(x83*x84)));

	if (t17 != 9908628848404047422LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x86 = -1;
	int16_t x87 = INT16_MIN;
	static int32_t t18 = -11399645;

	t18 = (x85+(x86|(x87*x88)));

	if (t18 != -129) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x90 = -1;
	uint8_t x92 = 34U;

	t19 = (x89+(x90|(x91*x92)));

	if (t19 != 4221147U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = -8078;
	int8_t x94 = 1;
	int32_t x95 = 12094;
	uint32_t x96 = UINT32_MAX;

	t20 = (x93+(x94|(x95*x96)));

	if (t20 != 4294947125U) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x101 = -315863056938342104LL;
	uint8_t x102 = UINT8_MAX;
	uint8_t x103 = 5U;
	int64_t t21 = -112313869LL;

	t21 = (x101+(x102|(x103*x104)));

	if (t21 != -315863056938341849LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x105 = -1LL;
	int16_t x106 = INT16_MIN;
	volatile uint64_t x107 = 1013204690LLU;
	int8_t x108 = INT8_MIN;
	static uint64_t t22 = 8642810056316LLU;

	t22 = (x105+(x106|(x107*x108)));

	if (t22 != 18446744073709524735LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = -140255305LL;
	uint64_t x110 = UINT64_MAX;
	uint64_t x111 = 7133446060690229106LLU;
	uint16_t x112 = 885U;
	uint64_t t23 = 98719555775021LLU;

	t23 = (x109+(x110|(x111*x112)));

	if (t23 != 18446744073569296310LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = -1;
	static volatile uint8_t x119 = 2U;
	int8_t x120 = INT8_MAX;
	static volatile int32_t t24 = -260827;

	t24 = (x117+(x118|(x119*x120)));

	if (t24 != 254) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = INT16_MIN;
	int64_t t25 = 457226005LL;

	t25 = (x129+(x130|(x131*x132)));

	if (t25 != -32769LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = INT64_MIN;
	int64_t x135 = -134694501LL;
	volatile int32_t x136 = -1;
	uint64_t t26 = 87669978LLU;

	t26 = (x133+(x134|(x135*x136)));

	if (t26 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x138 = -19;
	int32_t x140 = 122;
	volatile int32_t t27 = -15122;

	t27 = (x137+(x138|(x139*x140)));

	if (t27 != -129) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x142 = UINT64_MAX;
	int16_t x143 = -1;
	int16_t x144 = INT16_MAX;
	volatile uint64_t t28 = 2421175LLU;

	t28 = (x141+(x142|(x143*x144)));

	if (t28 != 35779LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x151 = 5997U;
	static volatile uint16_t x152 = 17778U;
	uint64_t t29 = 244LLU;

	t29 = (x149+(x150|(x151*x152)));

	if (t29 != 106627070LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x153 = UINT64_MAX;
	static volatile int16_t x154 = -14;
	uint32_t x155 = UINT32_MAX;
	static volatile uint64_t t30 = 1336385724177178LLU;

	t30 = (x153+(x154|(x155*x156)));

	if (t30 != 4294967286LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x161 = INT16_MIN;
	int64_t x162 = INT64_MIN;
	static uint64_t x163 = 59348LLU;
	static uint64_t t31 = 54591718LLU;

	t31 = (x161+(x162|(x163*x164)));

	if (t31 != 18446744073704177528LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x165 = 0;
	int64_t x166 = INT64_MIN;
	static volatile int8_t x167 = INT8_MIN;
	volatile uint64_t x168 = 12600128137036088LLU;

	t32 = (x165+(x166|(x167*x168)));

	if (t32 != 16833927672168932352LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x169 = UINT16_MAX;
	uint16_t x172 = 14U;
	volatile int32_t t33 = 48;

	t33 = (x169+(x170|(x171*x172)));

	if (t33 != 65530) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x173 = INT8_MAX;
	volatile int8_t x174 = INT8_MAX;
	int16_t x175 = 378;
	static int16_t x176 = -136;
	volatile int32_t t34 = -6908772;

	t34 = (x173+(x174|(x175*x176)));

	if (t34 != -51202) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = -59;
	int8_t x178 = INT8_MAX;
	int32_t x179 = 12;
	int64_t t35 = 5527517866917503LL;

	t35 = (x177+(x178|(x179*x180)));

	if (t35 != -1262550385056553916LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x181 = INT32_MIN;
	static int64_t x183 = -1LL;
	volatile int32_t x184 = -1;

	t36 = (x181+(x182|(x183*x184)));

	if (t36 != -2147483775LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x186 = -5LL;
	static int16_t x187 = -8;
	volatile int32_t x188 = -11;
	static volatile int64_t t37 = 984699LL;

	t37 = (x185+(x186|(x187*x188)));

	if (t37 != 32762LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x189 = INT8_MAX;
	volatile int8_t x190 = -1;
	static int64_t x191 = -1LL;
	uint32_t x192 = UINT32_MAX;
	int64_t t38 = 65977588LL;

	t38 = (x189+(x190|(x191*x192)));

	if (t38 != 126LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x197 = -46;
	int32_t x198 = INT32_MIN;
	uint64_t x199 = UINT64_MAX;
	volatile uint32_t x200 = 4462399U;
	volatile uint64_t t39 = 55524LLU;

	t39 = (x197+(x198|(x199*x200)));

	if (t39 != 18446744073705089171LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x201 = 202;
	uint64_t x202 = 3720139405LLU;
	uint8_t x203 = 38U;
	volatile int8_t x204 = INT8_MIN;
	uint64_t t40 = 279406386523990525LLU;

	t40 = (x201+(x202|(x203*x204)));

	if (t40 != 87LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x205 = -1LL;
	static int64_t x206 = -1LL;
	volatile int64_t x207 = -1LL;
	uint64_t x208 = 635231044LLU;

	t41 = (x205+(x206|(x207*x208)));

	if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x209 = 1606635402348LL;
	volatile uint16_t x211 = UINT16_MAX;
	volatile uint32_t x212 = UINT32_MAX;
	int64_t t42 = -106280811526299LL;

	t42 = (x209+(x210|(x211*x212)));

	if (t42 != 1610930304109LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x217 = -1;
	static volatile int8_t x218 = INT8_MIN;
	int16_t x219 = -1;
	volatile int32_t x220 = 1963220;
	int32_t t43 = -456907615;

	t43 = (x217+(x218|(x219*x220)));

	if (t43 != -85) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x221 = 0U;
	uint16_t x222 = 4U;
	static uint32_t x224 = 3U;
	volatile uint32_t t44 = 71289U;

	t44 = (x221+(x222|(x223*x224)));

	if (t44 != 381U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x226 = -2;
	int16_t x227 = INT16_MIN;
	int8_t x228 = -1;
	static int32_t t45 = 51;

	t45 = (x225+(x226|(x227*x228)));

	if (t45 != 125) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x230 = INT8_MIN;
	int8_t x232 = INT8_MIN;
	static volatile int64_t t46 = -297376LL;

	t46 = (x229+(x230|(x231*x232)));

	if (t46 != 127LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x233 = -1;
	uint64_t x234 = 407147LLU;
	static int64_t x235 = -6399LL;
	volatile int8_t x236 = INT8_MIN;
	static uint64_t t47 = 41430314431LLU;

	t47 = (x233+(x234|(x235*x236)));

	if (t47 != 950250LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x237 = UINT32_MAX;
	int64_t x238 = 7066381LL;
	uint8_t x239 = UINT8_MAX;
	volatile int8_t x240 = -5;
	volatile int64_t t48 = 2394766200LL;

	t48 = (x237+(x238|(x239*x240)));

	if (t48 != 4294966028LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x246 = -1;
	static int8_t x247 = -1;

	t49 = (x245+(x246|(x247*x248)));

	if (t49 != -32769) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x249 = INT64_MIN;
	volatile uint64_t x250 = UINT64_MAX;
	uint64_t t50 = 7821500860211619LLU;

	t50 = (x249+(x250|(x251*x252)));

	if (t50 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x255 = UINT32_MAX;
	uint16_t x256 = UINT16_MAX;

	t51 = (x253+(x254|(x255*x256)));

	if (t51 != 766LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x257 = -1;
	uint32_t x260 = UINT32_MAX;
	static uint32_t t52 = 43U;

	t52 = (x257+(x258|(x259*x260)));

	if (t52 != 162U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x261 = -1;
	int32_t x262 = INT32_MIN;
	static volatile uint32_t x263 = 93303436U;
	static volatile uint32_t t53 = 105988U;

	t53 = (x261+(x262|(x263*x264)));

	if (t53 != 3906707351U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x265 = INT16_MIN;
	int16_t x267 = -13443;
	int8_t x268 = 5;
	uint32_t t54 = 32903U;

	t54 = (x265+(x266|(x267*x268)));

	if (t54 != 4294933489U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x269 = 209015674;
	int16_t x270 = 24;
	uint32_t t55 = 3340969U;

	t55 = (x269+(x270|(x271*x272)));

	if (t55 != 695796247U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x274 = UINT32_MAX;
	int32_t x275 = INT32_MAX;
	int16_t x276 = 1;
	volatile uint32_t t56 = 192U;

	t56 = (x273+(x274|(x275*x276)));

	if (t56 != 65534U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x277 = 15U;
	volatile int64_t x278 = 10673887750941553LL;
	int64_t x279 = -743147LL;
	volatile int64_t t57 = 15635409594LL;

	t57 = (x277+(x278|(x279*x280)));

	if (t57 != -2262004LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = -2040;
	int32_t x282 = -2;
	int16_t x283 = -1;
	static int32_t x284 = 82048066;

	t58 = (x281+(x282|(x283*x284)));

	if (t58 != -2042) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x285 = 0;
	static uint8_t x286 = 15U;
	int16_t x287 = INT16_MIN;
	static int32_t x288 = -1;
	static int32_t t59 = -35449;

	t59 = (x285+(x286|(x287*x288)));

	if (t59 != 32783) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x294 = 7;
	int16_t x295 = INT16_MAX;
	int8_t x296 = -1;

	t60 = (x293+(x294|(x295*x296)));

	if (t60 != -32762LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x301 = INT16_MIN;
	volatile int16_t x302 = -1;
	static int16_t x303 = INT16_MIN;
	uint32_t x304 = 2U;
	volatile uint32_t t61 = 5837U;

	t61 = (x301+(x302|(x303*x304)));

	if (t61 != 4294934527U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x305 = INT64_MAX;
	static int16_t x307 = INT16_MIN;
	static volatile uint64_t t62 = 1961101046LLU;

	t62 = (x305+(x306|(x307*x308)));

	if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x309 = 14U;
	uint16_t x310 = 1U;
	volatile uint64_t x311 = 5703215451883368LLU;
	int16_t x312 = -1;

	t63 = (x309+(x310|(x311*x312)));

	if (t63 != 18441040858257668263LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x321 = INT8_MIN;
	static int32_t x322 = -130;
	static int8_t x323 = INT8_MIN;
	uint8_t x324 = UINT8_MAX;
	int32_t t64 = -1;

	t64 = (x321+(x322|(x323*x324)));

	if (t64 != -130) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x329 = UINT8_MAX;
	volatile int64_t x330 = INT64_MIN;
	static volatile uint64_t x331 = 338282782650LLU;
	uint32_t x332 = 2736U;
	uint64_t t65 = 228LLU;

	t65 = (x329+(x330|(x331*x332)));

	if (t65 != 9224297578548106463LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x333 = 59061857205563LLU;
	int64_t x334 = 224764778812561LL;
	int32_t x335 = INT32_MIN;
	uint64_t x336 = 6176041268852542LLU;
	uint64_t t66 = 18560449014LLU;

	t66 = (x333+(x334|(x335*x336)));

	if (t66 != 3100484408794239436LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x341 = INT16_MAX;
	uint16_t x342 = 4430U;
	uint8_t x343 = 3U;
	int16_t x344 = -1;
	volatile int32_t t67 = -23;

	t67 = (x341+(x342|(x343*x344)));

	if (t67 != 32766) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x350 = INT8_MIN;
	int16_t x351 = -2010;
	volatile uint64_t x352 = 829625424785683LLU;
	uint64_t t68 = 746129448LLU;

	t68 = (x349+(x350|(x351*x352)));

	if (t68 != 18446744073709551442LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x353 = INT8_MIN;
	int16_t x354 = INT16_MIN;
	static uint16_t x355 = 1231U;
	int64_t x356 = -236659808LL;
	volatile int64_t t69 = -178011046270LL;

	t69 = (x353+(x354|(x355*x356)));

	if (t69 != -27168LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x357 = UINT32_MAX;
	int16_t x358 = -1;
	int8_t x359 = INT8_MAX;
	int64_t x360 = 1054LL;
	int64_t t70 = 19910041519647583LL;

	t70 = (x357+(x358|(x359*x360)));

	if (t70 != 4294967294LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x364 = INT8_MAX;
	volatile int64_t t71 = 214693169518LL;

	t71 = (x361+(x362|(x363*x364)));

	if (t71 != -15LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x365 = -1;
	int16_t x366 = INT16_MAX;
	volatile int8_t x367 = INT8_MIN;
	static int64_t x368 = -186LL;
	int64_t t72 = -387LL;

	t72 = (x365+(x366|(x367*x368)));

	if (t72 != 32766LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x370 = 6U;
	int16_t x371 = INT16_MIN;
	volatile uint16_t x372 = UINT16_MAX;
	int32_t t73 = -119;

	t73 = (x369+(x370|(x371*x372)));

	if (t73 != -2147450875) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x373 = 6;
	uint32_t x374 = 5845314U;
	static int64_t x375 = INT64_MAX;
	int64_t x376 = -1LL;
	volatile int64_t t74 = 3LL;

	t74 = (x373+(x374|(x375*x376)));

	if (t74 != -9223372036848930487LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x385 = -14610940832019385LL;
	uint64_t x386 = UINT64_MAX;
	volatile uint8_t x387 = UINT8_MAX;
	volatile uint64_t t75 = 48897658877881LLU;

	t75 = (x385+(x386|(x387*x388)));

	if (t75 != 18432133132877532230LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x397 = -13;
	volatile int16_t x398 = INT16_MIN;
	volatile uint16_t x399 = 5U;
	volatile int32_t t76 = 13035463;

	t76 = (x397+(x398|(x399*x400)));

	if (t76 != -1646) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x405 = INT32_MAX;
	int16_t x406 = 9104;
	int64_t x407 = 411278396663LL;
	uint8_t x408 = 1U;
	int64_t t77 = -55608717482340LL;

	t77 = (x405+(x406|(x407*x408)));

	if (t77 != 413425889270LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x417 = 1U;
	uint16_t x418 = 1023U;
	static uint32_t x419 = 1952U;
	static uint64_t x420 = UINT64_MAX;
	uint64_t t78 = 698636477LLU;

	t78 = (x417+(x418|(x419*x420)));

	if (t78 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x421 = INT32_MAX;
	static volatile int64_t x423 = INT64_MAX;
	int8_t x424 = -1;
	int64_t t79 = 163596063262188LL;

	t79 = (x421+(x422|(x423*x424)));

	if (t79 != -9223372034707261268LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x426 = UINT64_MAX;
	static uint64_t x427 = 48419482069LLU;
	volatile uint64_t t80 = 160281096LLU;

	t80 = (x425+(x426|(x427*x428)));

	if (t80 != 18446744073707374404LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x441 = INT16_MIN;
	volatile int8_t x442 = INT8_MIN;
	uint32_t x443 = UINT32_MAX;
	uint32_t t81 = 1080347577U;

	t81 = (x441+(x442|(x443*x444)));

	if (t81 != 4294934401U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x450 = 8035963747976385337LLU;
	static int8_t x451 = -63;
	static int64_t x452 = -1LL;
	volatile uint64_t t82 = 2138812203331326958LLU;

	t82 = (x449+(x450|(x451*x452)));

	if (t82 != 8035963747976352575LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x453 = -21;
	int64_t x454 = 1836857159315LL;
	volatile uint64_t x455 = UINT64_MAX;
	volatile uint64_t t83 = 473LLU;

	t83 = (x453+(x454|(x455*x456)));

	if (t83 != 1836857159294LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x461 = 1001LLU;
	volatile int16_t x462 = -1;
	static int64_t x463 = INT64_MAX;
	int32_t x464 = -1;
	volatile uint64_t t84 = 878887LLU;

	t84 = (x461+(x462|(x463*x464)));

	if (t84 != 1000LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x465 = 4899;
	int64_t x466 = -365LL;
	volatile int8_t x468 = -1;
	int64_t t85 = -6334710LL;

	t85 = (x465+(x466|(x467*x468)));

	if (t85 != 4534LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x469 = 1041551680U;
	static int64_t x470 = INT64_MIN;
	int16_t x471 = 7692;
	uint64_t x472 = 12511135225065LLU;
	volatile uint64_t t86 = 339LLU;

	t86 = (x469+(x470|(x471*x472)));

	if (t86 != 9319607690047527468LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x473 = 260;
	int64_t x475 = -1LL;
	int64_t t87 = 87005099533087LL;

	t87 = (x473+(x474|(x475*x476)));

	if (t87 != -9223372032559808253LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x481 = 183LL;
	int8_t x482 = -1;
	volatile int64_t x484 = -3256LL;
	volatile int64_t t88 = 241LL;

	t88 = (x481+(x482|(x483*x484)));

	if (t88 != 182LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x486 = 7U;
	uint32_t x487 = UINT32_MAX;
	uint16_t x488 = 1669U;
	static volatile uint32_t t89 = 632U;

	t89 = (x485+(x486|(x487*x488)));

	if (t89 != 4294965634U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x493 = INT32_MIN;
	int16_t x494 = 3610;
	volatile int16_t x495 = 0;
	uint8_t x496 = 69U;

	t90 = (x493+(x494|(x495*x496)));

	if (t90 != -2147480038) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x497 = 2;
	uint32_t x498 = UINT32_MAX;
	int64_t x499 = 226766940LL;
	static int32_t x500 = -547684;
	volatile int64_t t91 = -2247736176LL;

	t91 = (x497+(x498|(x499*x500)));

	if (t91 != -124193274331135LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x505 = 279109LLU;
	int16_t x507 = INT16_MIN;
	uint16_t x508 = 28U;
	volatile uint64_t t92 = 27509065918991113LLU;

	t92 = (x505+(x506|(x507*x508)));

	if (t92 != 279108LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x515 = 229LLU;
	volatile int32_t x516 = INT32_MAX;
	volatile uint64_t t93 = 27804446LLU;

	t93 = (x513+(x514|(x515*x516)));

	if (t93 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x519 = -1LL;
	uint8_t x520 = 81U;
	static int64_t t94 = 345641326LL;

	t94 = (x517+(x518|(x519*x520)));

	if (t94 != 29LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x521 = INT32_MAX;
	volatile int16_t x522 = INT16_MIN;
	volatile int16_t x523 = INT16_MIN;
	volatile int32_t t95 = -9998990;

	t95 = (x521+(x522|(x523*x524)));

	if (t95 != 2147450879) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x529 = INT32_MIN;
	volatile uint64_t x530 = 1441566LLU;
	uint64_t x531 = UINT64_MAX;
	static uint16_t x532 = 18U;
	uint64_t t96 = 355LLU;

	t96 = (x529+(x530|(x531*x532)));

	if (t96 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x536 = 163883585094LL;
	volatile int64_t t97 = 44845618682790LL;

	t97 = (x533+(x534|(x535*x536)));

	if (t97 != -3LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x537 = 0U;
	int32_t x538 = 225982;
	int32_t x539 = INT32_MAX;
	int32_t x540 = -1;
	static volatile int32_t t98 = 597;

	t98 = (x537+(x538|(x539*x540)));

	if (t98 != -2147257665) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x541 = 24U;
	uint16_t x542 = 15U;
	static volatile int8_t x543 = INT8_MIN;
	uint8_t x544 = 62U;
	volatile int32_t t99 = 2490;

	t99 = (x541+(x542|(x543*x544)));

	if (t99 != -7897) { NG(); } else { ; }
	
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

