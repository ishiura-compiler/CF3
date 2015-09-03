#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
int8_t x8 = -6;
uint64_t t2 = 17141182LLU;
int32_t x18 = 120832;
uint32_t x22 = 18372998U;
uint8_t x23 = UINT8_MAX;
int8_t x27 = 1;
int32_t x42 = -187068;
int16_t x43 = -1;
int16_t x44 = INT16_MAX;
volatile uint16_t x49 = 1U;
uint8_t x53 = 24U;
static int32_t x54 = -1;
int8_t x56 = INT8_MIN;
int16_t x68 = -1;
int16_t x76 = INT16_MIN;
static int64_t x79 = -1LL;
static int16_t x80 = INT16_MIN;
int16_t x83 = INT16_MIN;
int64_t x84 = INT64_MIN;
int8_t x93 = -5;
int32_t x97 = -1;
static int16_t x107 = -1;
int64_t t24 = 4092648785597LL;
int64_t x115 = INT64_MAX;
volatile int64_t t25 = -12371219829526806LL;
int8_t x118 = INT8_MAX;
int64_t x119 = -94LL;
volatile int64_t x130 = INT64_MIN;
uint64_t t29 = 1688808360210736469LLU;
uint32_t x139 = 4595U;
uint16_t x140 = 0U;
uint32_t x141 = 1U;
uint64_t t31 = 1952024024LLU;
uint32_t x145 = 324U;
int8_t x148 = 56;
int32_t x149 = INT32_MAX;
int64_t x152 = -12194218LL;
int32_t x161 = -54525990;
static uint16_t x163 = 10U;
uint64_t x177 = 29LLU;
int64_t x180 = -2059LL;
static int64_t x183 = INT64_MIN;
volatile int32_t x189 = INT32_MIN;
uint16_t x201 = 99U;
volatile int16_t x203 = INT16_MIN;
int8_t x213 = INT8_MAX;
static int8_t x216 = INT8_MIN;
int64_t x222 = -1LL;
uint64_t x231 = 43975LLU;
static int8_t x236 = -1;
static uint8_t x239 = 23U;
uint8_t x242 = 99U;
volatile int16_t x257 = 0;
uint32_t x260 = UINT32_MAX;
static uint16_t x265 = 48U;
int8_t x282 = INT8_MAX;
int16_t x283 = INT16_MIN;
volatile uint16_t x293 = 208U;
static int32_t x296 = -27433483;
int16_t x300 = INT16_MIN;
int64_t x311 = -1LL;
uint16_t x314 = 1U;
int64_t x319 = INT64_MIN;
static volatile int64_t t67 = -3744549LL;
static int64_t x323 = INT64_MAX;
int8_t x330 = INT8_MIN;
static int64_t x331 = INT64_MAX;
uint16_t x335 = 167U;
volatile int32_t x337 = INT32_MIN;
static int16_t x338 = -1;
int8_t x339 = 3;
volatile int32_t t71 = 1;
volatile int8_t x342 = INT8_MAX;
static volatile int8_t x343 = INT8_MAX;
volatile int32_t x344 = 26;
uint64_t x348 = 72131174759754450LLU;
uint64_t t73 = 231584684388LLU;
int8_t x349 = -1;
int32_t t74 = -4;
uint16_t x358 = UINT16_MAX;
static int32_t t75 = -14;
volatile int32_t x361 = -53514098;
uint64_t x371 = UINT64_MAX;
uint64_t t78 = 5065976753759471696LLU;
uint8_t x376 = 1U;
static uint16_t x382 = 7U;
static uint64_t t80 = 64536LLU;
static volatile int8_t x386 = INT8_MIN;
int64_t t84 = -242344042682LL;
int16_t x410 = -26;
volatile int64_t t85 = 1LL;
int64_t x415 = -6113221LL;
uint32_t x416 = 26076856U;
int64_t t87 = 50686167453920LL;
int32_t x433 = 344334;
static uint64_t t89 = 254LLU;
int64_t x439 = INT64_MIN;
uint64_t x441 = UINT64_MAX;
static int32_t t92 = 4;
volatile uint64_t x462 = UINT64_MAX;
int16_t x464 = INT16_MIN;
static volatile uint64_t t94 = 110783LLU;
volatile uint64_t t95 = 122740LLU;
static volatile uint32_t t97 = 368045176U;
int32_t x477 = INT32_MIN;


