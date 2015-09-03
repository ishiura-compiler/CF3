#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = UINT16_MAX;
uint64_t t1 = 1430711LLU;
static int16_t x9 = -1;
uint16_t x12 = 0U;
int32_t t2 = 468365;
int32_t x15 = -1;
volatile uint16_t x20 = UINT16_MAX;
volatile int64_t t4 = -1404741405461LL;
int16_t x21 = 43;
volatile int64_t x27 = INT64_MIN;
int64_t x32 = INT64_MAX;
uint64_t x35 = UINT64_MAX;
uint64_t t9 = 76196201138662514LLU;
int64_t x42 = INT64_MAX;
int16_t x46 = INT16_MAX;
int32_t x47 = 17784629;
volatile int8_t x50 = -37;
uint32_t x57 = UINT32_MAX;
uint8_t x58 = UINT8_MAX;
uint16_t x59 = UINT16_MAX;
int8_t x63 = -1;
static int64_t t15 = 25093367LL;
volatile int32_t x67 = 4191999;
static uint64_t t16 = 7626LLU;
volatile uint64_t t17 = 73593498LLU;
uint32_t x79 = UINT32_MAX;
int8_t x86 = INT8_MIN;
uint32_t x88 = 13121477U;
static int8_t x90 = INT8_MIN;
volatile uint64_t t23 = 42079448744LLU;
int16_t x111 = -270;
static volatile uint64_t t26 = 1465034305548464187LLU;
int16_t x114 = -1;
uint32_t x116 = UINT32_MAX;
static volatile int32_t t29 = -15;
uint64_t x146 = 304078056278239LLU;
static volatile int16_t x160 = -1;
int8_t x164 = 3;
static int64_t x177 = 400815615230LL;
static volatile int16_t x178 = INT16_MIN;
int64_t x183 = INT64_MIN;
int64_t x185 = -1LL;
int32_t x187 = INT32_MIN;
uint64_t t41 = 460096765356789LLU;
uint32_t x189 = UINT32_MAX;
uint64_t x190 = 87255LLU;
int8_t x192 = -1;
int32_t x193 = INT32_MIN;
uint8_t x195 = 121U;
int8_t x204 = INT8_MIN;
int64_t t45 = -1968011153814466LL;
volatile int64_t x207 = INT64_MAX;
uint64_t x209 = 2560335925104479LLU;
int8_t x213 = -1;
static uint8_t x215 = 6U;
volatile uint32_t t48 = 33U;
int8_t x217 = INT8_MIN;
static volatile uint8_t x218 = UINT8_MAX;
static uint8_t x224 = UINT8_MAX;
int64_t t51 = 598505719LL;
static uint8_t x232 = 1U;
static int64_t x235 = INT64_MIN;
uint64_t x237 = 60583500023316943LLU;
volatile uint16_t x240 = 614U;
volatile uint32_t x241 = UINT32_MAX;
uint32_t x253 = 15500929U;
volatile int16_t x256 = INT16_MIN;
uint16_t x257 = 161U;
volatile int32_t x259 = 3;
uint64_t x272 = 4971971251619961LLU;
int16_t x273 = INT16_MIN;
int32_t x274 = -2082;
static int64_t x277 = 470001007LL;
int16_t x282 = INT16_MIN;
int16_t x283 = -102;
static volatile int64_t t66 = 5471386238196598LL;
static uint16_t x289 = 77U;
volatile uint32_t t67 = 463990U;
int8_t x295 = INT8_MIN;
uint64_t t69 = 70862798680877567LLU;
int8_t x301 = INT8_MIN;
int8_t x303 = 8;
uint8_t x308 = 5U;
uint32_t x314 = 4920469U;
static int64_t t73 = 170073026LL;
volatile uint64_t x321 = UINT64_MAX;
static uint32_t x323 = 64U;
uint8_t x331 = 26U;
uint16_t x336 = 8239U;
volatile int16_t x337 = INT16_MIN;
int16_t x338 = -141;
int64_t x345 = 95LL;
int8_t x346 = -1;
static int16_t x348 = -354;
uint16_t x354 = 58U;
volatile int32_t x355 = INT32_MIN;
int64_t t84 = -24LL;
uint64_t t85 = 759665099259490LLU;
static int8_t x365 = 1;
int32_t x369 = -1011;
int32_t x372 = -1;
static uint32_t x382 = 24623601U;
int32_t x384 = -1224;
static volatile int64_t t92 = 134897089881654LL;
uint16_t x393 = UINT16_MAX;
uint8_t x395 = UINT8_MAX;
static int32_t x402 = INT32_MIN;
int64_t t95 = 11LL;
int64_t x410 = INT64_MIN;
uint32_t x414 = 542U;
uint8_t x415 = UINT8_MAX;
uint8_t x419 = 31U;


