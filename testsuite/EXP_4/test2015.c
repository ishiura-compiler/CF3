#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = 1;
static int64_t x6 = 4667295064679LL;
int32_t x11 = INT32_MAX;
int8_t x13 = 36;
int32_t x14 = INT32_MAX;
uint16_t x24 = UINT16_MAX;
int32_t t5 = -5849527;
volatile int16_t x27 = INT16_MIN;
uint32_t x30 = 191350068U;
volatile uint32_t x44 = UINT32_MAX;
volatile int16_t x49 = 6;
int16_t x51 = 0;
int64_t x54 = -1LL;
int64_t x67 = -209LL;
uint32_t t18 = 13727U;
volatile int64_t x77 = INT64_MAX;
int64_t t19 = INT64_MIN;
uint16_t x82 = 1U;
int8_t x88 = INT8_MIN;
static volatile uint64_t t21 = 517592394725LLU;
uint64_t t22 = 101175909450245LLU;
volatile int32_t x96 = -28;
int16_t x97 = 1;
uint64_t x101 = 197465158914768459LLU;
int8_t x103 = INT8_MAX;
static uint64_t t25 = 11511921708161LLU;
volatile int8_t x114 = -1;
volatile int64_t t28 = -1LL;
uint64_t x122 = 3197LLU;
uint32_t x124 = 131430U;
int8_t x127 = -1;
int64_t t35 = -3922684848564157466LL;
int64_t x145 = INT64_MIN;
volatile uint8_t x147 = 39U;
volatile uint32_t x150 = 1001865486U;
static int8_t x151 = INT8_MAX;
uint32_t t37 = 1U;
int16_t x156 = INT16_MAX;
static volatile int64_t t38 = 5803LL;
volatile uint32_t x165 = 1017247230U;
static volatile int64_t t45 = -2015LL;
int16_t x195 = INT16_MAX;
int32_t x199 = INT32_MIN;
int32_t x208 = 156231044;
int64_t x212 = INT64_MIN;
uint8_t x220 = 4U;
uint32_t x228 = UINT32_MAX;
volatile int8_t x229 = INT8_MAX;
uint64_t x231 = 942509559LLU;
static int32_t x233 = INT32_MIN;
uint16_t x235 = 118U;
uint64_t x238 = 53233286288LLU;
volatile int16_t x245 = INT16_MAX;
int64_t x248 = INT64_MAX;
static int32_t x253 = -236070;
static volatile int32_t x259 = INT32_MIN;
int32_t t64 = -146201;
int16_t x272 = -775;
static uint32_t x280 = 29036U;
volatile uint32_t t69 = 44139973U;
int8_t x286 = 0;
int16_t x288 = -1;
int64_t x290 = -51864962215106051LL;
static int64_t x292 = -35979174867LL;
int16_t x293 = INT16_MIN;
static uint64_t x300 = 42458698065161LLU;
static int8_t x307 = 14;
volatile int8_t x308 = INT8_MIN;
static volatile uint32_t x313 = 108U;
static int16_t x315 = 12756;
static uint8_t x320 = 0U;
volatile uint64_t x323 = UINT64_MAX;
uint64_t x325 = 16797LLU;
uint32_t x326 = 3989U;
uint32_t x328 = 140U;
int64_t x329 = 4177193538LL;
volatile int64_t x338 = 789300022453217LL;
int64_t x340 = INT64_MIN;
volatile int32_t x341 = INT32_MIN;
int8_t x343 = INT8_MAX;
volatile int32_t t85 = 211723725;
uint64_t x346 = UINT64_MAX;
volatile int8_t x347 = -15;
static uint64_t t86 = 66133873017LLU;
int16_t x350 = INT16_MAX;
int64_t x356 = INT64_MIN;
volatile uint64_t t88 = 10968LLU;
static uint16_t x357 = UINT16_MAX;
int8_t x369 = INT8_MAX;
static int16_t x372 = -1;
int32_t t92 = 209745120;
uint32_t x373 = 5378646U;
static uint64_t t93 = 34289599819760LLU;
int32_t x391 = INT32_MIN;
uint8_t x392 = 127U;
volatile int8_t x394 = -1;
static uint8_t x396 = 13U;
int16_t x397 = INT16_MIN;
int64_t x399 = -2378510314050674LL;


