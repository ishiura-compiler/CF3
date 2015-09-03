#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = -1LL;
uint8_t x3 = 11U;
int32_t x4 = -147;
uint32_t x6 = 2773U;
int16_t x7 = -1;
static int32_t x9 = INT32_MIN;
static int64_t x12 = INT64_MIN;
int32_t x15 = -1;
static uint8_t x16 = 17U;
int16_t x17 = INT16_MIN;
uint64_t x26 = 260484856875984LLU;
static uint64_t x35 = UINT64_MAX;
static uint64_t t6 = 3779320LLU;
int16_t x41 = INT16_MIN;
static uint16_t x47 = 21U;
static volatile uint32_t t9 = 6361626U;
volatile int8_t x57 = 14;
static int16_t x68 = 654;
int64_t x69 = -1LL;
static int64_t t15 = 7091781463532396LL;
int16_t x77 = INT16_MAX;
int8_t x79 = 10;
int8_t x92 = INT8_MIN;
static volatile int32_t t18 = 1465988;
volatile int32_t x95 = -1998;
int16_t x106 = -3;
uint8_t x108 = 55U;
uint8_t x114 = 3U;
int8_t x116 = INT8_MIN;
uint16_t x117 = 17U;
static volatile uint8_t x123 = 21U;
uint16_t x129 = 414U;
volatile int32_t x134 = INT32_MAX;
static volatile int64_t x141 = 2099006277816410665LL;
static int8_t x142 = -1;
uint64_t x143 = 3404630515195367438LLU;
int8_t x145 = -5;
static uint16_t x146 = UINT16_MAX;
uint32_t x150 = 302976U;
int32_t x161 = -1;
int16_t x168 = INT16_MIN;
volatile int32_t x174 = -406;
int64_t x175 = -124219367731188596LL;
static int64_t t35 = 748918778946003183LL;
int32_t x177 = INT32_MAX;
uint64_t t37 = 2445121704028032LLU;
int8_t x187 = INT8_MIN;
static int16_t x188 = 3;
int32_t x192 = INT32_MIN;
int8_t x193 = -1;
int8_t x195 = INT8_MIN;
volatile int64_t x197 = -1LL;
static int64_t x198 = -1LL;
uint8_t x199 = 3U;
int64_t x205 = -7826464043LL;
int8_t x211 = 8;
int8_t x217 = INT8_MIN;
volatile uint64_t t46 = 20LLU;
int8_t x232 = INT8_MAX;
volatile int32_t t48 = 123257881;
int64_t x239 = INT64_MIN;
volatile int16_t x241 = INT16_MAX;
volatile uint16_t x252 = 6U;
static int8_t x253 = -1;
uint64_t t56 = 205040297568489484LLU;
int64_t x270 = INT64_MAX;
static int16_t x272 = INT16_MIN;
volatile int64_t t57 = 761127135LL;
static uint16_t x284 = 21280U;
int32_t t59 = -3576;
int16_t x286 = -1;
volatile uint64_t t60 = 73803492924249862LLU;
uint32_t x296 = 60083029U;
static volatile int64_t t61 = 9095175741636733LL;
int64_t x300 = -36838635997LL;
static int8_t x303 = 0;
volatile int16_t x304 = 8;
int16_t x310 = 2328;
uint64_t x311 = 855253100926LLU;
volatile uint64_t t65 = 141393LLU;
volatile uint64_t t66 = 1165666LLU;
int8_t x322 = -1;
int32_t x323 = 22113;
int32_t t67 = 610290496;
int32_t x332 = INT32_MIN;
static uint32_t t71 = 7265726U;
static int16_t x347 = -1;
uint8_t x349 = UINT8_MAX;
int64_t x352 = 1308592726416LL;
volatile int8_t x358 = INT8_MIN;
uint32_t t75 = 3194U;
volatile uint16_t x361 = 23926U;
int8_t x365 = INT8_MIN;
static uint64_t x372 = 49242LLU;
volatile int32_t x374 = -1;
uint16_t x375 = 7U;
int64_t x393 = 1847378370LL;
uint8_t x394 = 0U;
volatile int16_t x395 = -624;
uint16_t x396 = 4U;
int16_t x397 = 3;
int64_t x400 = -646LL;
volatile uint64_t t84 = 3321LLU;
int8_t x415 = -1;
int8_t x430 = -15;
int8_t x432 = INT8_MIN;
volatile int32_t t90 = -7;
uint16_t x447 = UINT16_MAX;
volatile uint64_t t93 = 305764953781LLU;
uint64_t x453 = 3391796031782501LLU;
static uint8_t x457 = UINT8_MAX;
volatile int8_t x458 = -1;
volatile uint8_t x460 = 0U;
int64_t t95 = -7398760064949045LL;
static uint8_t x465 = 6U;
uint16_t x468 = 3U;
int32_t t97 = 10;
volatile int64_t t98 = 15554LL;


