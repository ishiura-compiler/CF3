#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x1 = 998LLU;
volatile int64_t t1 = -15521613933187479LL;
int8_t x10 = 58;
int32_t x15 = INT32_MIN;
int32_t x24 = 28;
int16_t x34 = -7;
int32_t t8 = -28145;
int8_t x41 = 6;
static int64_t x43 = -5128754LL;
uint32_t x52 = 162885U;
volatile int64_t x59 = -798771447LL;
static int64_t x68 = INT64_MIN;
static int64_t x71 = -1307829LL;
int64_t x77 = -1LL;
int64_t x78 = INT64_MAX;
int16_t x80 = 1;
uint8_t x83 = 53U;
int32_t x88 = INT32_MAX;
uint64_t x89 = UINT64_MAX;
uint64_t x90 = 5096LLU;
volatile int64_t t22 = 412348725698590143LL;
volatile int64_t t24 = 749681692LL;
uint8_t x107 = 94U;
volatile uint64_t x113 = UINT64_MAX;
uint8_t x115 = UINT8_MAX;
static int16_t x116 = INT16_MAX;
volatile int64_t t29 = 215325612883LL;
static uint16_t x125 = UINT16_MAX;
int64_t x128 = -21248075LL;
static int64_t t30 = 11126782LL;
int8_t x145 = INT8_MIN;
uint32_t x147 = 80U;
uint8_t x155 = 29U;
int8_t x156 = 4;
int32_t x158 = INT32_MAX;
int32_t x162 = INT32_MIN;
volatile int32_t t37 = 648;
int64_t x172 = 5492LL;
volatile int64_t t39 = 192LL;
int16_t x176 = INT16_MAX;
int32_t x179 = -1;
int64_t x180 = -21680LL;
static uint32_t x192 = 867765334U;
volatile uint64_t x197 = 6482811309349588LLU;
static int16_t x199 = 6;
int32_t x200 = INT32_MIN;
uint16_t x236 = 2184U;
volatile int64_t x237 = INT64_MAX;
volatile uint8_t x242 = 6U;
volatile int16_t x245 = 1270;
static int8_t x249 = 10;
int32_t x263 = INT32_MIN;
volatile uint32_t x270 = 2109U;
uint8_t x275 = 23U;
volatile uint32_t x290 = 1070U;
uint32_t t68 = 1568U;
int32_t t69 = 115;
static int64_t x302 = INT64_MIN;
volatile uint64_t x304 = 266173752134482LLU;
uint16_t x312 = 1726U;
volatile int64_t x316 = 149381235621LL;
static int64_t t74 = 0LL;
volatile int64_t t76 = -4063047367LL;
int8_t x325 = INT8_MIN;
uint8_t x333 = 5U;
int32_t x345 = 4;
int16_t x347 = -46;
volatile int64_t t81 = -20521192762737922LL;
uint16_t x353 = UINT16_MAX;
static int8_t x356 = INT8_MAX;
int32_t x359 = -1;
int32_t x362 = INT32_MAX;
int64_t x363 = INT64_MIN;
int64_t x367 = -1LL;
volatile uint16_t x376 = UINT16_MAX;
volatile uint64_t t86 = 5750LLU;
static uint16_t x377 = 756U;
uint32_t x380 = UINT32_MAX;
int8_t x383 = INT8_MAX;
int8_t x388 = INT8_MIN;
int32_t x393 = INT32_MIN;
int64_t t91 = 24091688626112616LL;
uint32_t x410 = 308722476U;
uint32_t x411 = 1642U;
static uint64_t x417 = 549417007LLU;
int64_t x433 = -729154002634398LL;
uint64_t x434 = 230LLU;
volatile uint64_t x436 = UINT64_MAX;