void f0(void) {
	static int8_t x1 = -2;
	uint32_t x2 = UINT32_MAX;
	int64_t x3 = INT64_MIN;
	volatile uint64_t x4 = 1123LLU;
	static volatile uint64_t t0 = 193623069142LLU;

	t0 = (x1^(x2|(x3|x4)));

	if (t0 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = INT16_MIN;
	volatile int64_t x8 = -4250272008058185LL;
	volatile int64_t t1 = 33728458383388LL;

	t1 = (x5^(x6|(x7|x8)));

	if (t1 != -5386LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	uint64_t x10 = 897743LLU;
	int64_t x12 = INT64_MIN;
	static volatile uint64_t t2 = 316037685548486LLU;

	t2 = (x9^(x10|(x11|x12)));

	if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x15 = 8U;
	uint16_t x16 = 1U;
	int32_t t3 = 154;

	t3 = (x13^(x14|(x15|x16)));

	if (t3 != 2147483611) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int64_t x18 = -204123920428536349LL;
	int64_t x19 = INT64_MIN;
	static int64_t x20 = 225972549970068LL;
	volatile int64_t t4 = -59005583714002959LL;

	t4 = (x17^(x18|(x19|x20)));

	if (t4 != -9019249788326243832LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	int32_t x22 = -1;
	static int16_t x23 = INT16_MAX;

	t5 = (x21^(x22|(x23|x24)));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = 1947;
	static volatile uint64_t x26 = 39706693947046469LLU;
	uint32_t x28 = UINT32_MAX;
	volatile uint64_t t6 = 94582244024276442LLU;

	t6 = (x25^(x26|(x27|x28)));

	if (t6 != 39706697773611108LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int16_t x31 = INT16_MIN;
	int16_t x32 = INT16_MIN;
	volatile int64_t t7 = -105LL;

	t7 = (x29^(x30|(x31|x32)));

	if (t7 != 9223372032559823563LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 20016865U;
	int32_t x34 = INT32_MIN;
	int16_t x35 = INT16_MIN;
	uint32_t x36 = 18921696U;
	uint32_t t8 = 3U;

	t8 = (x33^(x34|(x35|x36)));

	if (t8 != 4274968065U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 19U;
	uint16_t x38 = UINT16_MAX;
	uint16_t x39 = UINT16_MAX;
	int32_t x40 = INT32_MAX;
	static int32_t t9 = -17258968;

	t9 = (x37^(x38|(x39|x40)));

	if (t9 != 2147483628) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 45810U;
	int8_t x42 = INT8_MAX;
	static int16_t x43 = INT16_MIN;
	static volatile uint32_t t10 = 21690U;

	t10 = (x41^(x42|(x43|x44)));

	if (t10 != 4294921485U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = 4;
	static int64_t x46 = INT64_MIN;
	uint8_t x47 = 1U;
	static volatile int64_t x48 = -333839583LL;
	static int64_t t11 = 213LL;

	t11 = (x45^(x46|(x47|x48)));

	if (t11 != -333839579LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MIN;
	int64_t x52 = -2226501079900884LL;
	int64_t t12 = -303394188140456LL;

	t12 = (x49^(x50|(x51|x52)));

	if (t12 != -771072726LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = 512U;
	int32_t x55 = INT32_MAX;
	static uint16_t x56 = 381U;
	int64_t t13 = 13147LL;

	t13 = (x53^(x54|(x55|x56)));

	if (t13 != -513LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	static uint32_t x58 = 19203U;
	static int32_t x59 = 543;
	int8_t x60 = INT8_MIN;
	volatile uint32_t t14 = 116U;

	t14 = (x57^(x58|(x59|x60)));

	if (t14 != 2147483551U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 99030U;
	int64_t x62 = -157385650383LL;
	volatile uint8_t x63 = 9U;
	int32_t x64 = 243;
	volatile int64_t t15 = 37114393LL;

	t15 = (x61^(x62|(x63|x64)));

	if (t15 != -157385749203LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x65 = 14U;
	static uint8_t x66 = 37U;
	uint16_t x68 = UINT16_MAX;
	int64_t t16 = 837643LL;

	t16 = (x65^(x66|(x67|x68)));

	if (t16 != -15LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = -1;
	volatile uint16_t x70 = 1U;
	int8_t x71 = INT8_MIN;
	static uint32_t x72 = 0U;
	static uint32_t t17 = 108646U;

	t17 = (x69^(x70|(x71|x72)));

	if (t17 != 126U) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -503163;
	volatile int32_t x74 = 0;
	static volatile uint32_t x75 = 14U;
	int8_t x76 = INT8_MIN;

	t18 = (x73^(x74|(x75|x76)));

	if (t18 != 503051U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MAX;
	static int32_t x79 = INT32_MIN;
	uint8_t x80 = 0U;

	t19 = (x77^(x78|(x79|x80)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = 7221;
	int32_t x83 = INT32_MAX;
	volatile int32_t x84 = -1;
	int32_t t20 = -537;

	t20 = (x81^(x82|(x83|x84)));

	if (t20 != -7222) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -11;
	static uint64_t x86 = UINT64_MAX;
	static volatile uint64_t x87 = UINT64_MAX;

	t21 = (x85^(x86|(x87|x88)));

	if (t21 != 10LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = -1;
	volatile int32_t x90 = INT32_MIN;
	int16_t x91 = INT16_MAX;
	uint64_t x92 = 550723430362292LLU;

	t22 = (x89^(x90|(x91|x92)));

	if (t22 != 898629632LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	static int64_t x94 = INT64_MAX;
	static uint64_t x95 = 53621544768391775LLU;
	uint64_t t23 = 1686115861641768LLU;

	t23 = (x93^(x94|(x95|x96)));

	if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = 299689;
	int32_t x99 = INT32_MAX;
	uint16_t x100 = UINT16_MAX;
	int32_t t24 = -534916;

	t24 = (x97^(x98|(x99|x100)));

	if (t24 != 2147483646) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = UINT8_MAX;
	int32_t x104 = INT32_MAX;

	t25 = (x101^(x102|(x103|x104)));

	if (t25 != 197465160638431668LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	static volatile uint32_t x106 = 12U;
	volatile int16_t x107 = -148;
	static int32_t x108 = INT32_MAX;
	volatile uint32_t t26 = 718014U;

	t26 = (x105^(x106|(x107|x108)));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 95U;
	volatile int32_t x110 = -448;
	static int32_t x111 = 2195;
	int64_t x112 = 819968769546380968LL;
	static volatile int64_t t27 = 130LL;

	t27 = (x109^(x110|(x111|x112)));

	if (t27 != -348LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = -1;
	uint8_t x115 = 48U;
	volatile int64_t x116 = 113769520LL;

	t28 = (x113^(x114|(x115|x116)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 21146614712410LL;
	uint32_t x118 = 25U;
	volatile uint16_t x119 = 97U;
	static volatile uint64_t x120 = UINT64_MAX;
	uint64_t t29 = 368007698112090549LLU;

	t29 = (x117^(x118|(x119|x120)));

	if (t29 != 18446722927094839205LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 461U;
	uint16_t x123 = 632U;
	uint64_t t30 = 5689827806472722LLU;

	t30 = (x121^(x122|(x123|x124)));

	if (t30 != 134834LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = 658711850;
	volatile int32_t x128 = 221814319;
	volatile int32_t t31 = -190;

	t31 = (x125^(x126|(x127|x128)));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 14767U;
	volatile int8_t x130 = 1;
	int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MAX;
	int32_t t32 = -52259;

	t32 = (x129^(x130|(x131|x132)));

	if (t32 != -14768) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 228U;
	int32_t x134 = -1;
	uint64_t x135 = 101523LLU;
	int32_t x136 = INT32_MIN;
	static uint64_t t33 = 19LLU;

	t33 = (x133^(x134|(x135|x136)));

	if (t33 != 18446744073709551387LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = -1;
	uint16_t x138 = 869U;
	volatile int16_t x139 = INT16_MAX;
	volatile uint32_t x140 = UINT32_MAX;
	uint32_t t34 = 14U;

	t34 = (x137^(x138|(x139|x140)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	int8_t x142 = INT8_MIN;
	volatile int64_t x143 = -897304723779LL;
	static int32_t x144 = -1;

	t35 = (x141^(x142|(x143|x144)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x146 = INT16_MIN;
	uint32_t x148 = 51U;
	volatile int64_t t36 = 281300629436LL;

	t36 = (x145^(x146|(x147|x148)));

	if (t36 != -9223372032559841225LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	static volatile int32_t x152 = -1;

	t37 = (x149^(x150|(x151|x152)));

	if (t37 != 2147483647U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 1111LL;
	volatile int64_t x154 = INT64_MIN;
	int64_t x155 = 517118367858LL;

	t38 = (x153^(x154|(x155|x156)));

	if (t38 != -9223371519736382552LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	volatile uint32_t x158 = UINT32_MAX;
	int32_t x159 = INT32_MIN;
	int8_t x160 = 2;
	static uint32_t t39 = 1476622946U;

	t39 = (x157^(x158|(x159|x160)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 6U;
	int16_t x162 = -201;
	uint8_t x163 = 54U;
	int8_t x164 = 1;
	int32_t t40 = -183;

	t40 = (x161^(x162|(x163|x164)));

	if (t40 != -207) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x166 = UINT16_MAX;
	uint16_t x167 = UINT16_MAX;
	int64_t x168 = INT64_MAX;
	static volatile int64_t t41 = -256314LL;

	t41 = (x165^(x166|(x167|x168)));

	if (t41 != 9223372035837528577LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	static volatile int8_t x170 = INT8_MIN;
	volatile int8_t x171 = 5;
	uint64_t x172 = 3757945446LLU;
	uint64_t t42 = 2708LLU;

	t42 = (x169^(x170|(x171|x172)));

	if (t42 != 24LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = INT16_MIN;
	uint64_t x174 = 25473487503LLU;
	int8_t x175 = INT8_MIN;
	uint32_t x176 = UINT32_MAX;
	volatile uint64_t t43 = 32163151752635898LLU;

	t43 = (x173^(x174|(x175|x176)));

	if (t43 != 18446744047939780607LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = INT64_MIN;
	uint32_t x178 = 19U;
	int64_t x179 = -1LL;
	uint16_t x180 = 3U;
	int64_t t44 = INT64_MAX;

	t44 = (x177^(x178|(x179|x180)));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = -6;
	int32_t x183 = -1;
	int64_t x184 = INT64_MIN;

	t45 = (x181^(x182|(x183|x184)));

	if (t45 != 127LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MIN;
	uint16_t x186 = 1U;
	int16_t x187 = 0;
	int8_t x188 = INT8_MIN;
	int32_t t46 = -1623188;

	t46 = (x185^(x186|(x187|x188)));

	if (t46 != 2147483521) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static int8_t x190 = INT8_MIN;
	int8_t x191 = -1;
	int16_t x192 = INT16_MIN;
	static int32_t t47 = -134260;

	t47 = (x189^(x190|(x191|x192)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int8_t x194 = 0;
	int16_t x196 = INT16_MIN;
	int64_t t48 = INT64_MAX;

	t48 = (x193^(x194|(x195|x196)));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	int64_t x198 = INT64_MIN;
	int64_t x200 = INT64_MAX;
	volatile int64_t t49 = -1653LL;

	t49 = (x197^(x198|(x199|x200)));

	if (t49 != -4294967296LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = 2362262U;
	int8_t x202 = INT8_MAX;
	int16_t x203 = -1;
	uint8_t x204 = 3U;
	uint32_t t50 = 64U;

	t50 = (x201^(x202|(x203|x204)));

	if (t50 != 4292605033U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	volatile int32_t x206 = -1834584;
	int64_t x207 = INT64_MIN;
	uint64_t t51 = 629LLU;

	t51 = (x205^(x206|(x207|x208)));

	if (t51 != 1055315LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -1;
	int8_t x210 = 9;
	uint64_t x211 = UINT64_MAX;
	uint64_t t52 = 1002358LLU;

	t52 = (x209^(x210|(x211|x212)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	static volatile int16_t x214 = INT16_MAX;
	int32_t x215 = INT32_MIN;
	static int16_t x216 = 3;
	int32_t t53 = INT32_MIN;

	t53 = (x213^(x214|(x215|x216)));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 15LLU;
	int8_t x218 = INT8_MIN;
	int32_t x219 = INT32_MIN;
	volatile uint64_t t54 = 12064407022796513LLU;

	t54 = (x217^(x218|(x219|x220)));

	if (t54 != 18446744073709551499LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 13868U;
	uint16_t x222 = UINT16_MAX;
	int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MIN;
	volatile int32_t t55 = -2;

	t55 = (x221^(x222|(x223|x224)));

	if (t55 != -13869) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -15356;
	int8_t x226 = 1;
	int32_t x227 = INT32_MIN;
	volatile uint32_t t56 = 301U;

	t56 = (x225^(x226|(x227|x228)));

	if (t56 != 15355U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = -1;
	int16_t x232 = INT16_MAX;
	static volatile uint64_t t57 = 890990770LLU;

	t57 = (x229^(x230|(x231|x232)));

	if (t57 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = INT64_MIN;
	int32_t x236 = INT32_MAX;
	volatile int64_t t58 = INT64_MAX;

	t58 = (x233^(x234|(x235|x236)));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	int32_t x239 = 0;
	uint32_t x240 = 21073231U;
	volatile uint64_t t59 = 3721836917629LLU;

	t59 = (x237^(x238|(x239|x240)));

	if (t59 != 18446744020459455008LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 0U;
	uint16_t x242 = 3U;
	static int64_t x243 = 3124LL;
	int16_t x244 = INT16_MAX;
	static volatile int64_t t60 = 6400831381555442LL;

	t60 = (x241^(x242|(x243|x244)));

	if (t60 != 32767LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x246 = 6861LLU;
	volatile uint64_t x247 = 419721945194450LLU;
	uint64_t t61 = 3LLU;

	t61 = (x245^(x246|(x247|x248)));

	if (t61 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	uint16_t x250 = 1U;
	volatile uint16_t x251 = 611U;
	int16_t x252 = -1;
	int32_t t62 = 163897;

	t62 = (x249^(x250|(x251|x252)));

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x254 = INT8_MIN;
	int32_t x255 = 206847;
	int16_t x256 = 3;
	volatile int32_t t63 = -19553076;

	t63 = (x253^(x254|(x255|x256)));

	if (t63 != 236069) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MAX;
	int8_t x258 = INT8_MIN;
	int16_t x260 = INT16_MAX;

	t64 = (x257^(x258|(x259|x260)));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x261 = INT32_MIN;
	uint8_t x262 = 0U;
	int8_t x263 = INT8_MAX;
	int8_t x264 = INT8_MIN;
	int32_t t65 = INT32_MAX;

	t65 = (x261^(x262|(x263|x264)));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x265 = 3U;
	int32_t x266 = INT32_MAX;
	int64_t x267 = INT64_MAX;
	volatile uint8_t x268 = 1U;
	volatile int64_t t66 = -305022678LL;

	t66 = (x265^(x266|(x267|x268)));

	if (t66 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = -610LL;
	volatile int32_t x270 = INT32_MIN;
	static volatile uint64_t x271 = UINT64_MAX;
	static uint64_t t67 = 52635691489614610LLU;

	t67 = (x269^(x270|(x271|x272)));

	if (t67 != 609LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x273 = UINT32_MAX;
	int32_t x274 = INT32_MIN;
	uint8_t x275 = 1U;
	int64_t x276 = INT64_MIN;
	int64_t t68 = 182226235754LL;

	t68 = (x273^(x274|(x275|x276)));

	if (t68 != -2147483650LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = -1;
	int8_t x278 = 16;
	int32_t x279 = 39;

	t69 = (x277^(x278|(x279|x280)));

	if (t69 != 4294938240U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = -1LL;
	uint64_t x284 = UINT64_MAX;
	uint64_t t70 = 17036933436498278LLU;

	t70 = (x281^(x282|(x283|x284)));

	if (t70 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = 55;
	static int64_t x287 = 18267796LL;
	static volatile int64_t t71 = -53LL;

	t71 = (x285^(x286|(x287|x288)));

	if (t71 != -56LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -1;
	int8_t x291 = INT8_MAX;
	volatile int64_t t72 = 6596LL;

	t72 = (x289^(x290|(x291|x292)));

	if (t72 != 34360164864LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x294 = 700541300181LL;
	volatile uint8_t x295 = 9U;
	uint8_t x296 = UINT8_MAX;
	volatile int64_t t73 = -170964LL;

	t73 = (x293^(x294|(x295|x296)));

	if (t73 != -700541276673LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = 41;
	volatile int64_t x298 = INT64_MIN;
	int16_t x299 = -1275;
	static uint64_t t74 = 51482LLU;

	t74 = (x297^(x298|(x299|x300)));

	if (t74 != 18446744073709551396LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MAX;
	static int32_t x302 = -1;
	volatile uint8_t x303 = 23U;
	static volatile int16_t x304 = -1;
	volatile int64_t t75 = INT64_MIN;

	t75 = (x301^(x302|(x303|x304)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = 233LL;
	static uint64_t x306 = 72LLU;
	static volatile uint64_t t76 = 2294014329148898LLU;

	t76 = (x305^(x306|(x307|x308)));

	if (t76 != 18446744073709551399LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	volatile uint8_t x310 = UINT8_MAX;
	uint32_t x311 = 3U;
	volatile int32_t x312 = -53429838;
	uint32_t t77 = 58546754U;

	t77 = (x309^(x310|(x311|x312)));

	if (t77 != 4241537280U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = INT16_MIN;
	static volatile int64_t x316 = INT64_MIN;
	int64_t t78 = -16210705LL;

	t78 = (x313^(x314|(x315|x316)));

	if (t78 != -20040LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 231812731572072646LLU;
	static int8_t x318 = INT8_MIN;
	uint64_t x319 = 399182LLU;
	uint64_t t79 = 184662029245284538LLU;

	t79 = (x317^(x318|(x319|x320)));

	if (t79 != 18214931342137478920LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = INT16_MIN;
	int32_t x322 = -1;
	int16_t x324 = INT16_MIN;
	uint64_t t80 = 2662977LLU;

	t80 = (x321^(x322|(x323|x324)));

	if (t80 != 32767LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x327 = 0;
	volatile uint64_t t81 = 4197247959715LLU;

	t81 = (x325^(x326|(x327|x328)));

	if (t81 != 19968LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x330 = -1;
	int16_t x331 = 2516;
	static volatile int16_t x332 = 1605;
	int64_t t82 = -16907295783LL;

	t82 = (x329^(x330|(x331|x332)));

	if (t82 != -4177193539LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = -1LL;
	static int16_t x334 = INT16_MAX;
	static int8_t x335 = INT8_MIN;
	uint32_t x336 = 130804400U;
	volatile int64_t t83 = -70382997806363305LL;

	t83 = (x333^(x334|(x335|x336)));

	if (t83 != -4294967296LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	volatile int64_t t84 = 8995257787952305LL;

	t84 = (x337^(x338|(x339|x340)));

	if (t84 != 1149918305LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x342 = 97U;
	static int32_t x344 = 333;

	t85 = (x341^(x342|(x343|x344)));

	if (t85 != -2147483265) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = INT16_MAX;
	int16_t x348 = 2;

	t86 = (x345^(x346|(x347|x348)));

	if (t86 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 8U;
	int16_t x351 = INT16_MAX;
	uint32_t x352 = 9334600U;
	static volatile uint32_t t87 = 83235U;

	t87 = (x349^(x350|(x351|x352)));

	if (t87 != 9338871U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 2525581777287164LLU;
	static int16_t x354 = -1;
	int8_t x355 = 0;

	t88 = (x353^(x354|(x355|x356)));

	if (t88 != 18444218491932264451LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = INT8_MAX;
	uint16_t x359 = 30U;
	uint64_t x360 = 14821693279425421LLU;
	static volatile uint64_t t89 = 1192946LLU;

	t89 = (x357^(x358|(x359|x360)));

	if (t89 != 14821693279382528LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 53U;
	static int32_t x362 = -1;
	volatile int64_t x363 = -329835018LL;
	int32_t x364 = INT32_MAX;
	static int64_t t90 = 7602654451LL;

	t90 = (x361^(x362|(x363|x364)));

	if (t90 != -54LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	uint64_t x366 = UINT64_MAX;
	int32_t x367 = -1;
	volatile int32_t x368 = -1;
	uint64_t t91 = 1885159117264LLU;

	t91 = (x365^(x366|(x367|x368)));

	if (t91 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = 127660;
	int32_t x371 = -7297117;

	t92 = (x369^(x370|(x371|x372)));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x374 = 12117U;
	uint16_t x375 = 28U;
	static uint64_t x376 = 790541311LLU;

	t93 = (x373^(x374|(x375|x376)));

	if (t93 != 793554345LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	static int64_t x378 = INT64_MIN;
	uint64_t x379 = UINT64_MAX;
	int64_t x380 = INT64_MIN;
	uint64_t t94 = 498012933LLU;

	t94 = (x377^(x378|(x379|x380)));

	if (t94 != 127LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 486LLU;
	int8_t x382 = -3;
	int64_t x383 = INT64_MAX;
	uint8_t x384 = 22U;
	static volatile uint64_t t95 = 3587160LLU;

	t95 = (x381^(x382|(x383|x384)));

	if (t95 != 18446744073709551129LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 83057U;
	int32_t x386 = -902;
	int16_t x387 = INT16_MIN;
	volatile int16_t x388 = -1042;
	uint32_t t96 = 78068U;

	t96 = (x385^(x386|(x387|x388)));

	if (t96 != 4294884239U) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = INT16_MIN;
	static int8_t x390 = 2;
	static int32_t t97 = -1;

	t97 = (x389^(x390|(x391|x392)));

	if (t97 != 2147451007) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = UINT16_MAX;
	int8_t x395 = 2;
	volatile int32_t t98 = -36;

	t98 = (x393^(x394|(x395|x396)));

	if (t98 != -65536) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x398 = 3728924U;
	uint16_t x400 = 1U;
	static volatile int64_t t99 = 1923813395LL;

	t99 = (x397^(x398|(x399|x400)));

	if (t99 != 2378510312501151LL) { NG(); } else { ; }
	
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

