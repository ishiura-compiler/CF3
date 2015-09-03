#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x6 = 22;
uint16_t x8 = 5229U;
volatile int64_t t0 = 109322189028732640LL;
uint64_t x12 = 461LLU;
int64_t t2 = 0LL;
uint16_t x20 = 860U;
uint64_t t3 = 3094328LLU;
static int8_t x23 = 9;
static volatile int32_t x25 = INT32_MAX;
volatile uint32_t x31 = 763U;
static uint16_t x32 = 2U;
uint32_t x33 = 1U;
volatile uint8_t x34 = 13U;
static volatile uint32_t t7 = 112U;
uint16_t x41 = UINT16_MAX;
uint8_t x50 = 15U;
uint64_t x51 = UINT64_MAX;
volatile uint64_t x64 = 5LLU;
uint64_t t14 = 95796676886876977LLU;
volatile int64_t t15 = -285760604802520LL;
uint32_t x74 = UINT32_MAX;
static int8_t x75 = -1;
uint32_t x77 = UINT32_MAX;
static int32_t x81 = 7484;
volatile int16_t x82 = INT16_MIN;
int64_t x84 = INT64_MIN;
static int32_t x86 = INT32_MIN;
static volatile uint16_t x90 = 7404U;
int64_t x92 = INT64_MIN;
uint64_t x93 = 2025041600295LLU;
int64_t x98 = INT64_MIN;
volatile uint64_t t22 = 676481107373LLU;
static int64_t x102 = INT64_MAX;
static int32_t x108 = INT32_MAX;
uint64_t x111 = 85483920897009LLU;
int8_t x120 = INT8_MAX;
int32_t t28 = -8482;
static int32_t x125 = INT32_MIN;
int64_t t29 = 25215LL;
uint8_t x130 = 1U;
int64_t t30 = 1592759LL;
uint64_t x133 = UINT64_MAX;
volatile uint64_t t32 = 1LLU;
volatile int8_t x141 = INT8_MIN;
int32_t t34 = -391965;
volatile int32_t t35 = -4929;
int64_t t36 = 583193LL;
static uint32_t x157 = 405U;
volatile int32_t t40 = 38;
uint8_t x175 = 1U;
volatile int32_t t41 = -94155716;
uint8_t x180 = 12U;
uint8_t x181 = UINT8_MAX;
int32_t x185 = -1;
static volatile uint64_t t44 = 15852666089589LLU;
uint64_t t45 = 126971186LLU;
static int8_t x199 = INT8_MIN;
int8_t x203 = INT8_MIN;
static int16_t x210 = 1;
int32_t x212 = INT32_MIN;
int32_t x215 = -18510970;
volatile int64_t x216 = -219245517LL;
volatile uint64_t t51 = 125165384LLU;
uint8_t x223 = 59U;
static uint8_t x226 = UINT8_MAX;
uint8_t x229 = 1U;
int16_t x231 = -1;
int64_t x242 = INT64_MIN;
uint64_t t58 = 62LLU;
int32_t x247 = INT32_MIN;
uint64_t x248 = UINT64_MAX;
volatile uint64_t t59 = 496127684369LLU;
int8_t x251 = INT8_MIN;
int32_t x252 = -166671;
int64_t x253 = -1LL;
uint16_t x256 = UINT16_MAX;
volatile int64_t x265 = INT64_MIN;
volatile int32_t x267 = INT32_MIN;
int64_t t64 = 1LL;
uint8_t x271 = 2U;
volatile uint16_t x273 = 21679U;
static int64_t x274 = -1LL;
int64_t t66 = 373583639277LL;
uint16_t x279 = UINT16_MAX;
int32_t x280 = -8102424;
static int8_t x281 = INT8_MAX;
uint32_t x285 = UINT32_MAX;
volatile int8_t x287 = 3;
int8_t x288 = INT8_MAX;
static int16_t x298 = 9;
int64_t t73 = 7451973LL;
int64_t x307 = -16737055755197LL;
volatile int64_t x308 = -32528585LL;
volatile int32_t t76 = 8363;
uint16_t x320 = 1U;
volatile uint64_t t78 = 1632021773278LLU;
int16_t x337 = INT16_MAX;
int64_t t81 = 70876705898824417LL;
int16_t x342 = INT16_MIN;
static uint8_t x346 = 51U;
static uint64_t t83 = 0LLU;
int16_t x351 = INT16_MIN;
static int32_t x352 = -1;
int8_t x355 = INT8_MIN;
int32_t x358 = 202248201;
int8_t x363 = INT8_MIN;
volatile int64_t t87 = -17LL;
int8_t x377 = INT8_MIN;
volatile uint64_t x379 = UINT64_MAX;
uint64_t t90 = 3105LLU;
static int16_t x381 = -2584;
int32_t x382 = INT32_MIN;
int64_t x384 = 43915691LL;
int16_t x385 = INT16_MIN;
uint64_t x387 = 9117LLU;
static int8_t x395 = INT8_MIN;
int64_t x399 = INT64_MIN;
uint8_t x409 = 81U;
static int16_t x414 = INT16_MIN;


