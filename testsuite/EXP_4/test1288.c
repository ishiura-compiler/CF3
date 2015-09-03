#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 2U;
int32_t x2 = INT32_MIN;
int64_t x3 = INT64_MIN;
uint8_t x6 = 3U;
volatile uint8_t x8 = 57U;
int32_t t3 = 156830111;
volatile int8_t x18 = INT8_MIN;
volatile int32_t t4 = -201647;
int32_t t7 = INT32_MIN;
static int16_t x35 = -1;
volatile int64_t x37 = -1LL;
static int32_t x38 = INT32_MAX;
static uint8_t x41 = UINT8_MAX;
int16_t x45 = INT16_MAX;
int32_t x52 = 6002568;
volatile uint64_t x60 = UINT64_MAX;
uint64_t x75 = 2053794373LLU;
int32_t x76 = -1;
int32_t t17 = 141;
uint32_t t18 = UINT32_MAX;
int16_t x81 = INT16_MIN;
static int32_t t20 = 595537173;
uint8_t x90 = UINT8_MAX;
int64_t x94 = 480LL;
uint16_t x95 = 502U;
uint64_t x97 = 452532782LLU;
uint8_t x100 = 3U;
static uint16_t x101 = UINT16_MAX;
int8_t x104 = 14;
volatile int32_t t24 = 63;
uint32_t x105 = 24290U;
int16_t x107 = -1;
uint32_t t25 = 28842U;
volatile int8_t x111 = INT8_MAX;
volatile int32_t t26 = -11976169;
int32_t x119 = INT32_MIN;
static volatile int16_t x121 = INT16_MAX;
volatile uint8_t x123 = UINT8_MAX;
int32_t t29 = 51;
static int32_t x129 = INT32_MAX;
uint8_t x132 = 10U;
static volatile int8_t x134 = -1;
int32_t t31 = -3548772;
volatile uint32_t x141 = 18265658U;
static int64_t x143 = -860191516802456357LL;
uint8_t x144 = 2U;
uint32_t x145 = 107631866U;
uint16_t x146 = 32421U;
volatile uint16_t x149 = UINT16_MAX;
static int32_t t35 = -23;
static uint8_t x162 = 1U;
volatile uint32_t x167 = 4000U;
static int16_t x176 = INT16_MIN;
int32_t x177 = 0;
static uint64_t x178 = 101637938672LLU;
int8_t x179 = INT8_MIN;
uint32_t x182 = 829182712U;
uint16_t x188 = 1U;
volatile uint8_t x189 = UINT8_MAX;
int16_t x190 = 985;
int32_t x192 = 106135;
static volatile int32_t t45 = 4;
uint8_t x200 = 3U;
volatile int32_t x207 = -2282;
static uint8_t x210 = UINT8_MAX;
volatile uint32_t x213 = UINT32_MAX;
uint32_t t51 = 7324U;
int32_t x221 = 16362296;
uint8_t x230 = 2U;
int16_t x233 = 336;
volatile int32_t t57 = -58;
volatile int8_t x241 = INT8_MIN;
volatile int32_t t58 = 11;
volatile int8_t x247 = INT8_MIN;
int32_t x248 = INT32_MIN;
int32_t x254 = INT32_MIN;
volatile int8_t x258 = -1;
int32_t x266 = INT32_MAX;
static int32_t x269 = -1;
int32_t x271 = INT32_MAX;
volatile int32_t t65 = -4754;
int32_t t66 = -55980239;
static uint8_t x279 = 56U;
uint32_t x294 = UINT32_MAX;
int8_t x295 = INT8_MIN;
uint32_t x302 = 7775U;
uint8_t x304 = 77U;
int32_t t73 = -1048495982;
static int32_t x314 = -2;
volatile int16_t x316 = 2;
int16_t x317 = INT16_MIN;
static int32_t t77 = -1063378;
int32_t x322 = INT32_MAX;
volatile uint8_t x323 = 80U;
volatile int16_t x330 = INT16_MIN;
int64_t t80 = 775945815LL;
int8_t x338 = 23;
int8_t x340 = 0;
int64_t x350 = INT64_MIN;
uint32_t x363 = 1234141290U;
int32_t x365 = INT32_MIN;
uint32_t x372 = UINT32_MAX;
static volatile uint32_t x377 = 1127671875U;
uint8_t x384 = 4U;
uint8_t x390 = UINT8_MAX;
int32_t x396 = INT32_MIN;
volatile int32_t t96 = -10977040;
volatile uint32_t x403 = 1U;
int32_t x405 = -1;
volatile int32_t t99 = 2;


