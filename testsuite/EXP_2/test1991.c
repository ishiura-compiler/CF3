#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = 1;
static volatile int16_t x7 = INT16_MAX;
int32_t t1 = 3438520;
static int64_t x15 = -194704188255LL;
static int32_t x35 = -1;
int64_t x36 = -1LL;
int32_t x39 = -1;
static int16_t x46 = 1315;
volatile int16_t x48 = -1;
uint8_t x50 = 12U;
uint16_t x52 = 874U;
int64_t x53 = -11LL;
static uint8_t x57 = 85U;
volatile int32_t t13 = 30;
volatile uint64_t t14 = 6145291487496698063LLU;
static uint8_t x72 = 26U;
static uint32_t x79 = 3U;
volatile uint32_t t18 = 1082781U;
int16_t x82 = INT16_MIN;
int16_t x83 = INT16_MIN;
int32_t x87 = 89141;
volatile int64_t t20 = 31150004LL;
static uint64_t x90 = 196111LLU;
uint16_t x91 = 31893U;
uint8_t x92 = 1U;
uint64_t t22 = 14104537LLU;
volatile int64_t x97 = 1LL;
uint32_t x99 = UINT32_MAX;
static int64_t x102 = 3634654916876448LL;
volatile uint64_t x105 = 257290LLU;
volatile int32_t t28 = -18;
int64_t x121 = INT64_MIN;
volatile uint16_t x127 = UINT16_MAX;
static int32_t t30 = 252168;
uint8_t x139 = 9U;
uint32_t x140 = 8709682U;
uint8_t x142 = UINT8_MAX;
static int64_t x150 = -1LL;
int16_t x164 = -1;
int32_t x167 = 1374;
uint16_t x168 = 26360U;
int16_t x169 = -2097;
int16_t x171 = INT16_MAX;
int64_t t41 = -10911893084LL;
int16_t x176 = -1;
int32_t x184 = INT32_MIN;
volatile int64_t t46 = -39498109060LL;
static int8_t x201 = INT8_MIN;
int32_t x202 = INT32_MIN;
int32_t x204 = INT32_MIN;
int8_t x209 = 15;
static volatile uint16_t x211 = 3176U;
int32_t x220 = -638633;
static uint32_t x222 = UINT32_MAX;
int8_t x226 = -1;
static int16_t x229 = -109;
static volatile int8_t x230 = INT8_MIN;
uint8_t x231 = UINT8_MAX;
volatile uint32_t t56 = 101388U;
static int64_t x238 = 896852LL;
static volatile int16_t x240 = INT16_MAX;
int8_t x248 = -7;
volatile uint32_t t60 = 61945U;
static uint8_t x259 = 63U;
int8_t x261 = INT8_MIN;
int64_t x262 = INT64_MIN;
int32_t x265 = INT32_MAX;
int8_t x272 = INT8_MAX;
static uint16_t x273 = UINT16_MAX;
int64_t x276 = -1488237062760608LL;
uint8_t x279 = 70U;
int16_t x286 = INT16_MIN;
int64_t x287 = -10LL;
int8_t x288 = 1;
int16_t x291 = INT16_MIN;
int8_t x297 = INT8_MIN;
volatile int32_t x303 = INT32_MAX;
uint32_t t71 = 23U;
int16_t x305 = INT16_MIN;
static uint64_t x310 = UINT64_MAX;
int16_t x313 = INT16_MIN;
uint16_t x314 = UINT16_MAX;
int32_t x323 = INT32_MIN;
int32_t x328 = INT32_MIN;
int8_t x330 = -1;
uint16_t x331 = 12512U;
int16_t x335 = INT16_MIN;
uint32_t x343 = UINT32_MAX;
volatile uint64_t t80 = 16362127LLU;
int8_t x349 = INT8_MAX;
uint32_t x352 = UINT32_MAX;
volatile int8_t x357 = -1;
int32_t x359 = 8245145;
static int64_t x364 = INT64_MAX;
volatile int64_t t84 = -110583887030116LL;
int32_t x365 = INT32_MAX;
int8_t x366 = INT8_MIN;
uint64_t t85 = 8649550316244800LLU;
int32_t x369 = INT32_MIN;
volatile int32_t t87 = -49337;
int32_t t89 = 3;
int32_t x389 = -1;
int32_t x396 = INT32_MAX;
int32_t x397 = -1;
static int16_t x405 = 123;
volatile int16_t x407 = -1;
uint64_t x410 = 151112605579LLU;
volatile uint32_t t96 = 355U;
volatile int8_t x417 = -47;
volatile int64_t t97 = 31742725948484LL;
int8_t x423 = INT8_MAX;


