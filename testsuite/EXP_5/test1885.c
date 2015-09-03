#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x9 = -399195;
volatile uint64_t x10 = 10459LLU;
volatile uint64_t t1 = 108398349105394634LLU;
uint64_t x14 = 8823614785142746190LLU;
uint32_t x16 = UINT32_MAX;
int16_t x24 = INT16_MIN;
int32_t x27 = INT32_MIN;
int64_t x30 = -61696844285LL;
static volatile int32_t x31 = INT32_MAX;
int32_t x32 = INT32_MIN;
uint32_t t7 = 3U;
int64_t x45 = -1LL;
int64_t x47 = INT64_MIN;
volatile int64_t t12 = -290063LL;
uint64_t x57 = 30374253108LLU;
static uint64_t x58 = 25826262LLU;
static uint32_t x61 = UINT32_MAX;
uint16_t x63 = UINT16_MAX;
static int64_t x71 = INT64_MIN;
uint16_t x78 = 38U;
int64_t x83 = INT64_MAX;
volatile int32_t x85 = INT32_MIN;
int32_t x86 = INT32_MIN;
uint64_t t21 = 3LLU;
static int32_t x97 = INT32_MIN;
volatile int64_t x103 = -72438016986LL;
static uint64_t t24 = 410539LLU;
static int64_t x109 = INT64_MIN;
uint8_t x112 = 2U;
uint16_t x115 = UINT16_MAX;
uint8_t x117 = UINT8_MAX;
volatile int64_t x122 = INT64_MAX;
int32_t x123 = -11378;
volatile uint32_t t29 = 241290387U;
int64_t x132 = INT64_MIN;
int32_t x156 = -969377596;
uint8_t x157 = UINT8_MAX;
static int16_t x168 = -120;
uint64_t x170 = 68713646340316931LLU;
uint64_t t38 = 512655391LLU;
int8_t x180 = INT8_MIN;
int8_t x182 = -1;
static uint64_t x186 = UINT64_MAX;
uint64_t t42 = 25233019LLU;
static int64_t x192 = INT64_MAX;
static uint8_t x193 = UINT8_MAX;
int64_t x197 = INT64_MIN;
int32_t x204 = INT32_MAX;
uint64_t t46 = 1103085595LLU;
int8_t x207 = INT8_MIN;
int64_t t47 = -7406466LL;
static int16_t x210 = INT16_MIN;
volatile int8_t x212 = INT8_MIN;
volatile uint64_t t50 = 928462LLU;
volatile int64_t x223 = INT64_MIN;
volatile int64_t x224 = INT64_MIN;
uint64_t x233 = 1419812224996162434LLU;
int32_t x234 = INT32_MAX;
volatile uint64_t t54 = 5392496721002LLU;
static volatile uint64_t t56 = 493548514245000278LLU;
static volatile uint64_t x246 = 59514LLU;
int8_t x247 = INT8_MIN;
static int32_t x251 = 12826978;
volatile int32_t t58 = -572337660;
int32_t x253 = INT32_MIN;
uint32_t t60 = 104969U;
int32_t x261 = 14;
static int8_t x262 = 1;
volatile int64_t x270 = -1LL;
volatile int64_t t64 = -28LL;
int64_t t66 = -205894476864364004LL;
volatile uint16_t x289 = 60U;
volatile uint32_t t68 = 9818730U;
static int8_t x302 = -1;
int64_t x304 = -1LL;
int64_t t70 = -28169404LL;
static volatile int64_t x305 = INT64_MIN;
int64_t x312 = INT64_MIN;
uint64_t t72 = 157935199497953405LLU;
volatile uint32_t t75 = 22U;
static uint64_t x330 = UINT64_MAX;
int32_t x334 = INT32_MIN;
uint8_t x342 = UINT8_MAX;
int64_t x345 = -204887LL;
uint32_t x346 = 1993U;
int32_t x351 = INT32_MIN;
int8_t x352 = -1;
int16_t x356 = INT16_MIN;
int8_t x359 = 19;
static int8_t x361 = INT8_MAX;
int64_t t85 = -6LL;
static uint32_t t86 = 1445652U;
uint16_t x369 = UINT16_MAX;
int16_t x372 = INT16_MIN;
int64_t x373 = -1LL;
int32_t x388 = INT32_MIN;
uint32_t t91 = 372303U;
uint16_t x391 = 17265U;
volatile uint64_t t93 = 443112888344LLU;
volatile int8_t x409 = INT8_MIN;
static uint32_t x414 = UINT32_MAX;
int64_t t97 = -62LL;
int16_t x423 = 8;


