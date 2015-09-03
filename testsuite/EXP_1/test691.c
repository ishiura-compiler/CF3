#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 3;
volatile uint64_t x2 = UINT64_MAX;
volatile uint64_t x4 = 192234433990LLU;
static int16_t x7 = 11;
int8_t x8 = -12;
uint32_t x10 = 557U;
uint32_t x21 = UINT32_MAX;
int64_t x26 = -1LL;
static int64_t t5 = 6247615211LL;
static int8_t x35 = -1;
volatile uint64_t x37 = UINT64_MAX;
uint64_t x49 = 165LLU;
volatile uint64_t t11 = 23LLU;
int16_t x56 = 7501;
uint64_t x61 = 2031561099LLU;
static uint16_t x62 = UINT16_MAX;
int8_t x64 = -1;
volatile uint64_t t13 = 8164LLU;
int16_t x67 = INT16_MAX;
uint32_t x83 = 779U;
uint32_t t17 = 1408080U;
static uint32_t x100 = 2U;
int64_t x101 = INT64_MAX;
int16_t x103 = -1;
static int16_t x105 = -1;
static int8_t x128 = -1;
int16_t x130 = -7134;
uint32_t x141 = 0U;
static int16_t x142 = -157;
static volatile int8_t x145 = INT8_MIN;
volatile uint32_t x146 = 5U;
int32_t x156 = 0;
volatile int64_t t34 = 973LL;
uint64_t x158 = 12LLU;
uint32_t x160 = 4739U;
volatile uint64_t t35 = 357660794879110341LLU;
static volatile uint64_t x172 = 18179072571LLU;
int16_t x173 = INT16_MIN;
volatile int16_t x179 = -797;
int8_t x181 = INT8_MIN;
uint64_t t41 = 7130682898017LLU;
uint32_t x186 = 1U;
uint64_t x187 = 1895895136421615LLU;
uint64_t t42 = 4834478LLU;
int16_t x192 = INT16_MIN;
uint16_t x231 = 227U;
volatile int32_t x232 = 306;
static int64_t t53 = 77927173915LL;
int32_t x237 = INT32_MIN;
volatile int32_t x250 = INT32_MIN;
static int64_t x253 = INT64_MAX;
static int16_t x258 = INT16_MIN;
static int32_t x261 = -13;
uint8_t x263 = UINT8_MAX;
static uint64_t x264 = 33057249204LLU;
uint64_t x268 = 26613LLU;
uint64_t x272 = 30184218446111LLU;
int32_t x273 = -41339;
static uint64_t t63 = 3985344122022677318LLU;
static uint64_t x291 = UINT64_MAX;
int32_t x301 = 5194455;
int32_t x307 = -9913;
static int32_t t72 = 462913230;
static volatile int64_t x319 = -1LL;
int16_t x322 = -433;
static uint64_t t78 = 2116718000143090LLU;
uint16_t x345 = 8064U;
uint64_t x347 = 466306330LLU;
volatile int16_t x350 = INT16_MIN;
int16_t x371 = INT16_MIN;
uint8_t x372 = 19U;
uint32_t x375 = UINT32_MAX;
int8_t x392 = -1;
static int32_t x395 = 2599;
int64_t x397 = INT64_MAX;
uint8_t x398 = 17U;
int32_t x399 = INT32_MIN;
int32_t t92 = -84;
static int16_t x405 = -12654;
volatile int32_t t94 = 47353;
volatile uint64_t x414 = 514563LLU;
int8_t x416 = -43;
volatile uint64_t t95 = 1021719LLU;
static volatile uint8_t x430 = 11U;


