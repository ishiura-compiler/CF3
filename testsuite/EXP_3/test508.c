#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = -88350;
uint32_t x18 = 26U;
volatile int32_t t5 = 228;
volatile int64_t x36 = INT64_MAX;
static int64_t x41 = -184491174954750105LL;
int64_t x49 = INT64_MIN;
int16_t x50 = INT16_MAX;
int32_t x59 = -1;
uint64_t t16 = 33618898LLU;
int8_t x71 = -1;
volatile int64_t x72 = INT64_MIN;
volatile int64_t t17 = 24470399122LL;
int16_t x77 = INT16_MIN;
uint32_t x79 = UINT32_MAX;
volatile int64_t t20 = -137LL;
static volatile uint32_t t21 = 330U;
int32_t x93 = 0;
int32_t x97 = -251958;
int16_t x103 = INT16_MAX;
static uint16_t x105 = 433U;
volatile int32_t t27 = 5693834;
int64_t x115 = INT64_MIN;
static int16_t x124 = -1;
static int8_t x134 = INT8_MIN;
volatile int32_t x136 = -3372999;
int8_t x146 = INT8_MAX;
volatile int64_t x147 = -2LL;
volatile int64_t x151 = INT64_MIN;
int8_t x154 = INT8_MIN;
static int64_t x160 = INT64_MAX;
volatile int64_t x161 = INT64_MIN;
volatile int8_t x162 = 22;
int8_t x177 = INT8_MIN;
int64_t x179 = INT64_MAX;
int8_t x181 = INT8_MIN;
int64_t x182 = -1LL;
int64_t x188 = -1LL;
uint16_t x190 = 22149U;
volatile uint8_t x198 = 2U;
volatile int32_t t45 = -1;
uint8_t x205 = UINT8_MAX;
volatile int8_t x212 = INT8_MIN;
static uint16_t x214 = UINT16_MAX;
uint16_t x216 = 415U;
volatile uint32_t x221 = 1U;
int64_t x231 = -1LL;
static int8_t x238 = INT8_MAX;
volatile int32_t t54 = -1;
int32_t x246 = -86050921;
int32_t t55 = -20217;
static int8_t x249 = INT8_MAX;
int16_t x251 = 85;
int16_t x259 = -1;
int8_t x261 = -1;
int8_t x263 = 15;
static int8_t x265 = INT8_MIN;
static int16_t x272 = INT16_MAX;
int16_t x274 = INT16_MAX;
int32_t x276 = 1;
volatile uint16_t x289 = UINT16_MAX;
int16_t x292 = INT16_MAX;
volatile uint64_t t63 = 15LLU;
uint32_t x297 = 1379564209U;
int32_t x305 = -11285159;
int64_t x307 = 87273LL;
int8_t x308 = INT8_MIN;
int8_t x311 = INT8_MIN;
static volatile int16_t x312 = INT16_MAX;
int32_t x318 = -368203237;
uint64_t x322 = 55LLU;
int16_t x325 = INT16_MIN;
int64_t x330 = INT64_MIN;
int16_t x332 = INT16_MIN;
uint8_t x344 = UINT8_MAX;
volatile uint8_t x353 = 109U;
static uint64_t x355 = 201600302156LLU;
int64_t x356 = 243320114603LL;
static int8_t x370 = INT8_MIN;
int64_t t81 = -6LL;
int32_t x390 = INT32_MAX;
int8_t x413 = -1;
int32_t x414 = -1;
volatile int64_t t91 = 63082257830341LL;
static volatile int64_t x430 = -1LL;
uint16_t x432 = 867U;
int16_t x433 = INT16_MIN;
int8_t x436 = -1;
static volatile int32_t t93 = 28;
static int16_t x454 = INT16_MIN;
int64_t x465 = 201LL;