void f0(void) {
	static int32_t x1 = -1031967245;
	uint64_t x2 = 368477747514LLU;
	uint32_t x3 = 27895U;
	uint8_t x4 = 2U;
	static volatile uint64_t t0 = 295LLU;

	t0 = (x1^((x2|x3)-x4));

	if (t0 != 18446743704485040142LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x11 = INT8_MIN;
	int64_t x12 = -58910LL;

	t1 = (x9^((x10|x11)-x12));

	if (t1 != 18446744073709096284LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	volatile int64_t x15 = -1LL;
	volatile uint64_t t2 = 10117185363278821LLU;

	t2 = (x13^((x14|x15)-x16));

	if (t2 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x17 = -1;
	volatile int8_t x18 = -1;
	static volatile uint8_t x19 = UINT8_MAX;
	int8_t x20 = 0;
	volatile int32_t t3 = -10156;

	t3 = (x17^((x18|x19)-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	static uint64_t x22 = 17088233650084798LLU;
	int64_t x23 = INT64_MIN;
	volatile uint64_t t4 = 5335259474135233LLU;

	t4 = (x21^((x22|x23)-x24));

	if (t4 != 9206283804833864638LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = INT32_MIN;
	uint8_t x26 = 3U;
	uint16_t x28 = 1U;
	static volatile int32_t t5 = -15;

	t5 = (x25^((x26|x27)-x28));

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x29 = UINT8_MAX;
	static volatile int64_t t6 = -18145879067957LL;

	t6 = (x29^((x30|x31)-x32));

	if (t6 != -57982058752LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = 0;
	int8_t x34 = 0;
	uint16_t x35 = UINT16_MAX;
	uint32_t x36 = UINT32_MAX;

	t7 = (x33^((x34|x35)-x36));

	if (t7 != 65536U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -58399907466LL;
	int32_t x38 = -25900405;
	int8_t x39 = INT8_MIN;
	uint16_t x40 = 275U;
	volatile int64_t t8 = 297LL;

	t8 = (x37^((x38|x39)-x40));

	if (t8 != 58399907598LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 38;
	volatile uint16_t x42 = 1U;
	static int8_t x43 = 1;
	static uint16_t x44 = 1U;
	int32_t t9 = 28522241;

	t9 = (x41^((x42|x43)-x44));

	if (t9 != 38) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x46 = -1;
	volatile int8_t x48 = 1;
	int64_t t10 = -9383641909239955LL;

	t10 = (x45^((x46|x47)-x48));

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 0;
	int64_t x50 = -1248025413120157LL;
	int16_t x51 = INT16_MIN;
	int8_t x52 = 1;
	static int64_t t11 = 3LL;

	t11 = (x49^((x50|x51)-x52));

	if (t11 != -28830LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	int64_t x54 = -923LL;
	volatile int8_t x55 = INT8_MIN;
	volatile int16_t x56 = INT16_MAX;

	t12 = (x53^((x54|x55)-x56));

	if (t12 != 32793LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x59 = UINT16_MAX;
	static int32_t x60 = INT32_MAX;
	static volatile uint64_t t13 = 29464943425102LLU;

	t13 = (x57^((x58|x59)-x60));

	if (t13 != 18446744041832403508LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x62 = 22U;
	int32_t x64 = 23490291;
	uint32_t t14 = 306U;

	t14 = (x61^((x62|x63)-x64));

	if (t14 != 23424755U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x65 = UINT16_MAX;
	int64_t x66 = INT64_MAX;
	volatile uint16_t x67 = 7330U;
	static volatile int8_t x68 = 12;
	int64_t t15 = -72665860LL;

	t15 = (x65^((x66|x67)-x68));

	if (t15 != 9223372036854710284LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = INT8_MAX;
	int16_t x70 = INT16_MAX;
	volatile uint8_t x72 = 0U;
	static volatile int64_t t16 = 1243LL;

	t16 = (x69^((x70|x71)-x72));

	if (t16 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = 423LL;
	static int16_t x74 = -1;
	int64_t x75 = INT64_MIN;
	uint16_t x76 = 7283U;
	static int64_t t17 = -11496310893LL;

	t17 = (x73^((x74|x75)-x76));

	if (t17 != -7637LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -175471500;
	volatile int64_t x79 = 101390388873734521LL;
	int8_t x80 = INT8_MAX;
	static volatile int64_t t18 = 315251LL;

	t18 = (x77^((x78|x79)-x80));

	if (t18 != -101390389033849484LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x81 = 0U;
	uint8_t x82 = 0U;
	static uint32_t x84 = 9055921U;
	volatile int64_t t19 = 120630626506LL;

	t19 = (x81^((x82|x83)-x84));

	if (t19 != 9223372036845719886LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x87 = -21529359658865LL;
	static int64_t x88 = 1139246LL;
	static volatile int64_t t20 = 0LL;

	t20 = (x85^((x86|x87)-x88));

	if (t20 != 1310256737LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 7U;
	static uint32_t x94 = 630U;
	static int32_t x95 = 0;
	volatile uint64_t x96 = 3288801963763LLU;

	t21 = (x93^((x94|x95)-x96));

	if (t21 != 18446740784907588484LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x98 = UINT16_MAX;
	int64_t x99 = -41731160025LL;
	uint32_t x100 = UINT32_MAX;
	int64_t t22 = -135819205LL;

	t22 = (x97^((x98|x99)-x100));

	if (t22 != 46315732992LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x101 = INT64_MAX;
	int8_t x102 = -1;
	static int32_t x104 = -1457424;
	volatile int64_t t23 = 2546175683LL;

	t23 = (x101^((x102|x103)-x104));

	if (t23 != 9223372036853318384LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = 1LLU;
	static volatile int32_t x106 = 366831;
	int8_t x107 = INT8_MIN;
	int32_t x108 = -1;

	t24 = (x105^((x106|x107)-x108));

	if (t24 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x110 = UINT64_MAX;
	volatile int16_t x111 = INT16_MAX;
	volatile uint64_t t25 = 49654359824492088LLU;

	t25 = (x109^((x110|x111)-x112));

	if (t25 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x113 = -85407299365478155LL;
	int64_t x114 = INT64_MIN;
	uint8_t x116 = 0U;
	static int64_t t26 = -1LL;

	t26 = (x113^((x114|x115)-x116));

	if (t26 != 9137964737489313546LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x118 = INT8_MIN;
	int16_t x119 = INT16_MIN;
	static volatile int8_t x120 = INT8_MIN;
	int32_t t27 = 9424426;

	t27 = (x117^((x118|x119)-x120));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MAX;
	static uint64_t x124 = 201132222920534055LLU;
	static uint64_t t28 = 260LLU;

	t28 = (x121^((x122|x123)-x124));

	if (t28 != 18245611850789017511LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = INT32_MIN;
	int8_t x126 = INT8_MAX;
	int32_t x127 = INT32_MIN;
	uint32_t x128 = 1562435435U;

	t29 = (x125^((x126|x127)-x128));

	if (t29 != 2732531988U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = 14U;
	static int8_t x130 = 40;
	int64_t x131 = INT64_MIN;
	volatile int64_t t30 = -682572892058104LL;

	t30 = (x129^((x130|x131)-x132));

	if (t30 != 38LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x133 = 63111U;
	uint64_t x134 = 63312LLU;
	static uint32_t x135 = 58231252U;
	uint32_t x136 = UINT32_MAX;
	uint64_t t31 = 965677463294585315LLU;

	t31 = (x133^((x134|x135)-x136));

	if (t31 != 18446744069472782674LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = INT16_MAX;
	static int16_t x138 = INT16_MIN;
	int8_t x139 = -1;
	uint32_t x140 = 181745815U;
	uint32_t t32 = 7600384U;

	t32 = (x137^((x138|x139)-x140));

	if (t32 != 4113217687U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -1;
	int32_t x142 = INT32_MAX;
	uint64_t x143 = UINT64_MAX;
	volatile int8_t x144 = INT8_MIN;
	volatile uint64_t t33 = 262502425986356758LLU;

	t33 = (x141^((x142|x143)-x144));

	if (t33 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = 3155548264920993LLU;
	volatile int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MIN;
	static int8_t x148 = -1;
	volatile uint64_t t34 = 444972585161278831LLU;

	t34 = (x145^((x146|x147)-x148));

	if (t34 != 18443588525444630560LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = -35;
	int32_t x154 = INT32_MIN;
	uint32_t x155 = UINT32_MAX;
	uint32_t t35 = 546439998U;

	t35 = (x153^((x154|x155)-x156));

	if (t35 != 3325589734U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x158 = INT8_MIN;
	volatile int64_t x159 = INT64_MIN;
	uint16_t x160 = 2U;
	int64_t t36 = 123580895376LL;

	t36 = (x157^((x158|x159)-x160));

	if (t36 != -127LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = 5055U;
	static int64_t x166 = -349468LL;
	volatile int16_t x167 = -1;
	int64_t t37 = 1501981016680LL;

	t37 = (x165^((x166|x167)-x168));

	if (t37 != 5064LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x169 = -6436617;
	uint64_t x171 = UINT64_MAX;
	int8_t x172 = 1;

	t38 = (x169^((x170|x171)-x172));

	if (t38 != 6436617LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = -1433230813826211747LL;
	int16_t x174 = -1;
	int16_t x175 = INT16_MIN;
	static volatile uint8_t x176 = 39U;
	volatile int64_t t39 = -340236532987954LL;

	t39 = (x173^((x174|x175)-x176));

	if (t39 != 1433230813826211717LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MIN;
	int8_t x178 = INT8_MIN;
	int8_t x179 = 2;
	volatile int32_t t40 = 0;

	t40 = (x177^((x178|x179)-x180));

	if (t40 != -2147483646) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MIN;
	int32_t x183 = INT32_MAX;
	static volatile uint32_t x184 = 465717U;
	volatile uint32_t t41 = 1875U;

	t41 = (x181^((x182|x183)-x184));

	if (t41 != 2147017930U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x185 = INT8_MIN;
	static uint8_t x187 = UINT8_MAX;
	int64_t x188 = -8LL;

	t42 = (x185^((x186|x187)-x188));

	if (t42 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x189 = UINT64_MAX;
	int16_t x190 = -1;
	int16_t x191 = -1;
	static volatile uint64_t t43 = 313408222LLU;

	t43 = (x189^((x190|x191)-x192));

	if (t43 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x194 = UINT64_MAX;
	uint8_t x195 = 0U;
	volatile int64_t x196 = -1LL;
	uint64_t t44 = 86320742960237484LLU;

	t44 = (x193^((x194|x195)-x196));

	if (t44 != 255LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x198 = INT8_MAX;
	uint64_t x199 = 177584127818557LLU;
	volatile uint32_t x200 = 27130816U;
	volatile uint64_t t45 = 1083220871633115LLU;

	t45 = (x197^((x198|x199)-x200));

	if (t45 != 9223549620955463615LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = 160263246LL;
	uint64_t x202 = UINT64_MAX;
	int16_t x203 = INT16_MIN;

	t46 = (x201^((x202|x203)-x204));

	if (t46 != 18446744071722331214LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = 0U;
	static int64_t x206 = INT64_MIN;
	int16_t x208 = INT16_MIN;

	t47 = (x205^((x206|x207)-x208));

	if (t47 != 32640LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x209 = INT32_MIN;
	int64_t x211 = INT64_MAX;
	int64_t t48 = 17801156816724LL;

	t48 = (x209^((x210|x211)-x212));

	if (t48 != -2147483521LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x213 = -26500LL;
	int8_t x214 = -1;
	static volatile int8_t x215 = -1;
	uint32_t x216 = 2095043U;
	int64_t t49 = -67666515813528900LL;

	t49 = (x213^((x214|x215)-x216));

	if (t49 != -4292898752LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = INT8_MIN;
	uint64_t x218 = 52563871709080139LLU;
	int32_t x219 = INT32_MIN;
	volatile uint64_t x220 = 61313307LLU;

	t50 = (x217^((x218|x219)-x220));

	if (t50 != 1852466864LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x221 = 162U;
	int8_t x222 = -1;
	volatile int64_t t51 = 804456112856LL;

	t51 = (x221^((x222|x223)-x224));

	if (t51 != 9223372036854775645LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = -1LL;
	static int32_t x226 = 15625332;
	uint16_t x227 = UINT16_MAX;
	uint32_t x228 = UINT32_MAX;
	int64_t t52 = 113880096686226399LL;

	t52 = (x225^((x226|x227)-x228));

	if (t52 != -15663105LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x229 = 16;
	volatile int16_t x230 = 39;
	int64_t x231 = INT64_MIN;
	int8_t x232 = -1;
	volatile int64_t t53 = 969335115001104LL;

	t53 = (x229^((x230|x231)-x232));

	if (t53 != -9223372036854775752LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x235 = INT32_MIN;
	uint32_t x236 = UINT32_MAX;

	t54 = (x233^((x234|x235)-x236));

	if (t54 != 1419812224996162434LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x237 = 155096224U;
	uint32_t x238 = 3200967U;
	static uint32_t x239 = UINT32_MAX;
	volatile uint16_t x240 = UINT16_MAX;
	uint32_t t55 = 550499490U;

	t55 = (x237^((x238|x239)-x240));

	if (t55 != 4139881632U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = 982LLU;
	volatile int16_t x242 = INT16_MIN;
	uint8_t x243 = UINT8_MAX;
	static int64_t x244 = -1LL;

	t56 = (x241^((x242|x243)-x244));

	if (t56 != 18446744073709519574LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = -11154LL;
	volatile uint8_t x248 = UINT8_MAX;
	volatile uint64_t t57 = 730340713198LLU;

	t57 = (x245^((x246|x247)-x248));

	if (t57 != 10901LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x249 = INT8_MAX;
	int16_t x250 = INT16_MIN;
	volatile int16_t x252 = INT16_MAX;

	t58 = (x249^((x250|x251)-x252));

	if (t58 != -50916) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x254 = 1876U;
	int64_t x255 = -1LL;
	int64_t x256 = -1LL;
	int64_t t59 = 76233713LL;

	t59 = (x253^((x254|x255)-x256));

	if (t59 != -2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x257 = -102;
	volatile int32_t x258 = -1;
	volatile uint32_t x259 = UINT32_MAX;
	int32_t x260 = 0;

	t60 = (x257^((x258|x259)-x260));

	if (t60 != 101U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x263 = -2151178486LL;
	static int8_t x264 = INT8_MIN;
	static int64_t t61 = -148LL;

	t61 = (x261^((x262|x263)-x264));

	if (t61 != -2151178363LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = -936873;
	static volatile int8_t x266 = INT8_MAX;
	uint8_t x267 = UINT8_MAX;
	volatile int8_t x268 = 0;
	int32_t t62 = -54;

	t62 = (x265^((x266|x267)-x268));

	if (t62 != -936792) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = INT32_MAX;
	int16_t x271 = 1313;
	volatile int16_t x272 = INT16_MIN;
	int64_t t63 = -469210452900LL;

	t63 = (x269^((x270|x271)-x272));

	if (t63 != 2147450880LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x273 = INT64_MAX;
	int64_t x274 = -306764723872712LL;
	int64_t x275 = INT64_MAX;
	int32_t x276 = INT32_MAX;

	t64 = (x273^((x274|x275)-x276));

	if (t64 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x277 = 6;
	uint64_t x278 = 1018LLU;
	uint16_t x279 = 3895U;
	static int8_t x280 = 14;
	volatile uint64_t t65 = 528572090LLU;

	t65 = (x277^((x278|x279)-x280));

	if (t65 != 4087LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x281 = 1U;
	static int64_t x282 = INT64_MIN;
	int64_t x283 = 2235568331798528LL;
	int32_t x284 = 454696035;

	t66 = (x281^((x282|x283)-x284));

	if (t66 != -9221136468977673316LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x290 = INT16_MAX;
	uint64_t x291 = 21791LLU;
	static int16_t x292 = -1;
	static volatile uint64_t t67 = 11LLU;

	t67 = (x289^((x290|x291)-x292));

	if (t67 != 32828LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x293 = 354258914U;
	uint16_t x294 = UINT16_MAX;
	int8_t x295 = 2;
	static uint32_t x296 = 3078219U;

	t68 = (x293^((x294|x295)-x296));

	if (t68 != 3939469398U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = INT16_MIN;
	int32_t x298 = -785;
	int64_t x299 = INT64_MAX;
	int16_t x300 = -48;
	static int64_t t69 = -260199786795LL;

	t69 = (x297^((x298|x299)-x300));

	if (t69 != -32721LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x301 = INT32_MAX;
	int32_t x303 = -1;

	t70 = (x301^((x302|x303)-x304));

	if (t70 != 2147483647LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x306 = UINT64_MAX;
	int32_t x307 = -391593;
	uint64_t x308 = 482081LLU;
	static volatile uint64_t t71 = 128425LLU;

	t71 = (x305^((x306|x307)-x308));

	if (t71 != 9223372036854293726LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x309 = INT64_MAX;
	uint64_t x310 = 34308933956LLU;
	int64_t x311 = INT64_MIN;

	t72 = (x309^((x310|x311)-x312));

	if (t72 != 9223372002545841851LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x313 = -1;
	int32_t x314 = INT32_MIN;
	int32_t x315 = INT32_MAX;
	uint32_t x316 = 13146182U;
	volatile uint32_t t73 = 2465U;

	t73 = (x313^((x314|x315)-x316));

	if (t73 != 13146182U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x317 = -76596;
	int32_t x318 = -2025713;
	volatile int16_t x319 = 827;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t74 = -704135396;

	t74 = (x317^((x318|x319)-x320));

	if (t74 != 2049011) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x321 = INT16_MAX;
	static volatile uint32_t x322 = 3U;
	int16_t x323 = INT16_MAX;
	int8_t x324 = 2;

	t75 = (x321^((x322|x323)-x324));

	if (t75 != 2U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x325 = -7;
	int32_t x326 = -1;
	int8_t x327 = 6;
	uint64_t x328 = 123106926050LLU;
	uint64_t t76 = 52738498068LLU;

	t76 = (x325^((x326|x327)-x328));

	if (t76 != 123106926052LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = INT32_MIN;
	volatile int8_t x331 = -1;
	int64_t x332 = -272810421285790LL;
	volatile uint64_t t77 = 3449523246LLU;

	t77 = (x329^((x330|x331)-x332));

	if (t77 != 18446471262222971805LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x333 = UINT16_MAX;
	static uint8_t x335 = UINT8_MAX;
	volatile int16_t x336 = INT16_MIN;
	volatile int32_t t78 = 888;

	t78 = (x333^((x334|x335)-x336));

	if (t78 != -2147451136) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x337 = -728743311;
	volatile int64_t x338 = INT64_MIN;
	int8_t x339 = INT8_MIN;
	int32_t x340 = INT32_MIN;
	int64_t t79 = 11LL;

	t79 = (x337^((x338|x339)-x340));

	if (t79 != -1418740239LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x341 = -91661349LL;
	uint32_t x343 = 36U;
	int8_t x344 = -1;
	volatile int64_t t80 = 4863826009881241LL;

	t80 = (x341^((x342|x343)-x344));

	if (t80 != -91661605LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x347 = INT16_MAX;
	uint32_t x348 = UINT32_MAX;
	volatile int64_t t81 = 9502177616813459LL;

	t81 = (x345^((x346|x347)-x348));

	if (t81 != -237655LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = -2;
	volatile int32_t x350 = 4236604;
	volatile int32_t t82 = 811658244;

	t82 = (x349^((x350|x351)-x352));

	if (t82 != 2143247043) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x353 = 3946867380429LLU;
	static volatile int8_t x354 = -1;
	static int8_t x355 = INT8_MIN;
	uint64_t t83 = 1LLU;

	t83 = (x353^((x354|x355)-x356));

	if (t83 != 3946867371826LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x357 = UINT16_MAX;
	uint16_t x358 = 8739U;
	uint16_t x360 = 3U;
	volatile int32_t t84 = 979557;

	t84 = (x357^((x358|x359)-x360));

	if (t84 != 56783) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x362 = INT32_MAX;
	int8_t x363 = -1;
	int64_t x364 = INT64_MIN;

	t85 = (x361^((x362|x363)-x364));

	if (t85 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = 43;
	static uint32_t x366 = 475264230U;
	volatile int8_t x367 = INT8_MAX;
	static volatile int8_t x368 = 1;

	t86 = (x365^((x366|x367)-x368));

	if (t86 != 475264213U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x370 = 45;
	volatile uint16_t x371 = 1055U;
	volatile int32_t t87 = -2417;

	t87 = (x369^((x370|x371)-x372));

	if (t87 != 31680) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x374 = INT16_MIN;
	volatile int32_t x375 = -1;
	static int64_t x376 = INT64_MIN;
	volatile int64_t t88 = INT64_MIN;

	t88 = (x373^((x374|x375)-x376));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x377 = 179963614493562980LLU;
	static int32_t x378 = -12554;
	volatile int8_t x379 = INT8_MAX;
	uint16_t x380 = 6U;
	static volatile uint64_t t89 = 181952LLU;

	t89 = (x377^((x378|x379)-x380));

	if (t89 != 18266780459215984285LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x381 = 76;
	int64_t x382 = -1LL;
	static uint32_t x383 = 193U;
	static int8_t x384 = 13;
	static int64_t t90 = -200LL;

	t90 = (x381^((x382|x383)-x384));

	if (t90 != -66LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x385 = 31224U;
	int32_t x386 = -1;
	uint32_t x387 = UINT32_MAX;

	t91 = (x385^((x386|x387)-x388));

	if (t91 != 2147452423U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = -94871959;
	static int8_t x390 = -1;
	volatile int32_t x392 = INT32_MIN;
	int32_t t92 = -207521383;

	t92 = (x389^((x390|x391)-x392));

	if (t92 != -2052611690) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = 216;
	uint64_t x395 = 6LLU;
	int16_t x396 = INT16_MAX;

	t93 = (x393^((x394|x395)-x396));

	if (t93 != 32607LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = INT32_MAX;
	volatile int16_t x402 = INT16_MIN;
	volatile int8_t x403 = 34;
	static volatile int32_t x404 = 35;
	int32_t t94 = -1;

	t94 = (x401^((x402|x403)-x404));

	if (t94 != -2147450880) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x405 = -1;
	volatile int16_t x406 = INT16_MIN;
	int16_t x407 = INT16_MAX;
	uint64_t x408 = 12LLU;
	static volatile uint64_t t95 = 185LLU;

	t95 = (x405^((x406|x407)-x408));

	if (t95 != 12LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x410 = 6U;
	volatile uint16_t x411 = UINT16_MAX;
	int16_t x412 = 0;
	volatile int32_t t96 = -1486711;

	t96 = (x409^((x410|x411)-x412));

	if (t96 != -65409) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x413 = INT64_MIN;
	uint32_t x415 = 8U;
	int64_t x416 = INT64_MAX;

	t97 = (x413^((x414|x415)-x416));

	if (t97 != 4294967296LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x417 = INT32_MIN;
	volatile uint64_t x418 = 1624007694502LLU;
	int64_t x419 = 536007475LL;
	int64_t x420 = -1LL;
	uint64_t t98 = 110LLU;

	t98 = (x417^((x418|x419)-x420));

	if (t98 != 18446742448600701880LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x421 = 2U;
	int32_t x422 = -1;
	int64_t x424 = INT64_MIN;
	int64_t t99 = -6LL;

	t99 = (x421^((x422|x423)-x424));

	if (t99 != 9223372036854775805LL) { NG(); } else { ; }
	
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