void f0(void) {
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 2945582;

	t0 = (x1+(x2<(x3==x4)));

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 119U;
	int64_t x7 = INT64_MIN;
	volatile uint32_t t1 = 14128U;

	t1 = (x5+(x6<(x7==x8)));

	if (t1 != 119U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = UINT16_MAX;
	static int64_t x10 = INT64_MAX;
	uint32_t x11 = 29373U;
	volatile int64_t x12 = 6529LL;
	int32_t t2 = 156019;

	t2 = (x9+(x10<(x11==x12)));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	int8_t x14 = 19;
	int16_t x15 = 258;
	static int16_t x16 = INT16_MIN;

	t3 = (x13+(x14<(x15==x16)));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MIN;
	volatile int8_t x19 = INT8_MAX;
	static uint32_t x20 = 8198U;

	t4 = (x17+(x18<(x19==x20)));

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	int16_t x22 = -1;
	uint16_t x23 = 0U;
	int32_t x24 = 1;
	volatile int64_t t5 = 825686909193246LL;

	t5 = (x21+(x22<(x23==x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 0;
	int16_t x26 = INT16_MIN;
	volatile uint32_t x27 = UINT32_MAX;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 0;

	t6 = (x25+(x26<(x27==x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int32_t x30 = INT32_MAX;
	int32_t x31 = INT32_MIN;
	uint8_t x32 = 57U;

	t7 = (x29+(x30<(x31==x32)));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -331;
	uint32_t x34 = 46U;
	static int16_t x36 = INT16_MAX;
	static int32_t t8 = 7;

	t8 = (x33+(x34<(x35==x36)));

	if (t8 != -331) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x39 = INT16_MIN;
	uint64_t x40 = 7LLU;
	volatile int64_t t9 = 27072200160145926LL;

	t9 = (x37+(x38<(x39==x40)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -434021711038LL;
	volatile uint16_t x43 = 10619U;
	int64_t x44 = INT64_MAX;
	volatile int32_t t10 = -1012;

	t10 = (x41+(x42<(x43==x44)));

	if (t10 != 256) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x46 = INT64_MAX;
	int16_t x47 = INT16_MIN;
	static uint8_t x48 = 41U;
	static int32_t t11 = -75863;

	t11 = (x45+(x46<(x47==x48)));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 0;
	uint16_t x50 = UINT16_MAX;
	int64_t x51 = INT64_MIN;
	volatile int32_t t12 = 0;

	t12 = (x49+(x50<(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	volatile int64_t x54 = -5811LL;
	int16_t x55 = 1;
	uint64_t x56 = 175632283444054LLU;
	volatile int32_t t13 = -264868216;

	t13 = (x53+(x54<(x55==x56)));

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 619U;
	uint8_t x58 = UINT8_MAX;
	uint16_t x59 = 15U;
	volatile uint32_t t14 = 178399U;

	t14 = (x57+(x58<(x59==x60)));

	if (t14 != 619U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 1456662839693LL;
	volatile int64_t x62 = -28470840LL;
	uint32_t x63 = UINT32_MAX;
	static int64_t x64 = -1LL;
	int64_t t15 = -119762695746275983LL;

	t15 = (x61+(x62<(x63==x64)));

	if (t15 != 1456662839694LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -1395;
	static int32_t x70 = 3;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = 15042LLU;
	int32_t t16 = -64869;

	t16 = (x69+(x70<(x71==x72)));

	if (t16 != -1395) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int32_t x74 = INT32_MIN;

	t17 = (x73+(x74<(x75==x76)));

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x77 = UINT32_MAX;
	int8_t x78 = INT8_MAX;
	int16_t x79 = INT16_MIN;
	volatile int8_t x80 = INT8_MAX;

	t18 = (x77+(x78<(x79==x80)));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x82 = 25U;
	int64_t x83 = 23LL;
	uint16_t x84 = 6738U;
	int32_t t19 = 4131;

	t19 = (x81+(x82<(x83==x84)));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x85 = -1;
	uint32_t x86 = UINT32_MAX;
	int32_t x87 = 88;
	int16_t x88 = INT16_MIN;

	t20 = (x85+(x86<(x87==x88)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x89 = 128179426479501LLU;
	static uint16_t x91 = UINT16_MAX;
	int64_t x92 = -15446202LL;
	uint64_t t21 = 5477937748LLU;

	t21 = (x89+(x90<(x91==x92)));

	if (t21 != 128179426479501LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = UINT64_MAX;
	static int32_t x96 = INT32_MIN;
	uint64_t t22 = UINT64_MAX;

	t22 = (x93+(x94<(x95==x96)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x98 = 7U;
	uint64_t x99 = 8479618520885LLU;
	volatile uint64_t t23 = 59054228260667351LLU;

	t23 = (x97+(x98<(x99==x100)));

	if (t23 != 452532782LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x102 = 56U;
	static int8_t x103 = -7;

	t24 = (x101+(x102<(x103==x104)));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x106 = INT64_MIN;
	int64_t x108 = INT64_MAX;

	t25 = (x105+(x106<(x107==x108)));

	if (t25 != 24291U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = -1;
	int8_t x110 = INT8_MAX;
	int32_t x112 = INT32_MIN;

	t26 = (x109+(x110<(x111==x112)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x117 = UINT8_MAX;
	volatile int8_t x118 = INT8_MIN;
	int8_t x120 = -1;
	static volatile int32_t t27 = -715486863;

	t27 = (x117+(x118<(x119==x120)));

	if (t27 != 256) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x122 = 2U;
	int32_t x124 = -1;
	volatile int32_t t28 = -17327256;

	t28 = (x121+(x122<(x123==x124)));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = UINT16_MAX;
	static uint16_t x126 = 63U;
	volatile int32_t x127 = INT32_MIN;
	uint32_t x128 = UINT32_MAX;

	t29 = (x125+(x126<(x127==x128)));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x130 = 400086848U;
	int32_t x131 = INT32_MIN;
	volatile int32_t t30 = INT32_MAX;

	t30 = (x129+(x130<(x131==x132)));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = -57;
	uint64_t x135 = 17221862077545841LLU;
	int32_t x136 = INT32_MIN;

	t31 = (x133+(x134<(x135==x136)));

	if (t31 != -56) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = 30021U;
	int32_t x138 = INT32_MIN;
	static uint32_t x139 = UINT32_MAX;
	uint16_t x140 = UINT16_MAX;
	int32_t t32 = -339;

	t32 = (x137+(x138<(x139==x140)));

	if (t32 != 30022) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x142 = -1;
	volatile uint32_t t33 = 933817856U;

	t33 = (x141+(x142<(x143==x144)));

	if (t33 != 18265659U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x147 = -1;
	uint8_t x148 = 53U;
	static volatile uint32_t t34 = 26972509U;

	t34 = (x145+(x146<(x147==x148)));

	if (t34 != 107631866U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x150 = INT8_MAX;
	int8_t x151 = -2;
	int8_t x152 = 2;

	t35 = (x149+(x150<(x151==x152)));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x153 = INT16_MIN;
	static int8_t x154 = INT8_MAX;
	int8_t x155 = INT8_MIN;
	uint16_t x156 = 28U;
	volatile int32_t t36 = -994474231;

	t36 = (x153+(x154<(x155==x156)));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = 12U;
	int8_t x158 = INT8_MIN;
	static int64_t x159 = -178616763465976227LL;
	int16_t x160 = 222;
	volatile int32_t t37 = -147;

	t37 = (x157+(x158<(x159==x160)));

	if (t37 != 13) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 56264125392LLU;
	int16_t x163 = INT16_MIN;
	uint64_t x164 = UINT64_MAX;
	uint64_t t38 = 4LLU;

	t38 = (x161+(x162<(x163==x164)));

	if (t38 != 56264125392LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = 6628U;
	static int16_t x166 = INT16_MIN;
	static int32_t x168 = INT32_MAX;
	uint32_t t39 = 35962465U;

	t39 = (x165+(x166<(x167==x168)));

	if (t39 != 6629U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	volatile int8_t x170 = INT8_MIN;
	int16_t x171 = -358;
	uint8_t x172 = 18U;
	int64_t t40 = 6160442568LL;

	t40 = (x169+(x170<(x171==x172)));

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = INT32_MIN;
	static uint16_t x174 = 31U;
	volatile int16_t x175 = 13;
	int32_t t41 = INT32_MIN;

	t41 = (x173+(x174<(x175==x176)));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x180 = UINT16_MAX;
	int32_t t42 = 5733;

	t42 = (x177+(x178<(x179==x180)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = -1LL;
	uint32_t x183 = UINT32_MAX;
	static int8_t x184 = -1;
	volatile int64_t t43 = -7158767LL;

	t43 = (x181+(x182<(x183==x184)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = UINT8_MAX;
	int32_t x186 = 30;
	uint32_t x187 = 10U;
	volatile int32_t t44 = -39;

	t44 = (x185+(x186<(x187==x188)));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x191 = INT16_MIN;

	t45 = (x189+(x190<(x191==x192)));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 8070372741383LLU;
	int32_t x194 = -79354;
	uint16_t x195 = 1036U;
	int32_t x196 = -113910;
	volatile uint64_t t46 = 14101405254046LLU;

	t46 = (x193+(x194<(x195==x196)));

	if (t46 != 8070372741384LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MAX;
	int16_t x198 = 51;
	uint16_t x199 = 122U;
	int32_t t47 = INT32_MAX;

	t47 = (x197+(x198<(x199==x200)));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	volatile int32_t x202 = -1;
	static int16_t x203 = -1;
	uint16_t x204 = 3144U;
	volatile int32_t t48 = 257;

	t48 = (x201+(x202<(x203==x204)));

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MAX;
	volatile uint8_t x206 = 58U;
	int16_t x208 = -1;
	static int32_t t49 = -212366;

	t49 = (x205+(x206<(x207==x208)));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x209 = UINT64_MAX;
	int64_t x211 = INT64_MAX;
	int64_t x212 = INT64_MAX;
	static volatile uint64_t t50 = UINT64_MAX;

	t50 = (x209+(x210<(x211==x212)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x214 = INT16_MIN;
	static uint64_t x215 = 7248599294370296515LLU;
	volatile int32_t x216 = 2916;

	t51 = (x213+(x214<(x215==x216)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = -1;
	static uint32_t x218 = 332993U;
	int16_t x219 = -1;
	int8_t x220 = 3;
	volatile int32_t t52 = -227;

	t52 = (x217+(x218<(x219==x220)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x222 = 147800U;
	int32_t x223 = -1;
	int16_t x224 = INT16_MIN;
	static int32_t t53 = 7;

	t53 = (x221+(x222<(x223==x224)));

	if (t53 != 16362296) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x225 = 16699U;
	volatile uint64_t x226 = 809LLU;
	volatile uint8_t x227 = 103U;
	static uint32_t x228 = 61220U;
	static uint32_t t54 = 15U;

	t54 = (x225+(x226<(x227==x228)));

	if (t54 != 16699U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x229 = INT8_MIN;
	int32_t x231 = -169372;
	int64_t x232 = 26027774047731LL;
	int32_t t55 = 26787;

	t55 = (x229+(x230<(x231==x232)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x234 = INT64_MIN;
	static int16_t x235 = -799;
	int8_t x236 = INT8_MIN;
	static volatile int32_t t56 = 104;

	t56 = (x233+(x234<(x235==x236)));

	if (t56 != 337) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = 1U;
	int32_t x238 = -367291;
	int16_t x239 = -26;
	int8_t x240 = INT8_MIN;

	t57 = (x237+(x238<(x239==x240)));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x242 = -37;
	volatile int16_t x243 = INT16_MIN;
	volatile int64_t x244 = -195290158296LL;

	t58 = (x241+(x242<(x243==x244)));

	if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x245 = 1;
	int16_t x246 = -271;
	int32_t t59 = -55110;

	t59 = (x245+(x246<(x247==x248)));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x249 = 32U;
	int16_t x250 = INT16_MIN;
	volatile uint64_t x251 = UINT64_MAX;
	static uint16_t x252 = 532U;
	volatile int32_t t60 = 0;

	t60 = (x249+(x250<(x251==x252)));

	if (t60 != 33) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = 28;
	static int32_t x255 = -5;
	int8_t x256 = -1;
	int32_t t61 = -1;

	t61 = (x253+(x254<(x255==x256)));

	if (t61 != 29) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x257 = INT8_MAX;
	volatile int16_t x259 = -1;
	uint32_t x260 = 143262U;
	int32_t t62 = -9513;

	t62 = (x257+(x258<(x259==x260)));

	if (t62 != 128) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = UINT16_MAX;
	static int64_t x262 = INT64_MIN;
	volatile int16_t x263 = 38;
	int8_t x264 = -1;
	int32_t t63 = -429425;

	t63 = (x261+(x262<(x263==x264)));

	if (t63 != 65536) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = -1;
	volatile int16_t x267 = -542;
	uint8_t x268 = 12U;
	int32_t t64 = 47508979;

	t64 = (x265+(x266<(x267==x268)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x270 = UINT32_MAX;
	int8_t x272 = 5;

	t65 = (x269+(x270<(x271==x272)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x273 = 10732U;
	uint64_t x274 = UINT64_MAX;
	int8_t x275 = INT8_MIN;
	uint32_t x276 = UINT32_MAX;

	t66 = (x273+(x274<(x275==x276)));

	if (t66 != 10732) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = INT16_MIN;
	static int64_t x278 = INT64_MIN;
	uint8_t x280 = 4U;
	volatile int32_t t67 = -746973;

	t67 = (x277+(x278<(x279==x280)));

	if (t67 != -32767) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = INT8_MIN;
	uint64_t x282 = UINT64_MAX;
	int8_t x283 = INT8_MIN;
	int64_t x284 = INT64_MAX;
	volatile int32_t t68 = 0;

	t68 = (x281+(x282<(x283==x284)));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x285 = 1;
	int16_t x286 = -1;
	volatile uint8_t x287 = UINT8_MAX;
	int32_t x288 = -21;
	int32_t t69 = 5;

	t69 = (x285+(x286<(x287==x288)));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = -1099;
	volatile int32_t x290 = 371275531;
	volatile uint16_t x291 = 3U;
	int16_t x292 = 5;
	volatile int32_t t70 = 438571730;

	t70 = (x289+(x290<(x291==x292)));

	if (t70 != -1099) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x293 = 2LLU;
	int32_t x296 = INT32_MIN;
	volatile uint64_t t71 = 349390LLU;

	t71 = (x293+(x294<(x295==x296)));

	if (t71 != 2LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MIN;
	uint64_t x298 = 3960172395333059LLU;
	int64_t x299 = INT64_MIN;
	int8_t x300 = INT8_MAX;
	int64_t t72 = INT64_MIN;

	t72 = (x297+(x298<(x299==x300)));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x301 = -1;
	static uint16_t x303 = 3U;

	t73 = (x301+(x302<(x303==x304)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x305 = 54;
	volatile int32_t x306 = INT32_MIN;
	volatile int32_t x307 = -1;
	static volatile uint8_t x308 = 73U;
	static volatile int32_t t74 = 390;

	t74 = (x305+(x306<(x307==x308)));

	if (t74 != 55) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x309 = 1U;
	int16_t x310 = INT16_MAX;
	uint64_t x311 = 1506757370712416050LLU;
	volatile uint64_t x312 = UINT64_MAX;
	volatile uint32_t t75 = 102122320U;

	t75 = (x309+(x310<(x311==x312)));

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x313 = UINT16_MAX;
	static volatile int8_t x315 = INT8_MAX;
	int32_t t76 = -891;

	t76 = (x313+(x314<(x315==x316)));

	if (t76 != 65536) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x318 = 0U;
	volatile int8_t x319 = INT8_MAX;
	int32_t x320 = -1;

	t77 = (x317+(x318<(x319==x320)));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x321 = 217714LLU;
	static int64_t x324 = INT64_MIN;
	volatile uint64_t t78 = 1898LLU;

	t78 = (x321+(x322<(x323==x324)));

	if (t78 != 217714LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = 18745LL;
	uint64_t x326 = UINT64_MAX;
	int64_t x327 = -1LL;
	static uint32_t x328 = UINT32_MAX;
	int64_t t79 = 1946609LL;

	t79 = (x325+(x326<(x327==x328)));

	if (t79 != 18745LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = 402571979LL;
	uint16_t x331 = 11199U;
	uint8_t x332 = 3U;

	t80 = (x329+(x330<(x331==x332)));

	if (t80 != 402571980LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x333 = 952880395589614LLU;
	volatile int16_t x334 = INT16_MIN;
	int8_t x335 = -1;
	uint64_t x336 = 6295135922LLU;
	uint64_t t81 = 25LLU;

	t81 = (x333+(x334<(x335==x336)));

	if (t81 != 952880395589615LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x337 = UINT8_MAX;
	int64_t x339 = INT64_MIN;
	int32_t t82 = -171;

	t82 = (x337+(x338<(x339==x340)));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x341 = -1;
	int16_t x342 = -3550;
	int64_t x343 = INT64_MIN;
	uint32_t x344 = 601114760U;
	volatile int32_t t83 = 51254701;

	t83 = (x341+(x342<(x343==x344)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MAX;
	uint16_t x346 = 467U;
	int8_t x347 = 3;
	static volatile int32_t x348 = 133646544;
	volatile int32_t t84 = INT32_MAX;

	t84 = (x345+(x346<(x347==x348)));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x349 = -202LL;
	uint32_t x351 = UINT32_MAX;
	static int16_t x352 = INT16_MIN;
	volatile int64_t t85 = -124311334689500LL;

	t85 = (x349+(x350<(x351==x352)));

	if (t85 != -201LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x353 = 985748U;
	uint64_t x354 = 2301403191436163LLU;
	int32_t x355 = INT32_MIN;
	int16_t x356 = -119;
	volatile uint32_t t86 = 9U;

	t86 = (x353+(x354<(x355==x356)));

	if (t86 != 985748U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = -1;
	static uint16_t x358 = 30U;
	uint32_t x359 = UINT32_MAX;
	uint16_t x360 = 2U;
	volatile int32_t t87 = -2;

	t87 = (x357+(x358<(x359==x360)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x361 = INT8_MIN;
	static int64_t x362 = -57065532LL;
	int64_t x364 = 0LL;
	int32_t t88 = 3109;

	t88 = (x361+(x362<(x363==x364)));

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x366 = 3;
	int64_t x367 = INT64_MIN;
	static volatile uint32_t x368 = UINT32_MAX;
	volatile int32_t t89 = INT32_MIN;

	t89 = (x365+(x366<(x367==x368)));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = -41649730LL;
	int16_t x370 = INT16_MIN;
	static int8_t x371 = -1;
	static int64_t t90 = 916272823LL;

	t90 = (x369+(x370<(x371==x372)));

	if (t90 != -41649729LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = -1LL;
	static volatile int64_t x374 = 2LL;
	static volatile int32_t x375 = INT32_MIN;
	int64_t x376 = 287767614909300554LL;
	int64_t t91 = 5158884830771667LL;

	t91 = (x373+(x374<(x375==x376)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x378 = 14U;
	static volatile uint64_t x379 = 9189456514113400209LLU;
	static int32_t x380 = INT32_MAX;
	static uint32_t t92 = 2969U;

	t92 = (x377+(x378<(x379==x380)));

	if (t92 != 1127671875U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x381 = UINT32_MAX;
	uint16_t x382 = 25U;
	volatile int64_t x383 = INT64_MAX;
	volatile uint32_t t93 = UINT32_MAX;

	t93 = (x381+(x382<(x383==x384)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = INT16_MIN;
	uint8_t x386 = UINT8_MAX;
	volatile uint32_t x387 = UINT32_MAX;
	int64_t x388 = 11309650315911543LL;
	volatile int32_t t94 = -3857;

	t94 = (x385+(x386<(x387==x388)));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x389 = 371;
	static volatile int64_t x391 = -1LL;
	uint16_t x392 = UINT16_MAX;
	static volatile int32_t t95 = 367675668;

	t95 = (x389+(x390<(x391==x392)));

	if (t95 != 371) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x393 = INT8_MAX;
	uint64_t x394 = 42146264823327LLU;
	uint16_t x395 = 21009U;

	t96 = (x393+(x394<(x395==x396)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = INT32_MIN;
	int16_t x398 = -4090;
	uint16_t x399 = UINT16_MAX;
	static int16_t x400 = INT16_MAX;
	int32_t t97 = 112;

	t97 = (x397+(x398<(x399==x400)));

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = INT32_MIN;
	int8_t x402 = INT8_MIN;
	int32_t x404 = INT32_MIN;
	static volatile int32_t t98 = 91;

	t98 = (x401+(x402<(x403==x404)));

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x406 = -1;
	int32_t x407 = INT32_MIN;
	volatile uint64_t x408 = UINT64_MAX;

	t99 = (x405+(x406<(x407==x408)));

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

