#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -1;
int32_t t0 = -423;
int32_t x5 = INT32_MIN;
static int64_t x8 = 0LL;
static volatile int32_t x10 = INT32_MIN;
static volatile uint64_t x13 = 10688LLU;
uint8_t x14 = UINT8_MAX;
static volatile int32_t x18 = 11917408;
int64_t x20 = INT64_MAX;
volatile uint64_t x28 = 67091360168597LLU;
int16_t x30 = -1;
int8_t x35 = INT8_MIN;
static volatile uint16_t x44 = 7722U;
uint8_t x47 = UINT8_MAX;
uint8_t x53 = 5U;
volatile int32_t t13 = -1;
uint32_t t14 = 4547445U;
static uint32_t x64 = 129973198U;
int32_t x66 = 7355044;
volatile int32_t x67 = INT32_MAX;
int32_t t16 = INT32_MIN;
uint32_t t17 = 3204638U;
static volatile int32_t t18 = 61270379;
int8_t x77 = INT8_MIN;
volatile uint32_t x82 = UINT32_MAX;
static volatile int32_t x83 = INT32_MIN;
uint32_t x86 = 3427271U;
static int32_t x87 = 32412414;
static int8_t x91 = INT8_MIN;
uint8_t x99 = UINT8_MAX;
static volatile uint64_t t25 = 209238614793355246LLU;
int16_t x108 = -1;
uint64_t x109 = UINT64_MAX;
volatile int16_t x123 = INT16_MIN;
int64_t t30 = 1LL;
int16_t x133 = INT16_MIN;
int32_t t33 = -1057505;
volatile int64_t x148 = INT64_MIN;
volatile uint64_t x150 = 9109987833098LLU;
int16_t x154 = INT16_MAX;
volatile int8_t x159 = INT8_MIN;
static uint32_t t40 = 617685U;
int16_t x166 = -1;
int8_t x176 = INT8_MIN;
volatile int32_t x180 = INT32_MIN;
volatile uint16_t x182 = UINT16_MAX;
static volatile uint16_t x187 = UINT16_MAX;
volatile int32_t t47 = 972323321;
static uint16_t x193 = UINT16_MAX;
uint16_t x199 = 5U;
int64_t t49 = 269351LL;
volatile uint64_t x201 = 1877925390620048LLU;
int8_t x202 = 1;
int64_t x204 = 6535LL;
uint32_t t51 = 111866334U;
int64_t x212 = -809768LL;
int64_t x213 = INT64_MIN;
volatile uint16_t x214 = 1U;
uint64_t x216 = UINT64_MAX;
volatile uint64_t t53 = 281085117083LLU;
uint32_t x223 = 53538U;
static int32_t x225 = -7109;
uint64_t t57 = 693356432382468LLU;
int64_t x235 = -10827001742525LL;
uint64_t x245 = UINT64_MAX;
volatile int16_t x246 = INT16_MIN;
int16_t x249 = -12;
static volatile int64_t x250 = -1LL;
static uint32_t x255 = UINT32_MAX;
uint64_t x258 = UINT64_MAX;
uint16_t x260 = UINT16_MAX;
int16_t x264 = -14;
int16_t x273 = -1;
volatile int32_t t68 = -10;
int16_t x292 = INT16_MAX;
volatile uint8_t x293 = UINT8_MAX;
uint64_t x299 = UINT64_MAX;
volatile uint64_t t74 = 4623610173991728LLU;
static volatile uint64_t t75 = 9LLU;
uint8_t x307 = 1U;
int8_t x309 = -57;
uint64_t x315 = 1088583670LLU;
int64_t x318 = -1LL;
static int64_t x320 = INT64_MIN;
uint64_t t79 = 5LLU;
int64_t t80 = 309LL;
int8_t x325 = -3;
uint64_t x338 = 6598156LLU;
volatile uint64_t t84 = 142276696184070LLU;
int8_t x353 = 6;
volatile int64_t t88 = INT64_MIN;
uint16_t x358 = 10750U;
int8_t x360 = INT8_MIN;
int8_t x365 = INT8_MIN;
static volatile uint32_t t93 = 101238U;
static int32_t x381 = INT32_MIN;
int8_t x383 = INT8_MIN;
int64_t t95 = 2033LL;
uint32_t t96 = 85384783U;
int64_t x391 = 604LL;
int32_t x393 = -1;
uint64_t x396 = UINT64_MAX;
int16_t x398 = 254;
int32_t t99 = 4762833;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = -1;
	int16_t x4 = -1;

	t0 = (((x1^x2)|x3)^x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 13;
	static int16_t x7 = INT16_MIN;
	int64_t t1 = -3467047808918830LL;

	t1 = (((x5^x6)|x7)^x8);

	if (t1 != -32755LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int64_t x11 = -1LL;
	volatile int16_t x12 = INT16_MAX;
	int64_t t2 = -186932285109LL;

	t2 = (((x9^x10)|x11)^x12);

	if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x15 = 0U;
	int16_t x16 = -6;
	volatile uint64_t t3 = 83929455251494LLU;

	t3 = (((x13^x14)|x15)^x16);

	if (t3 != 18446744073709541061LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -180;
	volatile int8_t x19 = INT8_MIN;
	static int64_t t4 = -1282809618051LL;

	t4 = (((x17^x18)|x19)^x20);

	if (t4 != -9223372036854775725LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	uint64_t x22 = 819245508038662694LLU;
	uint64_t x23 = 55656263426LLU;
	uint16_t x24 = 5258U;
	volatile uint64_t t5 = 48129814024813318LLU;

	t5 = (((x21^x22)|x23)^x24);

	if (t5 != 819245559769430865LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 24121551863922897LL;
	uint32_t x26 = UINT32_MAX;
	uint8_t x27 = 20U;
	uint64_t t6 = 12359362896LLU;

	t6 = (((x25^x26)|x27)^x28);

	if (t6 != 24083051487724971LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 60221U;
	volatile int8_t x31 = INT8_MIN;
	int16_t x32 = -1;
	volatile uint32_t t7 = 6510U;

	t7 = (((x29^x30)|x31)^x32);

	if (t7 != 61U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int32_t x34 = INT32_MAX;
	uint8_t x36 = 124U;
	static int32_t t8 = -801802035;

	t8 = (((x33^x34)|x35)^x36);

	if (t8 != -125) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	uint8_t x38 = 5U;
	int32_t x39 = INT32_MAX;
	volatile int16_t x40 = -235;
	volatile int64_t t9 = 37229302577058LL;

	t9 = (((x37^x38)|x39)^x40);

	if (t9 != 9223372034707292394LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	static int32_t x42 = INT32_MAX;
	int16_t x43 = INT16_MIN;
	volatile int32_t t10 = -765830;

	t10 = (((x41^x42)|x43)^x44);

	if (t10 != -7723) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 174LLU;
	uint64_t x46 = 7LLU;
	int64_t x48 = INT64_MAX;
	uint64_t t11 = 25651591522434207LLU;

	t11 = (((x45^x46)|x47)^x48);

	if (t11 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 1983557585800647LLU;
	volatile uint16_t x50 = 5U;
	volatile uint32_t x51 = 45277U;
	int32_t x52 = INT32_MIN;
	volatile uint64_t t12 = 7745371113LLU;

	t12 = (((x49^x50)|x51)^x52);

	if (t12 != 18444760518180453855LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = -1;
	static uint8_t x55 = UINT8_MAX;
	int8_t x56 = INT8_MAX;

	t13 = (((x53^x54)|x55)^x56);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x57 = UINT32_MAX;
	volatile uint16_t x58 = 12128U;
	uint32_t x59 = 331U;
	uint8_t x60 = UINT8_MAX;

	t14 = (((x57^x58)|x59)^x60);

	if (t14 != 4294955296U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int64_t x62 = -1LL;
	volatile int64_t x63 = INT64_MIN;
	int64_t t15 = 0LL;

	t15 = (((x61^x62)|x63)^x64);

	if (t15 != -9223372036724802610LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int32_t x68 = INT32_MAX;

	t16 = (((x65^x66)|x67)^x68);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = 80996866U;
	int8_t x70 = -21;
	int16_t x71 = INT16_MAX;
	static volatile uint32_t x72 = 10911397U;

	t17 = (((x69^x70)|x71)^x72);

	if (t17 != 4220125530U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = 60;
	volatile uint16_t x74 = 45U;
	int8_t x75 = 22;
	volatile int8_t x76 = -1;

	t18 = (((x73^x74)|x75)^x76);

	if (t18 != -24) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x78 = UINT8_MAX;
	volatile int64_t x79 = -4054928009423861LL;
	int16_t x80 = -1;
	volatile int64_t t19 = 1132556142479410335LL;

	t19 = (((x77^x78)|x79)^x80);

	if (t19 != 128LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int64_t x84 = -1LL;
	static volatile int64_t t20 = 31486667000175683LL;

	t20 = (((x81^x82)|x83)^x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -776234625159572LL;
	uint32_t x88 = UINT32_MAX;
	volatile int64_t t21 = 1239LL;

	t21 = (((x85^x86)|x87)^x88);

	if (t21 != -776237156923392LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	static int16_t x90 = INT16_MIN;
	uint16_t x92 = UINT16_MAX;
	int64_t t22 = -29362685697959LL;

	t22 = (((x89^x90)|x91)^x92);

	if (t22 != -65409LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	uint16_t x94 = 79U;
	static int64_t x95 = 3012948047LL;
	int64_t x96 = INT64_MIN;
	volatile int64_t t23 = -13924946538LL;

	t23 = (((x93^x94)|x95)^x96);

	if (t23 != 9223372036854775759LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	static uint16_t x98 = 17478U;
	int8_t x100 = INT8_MIN;
	int32_t t24 = -161;

	t24 = (((x97^x98)|x99)^x100);

	if (t24 != 17535) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	volatile int32_t x102 = -1;
	static uint64_t x103 = UINT64_MAX;
	uint32_t x104 = 2058547U;

	t25 = (((x101^x102)|x103)^x104);

	if (t25 != 18446744073707493068LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MAX;
	int8_t x106 = INT8_MAX;
	static int32_t x107 = INT32_MIN;
	volatile int32_t t26 = -528250565;

	t26 = (((x105^x106)|x107)^x108);

	if (t26 != 2147451007) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = INT8_MAX;
	volatile int8_t x111 = -31;
	volatile int16_t x112 = INT16_MAX;
	static volatile uint64_t t27 = 3911997LLU;

	t27 = (((x109^x110)|x111)^x112);

	if (t27 != 18446744073709518878LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int64_t x114 = -21000LL;
	int8_t x115 = 38;
	volatile int64_t x116 = -3120960150884968485LL;
	volatile int64_t t28 = 41514279LL;

	t28 = (((x113^x114)|x115)^x116);

	if (t28 != -6102411885969819099LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x117 = 0U;
	volatile int64_t x118 = 0LL;
	uint32_t x119 = UINT32_MAX;
	uint8_t x120 = 3U;
	volatile int64_t t29 = 2168830658492005LL;

	t29 = (((x117^x118)|x119)^x120);

	if (t29 != 4294967292LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int16_t x122 = INT16_MAX;
	int64_t x124 = -1LL;

	t30 = (((x121^x122)|x123)^x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MIN;
	volatile int16_t x126 = INT16_MIN;
	uint32_t x127 = 11U;
	volatile int32_t x128 = INT32_MIN;
	static uint32_t t31 = 3185866U;

	t31 = (((x125^x126)|x127)^x128);

	if (t31 != 2147483659U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = 20;
	int8_t x130 = INT8_MIN;
	static int64_t x131 = INT64_MIN;
	volatile int64_t x132 = -564665236561829LL;
	volatile int64_t t32 = -26959625193LL;

	t32 = (((x129^x130)|x131)^x132);

	if (t32 != 564665236561871LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MAX;
	uint16_t x135 = 229U;
	volatile int8_t x136 = INT8_MAX;

	t33 = (((x133^x134)|x135)^x136);

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MAX;
	int64_t x138 = -1LL;
	uint32_t x139 = UINT32_MAX;
	int8_t x140 = 43;
	volatile int64_t t34 = 3778LL;

	t34 = (((x137^x138)|x139)^x140);

	if (t34 != -44LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = -224;
	int32_t x142 = INT32_MIN;
	uint64_t x143 = 8160787530520747LLU;
	volatile int64_t x144 = INT64_MAX;
	uint64_t t35 = 11208027056121110LLU;

	t35 = (((x141^x142)|x143)^x144);

	if (t35 != 9215211248952541268LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	int32_t x146 = -1;
	int64_t x147 = INT64_MIN;
	int64_t t36 = -394LL;

	t36 = (((x145^x146)|x147)^x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 21889176U;
	static uint8_t x151 = 73U;
	int32_t x152 = INT32_MAX;
	uint64_t t37 = 481710017158021LLU;

	t37 = (((x149^x150)|x151)^x152);

	if (t37 != 9111423371812LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	uint64_t x155 = 688288LLU;
	uint32_t x156 = UINT32_MAX;
	volatile uint64_t t38 = 2516055814083710537LLU;

	t38 = (((x153^x154)|x155)^x156);

	if (t38 != 9223372032559841119LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x157 = 35U;
	int64_t x158 = -1LL;
	static int8_t x160 = INT8_MIN;
	int64_t t39 = 1527052022061821391LL;

	t39 = (((x157^x158)|x159)^x160);

	if (t39 != 92LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = 9;
	uint32_t x162 = 1656666598U;
	int16_t x163 = 158;
	volatile int32_t x164 = INT32_MIN;

	t40 = (((x161^x162)|x163)^x164);

	if (t40 != 3804150271U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 6103U;
	int8_t x167 = -1;
	static volatile int64_t x168 = INT64_MIN;
	volatile int64_t t41 = INT64_MAX;

	t41 = (((x165^x166)|x167)^x168);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 449;
	volatile uint32_t x170 = 14U;
	int16_t x171 = INT16_MIN;
	static volatile uint8_t x172 = UINT8_MAX;
	volatile uint32_t t42 = 0U;

	t42 = (((x169^x170)|x171)^x172);

	if (t42 != 4294934832U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 24LLU;
	static uint32_t x174 = UINT32_MAX;
	uint8_t x175 = UINT8_MAX;
	uint64_t t43 = 122211455832691LLU;

	t43 = (((x173^x174)|x175)^x176);

	if (t43 != 18446744069414584447LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 1;
	static uint16_t x178 = 14399U;
	int64_t x179 = 103928202LL;
	int64_t t44 = -1342531LL;

	t44 = (((x177^x178)|x179)^x180);

	if (t44 != -2043545154LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 15782097U;
	int8_t x183 = 1;
	int8_t x184 = INT8_MAX;
	volatile uint32_t t45 = 4762646U;

	t45 = (((x181^x182)|x183)^x184);

	if (t45 != 15740752U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = 1369;
	int64_t x186 = -1LL;
	static volatile int16_t x188 = INT16_MIN;
	volatile int64_t t46 = 1793878196914626083LL;

	t46 = (((x185^x186)|x187)^x188);

	if (t46 != 32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 1126U;
	int32_t x190 = -1;
	volatile int32_t x191 = 1;
	int8_t x192 = -1;

	t47 = (((x189^x190)|x191)^x192);

	if (t47 != 1126) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x194 = 690485072U;
	volatile int16_t x195 = 6;
	int64_t x196 = -1LL;
	static volatile int64_t t48 = 928992LL;

	t48 = (((x193^x194)|x195)^x196);

	if (t48 != -690423984LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	uint32_t x198 = 145204U;
	int32_t x200 = -1;

	t49 = (((x197^x198)|x199)^x200);

	if (t49 != 145200LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x203 = INT16_MIN;
	static uint64_t t50 = 4180453351942LLU;

	t50 = (((x201^x202)|x203)^x204);

	if (t50 != 18446744073709521942LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x205 = UINT16_MAX;
	int32_t x206 = 187844155;
	uint32_t x207 = 97742U;
	int32_t x208 = 733096929;

	t51 = (((x205^x206)|x207)^x208);

	if (t51 != 545379887U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	int16_t x210 = INT16_MAX;
	int16_t x211 = INT16_MIN;
	uint64_t t52 = 183LLU;

	t52 = (((x209^x210)|x211)^x212);

	if (t52 != 795864LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x215 = 132696U;

	t53 = (((x213^x214)|x215)^x216);

	if (t53 != 9223372036854643110LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 34U;
	uint64_t x218 = 1LLU;
	uint64_t x219 = 167795254464LLU;
	static int64_t x220 = INT64_MIN;
	volatile uint64_t t54 = 1687604005043686493LLU;

	t54 = (((x217^x218)|x219)^x220);

	if (t54 != 9223372204650030307LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	int32_t x222 = INT32_MIN;
	uint8_t x224 = UINT8_MAX;
	uint32_t t55 = 210231U;

	t55 = (((x221^x222)|x223)^x224);

	if (t55 != 2147483392U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x226 = 1;
	static uint64_t x227 = UINT64_MAX;
	volatile uint64_t x228 = 8164754790072887957LLU;
	volatile uint64_t t56 = 31678874719545LLU;

	t56 = (((x225^x226)|x227)^x228);

	if (t56 != 10281989283636663658LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = 2;
	volatile uint64_t x230 = 898468772LLU;
	int64_t x231 = -1LL;
	uint32_t x232 = UINT32_MAX;

	t57 = (((x229^x230)|x231)^x232);

	if (t57 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 27555LLU;
	static volatile uint64_t x234 = 328525291177243272LLU;
	static int64_t x236 = 24375250470861767LL;
	uint64_t t58 = 40650LLU;

	t58 = (((x233^x234)|x235)^x236);

	if (t58 != 18422369062271697068LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int32_t x238 = 1114;
	static int64_t x239 = INT64_MIN;
	static volatile int8_t x240 = INT8_MIN;
	volatile int64_t t59 = 1753985730408LL;

	t59 = (((x237^x238)|x239)^x240);

	if (t59 != 9223372036854774746LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 26478LLU;
	uint64_t x242 = 1600484101230457LLU;
	int64_t x243 = INT64_MIN;
	uint32_t x244 = 1U;
	uint64_t t60 = 654LLU;

	t60 = (((x241^x242)|x243)^x244);

	if (t60 != 9224972520956028950LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x247 = -310360LL;
	int64_t x248 = -138188LL;
	static uint64_t t61 = 15277LLU;

	t61 = (((x245^x246)|x247)^x248);

	if (t61 != 433099LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x251 = INT8_MAX;
	volatile int16_t x252 = -17;
	volatile int64_t t62 = -195126039292419031LL;

	t62 = (((x249^x250)|x251)^x252);

	if (t62 != -112LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 5859U;
	int8_t x254 = -3;
	volatile uint8_t x256 = UINT8_MAX;
	static uint32_t t63 = 83U;

	t63 = (((x253^x254)|x255)^x256);

	if (t63 != 4294967040U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	uint32_t x259 = 110U;
	volatile uint64_t t64 = 384823329444566179LLU;

	t64 = (((x257^x258)|x259)^x260);

	if (t64 != 65408LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x261 = 198U;
	int8_t x262 = -1;
	int16_t x263 = -1;
	uint32_t t65 = 3727U;

	t65 = (((x261^x262)|x263)^x264);

	if (t65 != 13U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 234U;
	uint8_t x266 = 0U;
	volatile uint32_t x267 = 38U;
	uint32_t x268 = 57614U;
	static uint32_t t66 = 28680U;

	t66 = (((x265^x266)|x267)^x268);

	if (t66 != 57824U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int64_t x270 = 12548691LL;
	int16_t x271 = INT16_MIN;
	static int8_t x272 = 1;
	static uint64_t t67 = 124227LLU;

	t67 = (((x269^x270)|x271)^x272);

	if (t67 != 18446744073709520301LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x274 = INT8_MIN;
	uint16_t x275 = 22501U;
	volatile int8_t x276 = INT8_MIN;

	t68 = (((x273^x274)|x275)^x276);

	if (t68 != -22401) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = INT16_MIN;
	volatile uint64_t x278 = 83449432204LLU;
	uint32_t x279 = 61807U;
	volatile uint64_t x280 = 104794583LLU;
	uint64_t t69 = 4629LLU;

	t69 = (((x277^x278)|x279)^x280);

	if (t69 != 18446743990297030712LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x281 = 1784796931U;
	int16_t x282 = 1;
	int16_t x283 = 1;
	static int64_t x284 = -1LL;
	int64_t t70 = -1916LL;

	t70 = (((x281^x282)|x283)^x284);

	if (t70 != -1784796932LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MIN;
	volatile int64_t x287 = -1LL;
	int32_t x288 = INT32_MIN;
	volatile int64_t t71 = 7885268071168137LL;

	t71 = (((x285^x286)|x287)^x288);

	if (t71 != 2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -1;
	uint16_t x290 = 10052U;
	volatile int16_t x291 = INT16_MAX;
	static int32_t t72 = -44885627;

	t72 = (((x289^x290)|x291)^x292);

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x294 = UINT64_MAX;
	int32_t x295 = INT32_MAX;
	int32_t x296 = -1297518;
	uint64_t t73 = 191LLU;

	t73 = (((x293^x294)|x295)^x296);

	if (t73 != 1297517LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = -1LL;
	volatile int64_t x298 = 32009549861117LL;
	uint32_t x300 = 11U;

	t74 = (((x297^x298)|x299)^x300);

	if (t74 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 0U;
	volatile uint64_t x302 = 2598490033749470LLU;
	int32_t x303 = -26889136;
	int16_t x304 = 0;

	t75 = (((x301^x302)|x303)^x304);

	if (t75 != 18446744073699982814LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x305 = 0U;
	uint32_t x306 = UINT32_MAX;
	static int16_t x308 = -372;
	volatile uint32_t t76 = 1879U;

	t76 = (((x305^x306)|x307)^x308);

	if (t76 != 371U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x310 = 0U;
	uint32_t x311 = UINT32_MAX;
	static int8_t x312 = -12;
	static volatile uint32_t t77 = 6U;

	t77 = (((x309^x310)|x311)^x312);

	if (t77 != 11U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = 27;
	volatile int8_t x314 = 1;
	static volatile uint8_t x316 = UINT8_MAX;
	uint64_t t78 = 8372576090600954607LLU;

	t78 = (((x313^x314)|x315)^x316);

	if (t78 != 1088583425LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = INT64_MAX;
	static uint64_t x319 = 570LLU;

	t79 = (((x317^x318)|x319)^x320);

	if (t79 != 570LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = -1;
	int64_t x322 = -1LL;
	volatile int16_t x323 = 2674;
	int16_t x324 = -21;

	t80 = (((x321^x322)|x323)^x324);

	if (t80 != -2663LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = -1LL;
	uint32_t x327 = UINT32_MAX;
	int64_t x328 = 0LL;
	volatile int64_t t81 = 0LL;

	t81 = (((x325^x326)|x327)^x328);

	if (t81 != 4294967295LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	int64_t x330 = INT64_MAX;
	int8_t x331 = -1;
	uint32_t x332 = 0U;
	volatile int64_t t82 = 205LL;

	t82 = (((x329^x330)|x331)^x332);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x333 = UINT64_MAX;
	int64_t x334 = 3621315LL;
	volatile int8_t x335 = INT8_MAX;
	uint32_t x336 = 64704627U;
	volatile uint64_t t83 = 16776764462548LLU;

	t83 = (((x333^x334)|x335)^x336);

	if (t83 != 18446744073643748876LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MAX;
	int8_t x339 = INT8_MIN;
	static int16_t x340 = INT16_MAX;

	t84 = (((x337^x338)|x339)^x340);

	if (t84 != 18446744073709518860LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = 0;
	static volatile int8_t x342 = 6;
	volatile int16_t x343 = INT16_MIN;
	static int16_t x344 = -1;
	volatile int32_t t85 = -14367;

	t85 = (((x341^x342)|x343)^x344);

	if (t85 != 32761) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	static int16_t x346 = 0;
	uint16_t x347 = 63U;
	uint32_t x348 = 3U;
	static uint32_t t86 = 312328U;

	t86 = (((x345^x346)|x347)^x348);

	if (t86 != 4294934588U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = INT8_MAX;
	uint8_t x350 = UINT8_MAX;
	static int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = 77;

	t87 = (((x349^x350)|x351)^x352);

	if (t87 != 32512) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x354 = INT32_MIN;
	int64_t x355 = INT64_MAX;
	int64_t x356 = INT64_MAX;

	t88 = (((x353^x354)|x355)^x356);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	uint64_t x359 = 1LLU;
	uint64_t t89 = 516980561LLU;

	t89 = (((x357^x358)|x359)^x360);

	if (t89 != 22143LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	uint16_t x362 = UINT16_MAX;
	static int8_t x363 = -12;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t90 = 149462513143LLU;

	t90 = (((x361^x362)|x363)^x364);

	if (t90 != 11LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x366 = 1U;
	int32_t x367 = -2758;
	static uint8_t x368 = 0U;
	int32_t t91 = 12685;

	t91 = (((x365^x366)|x367)^x368);

	if (t91 != -69) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 0U;
	volatile int16_t x370 = INT16_MIN;
	static int16_t x371 = INT16_MIN;
	static int16_t x372 = INT16_MIN;
	int32_t t92 = 471650;

	t92 = (((x369^x370)|x371)^x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x373 = UINT16_MAX;
	uint32_t x374 = 345U;
	static int8_t x375 = INT8_MIN;
	volatile int8_t x376 = INT8_MIN;

	t93 = (((x373^x374)|x375)^x376);

	if (t93 != 38U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = -1;
	int16_t x378 = -5;
	static uint32_t x379 = 55799749U;
	int16_t x380 = INT16_MIN;
	static volatile uint32_t t94 = 8U;

	t94 = (((x377^x378)|x379)^x380);

	if (t94 != 4239192005U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x382 = 2U;
	int64_t x384 = INT64_MAX;

	t95 = (((x381^x382)|x383)^x384);

	if (t95 != -9223372036854775683LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	int16_t x386 = -1;
	uint32_t x387 = 10184419U;
	static uint16_t x388 = 12U;

	t96 = (((x385^x386)|x387)^x388);

	if (t96 != 4294967279U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = 1712048LL;
	int8_t x390 = INT8_MIN;
	uint8_t x392 = 0U;
	volatile int64_t t97 = 7LL;

	t97 = (((x389^x390)|x391)^x392);

	if (t97 != -1711492LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MAX;
	volatile uint64_t t98 = 452072800203832LLU;

	t98 = (((x393^x394)|x395)^x396);

	if (t98 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	uint8_t x399 = 3U;
	uint16_t x400 = UINT16_MAX;

	t99 = (((x397^x398)|x399)^x400);

	if (t99 != -33024) { NG(); } else { ; }
	
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