void f0(void) {
	volatile int32_t x1 = -5;
	static int64_t x2 = -1960062462862206LL;
	int16_t x3 = -16;
	static uint32_t x4 = 380U;
	int64_t t0 = -90LL;

	t0 = (x1+(x2-(x3^x4)));

	if (t0 != -1960066757829135LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = UINT8_MAX;
	static int8_t x7 = INT8_MIN;
	int32_t t1 = 72;

	t1 = (x5+(x6-(x7^x8)));

	if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 2036U;
	volatile int8_t x10 = INT8_MIN;
	int8_t x11 = -1;
	uint64_t x12 = 57751335982337LLU;

	t2 = (x9+(x10-(x11^x12)));

	if (t2 != 57751335984246LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int64_t x14 = -1LL;
	volatile int8_t x15 = 7;
	volatile uint8_t x16 = 0U;
	static volatile int64_t t3 = 689154213321158115LL;

	t3 = (x13+(x14-(x15^x16)));

	if (t3 != -9LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int16_t x19 = -1;
	volatile int64_t x20 = -5580930618LL;
	volatile int64_t t4 = 33465383133007LL;

	t4 = (x17+(x18-(x19^x20)));

	if (t4 != -7728293433LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	int64_t x24 = 6170186LL;
	volatile int64_t t5 = -25484122092988387LL;

	t5 = (x21+(x22-(x23^x24)));

	if (t5 != 12202832LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 0;
	static uint64_t x26 = 12670726LLU;
	int32_t x28 = -1;
	uint64_t t6 = 7858LLU;

	t6 = (x25+(x26-(x27^x28)));

	if (t6 != 12670728LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 27U;
	static uint32_t x30 = 825U;
	static int64_t x31 = 1LL;
	volatile uint8_t x32 = UINT8_MAX;
	volatile int64_t t7 = -788406807379049610LL;

	t7 = (x29+(x30-(x31^x32)));

	if (t7 != 598LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = UINT16_MAX;
	volatile int8_t x34 = 0;
	uint16_t x35 = 2586U;
	static uint16_t x36 = 30292U;
	static volatile int32_t t8 = 119;

	t8 = (x33+(x34-(x35^x36)));

	if (t8 != 33713) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int16_t x38 = INT16_MAX;
	volatile int32_t x39 = INT32_MAX;
	int32_t x40 = 1905;
	volatile int32_t t9 = -127;

	t9 = (x37+(x38-(x39^x40)));

	if (t9 != -2147448976) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -2269;
	volatile int32_t t10 = -2285539;

	t10 = (x41+(x42-(x43^x44)));

	if (t10 != -156569) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x50 = INT16_MIN;
	uint32_t x51 = 4U;
	int8_t x52 = 15;
	uint32_t t11 = 582217U;

	t11 = (x49+(x50-(x51^x52)));

	if (t11 != 4294934518U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x55 = INT16_MIN;
	volatile int32_t t12 = -121283;

	t12 = (x53+(x54-(x55^x56)));

	if (t12 != -32617) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = INT64_MIN;
	static volatile int16_t x58 = -1;
	uint32_t x59 = 1554U;
	static uint64_t x60 = 35216947943LLU;
	volatile uint64_t t13 = 485998148740LLU;

	t13 = (x57+(x58-(x59^x60)));

	if (t13 != 9223372001637827338LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = 0;
	int64_t x62 = -276LL;
	int32_t x63 = INT32_MAX;
	int8_t x64 = -1;
	static volatile int64_t t14 = -241972873669051110LL;

	t14 = (x61+(x62-(x63^x64)));

	if (t14 != 2147483372LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	static volatile int64_t x66 = INT64_MAX;
	uint64_t x67 = 5730919620280119224LLU;
	static uint64_t t15 = 20585130080452LLU;

	t15 = (x65+(x66-(x67^x68)));

	if (t15 != 14954291657134895031LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 119375456584174LLU;
	int64_t x70 = 25827288240201LL;
	uint16_t x71 = UINT16_MAX;
	uint32_t x72 = 462145799U;
	uint64_t t16 = 40LLU;

	t16 = (x69+(x70-(x71^x72)));

	if (t16 != 145202282715967LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x73 = UINT16_MAX;
	int64_t x74 = INT64_MIN;
	int32_t x75 = INT32_MAX;
	int64_t t17 = -7751852LL;

	t17 = (x73+(x74-(x75^x76)));

	if (t17 != -9223372034707259392LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 46U;
	int8_t x78 = INT8_MAX;
	static volatile int64_t t18 = 4763222032563838LL;

	t18 = (x77+(x78-(x79^x80)));

	if (t18 != -32594LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = -114;
	uint64_t x82 = UINT64_MAX;
	uint64_t t19 = 785117279127LLU;

	t19 = (x81+(x82-(x83^x84)));

	if (t19 != 9223372036854808461LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x89 = -1;
	static int64_t x90 = INT64_MAX;
	volatile uint32_t x91 = 681608185U;
	int16_t x92 = INT16_MIN;
	int64_t t20 = -16373113281LL;

	t20 = (x89+(x90-(x91^x92)));

	if (t20 != 9223372033241447429LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x94 = -1;
	int64_t x95 = -20309352583591LL;
	int32_t x96 = 43677098;
	static volatile int64_t t21 = 177016404LL;

	t21 = (x93+(x94-(x95^x96)));

	if (t21 != 20309308957703LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x98 = 13707U;
	int32_t x99 = -27310628;
	static int64_t x100 = 124479884992456670LL;
	volatile int64_t t22 = -18LL;

	t22 = (x97+(x98-(x99^x100)));

	if (t22 != 124479884998792072LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MAX;
	uint32_t x102 = UINT32_MAX;
	volatile int32_t x103 = -47;
	static int16_t x104 = INT16_MAX;
	static volatile uint32_t t23 = 11U;

	t23 = (x101+(x102-(x103^x104)));

	if (t23 != 32848U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 2U;
	uint8_t x106 = 4U;
	int64_t x108 = -1LL;

	t24 = (x105+(x106-(x107^x108)));

	if (t24 != 6LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = -1;
	uint16_t x114 = UINT16_MAX;
	uint16_t x116 = 10340U;

	t25 = (x113+(x114-(x115^x116)));

	if (t25 != -9223372036854699933LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = -10;
	int32_t x120 = -1;
	static volatile int64_t t26 = -21696366329LL;

	t26 = (x117+(x118-(x119^x120)));

	if (t26 != 24LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x125 = 50060U;
	int32_t x126 = INT32_MAX;
	int64_t x127 = INT64_MAX;
	static int64_t x128 = -929015181881051787LL;
	volatile int64_t t27 = -3089885539777413853LL;

	t27 = (x125+(x126-(x127^x128)));

	if (t27 != 8294356857121257729LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = 18;
	int16_t x131 = -1;
	volatile uint64_t x132 = UINT64_MAX;
	volatile uint64_t t28 = 320LLU;

	t28 = (x129+(x130-(x131^x132)));

	if (t28 != 9223372036854775826LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = 0U;
	uint64_t x134 = 17837706608665LLU;
	int32_t x135 = -1;
	int16_t x136 = -20;

	t29 = (x133+(x134-(x135^x136)));

	if (t29 != 17837706608646LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = -30;
	uint64_t x138 = UINT64_MAX;
	static uint64_t t30 = 2875LLU;

	t30 = (x137+(x138-(x139^x140)));

	if (t30 != 18446744073709546990LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x142 = 32U;
	uint64_t x143 = 1167553666LLU;
	int64_t x144 = INT64_MIN;

	t31 = (x141+(x142-(x143^x144)));

	if (t31 != 9223372035687222175LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x146 = 9951510U;
	static int16_t x147 = INT16_MAX;
	static volatile uint32_t t32 = 5U;

	t32 = (x145+(x146-(x147^x148)));

	if (t32 != 9919123U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x150 = -1;
	int8_t x151 = INT8_MAX;
	volatile int64_t t33 = 17504167017948009LL;

	t33 = (x149+(x150-(x151^x152)));

	if (t33 != 2159677909LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = -1;
	int16_t x154 = INT16_MIN;
	uint64_t x155 = 82775630267769LLU;
	int8_t x156 = -1;
	static volatile uint64_t t34 = 2727LLU;

	t34 = (x153+(x154-(x155^x156)));

	if (t34 != 82775630235001LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x162 = INT16_MIN;
	static int64_t x164 = INT64_MIN;
	volatile int64_t t35 = -158654LL;

	t35 = (x161+(x162-(x163^x164)));

	if (t35 != 9223372036800217040LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x165 = -1LL;
	int8_t x166 = INT8_MIN;
	static int16_t x167 = 773;
	uint16_t x168 = UINT16_MAX;
	volatile int64_t t36 = -79215372339660356LL;

	t36 = (x165+(x166-(x167^x168)));

	if (t36 != -64891LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = UINT64_MAX;
	static int16_t x170 = -1;
	int64_t x171 = -1LL;
	int8_t x172 = INT8_MAX;
	uint64_t t37 = 3592075LLU;

	t37 = (x169+(x170-(x171^x172)));

	if (t37 != 126LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x173 = INT32_MAX;
	uint32_t x174 = 132605103U;
	volatile int8_t x175 = 24;
	uint64_t x176 = 3681573562932LLU;
	uint64_t t38 = 823750771182282239LLU;

	t38 = (x173+(x174-(x175^x176)));

	if (t38 != 18446740394416077442LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x178 = 0;
	int8_t x179 = -1;
	volatile uint64_t t39 = 77793190868084LLU;

	t39 = (x177+(x178-(x179^x180)));

	if (t39 != 18446744073709549587LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = 137LL;
	volatile int16_t x182 = INT16_MAX;
	volatile uint32_t x184 = UINT32_MAX;
	int64_t t40 = -484912364329LL;

	t40 = (x181+(x182-(x183^x184)));

	if (t40 != 9223372032559841417LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = INT16_MAX;
	int8_t x186 = INT8_MIN;
	static uint64_t x187 = 1636LLU;
	volatile uint32_t x188 = UINT32_MAX;
	volatile uint64_t t41 = 450LLU;

	t41 = (x185+(x186-(x187^x188)));

	if (t41 != 18446744069414618596LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x190 = UINT8_MAX;
	volatile int16_t x191 = INT16_MIN;
	uint8_t x192 = UINT8_MAX;
	int32_t t42 = 107812329;

	t42 = (x189+(x190-(x191^x192)));

	if (t42 != -2147450880) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 22U;
	volatile int16_t x194 = -1;
	volatile int64_t x195 = 3855772LL;
	static volatile int32_t x196 = INT32_MIN;
	volatile int64_t t43 = 36LL;

	t43 = (x193+(x194-(x195^x196)));

	if (t43 != 2143627897LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x202 = -1066922317;
	uint8_t x204 = UINT8_MAX;
	int32_t t44 = 2;

	t44 = (x201+(x202-(x203^x204)));

	if (t44 != -1066889705) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x214 = 77U;
	int64_t x215 = INT64_MIN;
	volatile int64_t t45 = 102747343583808LL;

	t45 = (x213+(x214-(x215^x216)));

	if (t45 != -9223372036854775476LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x217 = 5884866U;
	volatile int64_t x218 = INT64_MIN;
	int16_t x219 = -1;
	int64_t x220 = -1LL;
	static int64_t t46 = 13458806737551LL;

	t46 = (x217+(x218-(x219^x220)));

	if (t46 != -9223372036848890942LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x221 = INT8_MAX;
	volatile uint64_t x223 = 16154548983LLU;
	static int32_t x224 = -1430;
	volatile uint64_t t47 = 1LLU;

	t47 = (x221+(x222-(x223^x224)));

	if (t47 != 16154550241LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x225 = UINT32_MAX;
	volatile int64_t x226 = -48005096LL;
	uint8_t x227 = UINT8_MAX;
	uint32_t x228 = 9194068U;
	volatile int64_t t48 = 2LL;

	t48 = (x225+(x226-(x227^x228)));

	if (t48 != 4237768044LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = 28768LL;
	int16_t x230 = 2;
	int16_t x232 = 3710;
	uint64_t t49 = 555567328285972429LLU;

	t49 = (x229+(x230-(x231^x232)));

	if (t49 != 18446744073709537961LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = 26;
	int64_t x234 = 17670087060904LL;
	uint16_t x235 = 26194U;
	volatile int64_t t50 = 685900879LL;

	t50 = (x233+(x234-(x235^x236)));

	if (t50 != 17670087087125LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x237 = INT32_MIN;
	static int64_t x238 = -6619602LL;
	int8_t x240 = 55;
	static volatile int64_t t51 = -2864212230550LL;

	t51 = (x237+(x238-(x239^x240)));

	if (t51 != -2154103282LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x241 = INT16_MIN;
	static volatile int64_t x243 = -1LL;
	int16_t x244 = -1;
	volatile int64_t t52 = -9LL;

	t52 = (x241+(x242-(x243^x244)));

	if (t52 != -32669LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = INT16_MAX;
	static int16_t x246 = INT16_MIN;
	uint8_t x247 = 6U;
	int32_t x248 = 47838;
	volatile int32_t t53 = -114931264;

	t53 = (x245+(x246-(x247^x248)));

	if (t53 != -47833) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x249 = 56U;
	static int8_t x250 = -1;
	static volatile int64_t x251 = INT64_MAX;
	uint16_t x252 = UINT16_MAX;
	static volatile int64_t t54 = -223414962059979LL;

	t54 = (x249+(x250-(x251^x252)));

	if (t54 != -9223372036854710217LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x253 = INT16_MIN;
	static int32_t x254 = INT32_MIN;
	volatile int64_t x255 = -1LL;
	uint32_t x256 = UINT32_MAX;
	volatile int64_t t55 = 35139698181776924LL;

	t55 = (x253+(x254-(x255^x256)));

	if (t55 != 2147450880LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x258 = 23U;
	int16_t x259 = INT16_MIN;
	static uint32_t t56 = 61699U;

	t56 = (x257+(x258-(x259^x260)));

	if (t56 != 4294934552U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x266 = 0U;
	volatile uint32_t x267 = 1884718385U;
	int16_t x268 = -35;
	volatile uint32_t t57 = 2172533U;

	t57 = (x265+(x266-(x267^x268)));

	if (t57 != 1884718404U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x277 = INT32_MAX;
	int32_t x278 = INT32_MIN;
	uint64_t x279 = UINT64_MAX;
	static int16_t x280 = INT16_MIN;
	volatile uint64_t t58 = 18615323639LLU;

	t58 = (x277+(x278-(x279^x280)));

	if (t58 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x281 = 83U;
	volatile int8_t x284 = INT8_MIN;
	uint32_t t59 = 49676U;

	t59 = (x281+(x282-(x283^x284)));

	if (t59 != 4294934866U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x285 = 1747855U;
	static uint64_t x286 = UINT64_MAX;
	int8_t x287 = -1;
	int16_t x288 = INT16_MIN;
	volatile uint64_t t60 = 266800800130LLU;

	t60 = (x285+(x286-(x287^x288)));

	if (t60 != 1715087LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x289 = INT64_MIN;
	int8_t x290 = INT8_MAX;
	int32_t x291 = -1;
	static int8_t x292 = INT8_MIN;
	int64_t t61 = INT64_MIN;

	t61 = (x289+(x290-(x291^x292)));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x294 = 143495LLU;
	static volatile int64_t x295 = INT64_MAX;
	uint64_t t62 = 23093393LLU;

	t62 = (x293+(x294-(x295^x296)));

	if (t62 != 9223372036827486029LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x297 = UINT32_MAX;
	int64_t x298 = -1LL;
	static uint8_t x299 = 8U;
	volatile int64_t t63 = -37409LL;

	t63 = (x297+(x298-(x299^x300)));

	if (t63 != 4295000054LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x301 = -183145826609831LL;
	uint16_t x302 = 103U;
	uint32_t x303 = 8983U;
	int64_t x304 = -18092LL;
	int64_t t64 = 1287LL;

	t64 = (x301+(x302-(x303^x304)));

	if (t64 != -183145826583683LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x309 = INT8_MIN;
	int8_t x310 = INT8_MIN;
	uint8_t x312 = UINT8_MAX;
	int64_t t65 = 231662090986913382LL;

	t65 = (x309+(x310-(x311^x312)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = 9414074;
	uint8_t x315 = 1U;
	int8_t x316 = -1;
	static int32_t t66 = 11695;

	t66 = (x313+(x314-(x315^x316)));

	if (t66 != 9414077) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x317 = INT32_MIN;
	static int64_t x318 = -1LL;
	int32_t x320 = 12066787;

	t67 = (x317+(x318-(x319^x320)));

	if (t67 != 9223372034695225372LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x321 = -284;
	static volatile int16_t x322 = 5;
	static uint64_t x324 = 76655514LLU;
	uint64_t t68 = 47340428230LLU;

	t68 = (x321+(x322-(x323^x324)));

	if (t68 != 9223372036931431044LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x329 = -147408LL;
	volatile int16_t x332 = -1;
	volatile int64_t t69 = -172925261LL;

	t69 = (x329+(x330-(x331^x332)));

	if (t69 != 9223372036854628272LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x333 = -1;
	int32_t x334 = INT32_MIN;
	uint32_t x336 = 1565965U;
	static volatile uint32_t t70 = 2462809U;

	t70 = (x333+(x334-(x335^x336)));

	if (t70 != 2145917525U) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x340 = -1;

	t71 = (x337+(x338-(x339^x340)));

	if (t71 != -2147483645) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x341 = INT32_MIN;
	volatile int32_t t72 = 785;

	t72 = (x341+(x342-(x343^x344)));

	if (t72 != -2147483622) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = INT16_MIN;
	static volatile int8_t x346 = INT8_MIN;
	volatile int8_t x347 = INT8_MIN;

	t73 = (x345+(x346-(x347^x348)));

	if (t73 != 72131174759721518LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x350 = -7817;
	uint16_t x351 = 6U;
	uint16_t x352 = UINT16_MAX;

	t74 = (x349+(x350-(x351^x352)));

	if (t74 != -73347) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x357 = 5U;
	volatile int8_t x359 = INT8_MIN;
	uint8_t x360 = 1U;

	t75 = (x357+(x358-(x359^x360)));

	if (t75 != 65667) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x362 = -1LL;
	static volatile int16_t x363 = INT16_MIN;
	volatile int16_t x364 = -843;
	static int64_t t76 = 33226118295LL;

	t76 = (x361+(x362-(x363^x364)));

	if (t76 != -53546024LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x365 = INT64_MAX;
	uint16_t x366 = 8U;
	static volatile int16_t x367 = -1;
	int64_t x368 = INT64_MIN;
	int64_t t77 = -6832838719058573LL;

	t77 = (x365+(x366-(x367^x368)));

	if (t77 != 8LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = -1;
	int32_t x370 = -261975;
	int16_t x372 = 105;

	t78 = (x369+(x370-(x371^x372)));

	if (t78 != 18446744073709289746LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x373 = INT64_MIN;
	int64_t x374 = INT64_MAX;
	uint64_t x375 = 868646905189LLU;
	volatile uint64_t t79 = 0LLU;

	t79 = (x373+(x374-(x375^x376)));

	if (t79 != 18446743205062646427LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x381 = 513653U;
	uint8_t x383 = 72U;
	uint64_t x384 = UINT64_MAX;

	t80 = (x381+(x382-(x383^x384)));

	if (t80 != 513733LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x385 = -1LL;
	int8_t x387 = INT8_MAX;
	uint64_t x388 = 26525042887994304LLU;
	uint64_t t81 = 5824437652304217492LLU;

	t81 = (x385+(x386-(x387^x388)));

	if (t81 != 18420219030821557184LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x393 = INT32_MIN;
	int8_t x394 = 16;
	static int8_t x395 = -56;
	volatile uint16_t x396 = UINT16_MAX;
	volatile int32_t t82 = 3578636;

	t82 = (x393+(x394-(x395^x396)));

	if (t82 != -2147418151) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x401 = -14;
	uint16_t x402 = 32U;
	int32_t x403 = 112;
	int32_t x404 = -1;
	static volatile int32_t t83 = 1;

	t83 = (x401+(x402-(x403^x404)));

	if (t83 != 131) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x405 = INT64_MIN;
	int8_t x406 = 1;
	static uint16_t x407 = 700U;
	int64_t x408 = -1LL;

	t84 = (x405+(x406-(x407^x408)));

	if (t84 != -9223372036854775106LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x409 = INT16_MIN;
	int64_t x411 = 87385053216944LL;
	int16_t x412 = -41;

	t85 = (x409+(x410-(x411^x412)));

	if (t85 != 87385053184127LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x413 = INT64_MIN;
	uint16_t x414 = UINT16_MAX;
	static int64_t t86 = 1098468940382476264LL;

	t86 = (x413+(x414-(x415^x416)));

	if (t86 != -9223372036824260228LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x417 = INT64_MIN;
	volatile int16_t x418 = INT16_MIN;
	uint32_t x419 = UINT32_MAX;
	static uint16_t x420 = 2810U;

	t87 = (x417+(x418-(x419^x420)));

	if (t87 != -9223372032559838469LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x429 = UINT8_MAX;
	int8_t x430 = -1;
	static int32_t x431 = INT32_MIN;
	volatile int64_t x432 = 188560228LL;
	int64_t t88 = 2478038131195285174LL;

	t88 = (x429+(x430-(x431^x432)));

	if (t88 != 1958923674LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x434 = -1;
	uint16_t x435 = 5482U;
	static uint64_t x436 = UINT64_MAX;

	t89 = (x433+(x434-(x435^x436)));

	if (t89 != 349816LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x437 = -124523989192LL;
	int64_t x438 = 185858359345598LL;
	int8_t x440 = -1;
	volatile int64_t t90 = 441145888923LL;

	t90 = (x437+(x438-(x439^x440)));

	if (t90 != -9223186303019419401LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x442 = INT16_MIN;
	static volatile uint16_t x443 = 381U;
	int8_t x444 = -1;
	uint64_t t91 = 239079847243045LLU;

	t91 = (x441+(x442-(x443^x444)));

	if (t91 != 18446744073709519229LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x453 = -1;
	uint16_t x454 = UINT16_MAX;
	uint16_t x455 = 7975U;
	static int16_t x456 = INT16_MAX;

	t92 = (x453+(x454-(x455^x456)));

	if (t92 != 40742) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x457 = INT8_MAX;
	uint8_t x458 = 7U;
	int16_t x459 = INT16_MIN;
	uint16_t x460 = 1979U;
	volatile int32_t t93 = 203350;

	t93 = (x457+(x458-(x459^x460)));

	if (t93 != 30923) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x461 = 109U;
	int16_t x463 = -1;

	t94 = (x461+(x462-(x463^x464)));

	if (t94 != 18446744073709518957LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x465 = UINT32_MAX;
	uint32_t x466 = UINT32_MAX;
	volatile uint64_t x467 = 42649811LLU;
	int64_t x468 = -1LL;

	t95 = (x465+(x466-(x467^x468)));

	if (t95 != 8632584402LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x469 = 369597100713895102LLU;
	volatile uint8_t x470 = 119U;
	int8_t x471 = -11;
	int8_t x472 = INT8_MIN;
	uint64_t t96 = 3LLU;

	t96 = (x469+(x470-(x471^x472)));

	if (t96 != 369597100713895104LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x473 = UINT32_MAX;
	static uint8_t x474 = 5U;
	uint16_t x475 = 3U;
	int16_t x476 = 5679;

	t97 = (x473+(x474-(x475^x476)));

	if (t97 != 4294961624U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x478 = 211;
	int8_t x479 = 1;
	uint32_t x480 = 16522U;
	static uint32_t t98 = 2032956U;

	t98 = (x477+(x478-(x479^x480)));

	if (t98 != 2147467336U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x481 = INT32_MIN;
	volatile int8_t x482 = INT8_MIN;
	static uint32_t x483 = 1551686U;
	int8_t x484 = -1;
	volatile uint32_t t99 = 11U;

	t99 = (x481+(x482-(x483^x484)));

	if (t99 != 2149035207U) { NG(); } else { ; }
	
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

