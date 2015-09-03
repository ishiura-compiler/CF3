#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t t1 = 16336646172194365LLU;
uint64_t x19 = UINT64_MAX;
uint64_t t4 = 45957587172478LLU;
volatile int64_t x21 = INT64_MIN;
static volatile int8_t x22 = 61;
uint64_t x23 = 92086LLU;
int8_t x27 = INT8_MIN;
static int8_t x38 = -1;
uint8_t x40 = 18U;
uint32_t x56 = 39338U;
volatile uint16_t x57 = 3U;
int8_t x62 = INT8_MAX;
volatile int64_t x67 = INT64_MAX;
int16_t x71 = INT16_MAX;
static int64_t x77 = -1LL;
int8_t x81 = INT8_MAX;
volatile int64_t x86 = 10LL;
int32_t x94 = 38053;
uint32_t x99 = 0U;
int16_t x105 = -1;
uint32_t x113 = UINT32_MAX;
volatile uint64_t x115 = UINT64_MAX;
volatile uint16_t x118 = 0U;
int8_t x126 = -1;
static uint64_t x130 = UINT64_MAX;
int32_t x132 = INT32_MIN;
static uint16_t x146 = 9U;
volatile int64_t t31 = 514979677938LL;
volatile int64_t t32 = 3753100705137LL;
int32_t x164 = -6;
int64_t x166 = -1LL;
uint64_t x167 = 0LLU;
uint64_t t35 = 91476LLU;
int16_t x171 = -2773;
int16_t x175 = 3;
int32_t x183 = INT32_MIN;
int16_t x184 = INT16_MIN;
int32_t x187 = INT32_MIN;
int8_t x194 = -6;
static volatile int64_t x196 = 0LL;
int32_t x198 = -7319531;
volatile int64_t x201 = INT64_MIN;
static volatile int8_t x203 = 24;
static volatile int64_t t44 = -1LL;
volatile uint64_t t45 = 1556625412144478189LLU;
int16_t x210 = 65;
volatile int32_t x212 = INT32_MIN;
static volatile uint8_t x218 = UINT8_MAX;
int16_t x220 = INT16_MIN;
int32_t x221 = INT32_MIN;
int8_t x229 = INT8_MIN;
int16_t x251 = -1;
volatile int64_t x263 = INT64_MIN;
int64_t x266 = 229789890695594LL;
int64_t x268 = -1315930755LL;
uint32_t x269 = 81204388U;
uint64_t t58 = 15577095619LLU;
int64_t x274 = INT64_MAX;
static uint16_t x275 = UINT16_MAX;
static volatile int64_t x276 = 1420559LL;
uint8_t x287 = 78U;
static int16_t x289 = -1;
int8_t x290 = INT8_MIN;
static volatile int16_t x291 = 35;
volatile uint32_t x302 = 28875U;
volatile uint32_t x304 = 82524979U;
uint32_t t63 = 69301702U;
volatile uint16_t x312 = 533U;
volatile uint32_t t65 = 805U;
volatile uint64_t x320 = 855LLU;
volatile uint32_t x324 = UINT32_MAX;
static int8_t x326 = 5;
volatile int64_t t68 = 2076LL;
uint32_t x329 = UINT32_MAX;
int64_t x336 = -1LL;
int64_t t70 = -3727173647765050LL;
uint64_t x343 = UINT64_MAX;
static uint8_t x344 = 13U;
uint16_t x346 = 39U;
int32_t t73 = 2095096;
static uint16_t x354 = 12U;
int16_t x358 = -1;
uint32_t x359 = 39U;
volatile uint64_t t77 = 2407153756325098478LLU;
int8_t x372 = -1;
static int64_t x376 = 9330526449900LL;
volatile int64_t t79 = 11030130579LL;
volatile int64_t t80 = -3LL;
int32_t x381 = -1;
static int8_t x383 = INT8_MIN;
uint8_t x387 = UINT8_MAX;
volatile uint64_t t82 = 1853906965598807LLU;
uint32_t x403 = 3U;
static int16_t x404 = INT16_MAX;
static volatile uint8_t x405 = 31U;
static volatile uint64_t x412 = 252110833112851LLU;
volatile int8_t x413 = -1;
volatile int32_t x416 = INT32_MAX;
volatile int64_t t87 = 351312199723646LL;
uint8_t x424 = 13U;
int8_t x434 = INT8_MIN;
volatile int32_t x439 = 1;
int16_t x440 = -1;
int64_t t93 = -7LL;
volatile uint64_t x447 = 17628476LLU;
static volatile int32_t x464 = INT32_MAX;
static volatile uint64_t t99 = 27LLU;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static int8_t x2 = INT8_MIN;
	uint16_t x3 = 17U;
	int16_t x4 = -1;
	int32_t t0 = 10718654;

	t0 = (((x1^x2)-x3)-x4);

	if (t0 != -2147483537) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 4U;
	int16_t x6 = -2;
	uint64_t x7 = 2110431762LLU;
	int16_t x8 = INT16_MIN;

	t1 = (((x5^x6)-x7)-x8);

	if (t1 != 18446744071599152616LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = 2;
	uint16_t x10 = UINT16_MAX;
	int16_t x11 = -600;
	static volatile int64_t x12 = 0LL;
	int64_t t2 = 45LL;

	t2 = (((x9^x10)-x11)-x12);

	if (t2 != 66133LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 34636446U;
	static volatile int32_t x14 = -1;
	static int64_t x15 = -1143028139LL;
	volatile int16_t x16 = -1;
	int64_t t3 = -713222853LL;

	t3 = (((x13^x14)-x15)-x16);

	if (t3 != 5403358989LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 1U;
	int8_t x18 = INT8_MAX;
	uint32_t x20 = 3U;

	t4 = (((x17^x18)-x19)-x20);

	if (t4 != 124LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x24 = INT64_MIN;
	static volatile uint64_t t5 = 23963634123749746LLU;

	t5 = (((x21^x22)-x23)-x24);

	if (t5 != 18446744073709459591LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static volatile uint64_t x26 = UINT64_MAX;
	uint32_t x28 = UINT32_MAX;
	volatile uint64_t t6 = 2617134107581931981LLU;

	t6 = (((x25^x26)-x27)-x28);

	if (t6 != 18446744069414617216LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = UINT16_MAX;
	int8_t x39 = INT8_MIN;
	static volatile int32_t t7 = -28;

	t7 = (((x37^x38)-x39)-x40);

	if (t7 != -65426) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = INT32_MIN;
	int32_t x42 = INT32_MAX;
	volatile int32_t x43 = 34;
	uint32_t x44 = 226579U;
	volatile uint32_t t8 = 114363819U;

	t8 = (((x41^x42)-x43)-x44);

	if (t8 != 4294740682U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x53 = 16285U;
	volatile int8_t x54 = INT8_MIN;
	int64_t x55 = -417524429104527LL;
	int64_t t9 = 4LL;

	t9 = (((x53^x54)-x55)-x56);

	if (t9 != 417524429048834LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x58 = UINT16_MAX;
	static int8_t x59 = INT8_MAX;
	static int16_t x60 = -1;
	volatile int32_t t10 = 4251774;

	t10 = (((x57^x58)-x59)-x60);

	if (t10 != 65406) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x61 = INT32_MAX;
	int8_t x63 = 15;
	volatile int16_t x64 = -27;
	static volatile int32_t t11 = 2003;

	t11 = (((x61^x62)-x63)-x64);

	if (t11 != 2147483532) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = -135;
	volatile uint64_t x66 = 16086505296941LLU;
	static uint8_t x68 = UINT8_MAX;
	volatile uint64_t t12 = 13810346336803LLU;

	t12 = (((x65^x66)-x67)-x68);

	if (t12 != 9223355950349478486LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x69 = UINT32_MAX;
	uint16_t x70 = 347U;
	int32_t x72 = -56;
	volatile uint32_t t13 = 33U;

	t13 = (((x69^x70)-x71)-x72);

	if (t13 != 4294934237U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = -1;
	volatile uint32_t x74 = 861068U;
	static int32_t x75 = -1;
	uint16_t x76 = UINT16_MAX;
	static uint32_t t14 = 45U;

	t14 = (((x73^x74)-x75)-x76);

	if (t14 != 4294040693U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x78 = UINT64_MAX;
	static uint8_t x79 = UINT8_MAX;
	volatile int8_t x80 = -1;
	volatile uint64_t t15 = 3LLU;

	t15 = (((x77^x78)-x79)-x80);

	if (t15 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x82 = UINT32_MAX;
	uint32_t x83 = 27U;
	uint8_t x84 = UINT8_MAX;
	uint32_t t16 = 3765511U;

	t16 = (((x81^x82)-x83)-x84);

	if (t16 != 4294966886U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x85 = -1LL;
	static volatile int8_t x87 = -1;
	int16_t x88 = INT16_MIN;
	static int64_t t17 = 50930195131219LL;

	t17 = (((x85^x86)-x87)-x88);

	if (t17 != 32758LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = 3182511U;
	static int16_t x90 = -754;
	static int32_t x91 = -1;
	int32_t x92 = -1;
	volatile uint32_t t18 = 1785U;

	t18 = (((x89^x90)-x91)-x92);

	if (t18 != 4291785379U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MIN;
	int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MIN;
	int32_t t19 = 44495547;

	t19 = (((x93^x94)-x95)-x96);

	if (t19 != -2147380059) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = -8;
	uint8_t x98 = 11U;
	int32_t x100 = -6243366;
	static uint32_t t20 = 2700617U;

	t20 = (((x97^x98)-x99)-x100);

	if (t20 != 6243353U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = 329454U;
	int64_t x102 = INT64_MIN;
	volatile uint64_t x103 = UINT64_MAX;
	volatile int32_t x104 = 1692;
	uint64_t t21 = 346107876LLU;

	t21 = (((x101^x102)-x103)-x104);

	if (t21 != 9223372036855103571LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x106 = 1;
	int8_t x107 = -1;
	volatile uint8_t x108 = UINT8_MAX;
	int32_t t22 = -45;

	t22 = (((x105^x106)-x107)-x108);

	if (t22 != -256) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x114 = 238779016LLU;
	int32_t x116 = INT32_MIN;
	volatile uint64_t t23 = 975642380799382554LLU;

	t23 = (((x113^x114)-x115)-x116);

	if (t23 != 6203671928LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = -1;
	int8_t x119 = INT8_MIN;
	int64_t x120 = -6798229581911LL;
	volatile int64_t t24 = -1785505978LL;

	t24 = (((x117^x118)-x119)-x120);

	if (t24 != 6798229582038LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x125 = 3U;
	static int8_t x127 = 1;
	int16_t x128 = -1;
	volatile uint32_t t25 = 301121280U;

	t25 = (((x125^x126)-x127)-x128);

	if (t25 != 4294967292U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x129 = 1U;
	volatile int64_t x131 = -81088069570668679LL;
	volatile uint64_t t26 = 31647254197286LLU;

	t26 = (((x129^x130)-x131)-x132);

	if (t26 != 81088071718152325LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x133 = 101U;
	uint32_t x134 = 4088436U;
	int64_t x135 = 11821467057586145LL;
	uint64_t x136 = 29LLU;
	uint64_t t27 = 1928897567384104558LLU;

	t27 = (((x133^x134)-x135)-x136);

	if (t27 != 18434922606656053779LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x137 = 2U;
	int64_t x138 = INT64_MAX;
	int16_t x139 = -1;
	volatile int16_t x140 = 0;
	int64_t t28 = -1717072452LL;

	t28 = (((x137^x138)-x139)-x140);

	if (t28 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x141 = INT64_MAX;
	static int64_t x142 = INT64_MIN;
	int32_t x143 = 3907;
	uint64_t x144 = UINT64_MAX;
	uint64_t t29 = 513LLU;

	t29 = (((x141^x142)-x143)-x144);

	if (t29 != 18446744073709547709LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = 201229545298444LL;
	static volatile int32_t x147 = -194650718;
	static volatile int8_t x148 = INT8_MIN;
	volatile int64_t t30 = 3187459LL;

	t30 = (((x145^x146)-x147)-x148);

	if (t30 != 201229739949283LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = -1;
	int64_t x150 = 6866LL;
	uint8_t x151 = 110U;
	int64_t x152 = 70617867LL;

	t31 = (((x149^x150)-x151)-x152);

	if (t31 != -70624844LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = UINT8_MAX;
	volatile int8_t x154 = INT8_MIN;
	int64_t x155 = INT64_MIN;
	uint32_t x156 = 2U;

	t32 = (((x153^x154)-x155)-x156);

	if (t32 != 9223372036854775677LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x157 = 28U;
	uint32_t x158 = 7U;
	int16_t x159 = 114;
	static int64_t x160 = -62741525052LL;
	volatile int64_t t33 = 1207215317758881476LL;

	t33 = (((x157^x158)-x159)-x160);

	if (t33 != 67036492261LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = 0;
	int8_t x162 = INT8_MIN;
	int8_t x163 = -18;
	int32_t t34 = 9165;

	t34 = (((x161^x162)-x163)-x164);

	if (t34 != -104) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = INT64_MIN;
	uint64_t x168 = 883026608478347368LLU;

	t35 = (((x165^x166)-x167)-x168);

	if (t35 != 8340345428376428439LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x169 = UINT8_MAX;
	int16_t x170 = 955;
	uint64_t x172 = 225307668561190390LLU;
	uint64_t t36 = 1891540260LLU;

	t36 = (((x169^x170)-x171)-x172);

	if (t36 != 18221436405148364835LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x173 = 4837111565036928LLU;
	uint16_t x174 = UINT16_MAX;
	volatile int8_t x176 = INT8_MAX;
	uint64_t t37 = 137123008706LLU;

	t37 = (((x173^x174)-x175)-x176);

	if (t37 != 4837111565013501LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x177 = -1;
	int64_t x178 = INT64_MIN;
	uint32_t x179 = 0U;
	int32_t x180 = INT32_MAX;
	volatile int64_t t38 = 222377189740321951LL;

	t38 = (((x177^x178)-x179)-x180);

	if (t38 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x181 = -52;
	uint16_t x182 = UINT16_MAX;
	volatile int32_t t39 = 1;

	t39 = (((x181^x182)-x183)-x184);

	if (t39 != 2147450931) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x185 = 12207LLU;
	int64_t x186 = INT64_MIN;
	int8_t x188 = 0;
	uint64_t t40 = 12091864219043447LLU;

	t40 = (((x185^x186)-x187)-x188);

	if (t40 != 9223372039002271663LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = -1;
	volatile uint8_t x190 = 7U;
	int8_t x191 = 0;
	volatile uint32_t x192 = 2335414U;
	volatile uint32_t t41 = 1109621827U;

	t41 = (((x189^x190)-x191)-x192);

	if (t41 != 4292631874U) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x193 = 10614690405016043LLU;
	int16_t x195 = 117;
	uint64_t t42 = 223512LLU;

	t42 = (((x193^x194)-x195)-x196);

	if (t42 != 18436129383304535452LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x197 = 59U;
	int64_t x199 = -1LL;
	volatile int32_t x200 = -112020;
	static volatile int64_t t43 = -2362513506706943LL;

	t43 = (((x197^x198)-x199)-x200);

	if (t43 != -7207485LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x202 = 4356;
	uint32_t x204 = 3U;

	t44 = (((x201^x202)-x203)-x204);

	if (t44 != -9223372036854771479LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x205 = 2516394679394106686LLU;
	int64_t x206 = -341441LL;
	uint16_t x207 = 172U;
	int16_t x208 = INT16_MIN;

	t45 = (((x205^x206)-x207)-x208);

	if (t45 != 15930349394315818581LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = INT32_MAX;
	uint64_t x211 = 19LLU;
	volatile uint64_t t46 = 175941LLU;

	t46 = (((x209^x210)-x211)-x212);

	if (t46 != 4294967211LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x213 = INT8_MIN;
	int16_t x214 = -1;
	static uint64_t x215 = 1090563LLU;
	int64_t x216 = INT64_MIN;
	uint64_t t47 = 63172360LLU;

	t47 = (((x213^x214)-x215)-x216);

	if (t47 != 9223372036853685372LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x217 = -28403253;
	volatile uint64_t x219 = UINT64_MAX;
	static volatile uint64_t t48 = 138384LLU;

	t48 = (((x217^x218)-x219)-x220);

	if (t48 != 18446744073681180981LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x222 = 109;
	volatile uint64_t x223 = 1051617949370671258LLU;
	int32_t x224 = -1;
	volatile uint64_t t49 = 239797LLU;

	t49 = (((x221^x222)-x223)-x224);

	if (t49 != 17395126122191396820LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x230 = 5117812U;
	uint16_t x231 = 3803U;
	static volatile uint8_t x232 = UINT8_MAX;
	volatile uint32_t t50 = 55712701U;

	t50 = (((x229^x230)-x231)-x232);

	if (t50 != 4289845530U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = INT16_MIN;
	static int64_t x234 = -1LL;
	uint64_t x235 = 252234287LLU;
	volatile int64_t x236 = 938LL;
	volatile uint64_t t51 = 20846233179895LLU;

	t51 = (((x233^x234)-x235)-x236);

	if (t51 != 18446744073457349158LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x237 = INT64_MIN;
	int8_t x238 = 1;
	volatile uint32_t x239 = 0U;
	volatile int16_t x240 = INT16_MIN;
	volatile int64_t t52 = -8153465148640LL;

	t52 = (((x237^x238)-x239)-x240);

	if (t52 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x249 = INT32_MAX;
	int32_t x250 = INT32_MIN;
	volatile int16_t x252 = INT16_MIN;
	int32_t t53 = -15;

	t53 = (((x249^x250)-x251)-x252);

	if (t53 != 32768) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x253 = 3U;
	uint64_t x254 = 209139678LLU;
	static uint16_t x255 = 9494U;
	int32_t x256 = INT32_MAX;
	static uint64_t t54 = 1LLU;

	t54 = (((x253^x254)-x255)-x256);

	if (t54 != 18446744071771198152LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x257 = UINT8_MAX;
	int8_t x258 = INT8_MAX;
	uint64_t x259 = UINT64_MAX;
	int8_t x260 = INT8_MIN;
	volatile uint64_t t55 = 6LLU;

	t55 = (((x257^x258)-x259)-x260);

	if (t55 != 257LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x261 = 17110831U;
	volatile int64_t x262 = INT64_MIN;
	uint64_t x264 = 145896524946443083LLU;
	volatile uint64_t t56 = 3233647LLU;

	t56 = (((x261^x262)-x263)-x264);

	if (t56 != 18300847548780219364LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x265 = 212371552U;
	uint64_t x267 = 812LLU;
	uint64_t t57 = 31774LLU;

	t57 = (((x265^x266)-x267)-x268);

	if (t57 != 229791401105697LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x270 = 379U;
	uint16_t x271 = 27676U;
	uint64_t x272 = 2LLU;

	t58 = (((x269^x270)-x271)-x272);

	if (t58 != 81177025LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x273 = INT64_MIN;
	static int64_t t59 = 162LL;

	t59 = (((x273^x274)-x275)-x276);

	if (t59 != -1486095LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x285 = INT8_MIN;
	int64_t x286 = -1LL;
	int16_t x288 = INT16_MAX;
	int64_t t60 = -1534509LL;

	t60 = (((x285^x286)-x287)-x288);

	if (t60 != -32718LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x292 = UINT16_MAX;
	int32_t t61 = -6485478;

	t61 = (((x289^x290)-x291)-x292);

	if (t61 != -65443) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x297 = INT32_MIN;
	static int32_t x298 = -500024224;
	int32_t x299 = 6135754;
	int16_t x300 = INT16_MIN;
	volatile int32_t t62 = -1942535;

	t62 = (((x297^x298)-x299)-x300);

	if (t62 != 1641356438) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x301 = -2091;
	static int32_t x303 = -210;

	t63 = (((x301^x302)-x303)-x304);

	if (t63 != 4212411581U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x309 = 1U;
	int64_t x310 = -177835361LL;
	int8_t x311 = -1;
	int64_t t64 = -61098LL;

	t64 = (((x309^x310)-x311)-x312);

	if (t64 != -177835894LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x313 = 111U;
	uint32_t x314 = UINT32_MAX;
	static int32_t x315 = -1;
	static int16_t x316 = INT16_MAX;

	t65 = (((x313^x314)-x315)-x316);

	if (t65 != 4294934418U) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x317 = INT16_MIN;
	int32_t x318 = INT32_MAX;
	static volatile int64_t x319 = INT64_MIN;
	static volatile uint64_t t66 = 249245495321LLU;

	t66 = (((x317^x318)-x319)-x320);

	if (t66 != 9223372034707324072LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x321 = -6;
	static uint8_t x322 = 3U;
	int8_t x323 = -62;
	volatile uint32_t t67 = 3269U;

	t67 = (((x321^x322)-x323)-x324);

	if (t67 != 56U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x325 = UINT16_MAX;
	volatile int16_t x327 = INT16_MIN;
	static int64_t x328 = 38501969555534LL;

	t68 = (((x325^x326)-x327)-x328);

	if (t68 != -38501969457236LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x330 = INT16_MAX;
	int32_t x331 = -1868013;
	static uint16_t x332 = 13U;
	uint32_t t69 = 47U;

	t69 = (((x329^x330)-x331)-x332);

	if (t69 != 1835232U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x333 = INT64_MAX;
	int32_t x334 = -3479;
	int16_t x335 = -237;

	t70 = (((x333^x334)-x335)-x336);

	if (t70 != -9223372036854772092LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x337 = INT64_MAX;
	int16_t x338 = -1;
	volatile int32_t x339 = INT32_MIN;
	int32_t x340 = INT32_MAX;
	volatile int64_t t71 = -81538747472640794LL;

	t71 = (((x337^x338)-x339)-x340);

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x341 = -4210;
	static uint64_t x342 = UINT64_MAX;
	volatile uint64_t t72 = 29018714LLU;

	t72 = (((x341^x342)-x343)-x344);

	if (t72 != 4197LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x345 = -1;
	int32_t x347 = -219628;
	int8_t x348 = INT8_MIN;

	t73 = (((x345^x346)-x347)-x348);

	if (t73 != 219716) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x353 = -11427044826295752LL;
	static int64_t x355 = INT64_MIN;
	volatile uint32_t x356 = 29221173U;
	int64_t t74 = 0LL;

	t74 = (((x353^x354)-x355)-x356);

	if (t74 != 9211944991999258879LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x357 = -26;
	int16_t x360 = 0;
	volatile uint32_t t75 = 4U;

	t75 = (((x357^x358)-x359)-x360);

	if (t75 != 4294967282U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x361 = INT8_MIN;
	static int16_t x362 = INT16_MAX;
	int16_t x363 = -31;
	uint8_t x364 = 4U;
	int32_t t76 = -2723;

	t76 = (((x361^x362)-x363)-x364);

	if (t76 != -32614) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x365 = UINT64_MAX;
	int64_t x366 = 57335482758018LL;
	int16_t x367 = INT16_MAX;
	int32_t x368 = 75779;

	t77 = (((x365^x366)-x367)-x368);

	if (t77 != 18446686738226685051LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = INT16_MAX;
	uint8_t x370 = UINT8_MAX;
	uint32_t x371 = UINT32_MAX;
	volatile uint32_t t78 = 78250U;

	t78 = (((x369^x370)-x371)-x372);

	if (t78 != 32514U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x373 = UINT32_MAX;
	int8_t x374 = INT8_MAX;
	int32_t x375 = INT32_MIN;

	t79 = (((x373^x374)-x375)-x376);

	if (t79 != -9328378966380LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x377 = 14U;
	int32_t x378 = 427;
	int64_t x379 = -528947785LL;
	int64_t x380 = 80523LL;

	t80 = (((x377^x378)-x379)-x380);

	if (t80 != 528867683LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x382 = UINT64_MAX;
	uint64_t x384 = 224LLU;
	volatile uint64_t t81 = 23LLU;

	t81 = (((x381^x382)-x383)-x384);

	if (t81 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = -107;
	uint64_t x386 = UINT64_MAX;
	int16_t x388 = -1;

	t82 = (((x385^x386)-x387)-x388);

	if (t82 != 18446744073709551468LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x401 = 17U;
	volatile uint8_t x402 = 13U;
	volatile uint32_t t83 = 536951664U;

	t83 = (((x401^x402)-x403)-x404);

	if (t83 != 4294934554U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x406 = INT64_MAX;
	volatile int32_t x407 = INT32_MAX;
	int16_t x408 = INT16_MIN;
	static int64_t t84 = 555413838284642620LL;

	t84 = (((x405^x406)-x407)-x408);

	if (t84 != 9223372034707324897LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x409 = 38548227;
	uint32_t x410 = 507U;
	int32_t x411 = INT32_MIN;
	static uint64_t t85 = 3356003456366836364LLU;

	t85 = (((x409^x410)-x411)-x412);

	if (t85 != 18446491965062470629LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x414 = INT64_MIN;
	static uint16_t x415 = 63U;
	static volatile int64_t t86 = -1946303702LL;

	t86 = (((x413^x414)-x415)-x416);

	if (t86 != 9223372034707292097LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x417 = 15815U;
	static int32_t x418 = INT32_MIN;
	volatile int16_t x419 = 0;
	static int64_t x420 = INT64_MIN;

	t87 = (((x417^x418)-x419)-x420);

	if (t87 != 9223372034707307975LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x421 = INT32_MIN;
	int64_t x422 = -16442584003946578LL;
	int32_t x423 = -4;
	volatile int64_t t88 = 2100LL;

	t88 = (((x421^x422)-x423)-x424);

	if (t88 != 16442582569670565LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x425 = -5;
	int64_t x426 = -1LL;
	int16_t x427 = -1;
	static uint16_t x428 = 1U;
	int64_t t89 = 7294276LL;

	t89 = (((x425^x426)-x427)-x428);

	if (t89 != 4LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x429 = -18;
	uint32_t x430 = 196067581U;
	static uint64_t x431 = 31076503211285935LLU;
	uint32_t x432 = 1594260U;
	uint64_t t90 = 5864101858LLU;

	t90 = (((x429^x430)-x431)-x432);

	if (t90 != 18415667574595571152LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x433 = INT8_MAX;
	uint64_t x435 = 21206LLU;
	int16_t x436 = -1;
	volatile uint64_t t91 = 61LLU;

	t91 = (((x433^x434)-x435)-x436);

	if (t91 != 18446744073709530410LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x437 = INT16_MAX;
	uint8_t x438 = 26U;
	volatile int32_t t92 = -84542;

	t92 = (((x437^x438)-x439)-x440);

	if (t92 != 32741) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x441 = INT64_MIN;
	static int64_t x442 = INT64_MIN;
	int64_t x443 = -1LL;
	int32_t x444 = 24678562;

	t93 = (((x441^x442)-x443)-x444);

	if (t93 != -24678561LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x445 = 0;
	volatile uint32_t x446 = 308932U;
	int16_t x448 = INT16_MIN;
	static volatile uint64_t t94 = 3726653613280LLU;

	t94 = (((x445^x446)-x447)-x448);

	if (t94 != 18446744073692264840LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x449 = UINT64_MAX;
	volatile uint8_t x450 = UINT8_MAX;
	int8_t x451 = INT8_MIN;
	volatile int64_t x452 = -11553688LL;
	volatile uint64_t t95 = 194083LLU;

	t95 = (((x449^x450)-x451)-x452);

	if (t95 != 11553560LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x457 = UINT32_MAX;
	volatile int8_t x458 = 1;
	uint32_t x459 = 25U;
	static uint32_t x460 = 11455U;
	volatile uint32_t t96 = 0U;

	t96 = (((x457^x458)-x459)-x460);

	if (t96 != 4294955814U) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x461 = INT32_MAX;
	static uint32_t x462 = UINT32_MAX;
	int64_t x463 = INT64_MAX;
	volatile int64_t t97 = 382735073097LL;

	t97 = (((x461^x462)-x463)-x464);

	if (t97 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x465 = -3;
	static volatile int8_t x466 = INT8_MIN;
	volatile uint64_t x467 = 1155648116518733276LLU;
	int8_t x468 = 0;
	static volatile uint64_t t98 = 204634LLU;

	t98 = (((x465^x466)-x467)-x468);

	if (t98 != 17291095957190818465LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x469 = INT64_MIN;
	int16_t x470 = -1;
	uint8_t x471 = UINT8_MAX;
	uint64_t x472 = 6068378796957956429LLU;

	t99 = (((x469^x470)-x471)-x472);

	if (t99 != 3154993239896819123LLU) { NG(); } else { ; }
	
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