void f0(void) {
	int16_t x2 = INT16_MAX;
	static uint64_t x3 = 2LLU;
	int8_t x4 = INT8_MAX;
	uint64_t t0 = 568638LLU;

	t0 = ((x1&(x2|x3))-x4);

	if (t0 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	static volatile int16_t x6 = -1;
	int16_t x8 = INT16_MIN;

	t1 = ((x5&(x6|x7))-x8);

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 14496U;
	uint16_t x10 = UINT16_MAX;
	int32_t x11 = INT32_MAX;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = 64;

	t2 = ((x9&(x10|x11))-x12);

	if (t2 != 14241) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 7U;
	volatile int64_t x14 = INT64_MIN;
	uint32_t x16 = 1171U;
	int64_t t3 = -555086524LL;

	t3 = ((x13&(x14|x15))-x16);

	if (t3 != -1170LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 69971225144835LLU;
	int64_t x18 = INT64_MIN;
	int64_t x19 = -1LL;
	static int64_t x20 = INT64_MIN;
	uint64_t t4 = 64639714066LLU;

	t4 = ((x17&(x18|x19))-x20);

	if (t4 != 9223442008079920643LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	uint64_t x22 = 221726934374116770LLU;
	int16_t x23 = 14;
	int16_t x24 = INT16_MIN;
	uint64_t t5 = 61LLU;

	t5 = ((x21&(x22|x23))-x24);

	if (t5 != 221726934374149550LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -321897084;
	int64_t x26 = -1LL;
	uint64_t x27 = 409400512290048175LLU;
	volatile int16_t x28 = 21;
	volatile uint64_t t6 = 13LLU;

	t6 = ((x25&(x26|x27))-x28);

	if (t6 != 18446744073387654511LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	static volatile uint8_t x34 = 1U;
	volatile int64_t t7 = 88847932736LL;

	t7 = ((x33&(x34|x35))-x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x37 = UINT32_MAX;
	static int16_t x38 = -1;
	int32_t x40 = INT32_MAX;
	uint32_t t8 = 35490369U;

	t8 = ((x37&(x38|x39))-x40);

	if (t8 != 2147483648U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = UINT32_MAX;
	int16_t x42 = INT16_MIN;
	uint32_t x43 = UINT32_MAX;
	int8_t x44 = INT8_MIN;
	uint32_t t9 = 6U;

	t9 = ((x41&(x42|x43))-x44);

	if (t9 != 127U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -34;
	int8_t x47 = -1;
	int32_t t10 = -2;

	t10 = ((x45&(x46|x47))-x48);

	if (t10 != -33) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x49 = INT32_MIN;
	volatile uint64_t x51 = 348474296LLU;
	uint64_t t11 = 807315909LLU;

	t11 = ((x49&(x50|x51))-x52);

	if (t11 != 18446744073709550742LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x54 = 7315U;
	uint32_t x55 = UINT32_MAX;
	uint16_t x56 = 31U;
	volatile int64_t t12 = 57883504543677LL;

	t12 = ((x53&(x54|x55))-x56);

	if (t12 != 4294967254LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x58 = -1;
	volatile uint16_t x59 = 174U;
	int8_t x60 = INT8_MAX;

	t13 = ((x57&(x58|x59))-x60);

	if (t13 != -42) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	volatile uint64_t x62 = 2055342551333LLU;
	static int16_t x63 = 0;
	static volatile int8_t x64 = 18;

	t14 = ((x61&(x62|x63))-x64);

	if (t14 != 2055141851118LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x65 = 187U;
	int8_t x66 = INT8_MIN;
	uint16_t x67 = UINT16_MAX;
	uint64_t x68 = 69165LLU;
	volatile uint64_t t15 = 134426698463LLU;

	t15 = ((x65&(x66|x67))-x68);

	if (t15 != 18446744073709482638LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MAX;
	static int16_t x70 = INT16_MIN;
	static int64_t x71 = INT64_MIN;
	int64_t t16 = 3890034230655LL;

	t16 = ((x69&(x70|x71))-x72);

	if (t16 != -26LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x73 = INT64_MIN;
	static int32_t x74 = INT32_MIN;
	volatile int8_t x75 = -10;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t17 = 101LLU;

	t17 = ((x73&(x74|x75))-x76);

	if (t17 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 126;
	volatile int32_t x78 = INT32_MIN;
	int8_t x80 = 4;

	t18 = ((x77&(x78|x79))-x80);

	if (t18 != 4294967294U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = 82;
	uint32_t x84 = 1692147829U;
	volatile uint32_t t19 = 24057U;

	t19 = ((x81&(x82|x83))-x84);

	if (t19 != 2602819467U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = 6U;
	volatile int64_t x86 = -1LL;
	int32_t x88 = -16342655;

	t20 = ((x85&(x86|x87))-x88);

	if (t20 != 16342661LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	uint64_t t21 = 143565639901LLU;

	t21 = ((x89&(x90|x91))-x92);

	if (t21 != 196223LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = INT16_MIN;
	uint64_t x94 = 0LLU;
	static uint16_t x95 = 1307U;
	volatile uint16_t x96 = 1941U;

	t22 = ((x93&(x94|x95))-x96);

	if (t22 != 18446744073709549675LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x98 = UINT16_MAX;
	static uint16_t x100 = 110U;
	static volatile int64_t t23 = -785LL;

	t23 = ((x97&(x98|x99))-x100);

	if (t23 != -109LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = 568;
	volatile uint32_t x103 = UINT32_MAX;
	int16_t x104 = INT16_MAX;
	volatile int64_t t24 = -18161647064252LL;

	t24 = ((x101&(x102|x103))-x104);

	if (t24 != -32199LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x106 = -1;
	int64_t x107 = INT64_MIN;
	static int64_t x108 = 14411253400511405LL;
	volatile uint64_t t25 = 24342LLU;

	t25 = ((x105&(x106|x107))-x108);

	if (t25 != 18432332820309297501LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = 0;
	volatile uint16_t x110 = 0U;
	int8_t x111 = -1;
	static int16_t x112 = 117;
	int32_t t26 = -26408;

	t26 = ((x109&(x110|x111))-x112);

	if (t26 != -117) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = -165955785317684LL;
	static int8_t x114 = 6;
	volatile uint8_t x115 = 2U;
	int8_t x116 = INT8_MAX;
	int64_t t27 = -14LL;

	t27 = ((x113&(x114|x115))-x116);

	if (t27 != -123LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MIN;
	uint8_t x118 = 0U;
	int8_t x119 = INT8_MAX;
	int16_t x120 = INT16_MIN;

	t28 = ((x117&(x118|x119))-x120);

	if (t28 != 32768) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x122 = INT16_MIN;
	uint32_t x123 = 69242314U;
	static uint32_t x124 = 6U;
	int64_t t29 = 4264695717020615199LL;

	t29 = ((x121&(x122|x123))-x124);

	if (t29 != -6LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x125 = INT16_MIN;
	int8_t x126 = INT8_MAX;
	uint8_t x128 = 91U;

	t30 = ((x125&(x126|x127))-x128);

	if (t30 != 32677) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x129 = INT16_MAX;
	int64_t x130 = INT64_MIN;
	static volatile int16_t x131 = -1;
	uint8_t x132 = 1U;
	volatile int64_t t31 = 2396651446933407LL;

	t31 = ((x129&(x130|x131))-x132);

	if (t31 != 32766LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = 24;
	volatile uint64_t x134 = 213512788957685LLU;
	int64_t x135 = INT64_MAX;
	volatile uint64_t x136 = 73LLU;
	uint64_t t32 = 5301886164748LLU;

	t32 = ((x133&(x134|x135))-x136);

	if (t32 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MAX;
	int16_t x138 = INT16_MAX;
	uint32_t t33 = 5992111U;

	t33 = ((x137&(x138|x139))-x140);

	if (t33 != 4286257741U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	uint16_t x143 = 22591U;
	int16_t x144 = INT16_MIN;
	volatile int32_t t34 = -5;

	t34 = ((x141&(x142|x143))-x144);

	if (t34 != 55551) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MIN;
	static int8_t x146 = -6;
	int64_t x147 = INT64_MIN;
	volatile uint8_t x148 = 0U;
	volatile int64_t t35 = INT64_MIN;

	t35 = ((x145&(x146|x147))-x148);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x149 = UINT8_MAX;
	int16_t x151 = -1;
	static volatile uint16_t x152 = UINT16_MAX;
	static int64_t t36 = -7568290885386195LL;

	t36 = ((x149&(x150|x151))-x152);

	if (t36 != -65280LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = -1LL;
	uint8_t x154 = 1U;
	int8_t x155 = INT8_MAX;
	uint16_t x156 = 0U;
	volatile int64_t t37 = 0LL;

	t37 = ((x153&(x154|x155))-x156);

	if (t37 != 127LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -3;
	int8_t x158 = INT8_MAX;
	static uint64_t x159 = 9121602982568534661LLU;
	int16_t x160 = INT16_MAX;
	volatile uint64_t t38 = 1729549314LLU;

	t38 = ((x157&(x158|x159))-x160);

	if (t38 != 9121602982568502014LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x161 = INT16_MIN;
	static uint16_t x162 = 65U;
	int8_t x163 = 0;
	static int32_t t39 = -4800;

	t39 = ((x161&(x162|x163))-x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x165 = INT64_MAX;
	volatile int32_t x166 = 124441116;
	volatile int64_t t40 = -4274450LL;

	t40 = ((x165&(x166|x167))-x168);

	if (t40 != 124416102LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x170 = -1LL;
	volatile int64_t x172 = 3791344692LL;

	t41 = ((x169&(x170|x171))-x172);

	if (t41 != -3791346789LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x173 = 61973U;
	static int64_t x174 = -1LL;
	static uint16_t x175 = UINT16_MAX;
	int64_t t42 = -137888703719LL;

	t42 = ((x173&(x174|x175))-x176);

	if (t42 != 61974LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x177 = INT16_MIN;
	int64_t x178 = -1LL;
	static int8_t x179 = -1;
	int8_t x180 = INT8_MIN;
	int64_t t43 = -5LL;

	t43 = ((x177&(x178|x179))-x180);

	if (t43 != -32640LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x181 = INT32_MIN;
	int32_t x182 = -2547;
	volatile uint16_t x183 = 1218U;
	volatile int32_t t44 = -544198114;

	t44 = ((x181&(x182|x183))-x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x185 = -1LL;
	uint64_t x186 = 822469250762517580LLU;
	static volatile int32_t x187 = INT32_MIN;
	uint8_t x188 = UINT8_MAX;
	volatile uint64_t t45 = 1916468478664LLU;

	t45 = ((x185&(x186|x187))-x188);

	if (t45 != 18446744071736240973LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = UINT8_MAX;
	volatile uint16_t x190 = 0U;
	int32_t x191 = INT32_MIN;
	int64_t x192 = -728742469934747LL;

	t46 = ((x189&(x190|x191))-x192);

	if (t46 != 728742469934747LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x197 = INT64_MIN;
	static int16_t x198 = -14;
	static uint8_t x199 = 9U;
	volatile int16_t x200 = -1;
	volatile int64_t t47 = -1947677LL;

	t47 = ((x197&(x198|x199))-x200);

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x203 = 201301U;
	volatile uint32_t t48 = 0U;

	t48 = ((x201&(x202|x203))-x204);

	if (t48 != 201216U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MIN;
	static int8_t x206 = 0;
	uint16_t x207 = 487U;
	volatile int16_t x208 = -535;
	int64_t t49 = -3712LL;

	t49 = ((x205&(x206|x207))-x208);

	if (t49 != 535LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x210 = INT32_MAX;
	int8_t x212 = 5;
	volatile int32_t t50 = -36;

	t50 = ((x209&(x210|x211))-x212);

	if (t50 != 10) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = UINT8_MAX;
	int8_t x214 = -12;
	volatile uint32_t x215 = UINT32_MAX;
	uint64_t x216 = UINT64_MAX;
	volatile uint64_t t51 = 3108587125418139LLU;

	t51 = ((x213&(x214|x215))-x216);

	if (t51 != 256LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x217 = -2;
	uint32_t x218 = 48375867U;
	int16_t x219 = -185;
	uint32_t t52 = 460U;

	t52 = ((x217&(x218|x219))-x220);

	if (t52 != 638503U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x221 = 1836329U;
	int8_t x223 = -2;
	volatile uint64_t x224 = UINT64_MAX;
	uint64_t t53 = 15116066LLU;

	t53 = ((x221&(x222|x223))-x224);

	if (t53 != 1836330LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = -3875;
	int32_t x227 = -1;
	int32_t x228 = -3864;
	int32_t t54 = -8360628;

	t54 = ((x225&(x226|x227))-x228);

	if (t54 != -11) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x232 = UINT16_MAX;
	int32_t t55 = 114146;

	t55 = ((x229&(x230|x231))-x232);

	if (t55 != -65644) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x233 = INT8_MAX;
	int32_t x234 = -1;
	uint32_t x235 = 15444U;
	volatile int8_t x236 = -18;

	t56 = ((x233&(x234|x235))-x236);

	if (t56 != 145U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = 1886373434980140LL;
	uint16_t x239 = UINT16_MAX;
	volatile int64_t t57 = -3050706LL;

	t57 = ((x237&(x238|x239))-x240);

	if (t57 != 63277LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x241 = 0U;
	uint32_t x242 = 124674U;
	volatile int64_t x243 = INT64_MAX;
	uint16_t x244 = UINT16_MAX;
	volatile int64_t t58 = -58243445LL;

	t58 = ((x241&(x242|x243))-x244);

	if (t58 != -65535LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x245 = 1U;
	uint32_t x246 = 16302U;
	int64_t x247 = 29234276LL;
	int64_t t59 = 6336061426719LL;

	t59 = ((x245&(x246|x247))-x248);

	if (t59 != 7LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MIN;
	int32_t x251 = INT32_MIN;
	uint32_t x252 = UINT32_MAX;

	t60 = ((x249&(x250|x251))-x252);

	if (t60 != 4294967169U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x257 = INT16_MAX;
	uint64_t x258 = UINT64_MAX;
	uint64_t x260 = 5799345520510LLU;
	volatile uint64_t t61 = 1917439LLU;

	t61 = ((x257&(x258|x259))-x260);

	if (t61 != 18446738274364063873LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x263 = 1310720607112265942LLU;
	volatile uint64_t x264 = UINT64_MAX;
	volatile uint64_t t62 = 60316365LLU;

	t62 = ((x261&(x262|x263))-x264);

	if (t62 != 10534092643967041665LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x266 = 0;
	int32_t x267 = 127;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t63 = 154938317;

	t63 = ((x265&(x266|x267))-x268);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = -2;
	static int64_t x270 = 0LL;
	int8_t x271 = -1;
	volatile int64_t t64 = -81540LL;

	t64 = ((x269&(x270|x271))-x272);

	if (t64 != -129LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x274 = INT32_MAX;
	int8_t x275 = INT8_MIN;
	volatile int64_t t65 = -114LL;

	t65 = ((x273&(x274|x275))-x276);

	if (t65 != 1488237062826143LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x277 = -628376507;
	uint64_t x278 = 769438727488168654LLU;
	int32_t x280 = 1085;
	uint64_t t66 = 705LLU;

	t66 = ((x277&(x278|x279))-x280);

	if (t66 != 769438726878665735LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x285 = INT32_MIN;
	int64_t t67 = 13854357LL;

	t67 = ((x285&(x286|x287))-x288);

	if (t67 != -2147483649LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x289 = UINT8_MAX;
	int16_t x290 = INT16_MAX;
	uint32_t x292 = UINT32_MAX;
	uint32_t t68 = 1657169101U;

	t68 = ((x289&(x290|x291))-x292);

	if (t68 != 256U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = -1;
	uint64_t x294 = UINT64_MAX;
	static int8_t x295 = 1;
	uint8_t x296 = UINT8_MAX;
	uint64_t t69 = 8636560544673040411LLU;

	t69 = ((x293&(x294|x295))-x296);

	if (t69 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x298 = 449U;
	static uint64_t x299 = UINT64_MAX;
	static int64_t x300 = 698LL;
	uint64_t t70 = 4004241971LLU;

	t70 = ((x297&(x298|x299))-x300);

	if (t70 != 18446744073709550790LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x301 = UINT32_MAX;
	static int8_t x302 = INT8_MIN;
	static int8_t x304 = INT8_MIN;

	t71 = ((x301&(x302|x303))-x304);

	if (t71 != 127U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x306 = -1LL;
	static int16_t x307 = INT16_MIN;
	volatile uint8_t x308 = UINT8_MAX;
	int64_t t72 = 43619580720597LL;

	t72 = ((x305&(x306|x307))-x308);

	if (t72 != -33023LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x309 = 1240823439U;
	int32_t x311 = 21;
	volatile int64_t x312 = INT64_MIN;
	uint64_t t73 = 22764356354201774LLU;

	t73 = ((x309&(x310|x311))-x312);

	if (t73 != 9223372038095599247LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x315 = INT8_MIN;
	int16_t x316 = INT16_MIN;
	int32_t t74 = -4;

	t74 = ((x313&(x314|x315))-x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x321 = INT16_MIN;
	int8_t x322 = INT8_MIN;
	int64_t x324 = INT64_MIN;
	volatile int64_t t75 = -648LL;

	t75 = ((x321&(x322|x323))-x324);

	if (t75 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x325 = 1469U;
	uint8_t x326 = 2U;
	uint32_t x327 = 24U;
	static volatile uint32_t t76 = 61684872U;

	t76 = ((x325&(x326|x327))-x328);

	if (t76 != 2147483672U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = INT16_MAX;
	static int16_t x332 = -1;
	int32_t t77 = -2490252;

	t77 = ((x329&(x330|x331))-x332);

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x333 = -1;
	int16_t x334 = 611;
	int64_t x336 = -1790100LL;
	int64_t t78 = -68LL;

	t78 = ((x333&(x334|x335))-x336);

	if (t78 != 1757943LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = INT16_MIN;
	volatile uint8_t x338 = 0U;
	static int16_t x339 = 32;
	uint8_t x340 = UINT8_MAX;
	int32_t t79 = -1;

	t79 = ((x337&(x338|x339))-x340);

	if (t79 != -255) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x341 = 67U;
	int32_t x342 = -1;
	volatile uint64_t x344 = 417427005547785999LLU;

	t80 = ((x341&(x342|x343))-x344);

	if (t80 != 18029317068161765684LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x350 = 128116U;
	int64_t x351 = 3963LL;
	static int64_t t81 = -4708284003LL;

	t81 = ((x349&(x350|x351))-x352);

	if (t81 != -4294967168LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x353 = INT32_MIN;
	uint8_t x354 = 2U;
	int8_t x355 = 0;
	volatile uint32_t x356 = 472U;
	volatile uint32_t t82 = 75U;

	t82 = ((x353&(x354|x355))-x356);

	if (t82 != 4294966824U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x358 = -2473;
	volatile int32_t x360 = INT32_MIN;
	static volatile int32_t t83 = -250;

	t83 = ((x357&(x358|x359))-x360);

	if (t83 != 2147483615) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x361 = 2U;
	int32_t x362 = -122;
	int8_t x363 = 5;

	t84 = ((x361&(x362|x363))-x364);

	if (t84 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x367 = 1222LLU;
	int16_t x368 = INT16_MIN;

	t85 = ((x365&(x366|x367))-x368);

	if (t85 != 2147516358LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x370 = INT32_MAX;
	uint16_t x371 = UINT16_MAX;
	int16_t x372 = INT16_MAX;
	int32_t t86 = 420963;

	t86 = ((x369&(x370|x371))-x372);

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x373 = INT8_MIN;
	int16_t x374 = 93;
	static int32_t x375 = INT32_MAX;
	uint16_t x376 = UINT16_MAX;

	t87 = ((x373&(x374|x375))-x376);

	if (t87 != 2147417985) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x377 = 14595388149987LLU;
	static volatile uint8_t x378 = 7U;
	int64_t x379 = INT64_MAX;
	int32_t x380 = -7519;
	uint64_t t88 = 341LLU;

	t88 = ((x377&(x378|x379))-x380);

	if (t88 != 14595388157506LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x381 = -1;
	volatile uint8_t x382 = 66U;
	int8_t x383 = INT8_MAX;
	volatile int32_t x384 = 0;

	t89 = ((x381&(x382|x383))-x384);

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x385 = 381785LLU;
	static uint32_t x386 = UINT32_MAX;
	volatile uint8_t x387 = 51U;
	int32_t x388 = INT32_MIN;
	volatile uint64_t t90 = 288528862190486LLU;

	t90 = ((x385&(x386|x387))-x388);

	if (t90 != 2147865433LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x390 = 1194U;
	static uint64_t x391 = 16425LLU;
	int8_t x392 = INT8_MIN;
	static uint64_t t91 = 285775669182422355LLU;

	t91 = ((x389&(x390|x391))-x392);

	if (t91 != 17707LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x393 = -1;
	int64_t x394 = INT64_MAX;
	volatile uint8_t x395 = 0U;
	volatile int64_t t92 = -12200070702814619LL;

	t92 = ((x393&(x394|x395))-x396);

	if (t92 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x398 = 61U;
	uint64_t x399 = 810898867602146649LLU;
	int8_t x400 = -1;
	volatile uint64_t t93 = 12503662139011LLU;

	t93 = ((x397&(x398|x399))-x400);

	if (t93 != 810898867602146686LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x406 = INT16_MIN;
	static uint8_t x408 = 62U;
	int32_t t94 = -1;

	t94 = ((x405&(x406|x407))-x408);

	if (t94 != 61) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x409 = 1050U;
	int32_t x411 = INT32_MIN;
	uint8_t x412 = 0U;
	uint64_t t95 = 3836547588213652LLU;

	t95 = ((x409&(x410|x411))-x412);

	if (t95 != 1034LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x413 = INT8_MIN;
	uint8_t x414 = 4U;
	uint32_t x415 = UINT32_MAX;
	int32_t x416 = 1688192;

	t96 = ((x413&(x414|x415))-x416);

	if (t96 != 4293278976U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x418 = INT8_MAX;
	int32_t x419 = INT32_MIN;
	volatile int64_t x420 = INT64_MIN;

	t97 = ((x417&(x418|x419))-x420);

	if (t97 != 9223372034707292241LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x421 = UINT16_MAX;
	int64_t x422 = -1LL;
	volatile uint32_t x424 = UINT32_MAX;
	int64_t t98 = 333582980854LL;

	t98 = ((x421&(x422|x423))-x424);

	if (t98 != -4294901760LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = INT64_MAX;
	static int32_t x426 = INT32_MAX;
	volatile uint32_t x427 = 24996U;
	int8_t x428 = INT8_MIN;
	volatile int64_t t99 = 0LL;

	t99 = ((x425&(x426|x427))-x428);

	if (t99 != 2147483775LL) { NG(); } else { ; }
	
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