void f0(void) {
	int8_t x3 = -1;
	volatile uint64_t t0 = 835LLU;

	t0 = (((x1%x2)-x3)-x4);

	if (t0 != 18446743881475117630LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int32_t x6 = 1471;
	int32_t t1 = -50107588;

	t1 = (((x5%x6)-x7)-x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -5597;
	uint16_t x11 = UINT16_MAX;
	static int64_t x12 = 68745340114LL;
	int64_t t2 = 209LL;

	t2 = (((x9%x10)-x11)-x12);

	if (t2 != -64450437928LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x17 = UINT16_MAX;
	static volatile uint16_t x18 = UINT16_MAX;
	uint8_t x19 = 92U;
	int64_t x20 = 8789874650299LL;
	volatile int64_t t3 = 464820192564LL;

	t3 = (((x17%x18)-x19)-x20);

	if (t3 != -8789874650391LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x22 = -1;
	volatile int8_t x23 = -1;
	static int32_t x24 = INT32_MIN;
	uint32_t t4 = 498645984U;

	t4 = (((x21%x22)-x23)-x24);

	if (t4 != 2147483649U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 0U;
	int8_t x27 = INT8_MIN;
	uint8_t x28 = 3U;

	t5 = (((x25%x26)-x27)-x28);

	if (t5 != 125LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	int8_t x30 = 2;
	int16_t x31 = INT16_MIN;
	uint8_t x32 = 0U;
	volatile int32_t t6 = 6;

	t6 = (((x29%x30)-x31)-x32);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	int32_t x34 = INT32_MAX;
	volatile int32_t x36 = -1;
	static int64_t t7 = -1378812519LL;

	t7 = (((x33%x34)-x35)-x36);

	if (t7 != 3LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x38 = 851U;
	uint64_t x39 = 333360LLU;
	volatile uint64_t x40 = UINT64_MAX;
	volatile uint64_t t8 = 2051467598495918708LLU;

	t8 = (((x37%x38)-x39)-x40);

	if (t8 != 18446744073709218860LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	volatile uint64_t x42 = UINT64_MAX;
	int64_t x43 = INT64_MIN;
	static uint16_t x44 = UINT16_MAX;
	static volatile uint64_t t9 = 322986638935LLU;

	t9 = (((x41%x42)-x43)-x44);

	if (t9 != 9223372034707226625LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = UINT16_MAX;
	uint16_t x46 = 757U;
	int16_t x47 = 1;
	int8_t x48 = INT8_MAX;
	volatile int32_t t10 = 0;

	t10 = (((x45%x46)-x47)-x48);

	if (t10 != 305) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x50 = INT32_MIN;
	volatile int8_t x51 = 0;
	uint16_t x52 = 44U;

	t11 = (((x49%x50)-x51)-x52);

	if (t11 != 121LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = INT8_MIN;
	volatile uint8_t x54 = 25U;
	volatile int8_t x55 = INT8_MAX;
	int32_t t12 = 47046107;

	t12 = (((x53%x54)-x55)-x56);

	if (t12 != -7631) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x63 = UINT32_MAX;

	t13 = (((x61%x62)-x63)-x64);

	if (t13 != 18446744069414625956LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	int16_t x66 = -1;
	int16_t x68 = 1452;
	int32_t t14 = -4461106;

	t14 = (((x65%x66)-x67)-x68);

	if (t14 != -34219) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x69 = -47;
	int16_t x70 = INT16_MAX;
	uint64_t x71 = UINT64_MAX;
	int32_t x72 = 406;
	volatile uint64_t t15 = 112683636LLU;

	t15 = (((x69%x70)-x71)-x72);

	if (t15 != 18446744073709551164LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = -1LL;
	volatile uint16_t x78 = 11087U;
	uint32_t x79 = 177005370U;
	int8_t x80 = -1;
	volatile int64_t t16 = -224989439970LL;

	t16 = (((x77%x78)-x79)-x80);

	if (t16 != -177005370LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	volatile int16_t x82 = -1;
	static uint8_t x84 = 1U;

	t17 = (((x81%x82)-x83)-x84);

	if (t17 != 4294966516U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MAX;
	uint32_t x87 = 865752190U;
	static int8_t x88 = INT8_MAX;
	volatile int64_t t18 = -31504072LL;

	t18 = (((x85%x86)-x87)-x88);

	if (t18 != -3013235965LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x93 = 21LL;
	static volatile int8_t x94 = INT8_MIN;
	uint64_t x95 = UINT64_MAX;
	static int64_t x96 = INT64_MAX;
	volatile uint64_t t19 = 1012059LLU;

	t19 = (((x93%x94)-x95)-x96);

	if (t19 != 9223372036854775831LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x97 = 75U;
	static int32_t x98 = INT32_MIN;
	uint32_t x99 = 1622U;
	static uint32_t t20 = 29512U;

	t20 = (((x97%x98)-x99)-x100);

	if (t20 != 4294965747U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x102 = -7249;
	int8_t x104 = -1;
	volatile int64_t t21 = -3119991LL;

	t21 = (((x101%x102)-x103)-x104);

	if (t21 != 4310LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x106 = 61730U;
	volatile int64_t x107 = -1LL;
	static volatile int16_t x108 = INT16_MIN;
	volatile int64_t t22 = -12419106719LL;

	t22 = (((x105%x106)-x107)-x108);

	if (t22 != 73584LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 2911448686882LLU;
	int8_t x110 = INT8_MAX;
	int16_t x111 = INT16_MIN;
	volatile int8_t x112 = INT8_MAX;
	volatile uint64_t t23 = 93434925750857LLU;

	t23 = (((x109%x110)-x111)-x112);

	if (t23 != 32653LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -121457999LL;
	static uint16_t x114 = 2230U;
	uint16_t x115 = 16272U;
	static uint16_t x116 = UINT16_MAX;
	int64_t t24 = 144LL;

	t24 = (((x113%x114)-x115)-x116);

	if (t24 != -82856LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = INT64_MIN;
	uint64_t x118 = UINT64_MAX;
	volatile uint8_t x119 = 18U;
	int32_t x120 = INT32_MIN;
	uint64_t t25 = 39424LLU;

	t25 = (((x117%x118)-x119)-x120);

	if (t25 != 9223372039002259438LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	volatile int32_t x122 = INT32_MAX;
	static uint16_t x123 = UINT16_MAX;
	uint8_t x124 = 40U;
	int32_t t26 = -557861;

	t26 = (((x121%x122)-x123)-x124);

	if (t26 != -65703) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x125 = UINT8_MAX;
	int8_t x126 = INT8_MIN;
	static uint16_t x127 = 1321U;
	int32_t t27 = 60741;

	t27 = (((x125%x126)-x127)-x128);

	if (t27 != -1193) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x129 = 0U;
	uint8_t x131 = UINT8_MAX;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t28 = 7437341875254152LLU;

	t28 = (((x129%x130)-x131)-x132);

	if (t28 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = -185;
	int8_t x134 = INT8_MAX;
	int32_t x135 = -1;
	volatile int64_t x136 = -314684305LL;
	static int64_t t29 = 4LL;

	t29 = (((x133%x134)-x135)-x136);

	if (t29 != 314684248LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x137 = 1;
	int8_t x138 = INT8_MAX;
	int16_t x139 = -1;
	uint16_t x140 = 122U;
	int32_t t30 = -166;

	t30 = (((x137%x138)-x139)-x140);

	if (t30 != -120) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x143 = -1;
	volatile int32_t x144 = 1;
	uint32_t t31 = 440U;

	t31 = (((x141%x142)-x143)-x144);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x147 = INT16_MAX;
	int64_t x148 = -3920394413LL;
	volatile int64_t t32 = -134LL;

	t32 = (((x145%x146)-x147)-x148);

	if (t32 != 8215328945LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x149 = 25;
	int64_t x150 = -189917912540156364LL;
	int32_t x151 = INT32_MIN;
	int32_t x152 = -284715;
	static int64_t t33 = 5078182262826692LL;

	t33 = (((x149%x150)-x151)-x152);

	if (t33 != 2147768388LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = -1LL;
	int8_t x154 = -1;
	int64_t x155 = 16862782176LL;

	t34 = (((x153%x154)-x155)-x156);

	if (t34 != -16862782176LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x157 = INT32_MIN;
	static uint32_t x159 = 238U;

	t35 = (((x157%x158)-x159)-x160);

	if (t35 != 18446744073709546647LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = 158U;
	static int64_t x162 = INT64_MIN;
	int16_t x163 = INT16_MIN;
	int32_t x164 = INT32_MIN;
	volatile int64_t t36 = -69617103703LL;

	t36 = (((x161%x162)-x163)-x164);

	if (t36 != 2147516574LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x165 = UINT64_MAX;
	volatile int16_t x166 = INT16_MIN;
	volatile int8_t x167 = -48;
	uint64_t x168 = 0LLU;
	static uint64_t t37 = 57564409130LLU;

	t37 = (((x165%x166)-x167)-x168);

	if (t37 != 32815LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = 273LL;
	volatile uint64_t x170 = UINT64_MAX;
	uint32_t x171 = UINT32_MAX;
	uint64_t t38 = 30422LLU;

	t38 = (((x169%x170)-x171)-x172);

	if (t38 != 18446744051235512023LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x174 = 1944U;
	int64_t x175 = -98163811267LL;
	static int16_t x176 = INT16_MIN;
	int64_t t39 = -32874950LL;

	t39 = (((x173%x174)-x175)-x176);

	if (t39 != 98163842371LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = INT8_MAX;
	int64_t x178 = -1101449898224883LL;
	uint32_t x180 = 189370U;
	static int64_t t40 = -8010LL;

	t40 = (((x177%x178)-x179)-x180);

	if (t40 != -188446LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x182 = UINT8_MAX;
	int16_t x183 = -1;
	uint64_t x184 = UINT64_MAX;

	t41 = (((x181%x182)-x183)-x184);

	if (t41 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x185 = 984128U;
	int32_t x188 = -239737;

	t42 = (((x185%x186)-x187)-x188);

	if (t42 != 18444848178573369738LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = 0U;
	volatile uint64_t x190 = 8628277789504387586LLU;
	uint16_t x191 = UINT16_MAX;
	uint64_t t43 = 3604330LLU;

	t43 = (((x189%x190)-x191)-x192);

	if (t43 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = UINT8_MAX;
	uint32_t x194 = 555U;
	int16_t x195 = -1;
	uint64_t x196 = 839971LLU;
	volatile uint64_t t44 = 30504026720LLU;

	t44 = (((x193%x194)-x195)-x196);

	if (t44 != 18446744073708711901LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = -1;
	int8_t x198 = INT8_MAX;
	volatile int64_t x199 = 6960466209LL;
	int32_t x200 = INT32_MIN;
	int64_t t45 = -67007206323LL;

	t45 = (((x197%x198)-x199)-x200);

	if (t45 != -4812982562LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x201 = 10U;
	int64_t x202 = INT64_MAX;
	volatile uint64_t x203 = UINT64_MAX;
	int8_t x204 = INT8_MIN;
	uint64_t t46 = 32042054LLU;

	t46 = (((x201%x202)-x203)-x204);

	if (t46 != 139LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = -10807871;
	int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MAX;
	uint8_t x208 = 62U;
	volatile int32_t t47 = 532;

	t47 = (((x205%x206)-x207)-x208);

	if (t47 != -60028) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = -11019430;
	int64_t x210 = INT64_MAX;
	int32_t x211 = INT32_MIN;
	int64_t x212 = -2029696832979570LL;
	volatile int64_t t48 = 1142450972LL;

	t48 = (((x209%x210)-x211)-x212);

	if (t48 != 2029698969443788LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x217 = -1;
	int64_t x218 = -274LL;
	int32_t x219 = INT32_MIN;
	int64_t x220 = -1LL;
	int64_t t49 = -515346522440LL;

	t49 = (((x217%x218)-x219)-x220);

	if (t49 != 2147483648LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = 1;
	uint16_t x222 = 875U;
	int32_t x223 = -3161305;
	static volatile uint16_t x224 = 1U;
	volatile int32_t t50 = 553070;

	t50 = (((x221%x222)-x223)-x224);

	if (t50 != 3161305) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = 396;
	volatile int32_t x226 = INT32_MIN;
	int16_t x227 = INT16_MAX;
	int64_t x228 = INT64_MIN;
	int64_t t51 = 21581023434LL;

	t51 = (((x225%x226)-x227)-x228);

	if (t51 != 9223372036854743437LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x229 = 1958800143U;
	int64_t x230 = INT64_MIN;
	int64_t t52 = 129646LL;

	t52 = (((x229%x230)-x231)-x232);

	if (t52 != 1958799610LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x233 = -2910117LL;
	static int64_t x234 = -21395864849328690LL;
	int64_t x235 = INT64_MIN;
	uint16_t x236 = UINT16_MAX;

	t53 = (((x233%x234)-x235)-x236);

	if (t53 != 9223372036851800156LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x238 = INT8_MIN;
	volatile int64_t x239 = -1LL;
	uint32_t x240 = UINT32_MAX;
	static int64_t t54 = -31754890458903414LL;

	t54 = (((x237%x238)-x239)-x240);

	if (t54 != -4294967294LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x241 = UINT16_MAX;
	static volatile uint32_t x242 = 28231981U;
	uint16_t x243 = 23908U;
	int64_t x244 = INT64_MAX;
	int64_t t55 = 4063783345LL;

	t55 = (((x241%x242)-x243)-x244);

	if (t55 != -9223372036854734180LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = -16;
	volatile int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MIN;
	uint8_t x248 = 9U;
	int32_t t56 = -675122;

	t56 = (((x245%x246)-x247)-x248);

	if (t56 != 32743) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x249 = -1;
	static int8_t x251 = -1;
	uint16_t x252 = 0U;
	static int32_t t57 = 7;

	t57 = (((x249%x250)-x251)-x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x254 = INT16_MIN;
	uint8_t x255 = UINT8_MAX;
	int16_t x256 = -1;
	int64_t t58 = -17411508543099684LL;

	t58 = (((x253%x254)-x255)-x256);

	if (t58 != 32513LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x257 = -1;
	int32_t x259 = INT32_MAX;
	static uint32_t x260 = 2817080U;
	volatile uint32_t t59 = 746895808U;

	t59 = (((x257%x258)-x259)-x260);

	if (t59 != 2144666568U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x262 = 1U;
	uint64_t t60 = 23378LLU;

	t60 = (((x261%x262)-x263)-x264);

	if (t60 != 18446744040652302157LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x265 = UINT16_MAX;
	uint16_t x266 = UINT16_MAX;
	uint8_t x267 = 18U;
	uint64_t t61 = 58170057982605166LLU;

	t61 = (((x265%x266)-x267)-x268);

	if (t61 != 18446744073709524985LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MIN;
	uint64_t x270 = UINT64_MAX;
	static int32_t x271 = 6454;
	uint64_t t62 = 1479225034LLU;

	t62 = (((x269%x270)-x271)-x272);

	if (t62 != 18446713887343615403LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x274 = 19U;
	int8_t x275 = -1;
	uint64_t x276 = 8223041369283301LLU;

	t63 = (((x273%x274)-x275)-x276);

	if (t63 != 18438521032340268302LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = 2853;
	int16_t x278 = -1;
	int8_t x279 = 3;
	uint8_t x280 = UINT8_MAX;
	int32_t t64 = -1;

	t64 = (((x277%x278)-x279)-x280);

	if (t64 != -258) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = -6334;
	int32_t x286 = INT32_MIN;
	int8_t x287 = -1;
	int8_t x288 = INT8_MIN;
	volatile int32_t t65 = -1;

	t65 = (((x285%x286)-x287)-x288);

	if (t65 != -6205) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x289 = INT64_MIN;
	volatile int64_t x290 = -2826016102528LL;
	static uint16_t x292 = 125U;
	static volatile uint64_t t66 = 1698119758478LLU;

	t66 = (((x289%x290)-x291)-x292);

	if (t66 != 18446742527255100292LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = -1;
	volatile uint8_t x294 = 1U;
	int8_t x295 = 2;
	int8_t x296 = 30;
	static int32_t t67 = 510655167;

	t67 = (((x293%x294)-x295)-x296);

	if (t67 != -32) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = INT64_MIN;
	int64_t x298 = INT64_MAX;
	int32_t x299 = -124130624;
	int64_t x300 = -2710430742714883LL;
	volatile int64_t t68 = -1LL;

	t68 = (((x297%x298)-x299)-x300);

	if (t68 != 2710430866845506LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x302 = UINT64_MAX;
	static int8_t x303 = -7;
	static uint8_t x304 = UINT8_MAX;
	volatile uint64_t t69 = 274543813396372676LLU;

	t69 = (((x301%x302)-x303)-x304);

	if (t69 != 5194207LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x305 = 0U;
	static int16_t x306 = INT16_MIN;
	uint64_t x308 = UINT64_MAX;
	static uint64_t t70 = 260244LLU;

	t70 = (((x305%x306)-x307)-x308);

	if (t70 != 9914LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = 9LL;
	volatile uint8_t x311 = 122U;
	uint64_t x312 = 1911041758623587760LLU;
	uint64_t t71 = 23903232665LLU;

	t71 = (((x309%x310)-x311)-x312);

	if (t71 != 16535702315085963732LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x313 = INT8_MAX;
	int8_t x314 = 1;
	uint16_t x315 = 26U;
	int32_t x316 = INT32_MIN;

	t72 = (((x313%x314)-x315)-x316);

	if (t72 != 2147483622) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x317 = -25890540406646LL;
	static int8_t x318 = INT8_MIN;
	int64_t x320 = 1313166988LL;
	int64_t t73 = 549055942650LL;

	t73 = (((x317%x318)-x319)-x320);

	if (t73 != -1313167105LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x321 = 1335779166245LLU;
	static int32_t x323 = -493169;
	uint8_t x324 = 0U;
	volatile uint64_t t74 = 39359589LLU;

	t74 = (((x321%x322)-x323)-x324);

	if (t74 != 1335779659414LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x325 = UINT16_MAX;
	int32_t x326 = 2464544;
	static int16_t x327 = INT16_MIN;
	int8_t x328 = INT8_MIN;
	int32_t t75 = 46;

	t75 = (((x325%x326)-x327)-x328);

	if (t75 != 98431) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = INT8_MAX;
	int8_t x330 = INT8_MAX;
	uint16_t x331 = 0U;
	uint16_t x332 = 16U;
	int32_t t76 = 1;

	t76 = (((x329%x330)-x331)-x332);

	if (t76 != -16) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x337 = INT64_MIN;
	static volatile int16_t x338 = INT16_MAX;
	uint8_t x339 = 35U;
	int32_t x340 = INT32_MIN;
	int64_t t77 = -32066354LL;

	t77 = (((x337%x338)-x339)-x340);

	if (t77 != 2147483605LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MIN;
	static volatile uint8_t x343 = 0U;
	uint64_t x344 = UINT64_MAX;

	t78 = (((x341%x342)-x343)-x344);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x346 = -4;
	static uint8_t x348 = UINT8_MAX;
	static volatile uint64_t t79 = 1538039652580LLU;

	t79 = (((x345%x346)-x347)-x348);

	if (t79 != 18446744073243245031LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = INT16_MAX;
	static int32_t x351 = -1;
	uint16_t x352 = UINT16_MAX;
	static volatile int32_t t80 = -1284283;

	t80 = (((x349%x350)-x351)-x352);

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x353 = INT32_MAX;
	uint64_t x354 = UINT64_MAX;
	volatile int16_t x355 = -1;
	volatile int8_t x356 = 1;
	volatile uint64_t t81 = 515806367586173LLU;

	t81 = (((x353%x354)-x355)-x356);

	if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = -1LL;
	static int16_t x358 = INT16_MIN;
	int8_t x359 = -1;
	int16_t x360 = -646;
	volatile int64_t t82 = 90143297022556617LL;

	t82 = (((x357%x358)-x359)-x360);

	if (t82 != 646LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x365 = 48245U;
	static int64_t x366 = 63996036LL;
	static uint8_t x367 = UINT8_MAX;
	static volatile int8_t x368 = INT8_MIN;
	static int64_t t83 = -3907843826LL;

	t83 = (((x365%x366)-x367)-x368);

	if (t83 != 48118LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x369 = INT8_MIN;
	uint8_t x370 = 1U;
	volatile int32_t t84 = -27489;

	t84 = (((x369%x370)-x371)-x372);

	if (t84 != 32749) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x373 = 13U;
	uint16_t x374 = UINT16_MAX;
	static int16_t x376 = -1;
	static volatile uint32_t t85 = 981803U;

	t85 = (((x373%x374)-x375)-x376);

	if (t85 != 15U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x377 = INT16_MIN;
	int8_t x378 = -6;
	uint64_t x379 = 2LLU;
	static int8_t x380 = INT8_MAX;
	volatile uint64_t t86 = 19LLU;

	t86 = (((x377%x378)-x379)-x380);

	if (t86 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = INT8_MAX;
	uint16_t x382 = 1856U;
	uint64_t x383 = 105LLU;
	int16_t x384 = -1;
	volatile uint64_t t87 = 186LLU;

	t87 = (((x381%x382)-x383)-x384);

	if (t87 != 23LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x385 = 1515782U;
	uint64_t x386 = 25677677947200LLU;
	static int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t88 = 141079651124396394LLU;

	t88 = (((x385%x386)-x387)-x388);

	if (t88 != 1581318LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = 15;
	volatile uint32_t x390 = UINT32_MAX;
	static int16_t x391 = INT16_MAX;
	volatile uint32_t t89 = 3U;

	t89 = (((x389%x390)-x391)-x392);

	if (t89 != 4294934545U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x393 = 269875295789239LLU;
	int16_t x394 = INT16_MIN;
	static int16_t x396 = INT16_MAX;
	volatile uint64_t t90 = 1031LLU;

	t90 = (((x393%x394)-x395)-x396);

	if (t90 != 269875295753873LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x400 = INT8_MAX;
	volatile int64_t t91 = 13305802204LL;

	t91 = (((x397%x398)-x399)-x400);

	if (t91 != 2147483529LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x401 = 4578;
	int16_t x402 = -1;
	int8_t x403 = INT8_MIN;
	int8_t x404 = -1;

	t92 = (((x401%x402)-x403)-x404);

	if (t92 != 129) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x406 = INT16_MIN;
	uint64_t x407 = UINT64_MAX;
	int16_t x408 = -55;
	static volatile uint64_t t93 = 310LLU;

	t93 = (((x405%x406)-x407)-x408);

	if (t93 != 18446744073709539018LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x409 = INT16_MIN;
	int8_t x410 = INT8_MIN;
	static int32_t x411 = 763;
	int32_t x412 = -24;

	t94 = (((x409%x410)-x411)-x412);

	if (t94 != -739) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x413 = -3;
	volatile uint16_t x415 = 23537U;

	t95 = (((x413%x414)-x415)-x416);

	if (t95 != 109596LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x417 = 0;
	int16_t x418 = -1;
	volatile int16_t x419 = 1;
	static volatile int64_t x420 = INT64_MAX;
	int64_t t96 = INT64_MIN;

	t96 = (((x417%x418)-x419)-x420);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x421 = -1;
	int64_t x422 = INT64_MAX;
	uint32_t x423 = UINT32_MAX;
	static int16_t x424 = -3;
	int64_t t97 = -12451255975320LL;

	t97 = (((x421%x422)-x423)-x424);

	if (t97 != -4294967293LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x425 = 9U;
	static volatile int32_t x426 = INT32_MIN;
	uint32_t x427 = 5U;
	int32_t x428 = 23;
	volatile uint32_t t98 = 5311U;

	t98 = (((x425%x426)-x427)-x428);

	if (t98 != 4294967277U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x429 = INT8_MAX;
	static uint8_t x431 = UINT8_MAX;
	uint64_t x432 = 2923969LLU;
	static volatile uint64_t t99 = 12446152687660382LLU;

	t99 = (((x429%x430)-x431)-x432);

	if (t99 != 18446744073706627398LLU) { NG(); } else { ; }
	
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

