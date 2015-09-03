#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = -1LL;
static uint64_t x21 = UINT64_MAX;
volatile int64_t x22 = 0LL;
uint8_t x23 = 127U;
static int32_t x24 = -367;
static int16_t x26 = -1;
int32_t t6 = -74;
int8_t x35 = 0;
static int16_t x36 = -1;
int16_t x40 = 9;
int32_t t8 = 407773;
int16_t x43 = -1;
static uint64_t t11 = 1988057LLU;
static int8_t x62 = INT8_MAX;
int8_t x73 = INT8_MIN;
int64_t t16 = INT64_MIN;
int8_t x83 = INT8_MIN;
volatile int8_t x86 = -1;
int64_t x87 = -116214811521LL;
int64_t x88 = INT64_MIN;
static int32_t x91 = INT32_MIN;
int16_t x93 = -347;
static int8_t x94 = 46;
uint8_t x96 = 26U;
int8_t x98 = -1;
uint32_t x103 = 21107U;
uint32_t x104 = 493U;
int16_t x108 = INT16_MIN;
volatile uint64_t t23 = 27LLU;
int16_t x109 = INT16_MIN;
uint32_t x114 = UINT32_MAX;
uint32_t t25 = 0U;
int8_t x122 = -1;
uint16_t x123 = 7U;
volatile uint64_t x130 = UINT64_MAX;
static uint16_t x133 = 9U;
int8_t x142 = -1;
uint32_t t30 = 1302951U;
volatile int64_t x147 = -105LL;
uint64_t x150 = 1048254495068636LLU;
static int8_t x151 = INT8_MAX;
static volatile uint16_t x161 = 184U;
volatile int64_t x168 = INT64_MIN;
volatile int64_t t35 = -848428441667LL;
uint16_t x176 = UINT16_MAX;
uint32_t t37 = 35655267U;
int64_t x190 = INT64_MIN;
uint16_t x191 = UINT16_MAX;
uint8_t x192 = UINT8_MAX;
static uint16_t x204 = 30167U;
int64_t x212 = INT64_MIN;
int8_t x213 = INT8_MIN;
int32_t x217 = INT32_MIN;
int8_t x219 = -1;
uint64_t t46 = 33318139LLU;
static volatile int8_t x234 = INT8_MIN;
uint64_t x236 = 21787LLU;
static volatile uint64_t t50 = 545014012933LLU;
uint32_t x242 = UINT32_MAX;
volatile int32_t t53 = -53918950;
uint32_t x258 = 221995449U;
static int64_t x260 = INT64_MIN;
int8_t x266 = INT8_MIN;
int64_t x269 = -3463538852176121LL;
int8_t x270 = INT8_MAX;
volatile uint64_t x290 = 133047LLU;
volatile uint16_t x293 = 998U;
volatile int64_t x297 = 1923797363LL;
int32_t x301 = INT32_MAX;
uint32_t x305 = 400U;
int64_t x308 = 93849307457LL;
volatile int8_t x317 = 6;
volatile int64_t x326 = -3022225LL;
int16_t x327 = INT16_MAX;
int64_t x330 = -1LL;
uint64_t x332 = 6163958134282322LLU;
uint32_t t70 = 15978282U;
uint16_t x346 = 7600U;
static volatile uint64_t t73 = 27179595LLU;
volatile int64_t x349 = -143743682007500LL;
static volatile uint8_t x350 = 0U;
static volatile int8_t x351 = -4;
static volatile int32_t x354 = INT32_MAX;
int32_t x357 = INT32_MIN;
int64_t x361 = INT64_MIN;
int16_t x376 = INT16_MIN;
int64_t x382 = -2928606879823LL;
uint8_t x392 = UINT8_MAX;
int8_t x395 = -15;
uint8_t x396 = 0U;
uint16_t x406 = 15420U;
int32_t x408 = 252491;
volatile uint64_t t86 = 1LLU;
uint8_t x417 = UINT8_MAX;
static uint16_t x418 = 23582U;
volatile int32_t t88 = 1;
int32_t x424 = 1327144;
int32_t x436 = -11;
int16_t x437 = INT16_MIN;
static int32_t x438 = -251955;
volatile int64_t t92 = 1072248279LL;
int16_t x441 = 6;
static volatile int16_t x443 = INT16_MIN;
static volatile int64_t t93 = -232787510621LL;
static int32_t x445 = INT32_MIN;
int16_t x448 = -1;
int64_t x464 = -1LL;
static int32_t x465 = INT32_MIN;
uint8_t x471 = UINT8_MAX;
int64_t t98 = 3375560148LL;