void f0(void) {
	int64_t x1 = -1LL;
	static int64_t x2 = -1LL;
	uint32_t x3 = 9977200U;
	static int32_t x4 = 10;
	int64_t t0 = 6520274890162161LL;

	t0 = (x1&((x2%x3)-x4));

	if (t0 != -11LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x6 = 214641U;
	int8_t x7 = -1;
	uint64_t x8 = 61001094964432067LLU;

	t1 = (x5&((x6%x7)-x8));

	if (t1 != 31150LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x10 = 27U;
	int8_t x11 = INT8_MIN;

	t2 = (x9&((x10%x11)-x12));

	if (t2 != 27) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	int32_t x14 = 16378;
	static int64_t x16 = -1LL;
	int64_t t3 = 100492LL;

	t3 = (x13&((x14%x15)-x16));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 33U;
	uint8_t x18 = 0U;
	volatile int64_t x19 = INT64_MIN;

	t4 = (x17&((x18%x19)-x20));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = INT64_MIN;
	int8_t x23 = INT8_MAX;
	uint8_t x24 = 31U;
	int64_t t5 = 83745889LL;

	t5 = (x21&((x22%x23)-x24));

	if (t5 != 32LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 0LLU;
	int64_t x26 = INT64_MIN;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 556841758069117LLU;

	t6 = (x25&((x26%x27)-x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 15162U;
	uint16_t x30 = UINT16_MAX;
	volatile uint32_t x31 = UINT32_MAX;
	int64_t t7 = -7LL;

	t7 = (x29&((x30%x31)-x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint16_t x34 = 0U;
	static volatile int32_t x36 = -14266447;
	volatile uint64_t t8 = 2300281191180227LLU;

	t8 = (x33&((x34%x35)-x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int16_t x38 = INT16_MAX;
	int16_t x39 = INT16_MAX;
	uint64_t x40 = UINT64_MAX;

	t9 = (x37&((x38%x39)-x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	static uint8_t x43 = UINT8_MAX;
	uint16_t x44 = 3256U;
	static int64_t t10 = 3159LL;

	t10 = (x41&((x42%x43)-x44));

	if (t10 != -3200LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x45 = 0;
	int16_t x48 = -1;
	int32_t t11 = 9908664;

	t11 = (x45&((x46%x47)-x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = UINT16_MAX;
	static int8_t x51 = -1;
	static int16_t x52 = 80;
	volatile int32_t t12 = -5;

	t12 = (x49&((x50%x51)-x52));

	if (t12 != 65456) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MAX;
	int8_t x55 = -7;
	static volatile int32_t x56 = INT32_MAX;
	volatile int32_t t13 = INT32_MIN;

	t13 = (x53&((x54%x55)-x56));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x60 = INT8_MIN;
	volatile uint32_t t14 = 16329U;

	t14 = (x57&((x58%x59)-x60));

	if (t14 != 383U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	int32_t x62 = INT32_MIN;
	int64_t x64 = INT64_MAX;

	t15 = (x61&((x62%x63)-x64));

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 142816081358LLU;
	volatile uint64_t x66 = 22065LLU;
	int8_t x68 = INT8_MAX;

	t16 = (x65&((x66%x67)-x68));

	if (t16 != 21890LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 0LL;
	static volatile int32_t x70 = INT32_MIN;
	int32_t x71 = INT32_MIN;
	uint64_t x72 = UINT64_MAX;

	t17 = (x69&((x70%x71)-x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 16;
	volatile int16_t x74 = -1;
	uint64_t x75 = 216839003422102LLU;
	volatile uint8_t x76 = UINT8_MAX;
	static volatile uint64_t t18 = 1LLU;

	t18 = (x73&((x74%x75)-x76));

	if (t18 != 16LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	static uint32_t x78 = 196007U;
	int32_t x80 = INT32_MIN;
	uint32_t t19 = 3337209U;

	t19 = (x77&((x78%x79)-x80));

	if (t19 != 32167U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x85 = 75LLU;
	int16_t x87 = INT16_MIN;
	uint64_t t20 = 49661112391464715LLU;

	t20 = (x85&((x86%x87)-x88));

	if (t20 != 11LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -1;
	uint16_t x91 = 3691U;
	static int8_t x92 = -1;
	int32_t t21 = 425437689;

	t21 = (x89&((x90%x91)-x92));

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = UINT8_MAX;
	int8_t x94 = INT8_MIN;
	int64_t x95 = -1LL;
	volatile uint16_t x96 = 38U;
	int64_t t22 = -131065LL;

	t22 = (x93&((x94%x95)-x96));

	if (t22 != 218LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = -1;
	static volatile int8_t x98 = -1;
	uint64_t x99 = 5654321661628LLU;
	int64_t x100 = INT64_MAX;

	t23 = (x97&((x98%x99)-x100));

	if (t23 != 9223372306844215804LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -2;
	volatile int64_t x102 = INT64_MIN;
	static int64_t x103 = -99LL;
	volatile int32_t x104 = -1;
	volatile int64_t t24 = 318917926975LL;

	t24 = (x101&((x102%x103)-x104));

	if (t24 != -8LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -1;
	static volatile int64_t x106 = INT64_MIN;
	static int8_t x107 = INT8_MIN;
	static int64_t x108 = -1LL;
	volatile int64_t t25 = -39651602LL;

	t25 = (x105&((x106%x107)-x108));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = 11619386410611819LL;
	volatile int16_t x110 = -1;
	uint64_t x112 = 292715920694711615LLU;

	t26 = (x109&((x110%x111)-x112));

	if (t26 != 9007478536872000LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x113 = INT8_MAX;
	uint8_t x115 = 2U;
	uint32_t t27 = 293727U;

	t27 = (x113&((x114%x115)-x116));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x117 = UINT64_MAX;
	int8_t x118 = INT8_MIN;
	static uint16_t x119 = UINT16_MAX;
	static int32_t x120 = INT32_MIN;
	static volatile uint64_t t28 = 701LLU;

	t28 = (x117&((x118%x119)-x120));

	if (t28 != 2147483520LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -3722;
	static int8_t x126 = INT8_MIN;
	volatile int8_t x127 = -1;
	static int8_t x128 = -7;

	t29 = (x125&((x126%x127)-x128));

	if (t29 != 6) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x133 = 5990087074LLU;
	volatile int32_t x134 = INT32_MIN;
	static uint16_t x135 = 18U;
	int64_t x136 = -87846630446LL;
	uint64_t t30 = 38622823977793LLU;

	t30 = (x133&((x134%x135)-x136));

	if (t30 != 1677799456LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x145 = 26U;
	int8_t x147 = INT8_MIN;
	int16_t x148 = INT16_MIN;
	uint64_t t31 = 723LLU;

	t31 = (x145&((x146%x147)-x148));

	if (t31 != 26LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MAX;
	uint64_t x151 = UINT64_MAX;
	volatile uint64_t x152 = 3539007686LLU;
	uint64_t t32 = 3869LLU;

	t32 = (x149&((x150%x151)-x152));

	if (t32 != 18446744070170574848LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x153 = UINT64_MAX;
	int32_t x154 = -1;
	volatile int64_t x155 = 422153685061147LL;
	int64_t x156 = -1LL;
	volatile uint64_t t33 = 377374LLU;

	t33 = (x153&((x154%x155)-x156));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = -5467;
	int64_t x158 = -1LL;
	int8_t x159 = INT8_MIN;
	int64_t t34 = 193953595755291740LL;

	t34 = (x157&((x158%x159)-x160));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = -1;
	uint64_t x162 = 1299LLU;
	int8_t x163 = INT8_MAX;
	uint64_t t35 = 57108051976266894LLU;

	t35 = (x161&((x162%x163)-x164));

	if (t35 != 26LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x165 = UINT32_MAX;
	volatile int64_t x166 = INT64_MAX;
	uint8_t x167 = 3U;
	static uint32_t x168 = 8301279U;
	volatile int64_t t36 = 1LL;

	t36 = (x165&((x166%x167)-x168));

	if (t36 != 4286666018LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x169 = UINT8_MAX;
	static volatile uint64_t x170 = 207698543455763692LLU;
	int32_t x171 = INT32_MIN;
	volatile int32_t x172 = INT32_MAX;
	static volatile uint64_t t37 = 13751298731344625LLU;

	t37 = (x169&((x170%x171)-x172));

	if (t37 != 237LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x173 = 675827984LL;
	uint8_t x174 = UINT8_MAX;
	static uint8_t x175 = 22U;
	int8_t x176 = INT8_MIN;
	int64_t t38 = 7525343LL;

	t38 = (x173&((x174%x175)-x176));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x179 = 109LL;
	int8_t x180 = INT8_MIN;
	int64_t t39 = -29LL;

	t39 = (x177&((x178%x179)-x180));

	if (t39 != 60LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x181 = 13359077955LLU;
	volatile uint8_t x182 = UINT8_MAX;
	int16_t x184 = 12334;
	uint64_t t40 = 26LLU;

	t40 = (x181&((x182%x183)-x184));

	if (t40 != 13359075393LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x186 = 3LLU;
	uint64_t x188 = 14797677708038LLU;

	t41 = (x185&((x186%x187)-x188));

	if (t41 != 18446729276031843581LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x191 = INT32_MIN;
	static uint64_t t42 = 8863973298836435711LLU;

	t42 = (x189&((x190%x191)-x192));

	if (t42 != 87256LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x194 = 5U;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t43 = 2541301701LLU;

	t43 = (x193&((x194%x195)-x196));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x197 = 26970LLU;
	volatile int16_t x198 = -1;
	volatile int16_t x199 = -2;
	int8_t x200 = 0;
	static volatile uint64_t t44 = 7424LLU;

	t44 = (x197&((x198%x199)-x200));

	if (t44 != 26970LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = -1LL;
	static int32_t x202 = INT32_MIN;
	volatile uint8_t x203 = 97U;

	t45 = (x201&((x202%x203)-x204));

	if (t45 != 62LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x205 = 811484865;
	uint64_t x206 = 1LLU;
	static int64_t x208 = 189756325727999494LL;
	static volatile uint64_t t46 = 183163049993005LLU;

	t46 = (x205&((x206%x207)-x208));

	if (t46 != 1589441LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x210 = INT32_MAX;
	int8_t x211 = -1;
	uint64_t x212 = 244432264LLU;
	volatile uint64_t t47 = 47600723489141359LLU;

	t47 = (x209&((x210%x211)-x212));

	if (t47 != 2560335789834840LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x214 = UINT32_MAX;
	uint16_t x216 = 60U;

	t48 = (x213&((x214%x215)-x216));

	if (t48 != 4294967239U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x219 = -58LL;
	int16_t x220 = INT16_MIN;
	int64_t t49 = 1019276LL;

	t49 = (x217&((x218%x219)-x220));

	if (t49 != 32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = 65343759U;
	uint64_t x222 = UINT64_MAX;
	int32_t x223 = -1;
	static uint64_t t50 = 14112379768689LLU;

	t50 = (x221&((x222%x223)-x224));

	if (t50 != 65343745LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x225 = 1U;
	int64_t x226 = -1LL;
	static volatile uint32_t x227 = 286452401U;
	uint32_t x228 = UINT32_MAX;

	t51 = (x225&((x226%x227)-x228));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x229 = INT8_MIN;
	int16_t x230 = 0;
	int8_t x231 = -1;
	static int32_t t52 = 1715;

	t52 = (x229&((x230%x231)-x232));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x233 = 1538U;
	uint64_t x234 = 2150467264LLU;
	int32_t x236 = INT32_MIN;
	volatile uint64_t t53 = 64453LLU;

	t53 = (x233&((x234%x235)-x236));

	if (t53 != 1536LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x238 = 14LL;
	uint64_t x239 = 23790542377305466LLU;
	uint64_t t54 = 260930LLU;

	t54 = (x237&((x238%x239)-x240));

	if (t54 != 60583500023316872LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x242 = -61;
	int32_t x243 = -1;
	int8_t x244 = -1;
	uint32_t t55 = 41351U;

	t55 = (x241&((x242%x243)-x244));

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x245 = 3866254447914434947LLU;
	int32_t x246 = INT32_MIN;
	volatile int32_t x247 = -23983;
	uint16_t x248 = 460U;
	volatile uint64_t t56 = 37244474LLU;

	t56 = (x245&((x246%x247)-x248));

	if (t56 != 3866254447914418307LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x249 = 66U;
	int64_t x250 = 7849LL;
	int32_t x251 = INT32_MIN;
	int8_t x252 = 54;
	volatile int64_t t57 = -1LL;

	t57 = (x249&((x250%x251)-x252));

	if (t57 != 66LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x254 = 97U;
	static uint32_t x255 = 386754630U;
	uint32_t t58 = 445U;

	t58 = (x253&((x254%x255)-x256));

	if (t58 != 32769U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x258 = 2202151U;
	int16_t x260 = INT16_MAX;
	uint32_t t59 = 38U;

	t59 = (x257&((x258%x259)-x260));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x261 = INT64_MIN;
	volatile int16_t x262 = INT16_MAX;
	uint64_t x263 = 10673087257199LLU;
	int64_t x264 = -1LL;
	static volatile uint64_t t60 = 1365LLU;

	t60 = (x261&((x262%x263)-x264));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = INT8_MIN;
	volatile int16_t x266 = INT16_MAX;
	int16_t x267 = 6891;
	uint64_t x268 = 4461732065035813085LLU;
	uint64_t t61 = 17774825LLU;

	t61 = (x265&((x266%x267)-x268));

	if (t61 != 13985012008673743616LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x269 = INT16_MAX;
	static uint8_t x270 = 0U;
	static uint32_t x271 = UINT32_MAX;
	uint64_t t62 = 55541111846849LLU;

	t62 = (x269&((x270%x271)-x272));

	if (t62 != 14215LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x275 = INT32_MAX;
	int8_t x276 = -1;
	volatile int32_t t63 = -10;

	t63 = (x273&((x274%x275)-x276));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x278 = UINT32_MAX;
	int32_t x279 = -464406;
	int16_t x280 = -2619;
	int64_t t64 = -5LL;

	t64 = (x277&((x278%x279)-x280));

	if (t64 != 204864LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = -19;
	int8_t x284 = INT8_MAX;
	int32_t t65 = -124;

	t65 = (x281&((x282%x283)-x284));

	if (t65 != -155) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = INT32_MIN;
	volatile int64_t x286 = INT64_MAX;
	volatile int16_t x287 = 15840;
	static int64_t x288 = -2596LL;

	t66 = (x285&((x286%x287)-x288));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x290 = UINT8_MAX;
	static volatile int32_t x291 = INT32_MIN;
	uint32_t x292 = UINT32_MAX;

	t67 = (x289&((x290%x291)-x292));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x293 = 2454U;
	volatile uint64_t x294 = UINT64_MAX;
	uint64_t x296 = 8152809603795199LLU;
	uint64_t t68 = 95218466606241655LLU;

	t68 = (x293&((x294%x295)-x296));

	if (t68 != 384LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x297 = INT8_MIN;
	int16_t x298 = 5;
	uint64_t x299 = UINT64_MAX;
	volatile int8_t x300 = -59;

	t69 = (x297&((x298%x299)-x300));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x302 = 61LLU;
	volatile uint64_t x304 = 95876941LLU;
	volatile uint64_t t70 = 33207412672806598LLU;

	t70 = (x301&((x302%x303)-x304));

	if (t70 != 18446744073613674624LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x305 = 6U;
	uint64_t x306 = UINT64_MAX;
	int32_t x307 = 3;
	volatile uint64_t t71 = 2414LLU;

	t71 = (x305&((x306%x307)-x308));

	if (t71 != 2LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x309 = -2;
	uint32_t x310 = 1021528257U;
	volatile uint64_t x311 = 112401538LLU;
	int16_t x312 = INT16_MIN;
	uint64_t t72 = 638830184LLU;

	t72 = (x309&((x310%x311)-x312));

	if (t72 != 9947182LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = 4157277213689437076LL;
	int16_t x315 = 600;
	int32_t x316 = -5;

	t73 = (x313&((x314%x315)-x316));

	if (t73 != 400LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x317 = 1U;
	volatile uint16_t x318 = UINT16_MAX;
	uint32_t x319 = 4785U;
	int8_t x320 = INT8_MIN;
	volatile uint32_t t74 = 10232583U;

	t74 = (x317&((x318%x319)-x320));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x322 = 59U;
	uint64_t x324 = 22287LLU;
	volatile uint64_t t75 = 58997867LLU;

	t75 = (x321&((x322%x323)-x324));

	if (t75 != 18446744073709529388LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = -1;
	volatile int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	int32_t x328 = -1;
	volatile int32_t t76 = 274566;

	t76 = (x325&((x326%x327)-x328));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = -1;
	static volatile uint8_t x330 = 4U;
	static volatile int64_t x332 = 7541135243722158LL;
	int64_t t77 = -9939024289LL;

	t77 = (x329&((x330%x331)-x332));

	if (t77 != -7541135243722154LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x333 = INT16_MAX;
	volatile int8_t x334 = 29;
	int32_t x335 = INT32_MAX;
	volatile int32_t t78 = 3;

	t78 = (x333&((x334%x335)-x336));

	if (t78 != 24558) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x339 = 1;
	int8_t x340 = 14;
	int32_t t79 = -49;

	t79 = (x337&((x338%x339)-x340));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = INT32_MIN;
	uint64_t x342 = 14945522089LLU;
	int32_t x343 = INT32_MAX;
	static int64_t x344 = INT64_MIN;
	uint64_t t80 = 1053850LLU;

	t80 = (x341&((x342%x343)-x344));

	if (t80 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x347 = INT8_MAX;
	int64_t t81 = -197304064756215LL;

	t81 = (x345&((x346%x347)-x348));

	if (t81 != 65LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = INT64_MIN;
	volatile int16_t x350 = INT16_MIN;
	uint16_t x351 = 1498U;
	uint8_t x352 = 77U;
	static int64_t t82 = INT64_MIN;

	t82 = (x349&((x350%x351)-x352));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x353 = INT16_MIN;
	int16_t x356 = 526;
	int32_t t83 = -287;

	t83 = (x353&((x354%x355)-x356));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x357 = -1LL;
	int32_t x358 = -80026856;
	int64_t x359 = -1LL;
	int64_t x360 = -2659327003121078124LL;

	t84 = (x357&((x358%x359)-x360));

	if (t84 != 2659327003121078124LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x361 = 81U;
	int8_t x362 = 1;
	int8_t x363 = -7;
	uint64_t x364 = 425LLU;

	t85 = (x361&((x362%x363)-x364));

	if (t85 != 80LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x366 = -1;
	static int8_t x367 = INT8_MAX;
	int64_t x368 = INT64_MIN;
	volatile int64_t t86 = 1463445LL;

	t86 = (x365&((x366%x367)-x368));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x370 = UINT16_MAX;
	int8_t x371 = -1;
	int32_t t87 = -33;

	t87 = (x369&((x370%x371)-x372));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x373 = 18515288904795408LL;
	static volatile int32_t x374 = -1;
	uint16_t x375 = UINT16_MAX;
	int16_t x376 = INT16_MIN;
	volatile int64_t t88 = 8502160112LL;

	t88 = (x373&((x374%x375)-x376));

	if (t88 != 1296LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x377 = -1LL;
	int32_t x378 = -63316599;
	int16_t x379 = -1;
	int16_t x380 = 1;
	int64_t t89 = -1001LL;

	t89 = (x377&((x378%x379)-x380));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x381 = INT64_MAX;
	int32_t x383 = INT32_MIN;
	volatile int64_t t90 = 816502431LL;

	t90 = (x381&((x382%x383)-x384));

	if (t90 != 24624825LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = -1;
	uint32_t x386 = UINT32_MAX;
	int32_t x387 = INT32_MIN;
	int8_t x388 = INT8_MAX;
	uint32_t t91 = 1743812031U;

	t91 = (x385&((x386%x387)-x388));

	if (t91 != 2147483520U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x389 = INT64_MAX;
	static int16_t x390 = 53;
	uint16_t x391 = 1323U;
	uint32_t x392 = 11535467U;

	t92 = (x389&((x390%x391)-x392));

	if (t92 != 4283431882LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x394 = -1;
	int16_t x396 = INT16_MAX;
	static volatile int32_t t93 = -1054208;

	t93 = (x393&((x394%x395)-x396));

	if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x397 = 257U;
	int64_t x398 = INT64_MIN;
	uint32_t x399 = UINT32_MAX;
	uint8_t x400 = UINT8_MAX;
	int64_t t94 = 66804664369LL;

	t94 = (x397&((x398%x399)-x400));

	if (t94 != 257LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x401 = INT64_MIN;
	uint32_t x403 = 419389U;
	int32_t x404 = -17211755;

	t95 = (x401&((x402%x403)-x404));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x405 = 31U;
	static volatile int32_t x406 = INT32_MIN;
	int64_t x407 = -37509800242573130LL;
	int8_t x408 = INT8_MIN;
	volatile int64_t t96 = 2014325970299307197LL;

	t96 = (x405&((x406%x407)-x408));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x409 = -1;
	volatile uint8_t x411 = UINT8_MAX;
	volatile int8_t x412 = -1;
	int64_t t97 = -193336387723LL;

	t97 = (x409&((x410%x411)-x412));

	if (t97 != -127LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x413 = 552U;
	int32_t x416 = 549388;
	volatile uint32_t t98 = 2883186U;

	t98 = (x413&((x414%x415)-x416));

	if (t98 != 512U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = 14131758;
	int8_t x418 = 0;
	int8_t x420 = INT8_MAX;
	volatile int32_t t99 = 0;

	t99 = (x417&((x418%x419)-x420));

	if (t99 != 14131712) { NG(); } else { ; }
	
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