void f0(void) {
	int8_t x2 = INT8_MIN;
	int16_t x3 = -1;
	volatile int16_t x4 = INT16_MIN;
	uint64_t t0 = 2597LLU;

	t0 = (x1^((x2&x3)-x4));

	if (t0 != 31846LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 3;
	int64_t x6 = INT64_MIN;
	uint16_t x7 = UINT16_MAX;
	static uint16_t x8 = UINT16_MAX;

	t1 = (x5^((x6&x7)-x8));

	if (t1 != -65534LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int8_t x11 = INT8_MIN;
	int32_t x12 = 6;
	volatile uint64_t t2 = 69042390445707LLU;

	t2 = (x9^((x10&x11)-x12));

	if (t2 != 5LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -5;
	int64_t x14 = -1LL;
	int64_t x16 = -132737995958232LL;
	int64_t t3 = 6931901789633LL;

	t3 = (x13^((x14&x15)-x16));

	if (t3 != -132735848474589LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int16_t x18 = INT16_MAX;
	volatile int64_t x19 = -298888023LL;
	static volatile uint64_t x20 = UINT64_MAX;
	static uint64_t t4 = 1450011144101322616LLU;

	t4 = (x17^((x18&x19)-x20));

	if (t4 != 18446744071562089642LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	static uint32_t x22 = 253494U;
	volatile uint8_t x23 = 35U;
	static uint32_t t5 = 25U;

	t5 = (x21^((x22&x23)-x24));

	if (t5 != 2147483654U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 103761U;
	int16_t x26 = 18;
	volatile uint32_t x27 = 1817191U;
	uint32_t x28 = UINT32_MAX;
	uint32_t t6 = 784796170U;

	t6 = (x25^((x26&x27)-x28));

	if (t6 != 103762U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -18;
	static volatile uint64_t x30 = 3365LLU;
	int32_t x31 = INT32_MIN;
	int64_t x32 = INT64_MIN;
	volatile uint64_t t7 = 12169354105LLU;

	t7 = (x29^((x30&x31)-x32));

	if (t7 != 9223372036854775790LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	static volatile int8_t x35 = INT8_MIN;
	volatile int16_t x36 = INT16_MIN;

	t8 = (x33^((x34&x35)-x36));

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	volatile uint64_t x38 = 809868113173471LLU;
	int64_t x39 = INT64_MAX;
	int8_t x40 = -1;
	uint64_t t9 = 247727113217800068LLU;

	t9 = (x37^((x38&x39)-x40));

	if (t9 != 809868113173407LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	static int16_t x44 = -49;
	volatile int64_t t10 = -1238896706059315LL;

	t10 = (x41^((x42&x43)-x44));

	if (t10 != -5128777LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	uint8_t x46 = UINT8_MAX;
	uint64_t x47 = 2377LLU;
	int16_t x48 = INT16_MIN;
	uint64_t t11 = 296004LLU;

	t11 = (x45^((x46&x47)-x48));

	if (t11 != 9223372036854742966LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 24;
	int32_t x50 = INT32_MIN;
	static uint32_t x51 = UINT32_MAX;
	static volatile uint32_t t12 = 637U;

	t12 = (x49^((x50&x51)-x52));

	if (t12 != 2147320739U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MAX;
	int16_t x58 = 1614;
	static int16_t x60 = INT16_MIN;
	volatile int64_t t13 = -3604321997LL;

	t13 = (x57^((x58&x59)-x60));

	if (t13 != 2147449335LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 30U;
	uint8_t x62 = 2U;
	int16_t x63 = INT16_MAX;
	static int16_t x64 = INT16_MIN;
	int32_t t14 = -1435;

	t14 = (x61^((x62&x63)-x64));

	if (t14 != 32796) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	static int32_t x66 = -1;
	int64_t x67 = -1LL;
	volatile int64_t t15 = -24LL;

	t15 = (x65^((x66&x67)-x68));

	if (t15 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MAX;
	int64_t x72 = 3593508141356803021LL;
	int64_t t16 = 27807275605465854LL;

	t16 = (x69^((x70&x71)-x72));

	if (t16 != 3593508141356803070LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -1LL;
	volatile int32_t x74 = 299319;
	uint32_t x75 = 30U;
	int64_t x76 = INT64_MAX;
	static volatile int64_t t17 = -1441140122LL;

	t17 = (x73^((x74&x75)-x76));

	if (t17 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x79 = 77294782425748LLU;
	volatile uint64_t t18 = 68339197482841LLU;

	t18 = (x77^((x78&x79)-x80));

	if (t18 != 18446666778927125868LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	int8_t x82 = 3;
	static uint16_t x84 = 2572U;
	volatile int64_t t19 = -10571206933347638LL;

	t19 = (x81^((x82&x83)-x84));

	if (t19 != 9223372036854773237LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -49;
	int64_t x86 = -1LL;
	uint16_t x87 = 11U;
	static volatile int64_t t20 = 3LL;

	t20 = (x85^((x86&x87)-x88));

	if (t20 != 2147483587LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x91 = INT8_MIN;
	static volatile uint8_t x92 = 7U;
	uint64_t t21 = 371256562326472285LLU;

	t21 = (x89^((x90&x91)-x92));

	if (t21 != 18446744073709546630LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = 1;
	int64_t x94 = -1LL;
	int16_t x95 = 10;
	uint8_t x96 = 1U;

	t22 = (x93^((x94&x95)-x96));

	if (t22 != 8LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 16622732599LLU;
	uint32_t x98 = 222U;
	int16_t x99 = 24;
	uint64_t x100 = 47LLU;
	uint64_t t23 = 2310LLU;

	t23 = (x97^((x98&x99)-x100));

	if (t23 != 18446744057086819038LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = 6;
	int32_t x102 = INT32_MAX;
	int64_t x103 = 3836926162898537003LL;
	static uint32_t x104 = 2U;

	t24 = (x101^((x102&x103)-x104));

	if (t24 != 687360559LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = INT32_MAX;
	uint64_t x106 = 673046027LLU;
	volatile int64_t x108 = INT64_MAX;
	uint64_t t25 = 1399502834536537837LLU;

	t25 = (x105^((x106&x107)-x108));

	if (t25 != 9223372039002259444LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = 2U;
	int64_t x110 = INT64_MAX;
	int16_t x111 = INT16_MIN;
	int32_t x112 = 127206;
	volatile int64_t t26 = -194983823LL;

	t26 = (x109^((x110&x111)-x112));

	if (t26 != 9223372036854615832LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x114 = -1LL;
	static volatile uint64_t t27 = 68436LLU;

	t27 = (x113^((x114&x115)-x116));

	if (t27 != 32511LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = INT8_MIN;
	volatile int16_t x118 = INT16_MIN;
	uint8_t x119 = 9U;
	int32_t x120 = 98071982;
	volatile int32_t t28 = 59;

	t28 = (x117^((x118&x119)-x120));

	if (t28 != 98072018) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x121 = UINT32_MAX;
	int16_t x122 = INT16_MIN;
	int64_t x123 = 262092377LL;
	int64_t x124 = -4491427511554011LL;

	t29 = (x121^((x122&x123)-x124));

	if (t29 != 4491431901442084LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x126 = 5U;
	int8_t x127 = INT8_MIN;

	t30 = (x125^((x126&x127)-x128));

	if (t30 != 21284788LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x129 = 102U;
	int16_t x130 = 7040;
	static int8_t x131 = INT8_MIN;
	uint16_t x132 = 827U;
	int32_t t31 = -42323;

	t31 = (x129^((x130&x131)-x132));

	if (t31 != 6179) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = INT16_MIN;
	int64_t x138 = INT64_MIN;
	volatile int32_t x139 = INT32_MIN;
	int32_t x140 = -1;
	volatile int64_t t32 = -332020262591305818LL;

	t32 = (x137^((x138&x139)-x140));

	if (t32 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = UINT64_MAX;
	int32_t x142 = 41;
	static int8_t x143 = INT8_MIN;
	volatile uint32_t x144 = 63981U;
	static uint64_t t33 = 6985LLU;

	t33 = (x141^((x142&x143)-x144));

	if (t33 != 18446744069414648300LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x146 = INT64_MAX;
	uint64_t x148 = 7148227796264733171LLU;
	uint64_t t34 = 31802LLU;

	t34 = (x145^((x146&x147)-x148));

	if (t34 != 7148227796264733149LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x153 = 700054761196946LLU;
	volatile int8_t x154 = 34;
	volatile uint64_t t35 = 429LLU;

	t35 = (x153^((x154&x155)-x156));

	if (t35 != 18446044018948354670LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x157 = INT16_MIN;
	static uint32_t x159 = 4173739U;
	int32_t x160 = INT32_MIN;
	volatile uint32_t t36 = 50550U;

	t36 = (x157^((x158&x159)-x160));

	if (t36 != 2143301547U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x161 = 6;
	uint8_t x163 = UINT8_MAX;
	volatile int16_t x164 = INT16_MIN;

	t37 = (x161^((x162&x163)-x164));

	if (t37 != 32774) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = INT32_MIN;
	static uint32_t x166 = UINT32_MAX;
	volatile int64_t x167 = INT64_MAX;
	int32_t x168 = 5;
	static volatile int64_t t38 = -50496675LL;

	t38 = (x165^((x166&x167)-x168));

	if (t38 != -2147483654LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = INT64_MAX;
	int8_t x170 = 5;
	uint16_t x171 = 1U;

	t39 = (x169^((x170&x171)-x172));

	if (t39 != -9223372036854770318LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = 30591378U;
	int16_t x174 = INT16_MIN;
	static volatile int64_t x175 = -1LL;
	volatile int64_t t40 = -2401271225LL;

	t40 = (x173^((x174&x175)-x176));

	if (t40 != -30553709LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MIN;
	static int32_t x178 = 18;
	volatile int64_t t41 = 322979LL;

	t41 = (x177^((x178&x179)-x180));

	if (t41 != -21694LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x181 = 25602LLU;
	uint16_t x182 = UINT16_MAX;
	uint64_t x183 = 30127420958542779LLU;
	int32_t x184 = INT32_MIN;
	uint64_t t42 = 1109179940LLU;

	t42 = (x181^((x182&x183)-x184));

	if (t42 != 2147545017LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = INT32_MAX;
	int64_t x190 = -561333950684LL;
	static volatile uint8_t x191 = 1U;
	int64_t t43 = 1836747191250723897LL;

	t43 = (x189^((x190&x191)-x192));

	if (t43 != -1279718315LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x193 = UINT32_MAX;
	uint16_t x194 = UINT16_MAX;
	static uint8_t x195 = 2U;
	int64_t x196 = 8LL;
	static volatile int64_t t44 = 29083486291938LL;

	t44 = (x193^((x194&x195)-x196));

	if (t44 != -4294967291LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x198 = UINT64_MAX;
	volatile uint64_t t45 = 34109741614310LLU;

	t45 = (x197^((x198&x199)-x200));

	if (t45 != 6482813456833234LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x201 = 2U;
	uint64_t x202 = 238955591725807644LLU;
	static int32_t x203 = INT32_MAX;
	volatile int64_t x204 = INT64_MIN;
	volatile uint64_t t46 = 52611916901790LLU;

	t46 = (x201^((x202&x203)-x204));

	if (t46 != 9223372037826344990LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x205 = 3708U;
	uint64_t x206 = 7406614519289LLU;
	volatile int8_t x207 = INT8_MAX;
	int64_t x208 = -2216LL;
	uint64_t t47 = 59LLU;

	t47 = (x205^((x206&x207)-x208));

	if (t47 != 1885LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x209 = INT64_MIN;
	static uint8_t x210 = 11U;
	int16_t x211 = -1;
	int64_t x212 = INT64_MAX;
	volatile int64_t t48 = 10652461629080LL;

	t48 = (x209^((x210&x211)-x212));

	if (t48 != 12LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x213 = INT16_MAX;
	int16_t x214 = INT16_MIN;
	volatile uint16_t x215 = 16035U;
	volatile uint16_t x216 = UINT16_MAX;
	volatile int32_t t49 = 2;

	t49 = (x213^((x214&x215)-x216));

	if (t49 != -32770) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x217 = 8252;
	int32_t x218 = -1;
	int16_t x219 = INT16_MIN;
	volatile uint8_t x220 = 5U;
	int32_t t50 = 6960;

	t50 = (x217^((x218&x219)-x220));

	if (t50 != -41017) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x221 = 7U;
	volatile int64_t x222 = 31552LL;
	uint64_t x223 = 36LLU;
	static int64_t x224 = -14LL;
	volatile uint64_t t51 = 630903293LLU;

	t51 = (x221^((x222&x223)-x224));

	if (t51 != 9LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = INT32_MAX;
	static int32_t x226 = INT32_MAX;
	uint16_t x227 = UINT16_MAX;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t52 = INT32_MAX;

	t52 = (x225^((x226&x227)-x228));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x229 = INT32_MIN;
	static int32_t x230 = -1;
	volatile int64_t x231 = -3167177LL;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t53 = 14639LLU;

	t53 = (x229^((x230&x231)-x232));

	if (t53 != 2144316472LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x233 = 0U;
	int32_t x234 = 144120220;
	static int8_t x235 = INT8_MIN;
	volatile int32_t t54 = -182456;

	t54 = (x233^((x234&x235)-x236));

	if (t54 != 144118008) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x238 = -710;
	static int64_t x239 = -222555913275LL;
	uint8_t x240 = 8U;
	static volatile int64_t t55 = 2852558036423LL;

	t55 = (x237^((x238&x239)-x240));

	if (t55 != -9223371814298861817LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x241 = UINT16_MAX;
	int32_t x243 = INT32_MIN;
	int32_t x244 = INT32_MAX;
	volatile int32_t t56 = 26559392;

	t56 = (x241^((x242&x243)-x244));

	if (t56 != -2147418114) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x246 = 5754373423LLU;
	int8_t x247 = -7;
	static int16_t x248 = INT16_MIN;
	static volatile uint64_t t57 = 91LLU;

	t57 = (x245^((x246&x247)-x248));

	if (t57 != 5754405343LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x250 = INT64_MAX;
	uint64_t x251 = 591502317117948065LLU;
	uint32_t x252 = 733325045U;
	volatile uint64_t t58 = 522LLU;

	t58 = (x249^((x250&x251)-x252));

	if (t58 != 591502316384623014LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x253 = -1;
	static uint32_t x254 = 1172500U;
	int8_t x255 = 1;
	int64_t x256 = 403020095802LL;
	int64_t t59 = 313440651600471031LL;

	t59 = (x253^((x254&x255)-x256));

	if (t59 != 403020095801LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x257 = UINT8_MAX;
	int8_t x258 = -1;
	int32_t x259 = INT32_MIN;
	volatile int8_t x260 = -1;
	static volatile int32_t t60 = 114881301;

	t60 = (x257^((x258&x259)-x260));

	if (t60 != -2147483394) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x261 = UINT16_MAX;
	static uint64_t x262 = 7085990468458434916LLU;
	int8_t x264 = INT8_MAX;
	uint64_t t61 = 313833447092LLU;

	t61 = (x261^((x262&x263)-x264));

	if (t61 != 7085990467614998654LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x265 = -1LL;
	int8_t x266 = -1;
	int16_t x267 = 2444;
	static volatile int8_t x268 = INT8_MAX;
	static volatile int64_t t62 = 60041LL;

	t62 = (x265^((x266&x267)-x268));

	if (t62 != -2318LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x269 = UINT16_MAX;
	static volatile uint32_t x271 = 14160334U;
	uint8_t x272 = 31U;
	uint32_t t63 = 281073U;

	t63 = (x269^((x270&x271)-x272));

	if (t63 != 4294901778U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x273 = UINT64_MAX;
	uint16_t x274 = 1U;
	static int32_t x276 = 4356720;
	uint64_t t64 = 116579871955498LLU;

	t64 = (x273^((x274&x275)-x276));

	if (t64 != 4356718LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = -704;
	static int16_t x278 = INT16_MIN;
	int64_t x279 = 184049778907825LL;
	static int32_t x280 = 246689062;
	volatile int64_t t65 = 114838450LL;

	t65 = (x277^((x278&x279)-x280));

	if (t65 != -184049532194918LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x281 = 1U;
	int32_t x282 = INT32_MIN;
	static int8_t x283 = -1;
	int32_t x284 = INT32_MIN;
	static int32_t t66 = 11552051;

	t66 = (x281^((x282&x283)-x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -1LL;
	uint16_t x286 = 555U;
	int64_t x287 = INT64_MIN;
	int32_t x288 = INT32_MAX;
	int64_t t67 = 19636052064LL;

	t67 = (x285^((x286&x287)-x288));

	if (t67 != 2147483646LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MAX;
	uint16_t x291 = 12U;
	int16_t x292 = -1;

	t68 = (x289^((x290&x291)-x292));

	if (t68 != 32754U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = 24;
	int16_t x294 = INT16_MAX;
	int16_t x295 = -2;
	int16_t x296 = INT16_MAX;

	t69 = (x293^((x294&x295)-x296));

	if (t69 != -25) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = 23;
	volatile int32_t x298 = INT32_MAX;
	uint8_t x299 = 0U;
	int32_t x300 = INT32_MAX;
	int32_t t70 = 0;

	t70 = (x297^((x298&x299)-x300));

	if (t70 != -2147483626) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x301 = 121U;
	static uint64_t x303 = UINT64_MAX;
	uint64_t t71 = 126615602292804LLU;

	t71 = (x301^((x302&x303)-x304));

	if (t71 != 9223105863102641367LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = 68;
	uint16_t x306 = 143U;
	int64_t x307 = INT64_MIN;
	uint32_t x308 = UINT32_MAX;
	static volatile int64_t t72 = -13670809338627LL;

	t72 = (x305^((x306&x307)-x308));

	if (t72 != -4294967227LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x309 = 4023U;
	volatile uint64_t x310 = UINT64_MAX;
	int64_t x311 = 594050909809763980LL;
	uint64_t t73 = 13938935178757LLU;

	t73 = (x309^((x310&x311)-x312));

	if (t73 != 594050909809758329LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x313 = UINT8_MAX;
	volatile int32_t x314 = INT32_MAX;
	volatile uint8_t x315 = 0U;

	t74 = (x313^((x314&x315)-x316));

	if (t74 != -149381235548LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = -54;
	int8_t x318 = INT8_MAX;
	int64_t x319 = -1110909824LL;
	uint16_t x320 = 1231U;
	static volatile int64_t t75 = -93085813473998800LL;

	t75 = (x317^((x318&x319)-x320));

	if (t75 != 1275LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x321 = 1516;
	int64_t x322 = -1LL;
	static int64_t x323 = INT64_MIN;
	int8_t x324 = -1;

	t76 = (x321^((x322&x323)-x324));

	if (t76 != -9223372036854774291LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x326 = INT64_MIN;
	uint32_t x327 = 34U;
	uint8_t x328 = 6U;
	volatile int64_t t77 = -23073150082435LL;

	t77 = (x325^((x326&x327)-x328));

	if (t77 != 122LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x334 = -11;
	volatile uint32_t x335 = 694U;
	volatile uint32_t x336 = 6U;
	volatile uint32_t t78 = 9729U;

	t78 = (x333^((x334&x335)-x336));

	if (t78 != 683U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x337 = 4U;
	int64_t x338 = INT64_MIN;
	volatile int16_t x339 = 1634;
	volatile int8_t x340 = INT8_MAX;
	static volatile int64_t t79 = -52155904064563LL;

	t79 = (x337^((x338&x339)-x340));

	if (t79 != -123LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x341 = 78U;
	uint64_t x342 = UINT64_MAX;
	volatile uint16_t x343 = 10U;
	uint32_t x344 = 1073999520U;
	uint64_t t80 = 4341258281759238589LLU;

	t80 = (x341^((x342&x343)-x344));

	if (t80 != 18446744072635552036LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x346 = 106U;
	int64_t x348 = INT64_MAX;

	t81 = (x345^((x346&x347)-x348));

	if (t81 != -9223372036854775737LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x354 = 3U;
	static int64_t x355 = 150957387210888LL;
	volatile int64_t t82 = 103461410052LL;

	t82 = (x353^((x354&x355)-x356));

	if (t82 != -65410LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = -1;
	static int16_t x358 = INT16_MIN;
	int64_t x360 = INT64_MIN;
	volatile int64_t t83 = 192LL;

	t83 = (x357^((x358&x359)-x360));

	if (t83 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x361 = 120;
	volatile int8_t x364 = 0;
	volatile int64_t t84 = 67227459LL;

	t84 = (x361^((x362&x363)-x364));

	if (t84 != 120LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x365 = 753254403125LLU;
	volatile int64_t x366 = INT64_MAX;
	int8_t x368 = 0;
	uint64_t t85 = 8246165177760351LLU;

	t85 = (x365^((x366&x367)-x368));

	if (t85 != 9223371283600372682LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x373 = UINT64_MAX;
	uint32_t x374 = UINT32_MAX;
	volatile int64_t x375 = 1394791LL;

	t86 = (x373^((x374&x375)-x376));

	if (t86 != 18446744073708222359LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x378 = 2U;
	int8_t x379 = -1;
	volatile uint32_t t87 = 6121678U;

	t87 = (x377^((x378&x379)-x380));

	if (t87 != 759U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x381 = -1;
	uint64_t x382 = UINT64_MAX;
	uint32_t x384 = 133836451U;
	volatile uint64_t t88 = 3883292038737796LLU;

	t88 = (x381^((x382&x383)-x384));

	if (t88 != 133836323LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x385 = 390100LL;
	int32_t x386 = -9023;
	uint8_t x387 = UINT8_MAX;
	int64_t t89 = -155967588129LL;

	t89 = (x385^((x386&x387)-x388));

	if (t89 != 389781LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x389 = INT8_MAX;
	int16_t x390 = INT16_MIN;
	static uint16_t x391 = 91U;
	int64_t x392 = -1LL;
	volatile int64_t t90 = -69878362149644LL;

	t90 = (x389^((x390&x391)-x392));

	if (t90 != 126LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x394 = 1650989;
	int64_t x395 = -55438431LL;
	int8_t x396 = INT8_MIN;

	t91 = (x393^((x394&x395)-x396));

	if (t91 != -2146430559LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x397 = UINT32_MAX;
	int16_t x398 = -1;
	int8_t x399 = INT8_MAX;
	uint64_t x400 = 19087LLU;
	static volatile uint64_t t92 = 1159002360193LLU;

	t92 = (x397^((x398&x399)-x400));

	if (t92 != 18446744069414603279LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x401 = 3U;
	int32_t x402 = 76;
	static volatile int64_t x403 = -18114357LL;
	volatile int32_t x404 = -135;
	volatile int64_t t93 = -45954629384505103LL;

	t93 = (x401^((x402&x403)-x404));

	if (t93 != 204LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = INT64_MIN;
	int32_t x412 = INT32_MAX;
	volatile int64_t t94 = 4927779893LL;

	t94 = (x409^((x410&x411)-x412));

	if (t94 != -9223372034707291607LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x413 = 784LLU;
	int16_t x414 = -1;
	volatile int64_t x415 = INT64_MIN;
	int32_t x416 = -2322783;
	uint64_t t95 = 19086233787327748LLU;

	t95 = (x413^((x414&x415)-x416));

	if (t95 != 9223372036857098831LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x418 = 1LL;
	uint8_t x419 = UINT8_MAX;
	volatile uint64_t x420 = 230LLU;
	uint64_t t96 = 2668054358168885120LLU;

	t96 = (x417^((x418&x419)-x420));

	if (t96 != 18446744073160134452LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x421 = INT32_MIN;
	uint8_t x422 = UINT8_MAX;
	int16_t x423 = -75;
	int8_t x424 = INT8_MIN;
	static volatile int32_t t97 = 47;

	t97 = (x421^((x422&x423)-x424));

	if (t97 != -2147483339) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x429 = INT8_MAX;
	int8_t x430 = INT8_MAX;
	static int16_t x431 = -97;
	static uint8_t x432 = 6U;
	int32_t t98 = 18;

	t98 = (x429^((x430&x431)-x432));

	if (t98 != 102) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x435 = INT64_MAX;
	static uint64_t t99 = 3842977332606762399LLU;

	t99 = (x433^((x434&x435)-x436));

	if (t99 != 18446014919706917253LLU) { NG(); } else { ; }
	
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