void f0(void) {
	static volatile uint16_t x5 = 20U;
	uint64_t x6 = 314074045LLU;
	uint16_t x7 = UINT16_MAX;
	uint64_t x8 = 282712885483397186LLU;
	static uint64_t t0 = 229LLU;

	t0 = (x5^(x6%(x7-x8)));

	if (t0 != 314074025LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x10 = -1;
	static int16_t x11 = INT16_MIN;
	volatile int8_t x12 = -1;
	volatile int64_t t1 = 3LL;

	t1 = (x9^(x10%(x11-x12)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	int32_t x14 = INT32_MIN;
	int16_t x15 = 11467;
	volatile int8_t x16 = 2;
	uint64_t t2 = 2LLU;

	t2 = (x13^(x14%(x15-x16)));

	if (t2 != 8892LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	int64_t x18 = -1LL;
	uint16_t x19 = 1U;
	int16_t x20 = INT16_MIN;
	volatile int64_t t3 = 0LL;

	t3 = (x17^(x18%(x19-x20)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x21^(x22%(x23-x24)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = -15589LL;
	int32_t x27 = 1;
	static uint16_t x28 = UINT16_MAX;
	volatile int64_t t5 = -9353LL;

	t5 = (x25^(x26%(x27-x28)));

	if (t5 != 15588LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MAX;
	static int16_t x30 = INT16_MIN;
	int16_t x31 = 4025;
	int8_t x32 = -1;

	t6 = (x29^(x30%(x31-x32)));

	if (t6 != -2147483089) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = 1;
	int16_t x34 = -232;
	int32_t t7 = -7942269;

	t7 = (x33^(x34%(x35-x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x37 = 1U;
	int32_t x38 = INT32_MIN;
	int32_t x39 = -840391192;

	t8 = (x37^(x38%(x39-x40)));

	if (t8 != -466701245) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 2U;
	int8_t x42 = -1;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t9 = -19127;

	t9 = (x41^(x42%(x43-x44)));

	if (t9 != -3) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = UINT32_MAX;
	int64_t x54 = -74674604LL;
	int64_t x55 = 29780537744787362LL;
	int16_t x56 = INT16_MAX;
	volatile int64_t t10 = -125071LL;

	t10 = (x53^(x54%(x55-x56)));

	if (t10 != -4220292693LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x57 = 0U;
	uint8_t x58 = 1U;
	static uint64_t x59 = 9135306279LLU;
	static uint32_t x60 = 38989U;

	t11 = (x57^(x58%(x59-x60)));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = UINT64_MAX;
	volatile int32_t x63 = -816;
	uint32_t x64 = UINT32_MAX;
	volatile uint64_t t12 = 140027765LLU;

	t12 = (x61^(x62%(x63-x64)));

	if (t12 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x65 = 212U;
	int16_t x66 = -8;
	static int8_t x67 = -1;
	volatile int8_t x68 = INT8_MIN;
	int32_t t13 = 0;

	t13 = (x65^(x66%(x67-x68)));

	if (t13 != -212) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x69 = 10;
	int64_t x70 = 1LL;
	static volatile int64_t x71 = -1LL;
	volatile uint16_t x72 = 7U;
	static volatile int64_t t14 = 1348LL;

	t14 = (x69^(x70%(x71-x72)));

	if (t14 != 11LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x74 = INT16_MIN;
	int8_t x75 = 2;
	int16_t x76 = INT16_MIN;
	int32_t t15 = -29931845;

	t15 = (x73^(x74%(x75-x76)));

	if (t15 != 32640) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	static uint8_t x78 = 0U;
	int8_t x79 = INT8_MIN;
	int32_t x80 = -1298710;

	t16 = (x77^(x78%(x79-x80)));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	uint8_t x82 = 0U;
	uint64_t x84 = 1222610336299LLU;
	volatile uint64_t t17 = 1270LLU;

	t17 = (x81^(x82%(x83-x84)));

	if (t17 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 4448U;
	volatile int64_t t18 = -66616986302360813LL;

	t18 = (x85^(x86%(x87-x88)));

	if (t18 != -4449LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x89 = 21816989727714LLU;
	static uint64_t x90 = 13LLU;
	static int8_t x92 = INT8_MIN;
	volatile uint64_t t19 = 16120013LLU;

	t19 = (x89^(x90%(x91-x92)));

	if (t19 != 21816989727727LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x95 = -848;
	static volatile int32_t t20 = -214;

	t20 = (x93^(x94%(x95-x96)));

	if (t20 != -373) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MAX;
	volatile uint8_t x99 = 1U;
	int64_t x100 = -1LL;
	volatile int64_t t21 = -402LL;

	t21 = (x97^(x98%(x99-x100)));

	if (t21 != -128LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -2;
	uint8_t x102 = 92U;
	uint32_t t22 = 983U;

	t22 = (x101^(x102%(x103-x104)));

	if (t22 != 4294967202U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x105 = 9615U;
	uint64_t x106 = UINT64_MAX;
	volatile int16_t x107 = 12143;

	t23 = (x105^(x106%(x107-x108)));

	if (t23 != 21673LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x110 = UINT16_MAX;
	uint8_t x111 = UINT8_MAX;
	volatile int32_t x112 = -1;
	volatile int32_t t24 = -398121016;

	t24 = (x109^(x110%(x111-x112)));

	if (t24 != -32513) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MAX;
	volatile uint16_t x115 = 2445U;
	int16_t x116 = 1;

	t25 = (x113^(x114%(x115-x116)));

	if (t25 != 2147482196U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = -626;
	static volatile uint16_t x124 = 5350U;
	volatile int32_t t26 = -45854;

	t26 = (x121^(x122%(x123-x124)));

	if (t26 != 625) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = INT8_MIN;
	static volatile int64_t x126 = -1LL;
	int16_t x127 = -1;
	volatile uint16_t x128 = 0U;
	static volatile int64_t t27 = -4105150335551475LL;

	t27 = (x125^(x126%(x127-x128)));

	if (t27 != -128LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x129 = UINT8_MAX;
	uint16_t x131 = UINT16_MAX;
	static volatile int16_t x132 = INT16_MIN;
	uint64_t t28 = 316239068LLU;

	t28 = (x129^(x130%(x131-x132)));

	if (t28 != 70154LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x134 = -1720587;
	static int32_t x135 = 243;
	int16_t x136 = 0;
	volatile int32_t t29 = -1;

	t29 = (x133^(x134%(x135-x136)));

	if (t29 != -156) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x141 = 1073198U;
	static uint32_t x143 = 62018244U;
	int16_t x144 = -15519;

	t30 = (x141^(x142%(x143-x144)));

	if (t30 != 13580926U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = -16492;
	static uint64_t x146 = 163704310856LLU;
	int32_t x148 = 26889;
	volatile uint64_t t31 = 129073283LLU;

	t31 = (x145^(x146%(x147-x148)));

	if (t31 != 18446743910005224412LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x149 = -327070LL;
	uint32_t x152 = 942U;
	volatile uint64_t t32 = 26690405011389LLU;

	t32 = (x149^(x150%(x151-x152)));

	if (t32 != 18446744070208372681LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = 0;
	int32_t x158 = -1;
	static int16_t x159 = INT16_MIN;
	int64_t x160 = -1LL;
	volatile int64_t t33 = 12091108899LL;

	t33 = (x157^(x158%(x159-x160)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x162 = -202;
	uint64_t x163 = 13249344878LLU;
	int64_t x164 = -1LL;
	volatile uint64_t t34 = 22238845LLU;

	t34 = (x161^(x162%(x163-x164)));

	if (t34 != 4414329984LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = INT32_MIN;
	int16_t x166 = 10565;
	int8_t x167 = INT8_MIN;

	t35 = (x165^(x166%(x167-x168)));

	if (t35 != -2147473083LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x169 = 0U;
	static int16_t x170 = -1;
	volatile int64_t x171 = -1LL;
	volatile uint32_t x172 = 1976391912U;
	volatile int64_t t36 = 671721078154900934LL;

	t36 = (x169^(x170%(x171-x172)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x173 = -1;
	volatile int32_t x174 = -1;
	uint32_t x175 = 133896U;

	t37 = (x173^(x174%(x175-x176)));

	if (t37 != 4294916547U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x181 = INT16_MIN;
	static uint64_t x182 = UINT64_MAX;
	volatile int32_t x183 = INT32_MIN;
	int16_t x184 = -32;
	volatile uint64_t t38 = 96309LLU;

	t38 = (x181^(x182%(x183-x184)));

	if (t38 != 18446744071562100703LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = -1;
	uint8_t x186 = 2U;
	volatile int16_t x187 = 12;
	int64_t x188 = 74LL;
	int64_t t39 = -452845219LL;

	t39 = (x185^(x186%(x187-x188)));

	if (t39 != -3LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x189 = 95LLU;
	uint64_t t40 = 1384786738797885338LLU;

	t40 = (x189^(x190%(x191-x192)));

	if (t40 != 18446744073709518943LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = INT64_MIN;
	int8_t x194 = 1;
	volatile int16_t x195 = 0;
	static int8_t x196 = -1;
	static volatile int64_t t41 = INT64_MIN;

	t41 = (x193^(x194%(x195-x196)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x201 = -1;
	int8_t x202 = INT8_MIN;
	int64_t x203 = -1LL;
	static volatile int64_t t42 = 2028600151640465LL;

	t42 = (x201^(x202%(x203-x204)));

	if (t42 != 127LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = INT32_MIN;
	static int8_t x206 = -1;
	static volatile int8_t x207 = INT8_MIN;
	int16_t x208 = 1;
	static volatile int32_t t43 = INT32_MAX;

	t43 = (x205^(x206%(x207-x208)));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = INT64_MAX;
	int32_t x210 = -1;
	int16_t x211 = INT16_MIN;
	int64_t t44 = INT64_MIN;

	t44 = (x209^(x210%(x211-x212)));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x214 = INT64_MAX;
	int64_t x215 = -113980217LL;
	int32_t x216 = -98823838;
	int64_t t45 = 24070LL;

	t45 = (x213^(x214%(x215-x216)));

	if (t45 != -12559325LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x218 = UINT64_MAX;
	uint16_t x220 = UINT16_MAX;

	t46 = (x217^(x218%(x219-x220)));

	if (t46 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x221 = UINT32_MAX;
	int64_t x222 = INT64_MIN;
	volatile int32_t x223 = INT32_MAX;
	static uint32_t x224 = 96U;
	int64_t t47 = -14654372LL;

	t47 = (x221^(x222%(x223-x224)));

	if (t47 != -4294948479LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = INT16_MIN;
	static int16_t x230 = INT16_MIN;
	uint64_t x231 = 18402489389LLU;
	int32_t x232 = INT32_MIN;
	uint64_t t48 = 3950025109010LLU;

	t48 = (x229^(x230%(x231-x232)));

	if (t48 != 18446744062933351719LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x233 = -1;
	volatile int32_t x235 = 5;
	static uint64_t t49 = 78288LLU;

	t49 = (x233^(x234%(x235-x236)));

	if (t49 != 18446744073709529961LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x237 = 482LLU;
	uint64_t x238 = 1LLU;
	static int64_t x239 = INT64_MAX;
	uint64_t x240 = 192290287323329LLU;

	t50 = (x237^(x238%(x239-x240)));

	if (t50 != 483LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = INT16_MIN;
	int16_t x243 = -2;
	uint32_t x244 = 2808681U;
	static volatile uint32_t t51 = 47755U;

	t51 = (x241^(x242%(x243-x244)));

	if (t51 != 4292172650U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x249 = UINT64_MAX;
	int32_t x250 = INT32_MIN;
	int64_t x251 = -1LL;
	int16_t x252 = 1802;
	uint64_t t52 = 4785257341236LLU;

	t52 = (x249^(x250%(x251-x252)));

	if (t52 != 664LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x253 = 1;
	static uint8_t x254 = UINT8_MAX;
	int8_t x255 = INT8_MIN;
	int8_t x256 = 1;

	t53 = (x253^(x254%(x255-x256)));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x257 = -1LL;
	int64_t x259 = -1LL;
	volatile int64_t t54 = 25222611617LL;

	t54 = (x257^(x258%(x259-x260)));

	if (t54 != -221995450LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x261 = INT64_MIN;
	volatile int8_t x262 = INT8_MIN;
	static int64_t x263 = -3213852611031249885LL;
	int64_t x264 = 216947777LL;
	volatile int64_t t55 = 2092577836LL;

	t55 = (x261^(x262%(x263-x264)));

	if (t55 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x265 = -1LL;
	int64_t x267 = -3236LL;
	uint8_t x268 = 5U;
	volatile int64_t t56 = -1947056812969155LL;

	t56 = (x265^(x266%(x267-x268)));

	if (t56 != 127LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x271 = -1;
	static int64_t x272 = INT64_MAX;
	volatile int64_t t57 = 682618LL;

	t57 = (x269^(x270%(x271-x272)));

	if (t57 != -3463538852176008LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x273 = INT8_MIN;
	uint32_t x274 = 21618U;
	int32_t x275 = INT32_MAX;
	int32_t x276 = 16361074;
	volatile uint32_t t58 = 1U;

	t58 = (x273^(x274%(x275-x276)));

	if (t58 != 4294945778U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x277 = -1;
	int16_t x278 = 0;
	int64_t x279 = INT64_MAX;
	int16_t x280 = INT16_MAX;
	static int64_t t59 = -3263LL;

	t59 = (x277^(x278%(x279-x280)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x281 = -1;
	volatile uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MAX;
	int8_t x284 = 1;
	static volatile int64_t t60 = 1037113287LL;

	t60 = (x281^(x282%(x283-x284)));

	if (t60 != -4294967296LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x285 = INT32_MIN;
	uint32_t x286 = 93U;
	static int8_t x287 = INT8_MAX;
	volatile uint16_t x288 = 202U;
	volatile uint32_t t61 = 29098035U;

	t61 = (x285^(x286%(x287-x288)));

	if (t61 != 2147483741U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = INT64_MAX;
	static int8_t x291 = INT8_MAX;
	int16_t x292 = INT16_MIN;
	volatile uint64_t t62 = 7133LLU;

	t62 = (x289^(x290%(x291-x292)));

	if (t62 != 9223372036854774340LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x294 = UINT64_MAX;
	int16_t x295 = 1;
	int32_t x296 = 255306127;
	uint64_t t63 = 2LLU;

	t63 = (x293^(x294%(x295-x296)));

	if (t63 != 255306347LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x298 = INT32_MIN;
	int16_t x299 = INT16_MIN;
	int16_t x300 = -1;
	static volatile int64_t t64 = 387857356893178LL;

	t64 = (x297^(x298%(x299-x300)));

	if (t64 != -1923797363LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x302 = 2;
	int8_t x303 = 0;
	int16_t x304 = INT16_MIN;
	volatile int32_t t65 = 0;

	t65 = (x301^(x302%(x303-x304)));

	if (t65 != 2147483645) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x306 = UINT8_MAX;
	int8_t x307 = -1;
	int64_t t66 = -1034891LL;

	t66 = (x305^(x306%(x307-x308)));

	if (t66 != 367LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x318 = -1209;
	uint32_t x319 = 1272353536U;
	int64_t x320 = INT64_MAX;
	static volatile int64_t t67 = 635450573050250LL;

	t67 = (x317^(x318%(x319-x320)));

	if (t67 != -1215LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x325 = 48U;
	static volatile uint8_t x328 = UINT8_MAX;
	static volatile int64_t t68 = 93297990LL;

	t68 = (x325^(x326%(x327-x328)));

	if (t68 != -31137LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x329 = INT64_MIN;
	volatile uint64_t x331 = UINT64_MAX;
	uint64_t t69 = 107003958107935LLU;

	t69 = (x329^(x330%(x331-x332)));

	if (t69 != 9229535994989058130LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x333 = 105323U;
	int8_t x334 = INT8_MIN;
	volatile int32_t x335 = -1;
	uint32_t x336 = 2997480U;

	t70 = (x333^(x334%(x335-x336)));

	if (t70 != 2893570U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x337 = 13LLU;
	int32_t x338 = -1;
	int32_t x339 = 469;
	int32_t x340 = INT32_MAX;
	uint64_t t71 = 83859LLU;

	t71 = (x337^(x338%(x339-x340)));

	if (t71 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x341 = INT64_MIN;
	static volatile int8_t x342 = INT8_MAX;
	int32_t x343 = -4;
	static int16_t x344 = -24;
	int64_t t72 = -14793843LL;

	t72 = (x341^(x342%(x343-x344)));

	if (t72 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = -1;
	uint64_t x347 = 17437086862714LLU;
	volatile int64_t x348 = 0LL;

	t73 = (x345^(x346%(x347-x348)));

	if (t73 != 18446744073709544015LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x352 = -29;
	static volatile int64_t t74 = -54170901398256LL;

	t74 = (x349^(x350%(x351-x352)));

	if (t74 != -143743682007500LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = INT32_MAX;
	volatile uint16_t x355 = UINT16_MAX;
	int16_t x356 = INT16_MIN;
	volatile int32_t t75 = -13;

	t75 = (x353^(x354%(x355-x356)));

	if (t75 != 2147429035) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x358 = INT16_MIN;
	int8_t x359 = -1;
	int32_t x360 = -13;
	static int32_t t76 = -981;

	t76 = (x357^(x358%(x359-x360)));

	if (t76 != 2147483640) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x362 = -6;
	int8_t x363 = -1;
	int16_t x364 = INT16_MAX;
	int64_t t77 = -5LL;

	t77 = (x361^(x362%(x363-x364)));

	if (t77 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x373 = 32LLU;
	int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MAX;
	volatile uint64_t t78 = 16316655LLU;

	t78 = (x373^(x374%(x375-x376)));

	if (t78 != 18446744073709529590LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x381 = UINT8_MAX;
	uint32_t x383 = 62108U;
	int32_t x384 = INT32_MIN;
	int64_t t79 = 46269232449LL;

	t79 = (x381^(x382%(x383-x384)));

	if (t79 != -1502014278LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x385 = UINT16_MAX;
	int64_t x386 = INT64_MAX;
	int8_t x387 = -1;
	uint8_t x388 = UINT8_MAX;
	static volatile int64_t t80 = -31LL;

	t80 = (x385^(x386%(x387-x388)));

	if (t80 != 65280LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x389 = INT8_MAX;
	static volatile uint16_t x390 = 750U;
	int16_t x391 = INT16_MIN;
	int32_t t81 = 149692;

	t81 = (x389^(x390%(x391-x392)));

	if (t81 != 657) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x393 = INT32_MAX;
	uint8_t x394 = 56U;
	volatile int32_t t82 = -131559020;

	t82 = (x393^(x394%(x395-x396)));

	if (t82 != 2147483636) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x397 = INT8_MIN;
	int8_t x398 = INT8_MAX;
	uint32_t x399 = 62011U;
	int16_t x400 = INT16_MIN;
	uint32_t t83 = UINT32_MAX;

	t83 = (x397^(x398%(x399-x400)));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x401 = UINT16_MAX;
	uint16_t x402 = 2287U;
	int32_t x403 = INT32_MIN;
	static int8_t x404 = INT8_MIN;
	volatile int32_t t84 = -30;

	t84 = (x401^(x402%(x403-x404)));

	if (t84 != 63248) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x405 = -1;
	uint8_t x407 = 2U;
	static volatile int32_t t85 = -824316132;

	t85 = (x405^(x406%(x407-x408)));

	if (t85 != -15421) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x409 = 10;
	static uint64_t x410 = 1384074011920590929LLU;
	int32_t x411 = INT32_MIN;
	volatile uint32_t x412 = 756602U;

	t86 = (x409^(x410%(x411-x412)));

	if (t86 != 2086743341LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x413 = INT64_MIN;
	static int32_t x414 = -1;
	uint8_t x415 = 86U;
	uint16_t x416 = 266U;
	int64_t t87 = INT64_MAX;

	t87 = (x413^(x414%(x415-x416)));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x419 = -2;
	static int16_t x420 = 5;

	t88 = (x417^(x418%(x419-x420)));

	if (t88 != 249) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x421 = 0U;
	uint64_t x422 = 268543690210304117LLU;
	volatile int64_t x423 = 25865554LL;
	uint64_t t89 = 2836150LLU;

	t89 = (x421^(x422%(x423-x424)));

	if (t89 != 19959587LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x425 = UINT64_MAX;
	uint64_t x426 = UINT64_MAX;
	int64_t x427 = -505LL;
	int64_t x428 = 0LL;
	volatile uint64_t t90 = 723608374989LLU;

	t90 = (x425^(x426%(x427-x428)));

	if (t90 != 18446744073709551111LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x433 = 80U;
	uint64_t x434 = 431356414521904LLU;
	volatile int64_t x435 = INT64_MIN;
	volatile uint64_t t91 = 388040LLU;

	t91 = (x433^(x434%(x435-x436)));

	if (t91 != 431356414521952LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x439 = INT32_MAX;
	int64_t x440 = -4144918146123073LL;

	t92 = (x437^(x438%(x439-x440)));

	if (t92 != 239565LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x442 = INT64_MIN;
	int16_t x444 = 1;

	t93 = (x441^(x442%(x443-x444)));

	if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x446 = INT8_MIN;
	static int8_t x447 = 24;
	volatile int32_t t94 = 12;

	t94 = (x445^(x446%(x447-x448)));

	if (t94 != 2147483645) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x453 = 8750796390506LLU;
	uint16_t x454 = UINT16_MAX;
	int64_t x455 = INT64_MIN;
	volatile int32_t x456 = INT32_MIN;
	static uint64_t t95 = 9443447095518LLU;

	t95 = (x453^(x454%(x455-x456)));

	if (t95 != 8750796423061LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x461 = INT8_MIN;
	static int16_t x462 = INT16_MAX;
	static uint16_t x463 = 3426U;
	int64_t t96 = -1LL;

	t96 = (x461^(x462%(x463-x464)));

	if (t96 != -2044LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x466 = INT8_MAX;
	uint8_t x467 = 1U;
	uint32_t x468 = UINT32_MAX;
	volatile uint32_t t97 = 3772394U;

	t97 = (x465^(x466%(x467-x468)));

	if (t97 != 2147483649U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x469 = INT16_MIN;
	static volatile int64_t x470 = INT64_MAX;
	uint16_t x472 = 13147U;

	t98 = (x469^(x470%(x471-x472)));

	if (t98 != -30517LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x477 = 412LL;
	int32_t x478 = INT32_MAX;
	static uint32_t x479 = 896123U;
	int8_t x480 = 1;
	volatile int64_t t99 = -1155137085083344LL;

	t99 = (x477^(x478%(x479-x480)));

	if (t99 != 375739LL) { NG(); } else { ; }
	
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

