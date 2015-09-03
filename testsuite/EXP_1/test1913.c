#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 2029229;
int16_t x3 = INT16_MIN;
static int64_t x21 = -874535140335662660LL;
int64_t x23 = INT64_MIN;
volatile int16_t x29 = INT16_MIN;
int32_t t5 = 65949;
static volatile int32_t x34 = 708456797;
uint64_t x46 = 136219287342LLU;
static uint8_t x49 = 15U;
static uint8_t x57 = 39U;
int8_t x58 = INT8_MIN;
static int8_t x66 = INT8_MIN;
static uint16_t x67 = 25U;
int32_t x68 = INT32_MAX;
volatile int64_t t16 = 201446LL;
volatile uint64_t x82 = 3822246379006LLU;
int32_t x93 = INT32_MAX;
uint64_t x94 = UINT64_MAX;
int64_t x103 = 1LL;
static uint16_t x104 = 22U;
volatile int32_t x111 = INT32_MIN;
volatile int32_t t25 = 26;
int8_t x124 = INT8_MIN;
volatile int32_t t27 = -259745477;
int64_t x125 = INT64_MIN;
static int64_t x127 = -4827LL;
int64_t t28 = 40875612113902387LL;
int64_t x131 = -1LL;
volatile int64_t t30 = 16056610LL;
int16_t x138 = INT16_MIN;
uint32_t x139 = 253969U;
static int32_t x146 = INT32_MIN;
int8_t x150 = -1;
volatile int16_t x153 = INT16_MIN;
int8_t x154 = INT8_MIN;
int8_t x156 = 5;
volatile int32_t t34 = 1459591;
int32_t x165 = INT32_MIN;
int16_t x166 = -1;
int8_t x172 = 25;
volatile int64_t t39 = 899372020968985795LL;
uint8_t x178 = 7U;
int64_t x183 = -2478524511097LL;
volatile int64_t t41 = 3092464549LL;
volatile int64_t x185 = INT64_MIN;
static uint64_t x189 = UINT64_MAX;
int32_t x194 = 10231368;
volatile uint32_t x195 = UINT32_MAX;
int64_t x196 = -1LL;
static int8_t x197 = INT8_MAX;
static volatile int64_t x200 = 596953851LL;
int8_t x225 = 0;
int16_t x241 = -1;
int8_t x242 = -1;
volatile uint64_t t57 = 3852057LLU;
int32_t x254 = INT32_MIN;
int32_t x257 = INT32_MIN;
volatile uint64_t x258 = 425511LLU;
static int16_t x262 = -2;
volatile int8_t x264 = INT8_MIN;
volatile uint64_t t60 = 5810325524LLU;
int64_t x268 = INT64_MIN;
static uint16_t x281 = 2638U;
volatile uint8_t x287 = 2U;
int16_t x292 = -1;
uint32_t x296 = UINT32_MAX;
static volatile int32_t x302 = 1;
static int8_t x304 = 1;
volatile int64_t t71 = -25259974198LL;
static int32_t x315 = -50278;
volatile uint64_t t73 = 9275LLU;
uint32_t x325 = 1U;
int32_t x326 = INT32_MIN;
static volatile int64_t t76 = 809964LL;
static int8_t x335 = INT8_MAX;
int64_t x339 = INT64_MIN;
static volatile int16_t x340 = INT16_MIN;
static int32_t x345 = INT32_MIN;
int32_t x353 = -1;
volatile int64_t x366 = INT64_MAX;
volatile int64_t t86 = -1LL;
static volatile int8_t x376 = 5;
uint64_t x377 = 972729339923103823LLU;
static int16_t x382 = INT16_MAX;
int64_t x383 = 515418448069682633LL;
int32_t x387 = -373;
int32_t x388 = -1;
int8_t x389 = INT8_MIN;
volatile uint64_t t91 = 5027LLU;
int8_t x395 = 1;
volatile int64_t x396 = INT64_MAX;
static int32_t x398 = INT32_MIN;
uint8_t x399 = 6U;
int8_t x401 = 0;
uint16_t x413 = 11939U;
int16_t x417 = INT16_MAX;
int64_t x420 = INT64_MAX;
int8_t x421 = -1;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	volatile uint32_t x4 = 378631U;
	volatile uint32_t t0 = 5767U;

	t0 = (((x1|x2)%x3)-x4);

	if (t0 != 4294621432U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 614230142U;
	int8_t x6 = INT8_MIN;
	static int8_t x7 = -1;
	static int32_t x8 = INT32_MAX;
	uint32_t t1 = 735349U;

	t1 = (((x5|x6)%x7)-x8);

	if (t1 != 2147483647U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 2491055U;
	int64_t x10 = INT64_MIN;
	uint16_t x11 = UINT16_MAX;
	int64_t x12 = -1LL;
	int64_t t2 = 56660566267012207LL;

	t2 = (((x9|x10)%x11)-x12);

	if (t2 != -32042LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x22 = 1878812688LLU;
	int64_t x24 = 2037443571891283LL;
	uint64_t t3 = 520865LLU;

	t3 = (((x21|x22)%x23)-x24);

	if (t3 != 8346799453203869033LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -1LL;
	uint32_t x26 = UINT32_MAX;
	volatile int8_t x27 = -1;
	int8_t x28 = -15;
	volatile int64_t t4 = 300122373249LL;

	t4 = (((x25|x26)%x27)-x28);

	if (t4 != 15LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x30 = -6;
	uint16_t x31 = 43U;
	int16_t x32 = INT16_MAX;

	t5 = (((x29|x30)%x31)-x32);

	if (t5 != -32773) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = INT16_MAX;
	int16_t x35 = 119;
	volatile uint16_t x36 = UINT16_MAX;
	volatile int32_t t6 = 377165;

	t6 = (((x33|x34)%x35)-x36);

	if (t6 != -65461) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MAX;
	uint8_t x38 = UINT8_MAX;
	int64_t x39 = 5LL;
	volatile uint8_t x40 = 4U;
	int64_t t7 = -1LL;

	t7 = (((x37|x38)%x39)-x40);

	if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x45 = -1;
	volatile int8_t x47 = -1;
	int8_t x48 = 1;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = (((x45|x46)%x47)-x48);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x50 = 42U;
	int64_t x51 = INT64_MAX;
	int64_t x52 = 77354646424LL;
	int64_t t9 = 1LL;

	t9 = (((x49|x50)%x51)-x52);

	if (t9 != -77354646377LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x53 = 15;
	uint32_t x54 = UINT32_MAX;
	int8_t x55 = -1;
	static uint8_t x56 = 18U;
	static volatile uint32_t t10 = 37868047U;

	t10 = (((x53|x54)%x55)-x56);

	if (t10 != 4294967278U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x59 = UINT64_MAX;
	int8_t x60 = -1;
	volatile uint64_t t11 = 18328798524771509LLU;

	t11 = (((x57|x58)%x59)-x60);

	if (t11 != 18446744073709551528LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x61 = -1473199900506LL;
	int8_t x62 = -24;
	int8_t x63 = INT8_MIN;
	static int64_t x64 = 379LL;
	volatile int64_t t12 = -23369LL;

	t12 = (((x61|x62)%x63)-x64);

	if (t12 != -397LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x65 = UINT32_MAX;
	volatile uint32_t t13 = 60208U;

	t13 = (((x65|x66)%x67)-x68);

	if (t13 != 2147483669U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = 53U;
	int64_t x70 = -9235753567LL;
	int64_t x71 = -468215859587LL;
	volatile int16_t x72 = -512;
	int64_t t14 = 15677320038447LL;

	t14 = (((x69|x70)%x71)-x72);

	if (t14 != -9235753035LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x73 = INT8_MAX;
	int8_t x74 = INT8_MIN;
	int8_t x75 = 3;
	uint16_t x76 = 240U;
	int32_t t15 = -67660119;

	t15 = (((x73|x74)%x75)-x76);

	if (t15 != -241) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = -57LL;
	uint16_t x78 = 23U;
	static uint8_t x79 = UINT8_MAX;
	int16_t x80 = INT16_MAX;

	t16 = (((x77|x78)%x79)-x80);

	if (t16 != -32808LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	static volatile int64_t x83 = -1LL;
	int16_t x84 = INT16_MIN;
	volatile uint64_t t17 = 6660636862599796LLU;

	t17 = (((x81|x82)%x83)-x84);

	if (t17 != 9223375859101187582LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = UINT8_MAX;
	int8_t x86 = 4;
	int32_t x87 = -114;
	volatile int64_t x88 = 3002958498LL;
	int64_t t18 = -1090LL;

	t18 = (((x85|x86)%x87)-x88);

	if (t18 != -3002958471LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x89 = UINT8_MAX;
	static uint32_t x90 = UINT32_MAX;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = INT64_MIN;
	uint64_t t19 = 9964594476447LLU;

	t19 = (((x89|x90)%x91)-x92);

	if (t19 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x95 = INT32_MIN;
	int16_t x96 = 14333;
	uint64_t t20 = 5743124803962183LLU;

	t20 = (((x93|x94)%x95)-x96);

	if (t20 != 2147469314LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -1;
	int8_t x98 = INT8_MAX;
	static uint16_t x99 = UINT16_MAX;
	int16_t x100 = 14;
	volatile int32_t t21 = 1716;

	t21 = (((x97|x98)%x99)-x100);

	if (t21 != -15) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x101 = 11U;
	uint16_t x102 = 0U;
	volatile int64_t t22 = -3047732337LL;

	t22 = (((x101|x102)%x103)-x104);

	if (t22 != -22LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	static volatile int16_t x106 = -1;
	int32_t x107 = INT32_MIN;
	int8_t x108 = -17;
	int32_t t23 = 5972618;

	t23 = (((x105|x106)%x107)-x108);

	if (t23 != 16) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = UINT8_MAX;
	int64_t x110 = INT64_MAX;
	volatile int8_t x112 = 1;
	volatile int64_t t24 = 59LL;

	t24 = (((x109|x110)%x111)-x112);

	if (t24 != 2147483646LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x113 = INT8_MIN;
	static int8_t x114 = -6;
	int8_t x115 = INT8_MIN;
	int16_t x116 = -1;

	t25 = (((x113|x114)%x115)-x116);

	if (t25 != -5) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x117 = INT16_MIN;
	int32_t x118 = -1;
	uint8_t x119 = UINT8_MAX;
	static volatile int8_t x120 = 25;
	int32_t t26 = -2373;

	t26 = (((x117|x118)%x119)-x120);

	if (t26 != -26) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MAX;
	volatile int8_t x123 = INT8_MAX;

	t27 = (((x121|x122)%x123)-x124);

	if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x126 = INT8_MIN;
	int32_t x128 = 14;

	t28 = (((x125|x126)%x127)-x128);

	if (t28 != -142LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x129 = UINT32_MAX;
	int64_t x130 = -1LL;
	int16_t x132 = 19;
	volatile int64_t t29 = 26033LL;

	t29 = (((x129|x130)%x131)-x132);

	if (t29 != -19LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = INT64_MIN;
	uint16_t x134 = 308U;
	uint16_t x135 = 4U;
	static int32_t x136 = 1123299;

	t30 = (((x133|x134)%x135)-x136);

	if (t30 != -1123299LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x137 = 62829996764LLU;
	uint16_t x140 = 30243U;
	uint64_t t31 = 12570900198587LLU;

	t31 = (((x137|x138)%x139)-x140);

	if (t31 != 18446744073709541175LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x145 = 25;
	static int8_t x147 = INT8_MIN;
	static volatile int16_t x148 = INT16_MIN;
	int32_t t32 = -5;

	t32 = (((x145|x146)%x147)-x148);

	if (t32 != 32665) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = -42;
	static uint64_t x151 = UINT64_MAX;
	uint8_t x152 = 0U;
	uint64_t t33 = 8862554LLU;

	t33 = (((x149|x150)%x151)-x152);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x155 = 331U;

	t34 = (((x153|x154)%x155)-x156);

	if (t34 != -133) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x157 = 4059U;
	int64_t x158 = INT64_MIN;
	uint32_t x159 = UINT32_MAX;
	volatile int16_t x160 = -6151;
	int64_t t35 = -30LL;

	t35 = (((x157|x158)%x159)-x160);

	if (t35 != -2147473438LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = 3U;
	static int32_t x162 = INT32_MAX;
	static uint32_t x163 = 5523883U;
	int8_t x164 = INT8_MIN;
	volatile uint32_t t36 = 1933U;

	t36 = (((x161|x162)%x163)-x164);

	if (t36 != 4217171U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x167 = INT32_MAX;
	uint32_t x168 = 45089U;
	uint32_t t37 = 789229129U;

	t37 = (((x165|x166)%x167)-x168);

	if (t37 != 4294922206U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = UINT32_MAX;
	uint64_t x170 = 2480817LLU;
	int16_t x171 = -1;
	volatile uint64_t t38 = 2299953669LLU;

	t38 = (((x169|x170)%x171)-x172);

	if (t38 != 4294967270LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = 27;
	uint16_t x174 = 3617U;
	int64_t x175 = INT64_MAX;
	int8_t x176 = INT8_MIN;

	t39 = (((x173|x174)%x175)-x176);

	if (t39 != 3771LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MAX;
	static volatile int64_t x179 = -1LL;
	int8_t x180 = -1;
	volatile int64_t t40 = 19LL;

	t40 = (((x177|x178)%x179)-x180);

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x181 = UINT8_MAX;
	uint32_t x182 = 51598U;
	volatile int64_t x184 = -19LL;

	t41 = (((x181|x182)%x183)-x184);

	if (t41 != 51730LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x186 = INT16_MIN;
	uint8_t x187 = 1U;
	int64_t x188 = 181823563385LL;
	int64_t t42 = 51238656603LL;

	t42 = (((x185|x186)%x187)-x188);

	if (t42 != -181823563385LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MIN;
	uint64_t t43 = 5247175617705LLU;

	t43 = (((x189|x190)%x191)-x192);

	if (t43 != 32895LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x193 = UINT16_MAX;
	static int64_t t44 = 14730251231457386LL;

	t44 = (((x193|x194)%x195)-x196);

	if (t44 != 10289152LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x198 = 60U;
	uint64_t x199 = UINT64_MAX;
	uint64_t t45 = 33393613664947LLU;

	t45 = (((x197|x198)%x199)-x200);

	if (t45 != 18446744073112597892LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x201 = UINT8_MAX;
	int64_t x202 = INT64_MIN;
	static int32_t x203 = INT32_MAX;
	static int16_t x204 = 144;
	volatile int64_t t46 = -557324LL;

	t46 = (((x201|x202)%x203)-x204);

	if (t46 != -2147483538LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x205 = 23U;
	volatile int8_t x206 = INT8_MAX;
	int64_t x207 = -88371LL;
	volatile int16_t x208 = INT16_MIN;
	int64_t t47 = -808891170152540318LL;

	t47 = (((x205|x206)%x207)-x208);

	if (t47 != 32895LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x209 = INT16_MIN;
	int64_t x210 = 17683822994648776LL;
	static int8_t x211 = INT8_MIN;
	int8_t x212 = INT8_MIN;
	volatile int64_t t48 = -811974507LL;

	t48 = (((x209|x210)%x211)-x212);

	if (t48 != 72LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x213 = INT8_MIN;
	static volatile uint64_t x214 = 1786910LLU;
	int8_t x215 = INT8_MIN;
	int64_t x216 = -1LL;
	static uint64_t t49 = 55981244659292LLU;

	t49 = (((x213|x214)%x215)-x216);

	if (t49 != 31LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MAX;
	int16_t x218 = -5;
	int8_t x219 = -3;
	int64_t x220 = 309061476665087567LL;
	int64_t t50 = -5050545LL;

	t50 = (((x217|x218)%x219)-x220);

	if (t50 != -309061476665087568LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = 10;
	int64_t x222 = INT64_MIN;
	int64_t x223 = -122531157648920LL;
	volatile int32_t x224 = 281;
	int64_t t51 = 0LL;

	t51 = (((x221|x222)%x223)-x224);

	if (t51 != -84207147620919LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x226 = -1;
	volatile uint16_t x227 = 15U;
	int32_t x228 = INT32_MIN;
	int32_t t52 = INT32_MAX;

	t52 = (((x225|x226)%x227)-x228);

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x229 = UINT64_MAX;
	static int32_t x230 = INT32_MAX;
	volatile int32_t x231 = INT32_MAX;
	uint32_t x232 = UINT32_MAX;
	uint64_t t53 = 1044078687LLU;

	t53 = (((x229|x230)%x231)-x232);

	if (t53 != 18446744069414584324LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = INT16_MAX;
	int64_t x234 = INT64_MIN;
	int8_t x235 = INT8_MAX;
	uint16_t x236 = 459U;
	static volatile int64_t t54 = -129292427779LL;

	t54 = (((x233|x234)%x235)-x236);

	if (t54 != -459LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x237 = -1LL;
	int32_t x238 = -1;
	int32_t x239 = INT32_MAX;
	uint32_t x240 = 269753135U;
	volatile int64_t t55 = -287656LL;

	t55 = (((x237|x238)%x239)-x240);

	if (t55 != -269753136LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x243 = INT64_MIN;
	int32_t x244 = -83073311;
	volatile int64_t t56 = -202859176489136LL;

	t56 = (((x241|x242)%x243)-x244);

	if (t56 != 83073310LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x249 = INT64_MAX;
	int8_t x250 = 12;
	uint64_t x251 = 1174687696362664232LLU;
	static volatile uint16_t x252 = 279U;

	t57 = (((x249|x250)%x251)-x252);

	if (t57 != 1000558162316125904LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x253 = INT16_MIN;
	int64_t x255 = INT64_MIN;
	int16_t x256 = -149;
	int64_t t58 = 3370711945581LL;

	t58 = (((x253|x254)%x255)-x256);

	if (t58 != -32619LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x259 = INT16_MIN;
	uint16_t x260 = 7251U;
	volatile uint64_t t59 = 243545298LLU;

	t59 = (((x257|x258)%x259)-x260);

	if (t59 != 18446744071562486228LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x261 = -1;
	uint64_t x263 = 4514765638LLU;

	t60 = (((x261|x262)%x263)-x264);

	if (t60 != 466605161LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = 1536;
	static uint32_t x266 = 7174783U;
	volatile uint64_t x267 = UINT64_MAX;
	uint64_t t61 = 342737513LLU;

	t61 = (((x265|x266)%x267)-x268);

	if (t61 != 9223372036861951615LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = -1;
	uint32_t x270 = UINT32_MAX;
	int32_t x271 = -1;
	uint64_t x272 = 28917231674056LLU;
	volatile uint64_t t62 = 23985LLU;

	t62 = (((x269|x270)%x271)-x272);

	if (t62 != 18446715156477877560LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = INT32_MAX;
	uint32_t x278 = 26696U;
	volatile uint8_t x279 = 5U;
	uint64_t x280 = 7386194492844146189LLU;
	volatile uint64_t t63 = 28101318126906862LLU;

	t63 = (((x277|x278)%x279)-x280);

	if (t63 != 11060549580865405429LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x282 = 1027640023013096361LLU;
	uint32_t x283 = UINT32_MAX;
	int32_t x284 = -1;
	uint64_t t64 = 5LLU;

	t64 = (((x281|x282)%x283)-x284);

	if (t64 != 250504472LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x285 = 3073736600954682526LL;
	uint32_t x286 = 73044319U;
	static uint16_t x288 = UINT16_MAX;
	volatile int64_t t65 = -39LL;

	t65 = (((x285|x286)%x287)-x288);

	if (t65 != -65534LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = INT8_MAX;
	uint16_t x290 = 4U;
	static volatile int8_t x291 = -1;
	volatile int32_t t66 = -29778256;

	t66 = (((x289|x290)%x291)-x292);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x293 = 21043U;
	static uint64_t x294 = 113LLU;
	volatile uint16_t x295 = 4395U;
	volatile uint64_t t67 = 17LLU;

	t67 = (((x293|x294)%x295)-x296);

	if (t67 != 18446744069414587848LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x297 = 6892524655218769LLU;
	int8_t x298 = -1;
	volatile int64_t x299 = 543305294218247LL;
	static uint64_t x300 = UINT64_MAX;
	volatile uint64_t t68 = 2618319068LLU;

	t68 = (((x297|x298)%x299)-x300);

	if (t68 != 442724411629472LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x301 = 2499U;
	int16_t x303 = -1;
	int32_t t69 = -464375;

	t69 = (((x301|x302)%x303)-x304);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x305 = INT64_MIN;
	uint16_t x306 = 3868U;
	uint16_t x307 = UINT16_MAX;
	volatile uint32_t x308 = UINT32_MAX;
	volatile int64_t t70 = 5848LL;

	t70 = (((x305|x306)%x307)-x308);

	if (t70 != -4294996195LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = -725232040703648LL;
	volatile int16_t x310 = INT16_MIN;
	int64_t x311 = -1LL;
	int64_t x312 = -1LL;

	t71 = (((x309|x310)%x311)-x312);

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = INT16_MIN;
	int32_t x314 = INT32_MIN;
	volatile int8_t x316 = -1;
	static volatile int32_t t72 = 7225;

	t72 = (((x313|x314)%x315)-x316);

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x317 = 24U;
	uint64_t x318 = 4321412781812719LLU;
	static int32_t x319 = INT32_MIN;
	int16_t x320 = -1;

	t73 = (((x317|x318)%x319)-x320);

	if (t73 != 4321412781812736LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x321 = UINT64_MAX;
	uint16_t x322 = 1U;
	volatile int64_t x323 = -1LL;
	int32_t x324 = 58;
	static uint64_t t74 = 7039908503723563LLU;

	t74 = (((x321|x322)%x323)-x324);

	if (t74 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x327 = -1;
	int32_t x328 = INT32_MIN;
	uint32_t t75 = 476U;

	t75 = (((x325|x326)%x327)-x328);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = INT32_MIN;
	int64_t x330 = INT64_MAX;
	static int8_t x331 = -15;
	int8_t x332 = INT8_MIN;

	t76 = (((x329|x330)%x331)-x332);

	if (t76 != 127LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x333 = INT32_MAX;
	volatile int32_t x334 = INT32_MIN;
	int8_t x336 = INT8_MIN;
	int32_t t77 = -526612575;

	t77 = (((x333|x334)%x335)-x336);

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x337 = INT32_MIN;
	int32_t x338 = 1;
	int64_t t78 = -107LL;

	t78 = (((x337|x338)%x339)-x340);

	if (t78 != -2147450879LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x341 = INT64_MAX;
	int64_t x342 = -1LL;
	int64_t x343 = INT64_MAX;
	static volatile int64_t x344 = INT64_MIN;
	static int64_t t79 = INT64_MAX;

	t79 = (((x341|x342)%x343)-x344);

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x346 = -1;
	uint32_t x347 = 3U;
	uint8_t x348 = UINT8_MAX;
	uint32_t t80 = 7291867U;

	t80 = (((x345|x346)%x347)-x348);

	if (t80 != 4294967041U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x349 = UINT32_MAX;
	volatile uint8_t x350 = UINT8_MAX;
	volatile uint8_t x351 = UINT8_MAX;
	static volatile uint64_t x352 = 86463220344929LLU;
	volatile uint64_t t81 = 4759665948LLU;

	t81 = (((x349|x350)%x351)-x352);

	if (t81 != 18446657610489206687LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x354 = 703U;
	int16_t x355 = -1;
	int16_t x356 = INT16_MIN;
	uint32_t t82 = 964U;

	t82 = (((x353|x354)%x355)-x356);

	if (t82 != 32768U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x357 = 13U;
	static uint32_t x358 = 96278264U;
	volatile uint32_t x359 = 167984036U;
	uint8_t x360 = 112U;
	volatile uint32_t t83 = 83264152U;

	t83 = (((x357|x358)%x359)-x360);

	if (t83 != 96278157U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x361 = 17427LL;
	uint16_t x362 = 1281U;
	volatile int64_t x363 = -32643LL;
	uint64_t x364 = UINT64_MAX;
	uint64_t t84 = 936LLU;

	t84 = (((x361|x362)%x363)-x364);

	if (t84 != 17684LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x365 = INT8_MIN;
	int64_t x367 = -1LL;
	static int16_t x368 = -23;
	static volatile int64_t t85 = -53764295483LL;

	t85 = (((x365|x366)%x367)-x368);

	if (t85 != 23LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x369 = -6889;
	int32_t x370 = 290;
	volatile int64_t x371 = -1LL;
	int8_t x372 = 1;

	t86 = (((x369|x370)%x371)-x372);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x373 = INT32_MIN;
	static int16_t x374 = 679;
	int32_t x375 = INT32_MIN;
	int32_t t87 = 194;

	t87 = (((x373|x374)%x375)-x376);

	if (t87 != -2147482974) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x378 = UINT8_MAX;
	int8_t x379 = INT8_MIN;
	int16_t x380 = INT16_MIN;
	volatile uint64_t t88 = 8LLU;

	t88 = (((x377|x378)%x379)-x380);

	if (t88 != 972729339923136767LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x381 = 25LLU;
	int8_t x384 = -1;
	static uint64_t t89 = 633LLU;

	t89 = (((x381|x382)%x383)-x384);

	if (t89 != 32768LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x385 = UINT64_MAX;
	uint16_t x386 = 15238U;
	volatile uint64_t t90 = 7466828617LLU;

	t90 = (((x385|x386)%x387)-x388);

	if (t90 != 373LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x390 = 54302835919037LLU;
	int64_t x391 = 11534979743LL;
	int64_t x392 = -1LL;

	t91 = (((x389|x390)%x391)-x392);

	if (t91 != 4666791009LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x393 = UINT64_MAX;
	int8_t x394 = 2;
	uint64_t t92 = 9104732LLU;

	t92 = (((x393|x394)%x395)-x396);

	if (t92 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = INT32_MAX;
	uint16_t x400 = 277U;
	static volatile int32_t t93 = 7907960;

	t93 = (((x397|x398)%x399)-x400);

	if (t93 != -278) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x402 = UINT16_MAX;
	int64_t x403 = INT64_MIN;
	static int32_t x404 = 58627724;
	volatile int64_t t94 = 453258847615536LL;

	t94 = (((x401|x402)%x403)-x404);

	if (t94 != -58562189LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x405 = UINT32_MAX;
	uint32_t x406 = 21574156U;
	uint8_t x407 = UINT8_MAX;
	uint8_t x408 = UINT8_MAX;
	volatile uint32_t t95 = 48U;

	t95 = (((x405|x406)%x407)-x408);

	if (t95 != 4294967041U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x409 = INT16_MAX;
	uint8_t x410 = 3U;
	int16_t x411 = INT16_MIN;
	uint8_t x412 = UINT8_MAX;
	volatile int32_t t96 = 56;

	t96 = (((x409|x410)%x411)-x412);

	if (t96 != 32512) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x414 = INT32_MAX;
	int16_t x415 = 417;
	uint8_t x416 = 74U;
	static volatile int32_t t97 = 0;

	t97 = (((x413|x414)%x415)-x416);

	if (t97 != 293) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x418 = 7LL;
	volatile uint64_t x419 = UINT64_MAX;
	volatile uint64_t t98 = 1977084285419168144LLU;

	t98 = (((x417|x418)%x419)-x420);

	if (t98 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x422 = -26;
	volatile uint16_t x423 = UINT16_MAX;
	int32_t x424 = -1;
	int32_t t99 = -1;

	t99 = (((x421|x422)%x423)-x424);

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