void f0(void) {
	int64_t x2 = -1LL;
	static volatile int64_t t0 = 400469849LL;

	t0 = (x1^(x2%(x3+x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int16_t x8 = -1;
	uint32_t t1 = 6U;

	t1 = (x5^(x6%(x7+x8)));

	if (t1 != 4294964565U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MIN;
	static uint16_t x11 = 2628U;
	int64_t t2 = 632088807123LL;

	t2 = (x9^(x10%(x11+x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 71282LL;
	uint8_t x14 = 2U;
	static volatile int64_t t3 = 48LL;

	t3 = (x13^(x14%(x15+x16)));

	if (t3 != 71280LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	int32_t x19 = -1;
	int8_t x20 = -1;
	int32_t t4 = -2084885;

	t4 = (x17^(x18%(x19+x20)));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	int16_t x27 = -1;
	static uint64_t x28 = 17645289716803353LLU;
	static uint64_t t5 = 1325022529377075814LLU;

	t5 = (x25^(x26%(x27+x28)));

	if (t5 != 18446483588852675631LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x33 = UINT64_MAX;
	static int8_t x34 = -1;
	int16_t x36 = INT16_MAX;

	t6 = (x33^(x34%(x35+x36)));

	if (t6 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MIN;
	uint16_t x38 = UINT16_MAX;
	int32_t x39 = INT32_MAX;
	static int64_t x40 = -1LL;
	int64_t t7 = 2832873817678LL;

	t7 = (x37^(x38%(x39+x40)));

	if (t7 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x42 = 1877LLU;
	int16_t x43 = 29;
	uint32_t x44 = UINT32_MAX;
	volatile uint64_t t8 = 21551LLU;

	t8 = (x41^(x42%(x43+x44)));

	if (t8 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x45 = UINT16_MAX;
	int32_t x46 = INT32_MIN;
	static uint32_t x48 = UINT32_MAX;

	t9 = (x45^(x46%(x47+x48)));

	if (t9 != 65527U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = 77272593LLU;
	uint64_t x54 = UINT64_MAX;
	int64_t x55 = INT64_MIN;
	int64_t x56 = INT64_MAX;
	uint64_t t10 = 12756LLU;

	t10 = (x53^(x54%(x55+x56)));

	if (t10 != 77272593LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x58 = INT32_MIN;
	uint32_t x59 = 6U;
	volatile int64_t x60 = -1072528182961LL;
	volatile int64_t t11 = -1487209094939LL;

	t11 = (x57^(x58%(x59+x60)));

	if (t11 != -2147483634LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x61 = INT64_MIN;
	uint32_t x62 = UINT32_MAX;
	uint16_t x63 = 15U;
	uint16_t x64 = UINT16_MAX;
	static int64_t t12 = -1444LL;

	t12 = (x61^(x62%(x63+x64)));

	if (t12 != -9223372036854775613LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = UINT64_MAX;
	uint32_t x66 = 457U;
	static int16_t x67 = 0;
	volatile uint64_t t13 = 26156150026324610LLU;

	t13 = (x65^(x66%(x67+x68)));

	if (t13 != 18446744073709551158LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x70 = -1;
	uint64_t x71 = 1101486823720879LLU;
	int32_t x72 = INT32_MIN;
	volatile uint64_t t14 = 4561414302380774LLU;

	t14 = (x69^(x70%(x71+x72)));

	if (t14 != 18446563872944907557LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = -61026;
	int16_t x74 = INT16_MIN;
	uint32_t x75 = UINT32_MAX;
	static int64_t x76 = INT64_MIN;

	t15 = (x73^(x74%(x75+x76)));

	if (t15 != 37278LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x78 = INT64_MIN;
	int8_t x80 = INT8_MIN;
	static int64_t t16 = -12672389LL;

	t16 = (x77^(x78%(x79+x80)));

	if (t16 != -32737LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x85 = INT32_MAX;
	int8_t x86 = INT8_MAX;
	static int16_t x87 = -1;
	int32_t x88 = -1;
	int32_t t17 = 9745;

	t17 = (x85^(x86%(x87+x88)));

	if (t17 != 2147483646) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = INT32_MAX;
	int8_t x90 = INT8_MAX;
	volatile int8_t x91 = INT8_MIN;

	t18 = (x89^(x90%(x91+x92)));

	if (t18 != 2147483520) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x93 = INT16_MIN;
	int16_t x94 = -220;
	uint32_t x96 = UINT32_MAX;
	static volatile uint32_t t19 = 2U;

	t19 = (x93^(x94%(x95+x96)));

	if (t19 != 4294936307U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x101 = 9U;
	int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MIN;
	static uint16_t x104 = 27139U;
	volatile int32_t t20 = -14739;

	t20 = (x101^(x102%(x103+x104)));

	if (t20 != -27148) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = INT16_MAX;
	volatile uint8_t x107 = UINT8_MAX;
	volatile int32_t t21 = 3381997;

	t21 = (x105^(x106%(x107+x108)));

	if (t21 != -32766) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = 64406175;
	static volatile int8_t x115 = INT8_MAX;
	static int32_t t22 = 54359;

	t22 = (x113^(x114%(x115+x116)));

	if (t22 != 64406175) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x118 = INT16_MIN;
	int16_t x119 = 1236;
	int8_t x120 = INT8_MIN;
	volatile int32_t t23 = 16864157;

	t23 = (x117^(x118%(x119+x120)));

	if (t23 != -619) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x121 = UINT8_MAX;
	volatile uint8_t x122 = 28U;
	uint16_t x124 = 4U;
	volatile int32_t t24 = 345;

	t24 = (x121^(x122%(x123+x124)));

	if (t24 != 252) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x125 = 234533992033116LLU;
	int32_t x126 = -1;
	int8_t x127 = INT8_MIN;
	int16_t x128 = -1;
	volatile uint64_t t25 = 53LLU;

	t25 = (x125^(x126%(x127+x128)));

	if (t25 != 18446509539717518499LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x130 = UINT8_MAX;
	int16_t x131 = INT16_MAX;
	int32_t x132 = INT32_MIN;
	int32_t t26 = -3;

	t26 = (x129^(x130%(x131+x132)));

	if (t26 != 353) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = INT8_MAX;
	int8_t x135 = 57;
	static int64_t x136 = 7LL;
	volatile int64_t t27 = 174848113479472309LL;

	t27 = (x133^(x134%(x135+x136)));

	if (t27 != 64LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = INT64_MIN;
	uint8_t x138 = UINT8_MAX;
	int64_t x139 = -4556443924959780LL;
	static volatile int16_t x140 = INT16_MIN;
	volatile int64_t t28 = -7136052917856424LL;

	t28 = (x137^(x138%(x139+x140)));

	if (t28 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x144 = 7314662366534052LLU;
	volatile uint64_t t29 = 2161198177264105LLU;

	t29 = (x141^(x142%(x143+x144)));

	if (t29 != 1017398614581562796LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x147 = 0;
	static volatile int8_t x148 = -1;
	int32_t t30 = 29265450;

	t30 = (x145^(x146%(x147+x148)));

	if (t30 != -5) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x149 = UINT8_MAX;
	static int8_t x151 = -1;
	static int32_t x152 = 27667;
	static uint32_t t31 = 612U;

	t31 = (x149^(x150%(x151+x152)));

	if (t31 != 26163U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x157 = UINT8_MAX;
	int64_t x158 = INT64_MIN;
	volatile int16_t x159 = -1;
	static int32_t x160 = 25752333;
	volatile int64_t t32 = 52084877045240277LL;

	t32 = (x157^(x158%(x159+x160)));

	if (t32 != -25245809LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x162 = -1LL;
	volatile uint32_t x163 = 108U;
	static volatile int32_t x164 = INT32_MAX;
	volatile int64_t t33 = -7019902LL;

	t33 = (x161^(x162%(x163+x164)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x165 = INT16_MIN;
	static volatile uint8_t x166 = UINT8_MAX;
	static uint32_t x167 = 743519616U;
	static volatile uint32_t t34 = 76U;

	t34 = (x165^(x166%(x167+x168)));

	if (t34 != 4294934783U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x173 = INT16_MIN;
	static int32_t x176 = -1;

	t35 = (x173^(x174%(x175+x176)));

	if (t35 != 32362LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x178 = INT32_MAX;
	static int16_t x179 = -9;
	static int32_t x180 = INT32_MAX;
	int32_t t36 = 370;

	t36 = (x177^(x178%(x179+x180)));

	if (t36 != 2147483638) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x181 = 191260920LLU;
	static int8_t x182 = -9;
	uint16_t x183 = UINT16_MAX;
	uint64_t x184 = 431981320997LLU;

	t37 = (x181^(x182%(x183+x184)));

	if (t37 != 165734412607LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = -1LL;
	uint16_t x186 = 10U;
	volatile int64_t t38 = 204718385952769978LL;

	t38 = (x185^(x186%(x187+x188)));

	if (t38 != -11LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = -6LL;
	int16_t x190 = -28;
	uint64_t x191 = 69144014623373LLU;
	uint64_t t39 = 1864508676814163LLU;

	t39 = (x189^(x190%(x191+x192)));

	if (t39 != 18446704443542931407LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x194 = INT8_MIN;
	volatile uint32_t x196 = 33812609U;
	volatile uint32_t t40 = 3U;

	t40 = (x193^(x194%(x195+x196)));

	if (t40 != 4294185214U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x200 = -11073951956271324LL;
	volatile int64_t t41 = -3764460702718LL;

	t41 = (x197^(x198%(x199+x200)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x201 = -1;
	volatile uint16_t x202 = 35U;
	uint64_t x203 = 535900LLU;
	int32_t x204 = 256010111;
	volatile uint64_t t42 = 382576687LLU;

	t42 = (x201^(x202%(x203+x204)));

	if (t42 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x206 = UINT64_MAX;
	int16_t x207 = INT16_MIN;
	int8_t x208 = -9;
	uint64_t t43 = 87LLU;

	t43 = (x205^(x206%(x207+x208)));

	if (t43 != 18446744065883054813LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x209 = INT64_MAX;
	static int32_t x210 = -1;
	int8_t x212 = INT8_MIN;
	volatile int64_t t44 = INT64_MIN;

	t44 = (x209^(x210%(x211+x212)));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x213 = 27500U;
	static uint16_t x214 = UINT16_MAX;
	int32_t x215 = 32417906;
	uint16_t x216 = UINT16_MAX;
	static int32_t t45 = 448;

	t45 = (x213^(x214%(x215+x216)));

	if (t45 != 38035) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x218 = -1LL;
	static uint64_t x219 = 187015764102265505LLU;
	int8_t x220 = 0;

	t46 = (x217^(x218%(x219+x220)));

	if (t46 != 18327544882022019549LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x225 = 2;
	static int64_t x226 = -435514677295211LL;
	int64_t x227 = -1LL;
	volatile uint32_t x228 = UINT32_MAX;
	volatile int64_t t47 = -126545829485513LL;

	t47 = (x225^(x226%(x227+x228)));

	if (t47 != -698716319LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = INT16_MIN;
	int8_t x230 = 9;
	static int8_t x231 = INT8_MIN;

	t48 = (x229^(x230%(x231+x232)));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x233 = 3034U;
	uint16_t x234 = 467U;
	int32_t x235 = 672707333;
	static uint32_t x236 = UINT32_MAX;
	uint32_t t49 = 55627U;

	t49 = (x233^(x234%(x235+x236)));

	if (t49 != 2569U) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x237 = -1;
	volatile int64_t x238 = -14LL;
	uint64_t x240 = 10878492193LLU;
	static volatile uint64_t t50 = 719465121434015714LLU;

	t50 = (x237^(x238%(x239+x240)));

	if (t50 != 9223372047733268014LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x242 = 7;
	static int8_t x243 = -1;
	int16_t x244 = INT16_MIN;
	volatile int32_t t51 = -119015290;

	t51 = (x241^(x242%(x243+x244)));

	if (t51 != 32760) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x245 = -4;
	static volatile int64_t x246 = -1555158343397LL;
	uint32_t x247 = UINT32_MAX;
	int16_t x248 = -1;
	volatile int64_t t52 = 26LL;

	t52 = (x245^(x246%(x247+x248)));

	if (t52 != 380182971LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x249 = INT8_MAX;
	int8_t x250 = INT8_MIN;
	uint64_t x251 = 5713114325126898203LLU;
	volatile uint64_t t53 = 107844LLU;

	t53 = (x249^(x250%(x251+x252)));

	if (t53 != 1307401098328856930LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x254 = INT32_MIN;
	int32_t x255 = INT32_MIN;
	static uint64_t x256 = 128664409568159849LLU;
	uint64_t t54 = 29027949489LLU;

	t54 = (x253^(x254%(x255+x256)));

	if (t54 != 18399010263304180390LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = INT16_MAX;
	uint16_t x258 = 1U;
	int32_t x259 = -19317280;
	int8_t x260 = INT8_MIN;
	volatile int32_t t55 = -1302141;

	t55 = (x257^(x258%(x259+x260)));

	if (t55 != 32766) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x265 = 2;
	int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MAX;
	uint64_t x268 = UINT64_MAX;

	t56 = (x265^(x266%(x267+x268)));

	if (t56 != 12LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x269 = 239U;
	uint8_t x271 = 96U;

	t57 = (x269^(x270%(x271+x272)));

	if (t57 != 30352LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x277 = 28U;
	uint8_t x278 = 17U;
	static uint64_t x279 = 3046655687512LLU;
	uint32_t x280 = 82783222U;
	static volatile uint64_t t58 = 299146456844889LLU;

	t58 = (x277^(x278%(x279+x280)));

	if (t58 != 13LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = INT8_MIN;
	int8_t x282 = INT8_MIN;
	volatile uint8_t x283 = UINT8_MAX;

	t59 = (x281^(x282%(x283+x284)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x285 = -1LL;
	volatile int64_t x287 = 3611105791LL;
	static volatile uint64_t x288 = 909134376810LLU;

	t60 = (x285^(x286%(x287+x288)));

	if (t60 != 18446743195589217372LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x293 = INT32_MAX;
	uint8_t x294 = 25U;
	volatile int64_t x295 = INT64_MIN;

	t61 = (x293^(x294%(x295+x296)));

	if (t61 != 2147483622LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x297 = 14939199U;
	uint8_t x298 = 2U;
	uint16_t x299 = UINT16_MAX;
	int64_t t62 = 25257707635998070LL;

	t62 = (x297^(x298%(x299+x300)));

	if (t62 != 14939197LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x301 = INT8_MAX;
	uint16_t x302 = 0U;
	volatile int32_t t63 = 1;

	t63 = (x301^(x302%(x303+x304)));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x309 = 2640U;
	uint8_t x312 = 2U;
	uint64_t t64 = 333394616LLU;

	t64 = (x309^(x310%(x311+x312)));

	if (t64 != 840LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = INT8_MAX;
	static int32_t x314 = -1;
	volatile int16_t x315 = INT16_MIN;
	static uint64_t x316 = 11LLU;

	t65 = (x313^(x314%(x315+x316)));

	if (t65 != 32651LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x317 = INT8_MIN;
	int32_t x318 = 5;
	int64_t x319 = 10LL;
	static volatile uint64_t x320 = 464311549614885400LLU;

	t66 = (x317^(x318%(x319+x320)));

	if (t66 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x321 = INT16_MIN;
	int8_t x324 = INT8_MIN;

	t67 = (x321^(x322%(x323+x324)));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x329 = INT8_MIN;
	static int8_t x330 = INT8_MAX;
	volatile uint8_t x331 = UINT8_MAX;
	volatile int32_t t68 = 3;

	t68 = (x329^(x330%(x331+x332)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = INT16_MIN;
	int16_t x334 = -1;
	volatile uint16_t x335 = UINT16_MAX;
	static volatile int32_t x336 = INT32_MIN;
	int32_t t69 = 1;

	t69 = (x333^(x334%(x335+x336)));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x337 = INT16_MIN;
	volatile int32_t x338 = 90;
	uint32_t x339 = 13932237U;
	int32_t x340 = -1;
	volatile uint32_t t70 = 241319809U;

	t70 = (x337^(x338%(x339+x340)));

	if (t70 != 4294934618U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x341 = INT16_MIN;
	uint8_t x342 = UINT8_MAX;
	uint32_t x343 = UINT32_MAX;
	int32_t x344 = INT32_MIN;

	t71 = (x341^(x342%(x343+x344)));

	if (t71 != 4294934783U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = 1;
	static volatile int32_t x346 = 392;
	static int16_t x348 = -1;
	volatile int32_t t72 = -119442;

	t72 = (x345^(x346%(x347+x348)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x350 = -39;
	volatile int16_t x351 = -25;
	static volatile int64_t t73 = -187771LL;

	t73 = (x349^(x350%(x351+x352)));

	if (t73 != -218LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x353 = 1774616875780853910LL;
	int64_t x354 = INT64_MAX;
	volatile int64_t x355 = -1LL;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t74 = 1394462760LLU;

	t74 = (x353^(x354%(x355+x356)));

	if (t74 != 7448755161073921897LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x357 = 403244U;
	static volatile uint8_t x359 = 24U;
	int8_t x360 = -1;

	t75 = (x357^(x358%(x359+x360)));

	if (t75 != 4294564063U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x362 = 577U;
	uint16_t x363 = 1973U;
	int64_t x364 = -1LL;
	int64_t t76 = 115LL;

	t76 = (x361^(x362%(x363+x364)));

	if (t76 != 24375LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x366 = INT8_MIN;
	int16_t x367 = INT16_MAX;
	uint16_t x368 = UINT16_MAX;
	static volatile int32_t t77 = 41775259;

	t77 = (x365^(x366%(x367+x368)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x369 = UINT16_MAX;
	int32_t x370 = INT32_MIN;
	int64_t x371 = -1LL;
	volatile uint64_t t78 = 247831LLU;

	t78 = (x369^(x370%(x371+x372)));

	if (t78 != 38006LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x373 = INT32_MIN;
	static int64_t x376 = -1LL;
	volatile int64_t t79 = -94891704206012300LL;

	t79 = (x373^(x374%(x375+x376)));

	if (t79 != 2147483647LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x381 = -3169915;
	static uint32_t x382 = UINT32_MAX;
	static int8_t x383 = INT8_MAX;
	int16_t x384 = -1;
	static uint32_t t80 = 15832921U;

	t80 = (x381^(x382%(x383+x384)));

	if (t80 != 4291797382U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x385 = INT32_MIN;
	uint8_t x386 = UINT8_MAX;
	uint16_t x387 = 6U;
	volatile int64_t x388 = 36124379LL;
	static volatile int64_t t81 = -23LL;

	t81 = (x385^(x386%(x387+x388)));

	if (t81 != -2147483393LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x389 = INT64_MIN;
	int8_t x390 = -3;
	int32_t x391 = 4;
	int8_t x392 = 3;
	volatile int64_t t82 = -5520491008099LL;

	t82 = (x389^(x390%(x391+x392)));

	if (t82 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t t83 = -4249601216LL;

	t83 = (x393^(x394%(x395+x396)));

	if (t83 != 1847378370LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x398 = UINT64_MAX;
	static uint32_t x399 = 654008868U;

	t84 = (x397^(x398%(x399+x400)));

	if (t84 != 510698526LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x409 = INT16_MAX;
	int16_t x410 = -294;
	volatile int16_t x411 = -1;
	volatile uint32_t x412 = 857565666U;
	volatile uint32_t t85 = 3348U;

	t85 = (x409^(x410%(x411+x412)));

	if (t85 != 7115402U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x413 = -1;
	uint8_t x414 = 1U;
	int16_t x416 = INT16_MIN;
	int32_t t86 = -1;

	t86 = (x413^(x414%(x415+x416)));

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x417 = INT32_MIN;
	static int64_t x418 = 1004590589LL;
	volatile int64_t x419 = -1LL;
	static int16_t x420 = INT16_MIN;
	static int64_t t87 = 567313161752888913LL;

	t87 = (x417^(x418%(x419+x420)));

	if (t87 != -2147459523LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x421 = -1;
	int32_t x422 = INT32_MIN;
	volatile int64_t x423 = INT64_MAX;
	static int8_t x424 = INT8_MIN;
	volatile int64_t t88 = 1652830702LL;

	t88 = (x421^(x422%(x423+x424)));

	if (t88 != 2147483647LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x425 = INT16_MAX;
	int64_t x426 = -11934LL;
	int32_t x427 = -1;
	int32_t x428 = 87;
	int64_t t89 = -99892910622426LL;

	t89 = (x425^(x426%(x427+x428)));

	if (t89 != -32703LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x429 = INT32_MIN;
	int8_t x431 = 14;

	t90 = (x429^(x430%(x431+x432)));

	if (t90 != 2147483633) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x441 = -1;
	int16_t x442 = INT16_MIN;
	int16_t x443 = INT16_MIN;
	int32_t x444 = -15;
	static volatile int32_t t91 = 58127091;

	t91 = (x441^(x442%(x443+x444)));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x445 = INT16_MIN;
	volatile int32_t x446 = -1;
	int32_t x448 = 0;
	int32_t t92 = 621917;

	t92 = (x445^(x446%(x447+x448)));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x449 = 169249664891544931LLU;
	volatile uint32_t x450 = 2U;
	uint64_t x451 = 884864029LLU;
	int32_t x452 = -6407;

	t93 = (x449^(x450%(x451+x452)));

	if (t93 != 169249664891544929LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x454 = 48U;
	int32_t x455 = -1;
	int64_t x456 = INT64_MAX;
	volatile uint64_t t94 = 32LLU;

	t94 = (x453^(x454%(x455+x456)));

	if (t94 != 3391796031782485LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x459 = INT64_MAX;

	t95 = (x457^(x458%(x459+x460)));

	if (t95 != -256LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x461 = INT16_MIN;
	volatile int16_t x462 = INT16_MIN;
	static int16_t x463 = -1;
	static uint32_t x464 = 710280944U;
	volatile uint32_t t96 = 478U;

	t96 = (x461^(x462%(x463+x464)));

	if (t96 != 4261729894U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x466 = UINT8_MAX;
	int16_t x467 = INT16_MAX;

	t97 = (x465^(x466%(x467+x468)));

	if (t97 != 249) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x473 = UINT8_MAX;
	static uint8_t x474 = 1U;
	int16_t x475 = INT16_MAX;
	volatile int64_t x476 = INT64_MIN;

	t98 = (x473^(x474%(x475+x476)));

	if (t98 != 254LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x477 = INT16_MIN;
	static uint64_t x478 = 138688026436757908LLU;
	int32_t x479 = -1;
	int8_t x480 = INT8_MIN;
	volatile uint64_t t99 = 7916LLU;

	t99 = (x477^(x478%(x479+x480)));

	if (t99 != 18308056047272814996LLU) { NG(); } else { ; }
	
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