void f0(void) {
	volatile int64_t x5 = -8221473285172LL;
	int64_t x7 = INT64_MIN;

	t0 = (x5+(x6%(x7^x8)));

	if (t0 != -8221473285150LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	static int32_t x10 = -2046;
	int8_t x11 = -1;
	volatile uint64_t t1 = 24LLU;

	t1 = (x9+(x10%(x11^x12)));

	if (t1 != 18446744071562065922LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 29U;
	static int64_t x14 = -1LL;
	int8_t x15 = 11;
	volatile int8_t x16 = INT8_MIN;

	t2 = (x13+(x14%(x15^x16)));

	if (t2 != 28LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 1522378378136LLU;
	int8_t x18 = 4;
	volatile int8_t x19 = 26;

	t3 = (x17+(x18%(x19^x20)));

	if (t3 != 1522378378140LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -1LL;
	uint8_t x22 = 10U;
	static uint8_t x24 = 76U;
	int64_t t4 = 10033LL;

	t4 = (x21+(x22%(x23^x24)));

	if (t4 != 9LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = INT16_MIN;
	int64_t x27 = INT64_MIN;
	int64_t x28 = -2010705763LL;
	int64_t t5 = 1519826766422888LL;

	t5 = (x25+(x26%(x27^x28)));

	if (t5 != 2147450879LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 25014157181167LLU;
	static int32_t x30 = INT32_MIN;
	static uint64_t t6 = 28309054LLU;

	t6 = (x29+(x30%(x31^x32)));

	if (t6 != 25014157181412LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x35 = -26113;
	int32_t x36 = INT32_MIN;

	t7 = (x33+(x34%(x35^x36)));

	if (t7 != 14U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x37 = 11651U;
	int16_t x38 = INT16_MAX;
	int16_t x39 = -1659;
	uint32_t x40 = 14962U;
	uint32_t t8 = 1490122529U;

	t8 = (x37+(x38%(x39^x40)));

	if (t8 != 44418U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x42 = INT16_MIN;
	uint16_t x43 = 21789U;
	uint64_t x44 = 32814LLU;
	volatile uint64_t t9 = 15154672591460524LLU;

	t9 = (x41+(x42%(x43^x44)));

	if (t9 != 91331LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = INT16_MIN;
	static int64_t x46 = INT64_MIN;
	uint64_t x47 = 31780LLU;
	int32_t x48 = -1;
	volatile uint64_t t10 = 975775997999818LLU;

	t10 = (x45+(x46%(x47^x48)));

	if (t10 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -14424;
	int16_t x52 = INT16_MAX;
	uint64_t t11 = 12583762209947LLU;

	t11 = (x49+(x50%(x51^x52)));

	if (t11 != 18446744073709537207LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = INT64_MIN;
	int32_t x54 = INT32_MIN;
	uint32_t x55 = 0U;
	int32_t x56 = -3978515;
	int64_t t12 = -230591864893887818LL;

	t12 = (x53+(x54%(x55^x56)));

	if (t12 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	int64_t x62 = 45209LL;
	uint16_t x63 = 1U;
	volatile uint64_t t13 = 62371688LLU;

	t13 = (x61+(x62%(x63^x64)));

	if (t13 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MAX;
	uint64_t x66 = 4183892386699LLU;
	uint64_t x67 = UINT64_MAX;
	int64_t x68 = -1130LL;

	t14 = (x65+(x66%(x67^x68)));

	if (t14 != 2147484673LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x69 = INT8_MIN;
	int64_t x70 = -198707712828349LL;
	uint32_t x71 = 68872169U;
	uint8_t x72 = 95U;

	t15 = (x69+(x70%(x71^x72)));

	if (t15 != -13010535LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MAX;
	int16_t x76 = INT16_MIN;
	volatile uint32_t t16 = 341048309U;

	t16 = (x73+(x74%(x75^x76)));

	if (t16 != 2147483650U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x78 = 171953U;
	uint64_t x79 = UINT64_MAX;
	int8_t x80 = -4;
	uint64_t t17 = 0LLU;

	t17 = (x77+(x78%(x79^x80)));

	if (t17 != 4294967297LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x83 = UINT16_MAX;
	static volatile int64_t t18 = -2LL;

	t18 = (x81+(x82%(x83^x84)));

	if (t18 != -25284LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 28U;
	static int64_t x87 = 1LL;
	int8_t x88 = -1;
	volatile int64_t t19 = 911940LL;

	t19 = (x85+(x86%(x87^x88)));

	if (t19 != 28LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MAX;
	uint32_t x91 = UINT32_MAX;
	int64_t t20 = -47179LL;

	t20 = (x89+(x90%(x91^x92)));

	if (t20 != 2147491051LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x94 = UINT32_MAX;
	uint64_t x95 = 31745253535783832LLU;
	int32_t x96 = -1;
	static volatile uint64_t t21 = 383526630468413086LLU;

	t21 = (x93+(x94%(x95^x96)));

	if (t21 != 2029336567590LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 7123301890712430559LLU;
	static uint16_t x99 = 132U;
	int16_t x100 = INT16_MAX;

	t22 = (x97+(x98%(x99^x100)));

	if (t22 != 7123301890712427196LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = UINT8_MAX;
	int64_t x103 = INT64_MIN;
	int32_t x104 = -17291;
	volatile int64_t t23 = 2053432LL;

	t23 = (x101+(x102%(x103^x104)));

	if (t23 != 17545LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	static volatile int32_t x106 = -183177;
	int8_t x107 = -3;
	volatile int32_t t24 = -10982690;

	t24 = (x105+(x106%(x107^x108)));

	if (t24 != -215945) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = -1;
	int16_t x110 = -10;
	int16_t x112 = INT16_MIN;
	volatile uint64_t t25 = 3697151533303180650LLU;

	t25 = (x109+(x110%(x111^x112)));

	if (t25 != 85483920903172LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = INT32_MIN;
	volatile int64_t x114 = INT64_MIN;
	uint64_t x115 = 177316344818841202LLU;
	static int8_t x116 = INT8_MAX;
	volatile uint64_t t26 = 112LLU;

	t26 = (x113+(x114%(x115^x116)));

	if (t26 != 2922104127554908LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = 788;
	static uint8_t x118 = 1U;
	static volatile int32_t x119 = -1;
	int32_t t27 = 4647469;

	t27 = (x117+(x118%(x119^x120)));

	if (t27 != 789) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x121 = 6;
	volatile uint16_t x122 = 9U;
	static int8_t x123 = INT8_MAX;
	int16_t x124 = 13;

	t28 = (x121+(x122%(x123^x124)));

	if (t28 != 15) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x126 = 63;
	uint16_t x127 = 1U;
	int64_t x128 = 2729647LL;

	t29 = (x125+(x126%(x127^x128)));

	if (t29 != -2147483585LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = -1LL;
	uint32_t x131 = 55742971U;
	volatile int16_t x132 = INT16_MIN;

	t30 = (x129+(x130%(x131^x132)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x134 = -1;
	int32_t x135 = -413;
	int32_t x136 = INT32_MAX;
	volatile uint64_t t31 = 306363511LLU;

	t31 = (x133+(x134%(x135^x136)));

	if (t31 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x137 = -1;
	int16_t x138 = 15;
	int32_t x139 = INT32_MAX;
	static uint64_t x140 = UINT64_MAX;

	t32 = (x137+(x138%(x139^x140)));

	if (t32 != 14LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x142 = INT8_MIN;
	int16_t x143 = -1;
	static uint64_t x144 = 17303824LLU;
	uint64_t t33 = 5937720075990788LLU;

	t33 = (x141+(x142%(x143^x144)));

	if (t33 != 17303569LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MAX;
	int32_t x146 = INT32_MAX;
	uint16_t x147 = 6U;
	uint8_t x148 = 49U;

	t34 = (x145+(x146%(x147^x148)));

	if (t34 != 32779) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x149 = 25U;
	static int8_t x150 = 5;
	uint16_t x151 = 38U;
	int16_t x152 = INT16_MIN;

	t35 = (x149+(x150%(x151^x152)));

	if (t35 != 30) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x153 = INT64_MAX;
	int16_t x154 = -1;
	volatile uint8_t x155 = 5U;
	static int8_t x156 = INT8_MAX;

	t36 = (x153+(x154%(x155^x156)));

	if (t36 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x158 = INT8_MAX;
	uint8_t x159 = 1U;
	uint16_t x160 = UINT16_MAX;
	uint32_t t37 = 8753485U;

	t37 = (x157+(x158%(x159^x160)));

	if (t37 != 532U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = UINT8_MAX;
	int32_t x162 = -115558101;
	int32_t x163 = INT32_MIN;
	int64_t x164 = -12542124290LL;
	int64_t t38 = 115LL;

	t38 = (x161+(x162%(x163^x164)));

	if (t38 != -115557846LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x165 = -2367252LL;
	int16_t x166 = -5663;
	int16_t x167 = INT16_MIN;
	volatile int64_t x168 = -1LL;
	volatile int64_t t39 = -419604011814287622LL;

	t39 = (x165+(x166%(x167^x168)));

	if (t39 != -2372915LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = 3;
	int32_t x170 = 766;
	uint8_t x171 = UINT8_MAX;
	int16_t x172 = -50;

	t40 = (x169+(x170%(x171^x172)));

	if (t40 != 148) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MAX;
	static int8_t x174 = INT8_MIN;
	int8_t x176 = INT8_MIN;

	t41 = (x173+(x174%(x175^x176)));

	if (t41 != 32766) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = -812909411641934LL;
	uint8_t x178 = 3U;
	static int32_t x179 = -281;
	static volatile int64_t t42 = -1577396695320504LL;

	t42 = (x177+(x178%(x179^x180)));

	if (t42 != -812909411641931LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x182 = 0U;
	volatile int16_t x183 = INT16_MAX;
	int8_t x184 = INT8_MIN;
	static volatile int32_t t43 = -3307;

	t43 = (x181+(x182%(x183^x184)));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x186 = INT16_MIN;
	uint64_t x187 = 3956730420184LLU;
	int8_t x188 = INT8_MAX;

	t44 = (x185+(x186%(x187^x188)));

	if (t44 != 3917580993052LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = 455U;
	int16_t x190 = -1;
	uint64_t x191 = 972397837511LLU;
	static volatile int8_t x192 = -1;

	t45 = (x189+(x190%(x191^x192)));

	if (t45 != 972397837966LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MAX;
	volatile int8_t x194 = -1;
	int32_t x195 = -1;
	int64_t x196 = INT64_MIN;
	int64_t t46 = 4707204LL;

	t46 = (x193+(x194%(x195^x196)));

	if (t46 != 32766LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MIN;
	int64_t x198 = INT64_MIN;
	int32_t x200 = INT32_MIN;
	int64_t t47 = 27706109497289LL;

	t47 = (x197+(x198%(x199^x200)));

	if (t47 != -32896LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = -1;
	int16_t x202 = 9113;
	int32_t x204 = INT32_MIN;
	volatile int32_t t48 = 0;

	t48 = (x201+(x202%(x203^x204)));

	if (t48 != 9112) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = UINT16_MAX;
	uint8_t x206 = UINT8_MAX;
	int64_t x207 = INT64_MIN;
	volatile int16_t x208 = INT16_MIN;
	int64_t t49 = 4337LL;

	t49 = (x205+(x206%(x207^x208)));

	if (t49 != 65790LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = INT8_MAX;
	volatile uint8_t x211 = 29U;
	int32_t t50 = -26102348;

	t50 = (x209+(x210%(x211^x212)));

	if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x213 = 2718LLU;
	int8_t x214 = -11;

	t51 = (x213+(x214%(x215^x216)));

	if (t51 != 2707LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = -1;
	uint64_t x218 = UINT64_MAX;
	volatile uint32_t x219 = UINT32_MAX;
	int16_t x220 = INT16_MAX;
	uint64_t t52 = 266225017529678LLU;

	t52 = (x217+(x218%(x219^x220)));

	if (t52 != 1073741822LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = INT64_MIN;
	volatile uint32_t x222 = 968968148U;
	volatile int64_t x224 = -65759907LL;
	static volatile int64_t t53 = 224LL;

	t53 = (x221+(x222%(x223^x224)));

	if (t53 != -9223372036806446232LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = -57;
	int8_t x227 = -1;
	uint8_t x228 = 18U;
	volatile int32_t t54 = 8011;

	t54 = (x225+(x226%(x227^x228)));

	if (t54 != -49) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x230 = -59433152957189LL;
	static uint32_t x232 = 9U;
	volatile int64_t t55 = -916579LL;

	t55 = (x229+(x230%(x231^x232)));

	if (t55 != -3690620806LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = INT32_MIN;
	volatile int64_t x234 = -1LL;
	static volatile int32_t x235 = -34;
	int8_t x236 = INT8_MIN;
	volatile int64_t t56 = 6131723087244731LL;

	t56 = (x233+(x234%(x235^x236)));

	if (t56 != -2147483649LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x237 = INT16_MAX;
	int8_t x238 = -3;
	int8_t x239 = -1;
	int16_t x240 = INT16_MIN;
	static int32_t t57 = 94;

	t57 = (x237+(x238%(x239^x240)));

	if (t57 != 32764) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x241 = 13255659LLU;
	static uint64_t x243 = 1054252765840076LLU;
	int64_t x244 = INT64_MAX;

	t58 = (x241+(x242%(x243^x244)));

	if (t58 != 1054252779095736LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = -1;
	int16_t x246 = INT16_MIN;

	t59 = (x245+(x246%(x247^x248)));

	if (t59 != 2147450882LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = -1;
	uint64_t x250 = 176314LLU;
	volatile uint64_t t60 = 236LLU;

	t60 = (x249+(x250%(x251^x252)));

	if (t60 != 9544LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x254 = 91U;
	int64_t x255 = INT64_MAX;
	volatile int64_t t61 = 79378347485326LL;

	t61 = (x253+(x254%(x255^x256)));

	if (t61 != 90LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = -6;
	static int32_t x258 = -1;
	volatile int32_t x259 = INT32_MAX;
	static int32_t x260 = 10434845;
	static volatile int32_t t62 = 315058;

	t62 = (x257+(x258%(x259^x260)));

	if (t62 != -7) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = 2U;
	int8_t x262 = INT8_MIN;
	int8_t x263 = -1;
	uint64_t x264 = 15LLU;
	uint64_t t63 = 137975979556576436LLU;

	t63 = (x261+(x262%(x263^x264)));

	if (t63 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x266 = 10;
	int16_t x268 = INT16_MIN;

	t64 = (x265+(x266%(x267^x268)));

	if (t64 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x269 = 37;
	int64_t x270 = -11505LL;
	int8_t x272 = -1;
	int64_t t65 = 7055541597LL;

	t65 = (x269+(x270%(x271^x272)));

	if (t65 != 37LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x275 = UINT32_MAX;
	int16_t x276 = INT16_MIN;

	t66 = (x273+(x274%(x275^x276)));

	if (t66 != 21678LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x277 = UINT16_MAX;
	volatile int64_t x278 = -1LL;
	volatile int64_t t67 = -259936LL;

	t67 = (x277+(x278%(x279^x280)));

	if (t67 != 65534LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x282 = 17;
	int8_t x283 = INT8_MIN;
	int64_t x284 = -1LL;
	volatile int64_t t68 = 542206192LL;

	t68 = (x281+(x282%(x283^x284)));

	if (t68 != 144LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x286 = -898923531;
	volatile uint32_t t69 = 1U;

	t69 = (x285+(x286%(x287^x288)));

	if (t69 != 4294967256U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = INT64_MIN;
	uint8_t x290 = 1U;
	int64_t x291 = INT64_MIN;
	uint32_t x292 = 6183U;
	int64_t t70 = -52916987LL;

	t70 = (x289+(x290%(x291^x292)));

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MAX;
	uint8_t x294 = UINT8_MAX;
	static uint16_t x295 = 60U;
	int64_t x296 = INT64_MIN;
	static int64_t t71 = -102555558705253004LL;

	t71 = (x293+(x294%(x295^x296)));

	if (t71 != 33022LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = -1;
	uint32_t x299 = 1550986709U;
	uint32_t x300 = 3U;
	volatile uint32_t t72 = 64U;

	t72 = (x297+(x298%(x299^x300)));

	if (t72 != 8U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = INT64_MIN;
	volatile uint16_t x302 = 9U;
	int32_t x303 = INT32_MIN;
	static volatile int8_t x304 = INT8_MIN;

	t73 = (x301+(x302%(x303^x304)));

	if (t73 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = 0;
	static int16_t x306 = -19;
	volatile int64_t t74 = 0LL;

	t74 = (x305+(x306%(x307^x308)));

	if (t74 != -19LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x309 = 50186058806084957LLU;
	int16_t x310 = -72;
	volatile int16_t x311 = 1;
	volatile int32_t x312 = INT32_MAX;
	volatile uint64_t t75 = 141414067115081400LLU;

	t75 = (x309+(x310%(x311^x312)));

	if (t75 != 50186058806084885LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = -1;
	volatile uint16_t x314 = 0U;
	static uint8_t x315 = 9U;
	volatile int32_t x316 = -1;

	t76 = (x313+(x314%(x315^x316)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x317 = INT32_MIN;
	int8_t x318 = 7;
	int64_t x319 = -275897625736788LL;
	static int64_t t77 = 36534444022137LL;

	t77 = (x317+(x318%(x319^x320)));

	if (t77 != -2147483641LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x321 = 876154491787893277LLU;
	volatile int32_t x322 = 174551712;
	uint64_t x323 = 544851101887869139LLU;
	int16_t x324 = INT16_MAX;

	t78 = (x321+(x322%(x323^x324)));

	if (t78 != 876154491962444989LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x325 = INT16_MAX;
	int16_t x326 = 832;
	static int8_t x327 = INT8_MIN;
	uint64_t x328 = 621LLU;
	volatile uint64_t t79 = 32445682734729LLU;

	t79 = (x325+(x326%(x327^x328)));

	if (t79 != 33599LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = -1LL;
	static int16_t x334 = INT16_MIN;
	static int32_t x335 = INT32_MIN;
	uint64_t x336 = UINT64_MAX;
	uint64_t t80 = 3352727201LLU;

	t80 = (x333+(x334%(x335^x336)));

	if (t80 != 2147450882LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x338 = 998LL;
	static uint16_t x339 = 31717U;
	uint8_t x340 = 10U;

	t81 = (x337+(x338%(x339^x340)));

	if (t81 != 33765LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = 7499729312211317LLU;
	static volatile int64_t x343 = -1LL;
	volatile int8_t x344 = INT8_MAX;
	uint64_t t82 = 23118779112794265LLU;

	t82 = (x341+(x342%(x343^x344)));

	if (t82 != 7499729312211317LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x345 = UINT64_MAX;
	int32_t x347 = -1;
	int64_t x348 = 30008101684891997LL;

	t83 = (x345+(x346%(x347^x348)));

	if (t83 != 50LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = -1;
	int8_t x350 = 8;
	int32_t t84 = -218;

	t84 = (x349+(x350%(x351^x352)));

	if (t84 != 7) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x353 = -1;
	int8_t x354 = -11;
	uint64_t x356 = 3146334034305698LLU;
	uint64_t t85 = 98314872525068LLU;

	t85 = (x353+(x354%(x355^x356)));

	if (t85 != 3146334034305746LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x357 = UINT8_MAX;
	static int32_t x359 = -1;
	int32_t x360 = -294234872;
	static volatile int32_t t86 = 8;

	t86 = (x357+(x358%(x359^x360)));

	if (t86 != 202248456) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x361 = INT16_MAX;
	int64_t x362 = -1LL;
	volatile int64_t x364 = -49LL;

	t87 = (x361+(x362%(x363^x364)));

	if (t87 != 32766LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = 10;
	int64_t x370 = INT64_MAX;
	int8_t x371 = 2;
	volatile uint8_t x372 = 24U;
	int64_t t88 = -80084LL;

	t88 = (x369+(x370%(x371^x372)));

	if (t88 != 17LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x373 = INT64_MIN;
	static uint64_t x374 = UINT64_MAX;
	volatile uint8_t x375 = UINT8_MAX;
	int64_t x376 = INT64_MIN;
	uint64_t t89 = 116088007048915627LLU;

	t89 = (x373+(x374%(x375^x376)));

	if (t89 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x378 = INT64_MAX;
	int16_t x380 = 59;

	t90 = (x377+(x378%(x379^x380)));

	if (t90 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x383 = INT16_MAX;
	int64_t t91 = 208LL;

	t91 = (x381+(x382%(x383^x384)));

	if (t91 != -38591064LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x386 = -2;
	static int16_t x388 = INT16_MIN;
	volatile uint64_t t92 = 3578048499LLU;

	t92 = (x385+(x386%(x387^x388)));

	if (t92 != 18446744073709542497LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x393 = 15U;
	uint64_t x394 = UINT64_MAX;
	int32_t x396 = INT32_MIN;
	volatile uint64_t t93 = 75496319167160480LLU;

	t93 = (x393+(x394%(x395^x396)));

	if (t93 != 65550LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x397 = UINT8_MAX;
	static int16_t x398 = INT16_MIN;
	int8_t x400 = -1;
	int64_t t94 = 1734LL;

	t94 = (x397+(x398%(x399^x400)));

	if (t94 != -32513LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x401 = UINT64_MAX;
	int16_t x402 = -6240;
	int32_t x403 = INT32_MIN;
	int32_t x404 = -1;
	volatile uint64_t t95 = 5192LLU;

	t95 = (x401+(x402%(x403^x404)));

	if (t95 != 18446744073709545375LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x405 = INT32_MIN;
	static volatile int8_t x406 = INT8_MIN;
	static uint16_t x407 = UINT16_MAX;
	int64_t x408 = INT64_MIN;
	volatile int64_t t96 = -51LL;

	t96 = (x405+(x406%(x407^x408)));

	if (t96 != -2147483776LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x410 = UINT32_MAX;
	int32_t x411 = INT32_MAX;
	int8_t x412 = -10;
	uint32_t t97 = 24698U;

	t97 = (x409+(x410%(x411^x412)));

	if (t97 != 2147483719U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = -1;
	static volatile int32_t x415 = 0;
	uint8_t x416 = 39U;
	static int32_t t98 = 853;

	t98 = (x413+(x414%(x415^x416)));

	if (t98 != -9) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x417 = 2;
	volatile uint32_t x418 = UINT32_MAX;
	volatile int8_t x419 = -1;
	int64_t x420 = -127629660LL;
	int64_t t99 = 1LL;

	t99 = (x417+(x418%(x419^x420)));

	if (t99 != 83188550LL) { NG(); } else { ; }
	
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