void f0(void) {
	int64_t x1 = -59901231LL;
	volatile uint8_t x2 = UINT8_MAX;
	uint64_t x3 = 40205982LLU;
	int8_t x4 = INT8_MIN;
	uint64_t t0 = 5LLU;

	t0 = ((x1+x2)+(x3/x4));

	if (t0 != 18446744073649650640LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 263U;
	uint8_t x7 = 1U;
	uint16_t x8 = 696U;
	int32_t t1 = 4440191;

	t1 = ((x5+x6)+(x7/x8));

	if (t1 != -88087) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -41454;
	int16_t x10 = 31;
	int16_t x11 = INT16_MAX;
	static int8_t x12 = 5;
	volatile int32_t t2 = -19780;

	t2 = ((x9+x10)+(x11/x12));

	if (t2 != -34870) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 34U;
	volatile int16_t x14 = INT16_MIN;
	int16_t x15 = INT16_MIN;
	int64_t x16 = INT64_MAX;
	volatile int64_t t3 = -1LL;

	t3 = ((x13+x14)+(x15/x16));

	if (t3 != -32734LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = UINT32_MAX;
	volatile int32_t x19 = 3;
	volatile int16_t x20 = -1698;
	uint32_t t4 = 3726218U;

	t4 = ((x17+x18)+(x19/x20));

	if (t4 != 25U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MAX;
	static int8_t x22 = 62;
	int32_t x23 = -1;
	uint8_t x24 = 1U;

	t5 = ((x21+x22)+(x23/x24));

	if (t5 != 32828) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	uint64_t x26 = 2LLU;
	int64_t x27 = -1LL;
	int32_t x28 = -1;
	volatile uint64_t t6 = 472LLU;

	t6 = ((x25+x26)+(x27/x28));

	if (t6 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = 1;
	int64_t x30 = -1LL;
	static int16_t x31 = -1;
	int8_t x32 = INT8_MIN;
	int64_t t7 = -267191144LL;

	t7 = ((x29+x30)+(x31/x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x33 = 75510547;
	int32_t x34 = INT32_MIN;
	static int64_t x35 = INT64_MIN;
	volatile int64_t t8 = -849452LL;

	t8 = ((x33+x34)+(x35/x36));

	if (t8 != -2071973102LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	static volatile uint64_t x38 = 2910LLU;
	volatile uint8_t x39 = UINT8_MAX;
	volatile int16_t x40 = INT16_MIN;
	uint64_t t9 = 245461408831295673LLU;

	t9 = ((x37+x38)+(x39/x40));

	if (t9 != 2147486557LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MIN;
	int32_t x43 = INT32_MAX;
	int64_t x44 = 61302410695LL;
	static volatile int64_t t10 = 10LL;

	t10 = ((x41+x42)+(x43/x44));

	if (t10 != -184491174954782873LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	uint64_t x46 = 11485695924LLU;
	volatile int32_t x47 = -1;
	uint32_t x48 = UINT32_MAX;
	volatile uint64_t t11 = 5312162664LLU;

	t11 = ((x45+x46)+(x47/x48));

	if (t11 != 15780663220LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x51 = -1;
	int64_t x52 = -61199202LL;
	static int64_t t12 = -3106298171329LL;

	t12 = ((x49+x50)+(x51/x52));

	if (t12 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 6879U;
	volatile int32_t x54 = 321382400;
	int16_t x55 = INT16_MIN;
	uint32_t x56 = 506847U;
	volatile uint32_t t13 = 39216881U;

	t13 = ((x53+x54)+(x55/x56));

	if (t13 != 321397752U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 357106095U;
	int16_t x58 = -858;
	int16_t x60 = INT16_MAX;
	static volatile uint32_t t14 = 359456917U;

	t14 = ((x57+x58)+(x59/x60));

	if (t14 != 357105237U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 3643U;
	volatile int64_t x62 = -1LL;
	uint8_t x63 = 17U;
	int16_t x64 = -898;
	volatile int64_t t15 = -196564LL;

	t15 = ((x61+x62)+(x63/x64));

	if (t15 != 3642LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	volatile uint64_t x66 = UINT64_MAX;
	int64_t x67 = INT64_MIN;
	uint64_t x68 = 58LLU;

	t16 = ((x65+x66)+(x67/x68));

	if (t16 != 159023653660357313LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 68381624;
	static uint16_t x70 = 425U;

	t17 = ((x69+x70)+(x71/x72));

	if (t17 != 68382049LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MIN;
	int8_t x74 = INT8_MAX;
	int64_t x75 = INT64_MIN;
	uint64_t x76 = 2762165509202913LLU;
	volatile uint64_t t18 = 7435678818175863340LLU;

	t18 = ((x73+x74)+(x75/x76));

	if (t18 != 3338LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = 0U;
	uint8_t x80 = 23U;
	static volatile uint32_t t19 = 99U;

	t19 = ((x77+x78)+(x79/x80));

	if (t19 != 186704940U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	static int64_t x82 = -7929531633LL;
	int16_t x83 = INT16_MIN;
	volatile int8_t x84 = 16;

	t20 = ((x81+x82)+(x83/x84));

	if (t20 != -3634566386LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = 250U;
	static volatile int8_t x86 = INT8_MAX;
	int32_t x87 = INT32_MAX;
	uint16_t x88 = 2U;

	t21 = ((x85+x86)+(x87/x88));

	if (t21 != 1073742200U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 67U;
	int8_t x90 = INT8_MIN;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = -195471954378845LL;
	volatile uint64_t t22 = 4440518217953595827LLU;

	t22 = ((x89+x90)+(x91/x92));

	if (t22 != 4294967236LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MIN;
	uint16_t x95 = 182U;
	int16_t x96 = INT16_MIN;
	volatile int64_t t23 = INT64_MIN;

	t23 = ((x93+x94)+(x95/x96));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = 979LL;
	int8_t x99 = INT8_MAX;
	uint32_t x100 = 4371578U;
	volatile int64_t t24 = -625651714643375206LL;

	t24 = ((x97+x98)+(x99/x100));

	if (t24 != -250979LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	uint32_t x102 = UINT32_MAX;
	uint64_t x104 = 18737926966313LLU;
	static uint64_t t25 = 1LLU;

	t25 = ((x101+x102)+(x103/x104));

	if (t25 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x106 = 57;
	uint64_t x107 = 58234672522569308LLU;
	uint32_t x108 = 3898474U;
	volatile uint64_t t26 = 170602656425LLU;

	t26 = ((x105+x106)+(x107/x108));

	if (t26 != 14937812701LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x109 = -25;
	int16_t x110 = -1;
	volatile int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MAX;

	t27 = ((x109+x110)+(x111/x112));

	if (t27 != -27) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = 484575453U;
	int16_t x114 = INT16_MIN;
	static uint32_t x116 = 454U;
	volatile int64_t t28 = -31108879988454568LL;

	t28 = ((x113+x114)+(x115/x116));

	if (t28 != -20315796953463429LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int8_t x118 = INT8_MIN;
	int32_t x119 = 1;
	uint64_t x120 = 1700875778503628597LLU;
	uint64_t t29 = 117060831049LLU;

	t29 = ((x117+x118)+(x119/x120));

	if (t29 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 34292035749214333LLU;
	uint32_t x122 = 198314882U;
	static uint8_t x123 = 20U;
	static uint64_t t30 = 316822534476642916LLU;

	t30 = ((x121+x122)+(x123/x124));

	if (t30 != 34292035947529195LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = -1;
	static uint8_t x126 = 12U;
	uint8_t x127 = 7U;
	uint16_t x128 = 9767U;
	volatile int32_t t31 = 117;

	t31 = ((x125+x126)+(x127/x128));

	if (t31 != 11) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x133 = 501U;
	int64_t x135 = INT64_MIN;
	int64_t t32 = 22LL;

	t32 = ((x133+x134)+(x135/x136));

	if (t32 != 2734472212447LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x137 = INT64_MIN;
	int64_t x138 = INT64_MAX;
	int32_t x139 = -4;
	static volatile int32_t x140 = 2;
	volatile int64_t t33 = -23214738LL;

	t33 = ((x137+x138)+(x139/x140));

	if (t33 != -3LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 1U;
	uint8_t x142 = 7U;
	uint32_t x143 = UINT32_MAX;
	volatile uint64_t x144 = 7630781600873767LLU;
	volatile uint64_t t34 = 2523422768LLU;

	t34 = ((x141+x142)+(x143/x144));

	if (t34 != 8LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = INT64_MIN;
	static int64_t x148 = INT64_MIN;
	int64_t t35 = 119079040LL;

	t35 = ((x145+x146)+(x147/x148));

	if (t35 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = -1LL;
	int8_t x150 = -23;
	uint32_t x152 = 22U;
	volatile int64_t t36 = 3527690000360804LL;

	t36 = ((x149+x150)+(x151/x152));

	if (t36 != -419244183493398924LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = 591161;
	int32_t x155 = INT32_MIN;
	static volatile int64_t x156 = -1842949992LL;
	volatile int64_t t37 = -874096847LL;

	t37 = ((x153+x154)+(x155/x156));

	if (t37 != 591034LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = 0LL;
	int64_t x158 = INT64_MAX;
	volatile uint16_t x159 = 241U;
	volatile int64_t t38 = INT64_MAX;

	t38 = ((x157+x158)+(x159/x160));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x163 = 560LLU;
	volatile int16_t x164 = INT16_MAX;
	static volatile uint64_t t39 = 11659LLU;

	t39 = ((x161+x162)+(x163/x164));

	if (t39 != 9223372036854775830LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MAX;
	static uint64_t x170 = UINT64_MAX;
	static int64_t x171 = 137467867075LL;
	static int8_t x172 = -1;
	volatile uint64_t t40 = 38370866LLU;

	t40 = ((x169+x170)+(x171/x172));

	if (t40 != 18446743936241717307LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x178 = -7;
	int64_t x180 = INT64_MAX;
	int64_t t41 = 529LL;

	t41 = ((x177+x178)+(x179/x180));

	if (t41 != -134LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x183 = 0U;
	static int32_t x184 = INT32_MAX;
	static volatile int64_t t42 = 45951004LL;

	t42 = ((x181+x182)+(x183/x184));

	if (t42 != -129LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x185 = UINT32_MAX;
	volatile int32_t x186 = -692;
	uint64_t x187 = 7054800686LLU;
	volatile uint64_t t43 = 243404352184477910LLU;

	t43 = ((x185+x186)+(x187/x188));

	if (t43 != 4294966603LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = 775563110U;
	int8_t x191 = INT8_MAX;
	int32_t x192 = INT32_MAX;
	volatile uint32_t t44 = 6619856U;

	t44 = ((x189+x190)+(x191/x192));

	if (t44 != 775585259U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x197 = UINT8_MAX;
	int16_t x199 = INT16_MAX;
	static int16_t x200 = 1962;

	t45 = ((x197+x198)+(x199/x200));

	if (t45 != 273) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x206 = -1;
	static volatile int64_t x207 = INT64_MIN;
	static int16_t x208 = 223;
	int64_t t46 = 459694180571LL;

	t46 = ((x205+x206)+(x207/x208));

	if (t46 != -41360412721321610LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x209 = 1323387830U;
	volatile int64_t x210 = 71LL;
	int64_t x211 = INT64_MAX;
	int64_t t47 = 0LL;

	t47 = ((x209+x210)+(x211/x212));

	if (t47 != -72057592714540034LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = -57176749;
	int8_t x215 = -1;
	volatile int32_t t48 = 83;

	t48 = ((x213+x214)+(x215/x216));

	if (t48 != -57111214) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x217 = INT8_MIN;
	int32_t x218 = 0;
	static int16_t x219 = INT16_MAX;
	int64_t x220 = INT64_MIN;
	int64_t t49 = -383383821LL;

	t49 = ((x217+x218)+(x219/x220));

	if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x222 = 121544066U;
	static int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MIN;
	volatile uint32_t t50 = 5864769U;

	t50 = ((x221+x222)+(x223/x224));

	if (t50 != 121544323U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x225 = 28665005893535039LLU;
	static int64_t x226 = INT64_MAX;
	volatile int32_t x227 = INT32_MAX;
	int8_t x228 = INT8_MIN;
	uint64_t t51 = 4102646282LLU;

	t51 = ((x225+x226)+(x227/x228));

	if (t51 != 9252037042731533631LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = 20;
	uint32_t x230 = 8778U;
	int64_t x232 = INT64_MIN;
	volatile int64_t t52 = 75470163LL;

	t52 = ((x229+x230)+(x231/x232));

	if (t52 != 8798LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = UINT32_MAX;
	int32_t x234 = INT32_MAX;
	int8_t x235 = INT8_MAX;
	int16_t x236 = INT16_MAX;
	static volatile uint32_t t53 = 574U;

	t53 = ((x233+x234)+(x235/x236));

	if (t53 != 2147483646U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x237 = INT32_MIN;
	int16_t x239 = 0;
	int32_t x240 = 153457352;

	t54 = ((x237+x238)+(x239/x240));

	if (t54 != -2147483521) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = INT16_MIN;
	uint16_t x247 = 102U;
	static uint8_t x248 = 3U;

	t55 = ((x245+x246)+(x247/x248));

	if (t55 != -86083655) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x250 = -73677610592862LL;
	int16_t x252 = INT16_MIN;
	static int64_t t56 = 3671706LL;

	t56 = ((x249+x250)+(x251/x252));

	if (t56 != -73677610592735LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = INT8_MAX;
	uint8_t x258 = 0U;
	int64_t x260 = INT64_MIN;
	int64_t t57 = 5142LL;

	t57 = ((x257+x258)+(x259/x260));

	if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x262 = 50U;
	int8_t x264 = 1;
	volatile int32_t t58 = 153277821;

	t58 = ((x261+x262)+(x263/x264));

	if (t58 != 64) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x266 = 131;
	uint64_t x267 = 132787331246LLU;
	static int32_t x268 = INT32_MIN;
	uint64_t t59 = 4441463363628762LLU;

	t59 = ((x265+x266)+(x267/x268));

	if (t59 != 3LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x269 = 12597U;
	int64_t x270 = INT64_MIN;
	volatile uint8_t x271 = 68U;
	int64_t t60 = -55899873LL;

	t60 = ((x269+x270)+(x271/x272));

	if (t60 != -9223372036854763211LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x273 = 13U;
	int64_t x275 = INT64_MIN;
	int64_t t61 = 1733885194195LL;

	t61 = ((x273+x274)+(x275/x276));

	if (t61 != -9223372036854743028LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = INT16_MIN;
	static uint8_t x286 = UINT8_MAX;
	int8_t x287 = -1;
	volatile int8_t x288 = INT8_MIN;
	static volatile int32_t t62 = 30337;

	t62 = ((x285+x286)+(x287/x288));

	if (t62 != -32513) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x290 = INT8_MIN;
	uint64_t x291 = 26422313867199LLU;

	t63 = ((x289+x290)+(x291/x292));

	if (t63 != 806435043LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x293 = INT8_MIN;
	int64_t x294 = -1006LL;
	int64_t x295 = INT64_MAX;
	int64_t x296 = INT64_MIN;
	static volatile int64_t t64 = 3LL;

	t64 = ((x293+x294)+(x295/x296));

	if (t64 != -1134LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x298 = 4;
	int8_t x299 = INT8_MIN;
	int64_t x300 = 270688718LL;
	volatile int64_t t65 = 641278480LL;

	t65 = ((x297+x298)+(x299/x300));

	if (t65 != 1379564213LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x301 = 0U;
	int64_t x302 = -89112560LL;
	uint32_t x303 = 3U;
	volatile int64_t x304 = -1LL;
	int64_t t66 = -6249LL;

	t66 = ((x301+x302)+(x303/x304));

	if (t66 != -89112563LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x306 = -1LL;
	static volatile int64_t t67 = 0LL;

	t67 = ((x305+x306)+(x307/x308));

	if (t67 != -11285841LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x309 = 47U;
	int32_t x310 = -1;
	int32_t t68 = 15;

	t68 = ((x309+x310)+(x311/x312));

	if (t68 != 46) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x313 = -1;
	int32_t x314 = -1;
	int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MIN;
	volatile int32_t t69 = -919691311;

	t69 = ((x313+x314)+(x315/x316));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x317 = 29309611LL;
	int8_t x319 = 2;
	int64_t x320 = 184848806930979LL;
	volatile int64_t t70 = 1LL;

	t70 = ((x317+x318)+(x319/x320));

	if (t70 != -338893626LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x321 = -1;
	static int32_t x323 = INT32_MIN;
	int32_t x324 = 515472;
	static uint64_t t71 = 690635365LLU;

	t71 = ((x321+x322)+(x323/x324));

	if (t71 != 18446744073709547504LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x326 = 2019740LLU;
	int32_t x327 = INT32_MAX;
	int64_t x328 = 3475920630590LL;
	uint64_t t72 = 14186960567LLU;

	t72 = ((x325+x326)+(x327/x328));

	if (t72 != 1986972LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x329 = 3806LL;
	volatile int16_t x331 = 2093;
	int64_t t73 = 96115LL;

	t73 = ((x329+x330)+(x331/x332));

	if (t73 != -9223372036854772002LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x333 = 3934523;
	int16_t x334 = -1;
	uint8_t x335 = 10U;
	int32_t x336 = -219;
	static volatile int32_t t74 = -1;

	t74 = ((x333+x334)+(x335/x336));

	if (t74 != 3934522) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x337 = -3;
	static uint8_t x338 = 62U;
	int64_t x339 = INT64_MIN;
	int16_t x340 = 14;
	volatile int64_t t75 = -31890LL;

	t75 = ((x337+x338)+(x339/x340));

	if (t75 != -658812288346769641LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x341 = 1972360978LLU;
	int16_t x342 = -1;
	uint64_t x343 = 0LLU;
	uint64_t t76 = 7935397168497LLU;

	t76 = ((x341+x342)+(x343/x344));

	if (t76 != 1972360977LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = INT16_MAX;
	int16_t x350 = INT16_MAX;
	int64_t x351 = INT64_MIN;
	uint32_t x352 = 8U;
	int64_t t77 = -19052273LL;

	t77 = ((x349+x350)+(x351/x352));

	if (t77 != -1152921504606781442LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x354 = UINT16_MAX;
	volatile uint64_t t78 = 4627LLU;

	t78 = ((x353+x354)+(x355/x356));

	if (t78 != 65644LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x357 = UINT8_MAX;
	int8_t x358 = 1;
	static int16_t x359 = INT16_MIN;
	volatile int32_t x360 = INT32_MIN;
	volatile int32_t t79 = 25;

	t79 = ((x357+x358)+(x359/x360));

	if (t79 != 256) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x361 = -3496;
	uint16_t x362 = UINT16_MAX;
	volatile int32_t x363 = INT32_MAX;
	int16_t x364 = -3;
	int32_t t80 = 121;

	t80 = ((x361+x362)+(x363/x364));

	if (t80 != -715765843) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x369 = -1;
	static int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MIN;

	t81 = ((x369+x370)+(x371/x372));

	if (t81 != -128LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x373 = 1;
	uint32_t x374 = 4555U;
	static int16_t x375 = INT16_MAX;
	static uint8_t x376 = 106U;
	uint32_t t82 = 287724U;

	t82 = ((x373+x374)+(x375/x376));

	if (t82 != 4865U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x377 = 73;
	volatile uint16_t x378 = 172U;
	volatile uint32_t x379 = 28344U;
	int64_t x380 = INT64_MIN;
	int64_t t83 = 3767867294LL;

	t83 = ((x377+x378)+(x379/x380));

	if (t83 != 245LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x381 = -1;
	int16_t x382 = INT16_MIN;
	uint32_t x383 = 120007981U;
	int32_t x384 = INT32_MAX;
	uint32_t t84 = 10U;

	t84 = ((x381+x382)+(x383/x384));

	if (t84 != 4294934527U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = -1;
	int16_t x391 = -2;
	int64_t x392 = -1LL;
	int64_t t85 = -121LL;

	t85 = ((x389+x390)+(x391/x392));

	if (t85 != 2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x393 = 8317595LLU;
	volatile uint16_t x394 = 59U;
	static volatile int16_t x395 = INT16_MIN;
	int8_t x396 = -1;
	uint64_t t86 = 7696890371682185799LLU;

	t86 = ((x393+x394)+(x395/x396));

	if (t86 != 8350422LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x401 = 3860261795349546LL;
	volatile uint8_t x402 = 20U;
	static uint8_t x403 = 3U;
	uint64_t x404 = 60325825719332LLU;
	static uint64_t t87 = 4603212LLU;

	t87 = ((x401+x402)+(x403/x404));

	if (t87 != 3860261795349566LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x405 = -1;
	int16_t x406 = 5638;
	int64_t x407 = -1470LL;
	volatile int64_t x408 = -156039532365068LL;
	volatile int64_t t88 = 13906672LL;

	t88 = ((x405+x406)+(x407/x408));

	if (t88 != 5637LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x409 = 5LL;
	volatile int16_t x410 = INT16_MIN;
	int32_t x411 = INT32_MIN;
	int64_t x412 = -6622632LL;
	static volatile int64_t t89 = -16526147LL;

	t89 = ((x409+x410)+(x411/x412));

	if (t89 != -32439LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x415 = 287LL;
	int64_t x416 = -1LL;
	static volatile int64_t t90 = 47421616015078LL;

	t90 = ((x413+x414)+(x415/x416));

	if (t90 != -289LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x417 = -3362;
	int8_t x418 = -1;
	int64_t x419 = INT64_MAX;
	static int16_t x420 = INT16_MAX;

	t91 = ((x417+x418)+(x419/x420));

	if (t91 != 281483566904037LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x429 = 1;
	uint32_t x431 = 124793U;
	int64_t t92 = 896LL;

	t92 = ((x429+x430)+(x431/x432));

	if (t92 != 143LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x434 = 6;
	static int16_t x435 = INT16_MAX;

	t93 = ((x433+x434)+(x435/x436));

	if (t93 != -65529) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x437 = INT16_MAX;
	int32_t x438 = -1;
	int16_t x439 = 0;
	static uint8_t x440 = 77U;
	int32_t t94 = 1814415;

	t94 = ((x437+x438)+(x439/x440));

	if (t94 != 32766) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x453 = 500656207;
	static uint8_t x455 = UINT8_MAX;
	int16_t x456 = -1;
	int32_t t95 = -1071;

	t95 = ((x453+x454)+(x455/x456));

	if (t95 != 500623184) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x457 = -1;
	static int16_t x458 = -4790;
	uint8_t x459 = 0U;
	int16_t x460 = -1;
	int32_t t96 = 25;

	t96 = ((x457+x458)+(x459/x460));

	if (t96 != -4791) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x461 = INT16_MIN;
	static int8_t x462 = -1;
	volatile int16_t x463 = -123;
	static int32_t x464 = INT32_MIN;
	volatile int32_t t97 = 285770;

	t97 = ((x461+x462)+(x463/x464));

	if (t97 != -32769) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x466 = -1;
	static int64_t x467 = INT64_MIN;
	int16_t x468 = INT16_MIN;
	static int64_t t98 = 208LL;

	t98 = ((x465+x466)+(x467/x468));

	if (t98 != 281474976710856LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x469 = -1;
	static volatile uint8_t x470 = 5U;
	int8_t x471 = -1;
	int64_t x472 = 1LL;
	int64_t t99 = -4770281606LL;

	t99 = ((x469+x470)+(x471/x472));

	if (t99 != 3LL) { NG(); } else { ; }
	
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

