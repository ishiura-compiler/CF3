#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = 0;
static int64_t x7 = -1LL;
static int16_t x8 = 1;
int64_t t1 = -1640795884LL;
int64_t x9 = INT64_MAX;
volatile uint16_t x17 = 5341U;
int32_t x21 = 244;
uint32_t x25 = 21748144U;
int32_t x26 = 17;
static int16_t x27 = -98;
uint32_t t6 = 2027U;
volatile int32_t t7 = -999710;
uint64_t x34 = 5LLU;
static volatile int16_t x36 = -10;
volatile int32_t t9 = -223;
volatile int32_t x41 = INT32_MIN;
int16_t x45 = 0;
int64_t x47 = INT64_MAX;
int32_t x49 = INT32_MIN;
int8_t x52 = 6;
int64_t x53 = INT64_MIN;
volatile int16_t x57 = INT16_MIN;
int64_t x63 = 188065731LL;
uint32_t x65 = 13U;
int64_t x67 = INT64_MIN;
static int32_t x77 = INT32_MIN;
static uint16_t x80 = 1056U;
int8_t x83 = INT8_MIN;
int64_t x87 = -1LL;
volatile uint32_t t22 = 17U;
int16_t x96 = 97;
int64_t x98 = INT64_MAX;
volatile uint64_t x101 = 643LLU;
static uint32_t x102 = 2074U;
uint64_t x103 = 206922164LLU;
static int64_t x106 = 89000634LL;
uint32_t x119 = UINT32_MAX;
volatile uint16_t x123 = 9823U;
static int8_t x124 = INT8_MAX;
int8_t x125 = INT8_MIN;
volatile int32_t x127 = INT32_MIN;
static int64_t t32 = -4LL;
int32_t x147 = -19;
int16_t x150 = INT16_MAX;
static volatile int8_t x153 = INT8_MIN;
uint64_t t38 = 33320120684616505LLU;
int8_t x158 = INT8_MAX;
int64_t t39 = 274587692461559LL;
static int8_t x169 = INT8_MAX;
int16_t x176 = -1;
int64_t x179 = -220LL;
volatile uint8_t x180 = 2U;
volatile int64_t t48 = 377162430411487358LL;
uint64_t x204 = 63413LLU;
int8_t x214 = INT8_MIN;
int32_t x224 = 15;
volatile uint32_t t55 = 227563249U;
uint64_t x231 = 206332LLU;
volatile uint32_t t57 = 24129U;
int64_t x233 = INT64_MAX;
int64_t x234 = INT64_MIN;
volatile int64_t t58 = INT64_MIN;
volatile int32_t t64 = -166747194;
int32_t x269 = 51105380;
int32_t x270 = INT32_MIN;
int32_t x273 = 106849874;
static uint64_t x280 = 7LLU;
uint8_t x283 = UINT8_MAX;
uint32_t x286 = UINT32_MAX;
uint32_t x288 = 2871126U;
uint32_t t71 = 7U;
int64_t x293 = INT64_MIN;
static int32_t x297 = INT32_MIN;
static uint32_t x299 = UINT32_MAX;
static uint32_t t74 = 39280532U;
static uint32_t x301 = UINT32_MAX;
volatile uint32_t t75 = 3140U;
uint32_t x305 = 268129135U;
int64_t t77 = -70688LL;
static int64_t x313 = -397614526LL;
int8_t x316 = -36;
volatile int64_t t78 = -1900571266662LL;
static volatile uint32_t x321 = 186U;
volatile uint64_t x322 = 46342493197LLU;
static int16_t x324 = -1;
int8_t x325 = INT8_MIN;
int64_t x328 = -1LL;
int64_t t81 = 8441623218LL;
static int8_t x330 = 1;
int64_t x331 = INT64_MIN;
uint64_t x336 = UINT64_MAX;
volatile uint32_t x342 = UINT32_MAX;
volatile uint32_t x349 = UINT32_MAX;
volatile int64_t x356 = -177244908360315LL;
int64_t t88 = -140272LL;
int32_t x357 = 3372;
static int16_t x363 = -607;
uint16_t x365 = 2056U;
int8_t x371 = INT8_MAX;
volatile uint64_t x373 = UINT64_MAX;
int64_t x374 = INT64_MAX;
volatile int8_t x375 = 1;
int64_t x378 = INT64_MAX;
int16_t x387 = -1;
int64_t x394 = -143429LL;
static int8_t x396 = 43;


void f0(void) {
	uint8_t x2 = 126U;
	static volatile int64_t x3 = INT64_MIN;
	volatile int8_t x4 = -1;
	int32_t t0 = -21921;

	t0 = (x1^((x2==x3)+x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1053LL;
	uint32_t x6 = 369153065U;

	t1 = (x5^((x6==x7)+x8));

	if (t1 != -1054LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x10 = 509204844702234918LLU;
	static uint64_t x11 = UINT64_MAX;
	int32_t x12 = 171;
	volatile int64_t t2 = -3772069552352LL;

	t2 = (x9^((x10==x11)+x12));

	if (t2 != 9223372036854775636LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int16_t x14 = -178;
	static uint16_t x15 = UINT16_MAX;
	volatile uint8_t x16 = 0U;
	volatile int32_t t3 = INT32_MAX;

	t3 = (x13^((x14==x15)+x16));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = 4;
	static int32_t x19 = -8436773;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = 1741608460547LLU;

	t4 = (x17^((x18==x19)+x20));

	if (t4 != 18446744073709546274LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = -47;
	volatile int16_t x23 = INT16_MAX;
	int64_t x24 = -1LL;
	int64_t t5 = 339LL;

	t5 = (x21^((x22==x23)+x24));

	if (t5 != -245LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x28 = -15007;

	t6 = (x25^((x26==x27)+x28));

	if (t6 != 4273216721U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	volatile int16_t x30 = INT16_MAX;
	int8_t x31 = INT8_MIN;
	static int8_t x32 = INT8_MIN;

	t7 = (x29^((x30==x31)+x32));

	if (t7 != 32640) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	int16_t x35 = 3323;
	volatile int32_t t8 = -56663829;

	t8 = (x33^((x34==x35)+x36));

	if (t8 != 9) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x37 = 397U;
	int8_t x38 = 0;
	static volatile int64_t x39 = -18598639968LL;
	int8_t x40 = INT8_MIN;

	t9 = (x37^((x38==x39)+x40));

	if (t9 != -499) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 9381U;
	uint8_t x43 = 39U;
	static int32_t x44 = INT32_MIN;
	static volatile int32_t t10 = 15;

	t10 = (x41^((x42==x43)+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MIN;
	int64_t x48 = -1LL;
	volatile int64_t t11 = -13317LL;

	t11 = (x45^((x46==x47)+x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -1;
	int32_t x51 = 4;
	int32_t t12 = 80567;

	t12 = (x49^((x50==x51)+x52));

	if (t12 != -2147483642) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x54 = INT32_MIN;
	int32_t x55 = INT32_MIN;
	int32_t x56 = -1;
	volatile int64_t t13 = INT64_MIN;

	t13 = (x53^((x54==x55)+x56));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MIN;
	uint8_t x59 = UINT8_MAX;
	int8_t x60 = 52;
	int32_t t14 = -59852935;

	t14 = (x57^((x58==x59)+x60));

	if (t14 != -32716) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = -7;
	uint32_t x62 = 3U;
	static uint32_t x64 = UINT32_MAX;
	uint32_t t15 = 369012U;

	t15 = (x61^((x62==x63)+x64));

	if (t15 != 6U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = -1;
	static uint8_t x68 = 1U;
	volatile uint32_t t16 = 4175U;

	t16 = (x65^((x66==x67)+x68));

	if (t16 != 12U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 206459984LL;
	static uint32_t x70 = 159170U;
	static int32_t x71 = INT32_MIN;
	int64_t x72 = INT64_MIN;
	static volatile int64_t t17 = -15902LL;

	t17 = (x69^((x70==x71)+x72));

	if (t17 != -9223372036648315824LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint64_t x74 = 15768777561LLU;
	int64_t x75 = INT64_MAX;
	static volatile int16_t x76 = INT16_MAX;
	static int64_t t18 = -61252920883LL;

	t18 = (x73^((x74==x75)+x76));

	if (t18 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x78 = INT16_MAX;
	int8_t x79 = -1;
	volatile int32_t t19 = -581785974;

	t19 = (x77^((x78==x79)+x80));

	if (t19 != -2147482592) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 1U;
	int64_t x82 = -246LL;
	uint64_t x84 = 1038652795LLU;
	volatile uint64_t t20 = 17536323349LLU;

	t20 = (x81^((x82==x83)+x84));

	if (t20 != 1038652794LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 127482102U;
	volatile uint16_t x86 = UINT16_MAX;
	int64_t x88 = -145517550LL;
	volatile int64_t t21 = -14LL;

	t21 = (x85^((x86==x87)+x88));

	if (t21 != -255152924LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -15;
	int16_t x90 = INT16_MAX;
	int8_t x91 = 2;
	uint32_t x92 = 20444U;

	t22 = (x89^((x90==x91)+x92));

	if (t22 != 4294946861U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -668LL;
	int16_t x94 = INT16_MIN;
	int16_t x95 = -1;
	int64_t t23 = 1224176985LL;

	t23 = (x93^((x94==x95)+x96));

	if (t23 != -763LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = UINT64_MAX;
	int16_t x99 = -62;
	int64_t x100 = INT64_MAX;
	static volatile uint64_t t24 = 1555726727LLU;

	t24 = (x97^((x98==x99)+x100));

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x104 = 257;
	volatile uint64_t t25 = 13725159LLU;

	t25 = (x101^((x102==x103)+x104));

	if (t25 != 898LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x105 = 2U;
	uint8_t x107 = UINT8_MAX;
	volatile uint32_t x108 = UINT32_MAX;
	volatile uint32_t t26 = 39511621U;

	t26 = (x105^((x106==x107)+x108));

	if (t26 != 4294967293U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 3919950438794114529LLU;
	uint16_t x110 = 2U;
	volatile uint64_t x111 = UINT64_MAX;
	int8_t x112 = INT8_MIN;
	volatile uint64_t t27 = 74483009LLU;

	t27 = (x109^((x110==x111)+x112));

	if (t27 != 14526793634915437153LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = UINT32_MAX;
	int8_t x114 = -1;
	uint16_t x115 = 32U;
	int16_t x116 = INT16_MIN;
	volatile uint32_t t28 = 2U;

	t28 = (x113^((x114==x115)+x116));

	if (t28 != 32767U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 0;
	int64_t x118 = INT64_MIN;
	int8_t x120 = 0;
	static volatile int32_t t29 = -6051436;

	t29 = (x117^((x118==x119)+x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 462U;
	int8_t x122 = INT8_MIN;
	volatile uint32_t t30 = 1178U;

	t30 = (x121^((x122==x123)+x124));

	if (t30 != 433U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x126 = INT16_MIN;
	int16_t x128 = -1;
	volatile int32_t t31 = 27018676;

	t31 = (x125^((x126==x127)+x128));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 14759LL;
	int64_t x130 = -12092154LL;
	static int8_t x131 = -1;
	int16_t x132 = -1;

	t32 = (x129^((x130==x131)+x132));

	if (t32 != -14760LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	static int64_t x134 = INT64_MIN;
	int16_t x135 = -1;
	uint64_t x136 = 17013774567025437LLU;
	uint64_t t33 = 8965265LLU;

	t33 = (x133^((x134==x135)+x136));

	if (t33 != 18429730299142526178LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int8_t x138 = -1;
	static int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	static int32_t t34 = 46183911;

	t34 = (x137^((x138==x139)+x140));

	if (t34 != 32640) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	volatile int32_t x142 = 0;
	uint64_t x143 = 211556LLU;
	int8_t x144 = -1;
	volatile int32_t t35 = -235;

	t35 = (x141^((x142==x143)+x144));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = INT32_MIN;
	uint64_t x146 = 531061331102706LLU;
	int8_t x148 = INT8_MIN;
	int32_t t36 = -1;

	t36 = (x145^((x146==x147)+x148));

	if (t36 != 2147483520) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int64_t x151 = INT64_MIN;
	int32_t x152 = 45162697;
	static int32_t t37 = -34;

	t37 = (x149^((x150==x151)+x152));

	if (t37 != -45162679) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x154 = 11U;
	uint16_t x155 = UINT16_MAX;
	uint64_t x156 = UINT64_MAX;

	t38 = (x153^((x154==x155)+x156));

	if (t38 != 127LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 3937;
	uint16_t x159 = 93U;
	static volatile int64_t x160 = -1876004702154628LL;

	t39 = (x157^((x158==x159)+x160));

	if (t39 != -1876004702150883LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	uint32_t x162 = UINT32_MAX;
	static uint32_t x163 = 164U;
	static int32_t x164 = -273;
	volatile int32_t t40 = -115923;

	t40 = (x161^((x162==x163)+x164));

	if (t40 != 272) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 1LLU;
	uint16_t x166 = UINT16_MAX;
	static int8_t x167 = -1;
	volatile uint16_t x168 = 2651U;
	uint64_t t41 = 16495382062956734LLU;

	t41 = (x165^((x166==x167)+x168));

	if (t41 != 2650LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = 2080498545215800LL;
	uint8_t x171 = 3U;
	volatile int16_t x172 = -6545;
	volatile int32_t t42 = 20930558;

	t42 = (x169^((x170==x171)+x172));

	if (t42 != -6640) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = 1;
	volatile int16_t x174 = -9;
	int8_t x175 = -1;
	volatile int32_t t43 = 343338;

	t43 = (x173^((x174==x175)+x176));

	if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -3;
	int32_t x178 = INT32_MIN;
	volatile int32_t t44 = 79;

	t44 = (x177^((x178==x179)+x180));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	uint64_t x182 = 92156LLU;
	uint32_t x183 = 15852U;
	int16_t x184 = -1;
	volatile int32_t t45 = 52772053;

	t45 = (x181^((x182==x183)+x184));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = 1365;
	int16_t x186 = INT16_MIN;
	int16_t x187 = INT16_MIN;
	int64_t x188 = -409948LL;
	static volatile int64_t t46 = -10231506109738889LL;

	t46 = (x185^((x186==x187)+x188));

	if (t46 != -410640LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 16563;
	int32_t x190 = 0;
	int8_t x191 = -25;
	int64_t x192 = INT64_MIN;
	int64_t t47 = 12600508497203963LL;

	t47 = (x189^((x190==x191)+x192));

	if (t47 != -9223372036854759245LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	volatile int16_t x194 = INT16_MIN;
	static int64_t x195 = INT64_MAX;
	int64_t x196 = INT64_MAX;

	t48 = (x193^((x194==x195)+x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x197 = UINT16_MAX;
	int64_t x198 = INT64_MIN;
	uint16_t x199 = UINT16_MAX;
	static int8_t x200 = INT8_MIN;
	volatile int32_t t49 = -373127236;

	t49 = (x197^((x198==x199)+x200));

	if (t49 != -65409) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x201 = -1;
	int64_t x202 = -130614388518496LL;
	uint8_t x203 = 6U;
	volatile uint64_t t50 = 1872212032LLU;

	t50 = (x201^((x202==x203)+x204));

	if (t50 != 18446744073709488202LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -15796;
	uint64_t x206 = 28766196336LLU;
	int16_t x207 = INT16_MAX;
	volatile int16_t x208 = -103;
	volatile int32_t t51 = 97245;

	t51 = (x205^((x206==x207)+x208));

	if (t51 != 15829) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MAX;
	volatile int32_t x210 = -186855;
	static int8_t x211 = -1;
	static volatile int8_t x212 = 2;
	static int32_t t52 = -1;

	t52 = (x209^((x210==x211)+x212));

	if (t52 != 2147483645) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 286496976122LL;
	uint16_t x215 = UINT16_MAX;
	uint64_t x216 = UINT64_MAX;
	static uint64_t t53 = 16110335907476586LLU;

	t53 = (x213^((x214==x215)+x216));

	if (t53 != 18446743787212575493LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 32112;
	int8_t x218 = INT8_MIN;
	int64_t x219 = INT64_MIN;
	uint64_t x220 = 138937218386514853LLU;
	static volatile uint64_t t54 = 325605943LLU;

	t54 = (x217^((x218==x219)+x220));

	if (t54 != 138937218386505429LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = UINT32_MAX;
	volatile int16_t x222 = -2954;
	uint64_t x223 = UINT64_MAX;

	t55 = (x221^((x222==x223)+x224));

	if (t55 != 4294967280U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MIN;
	int16_t x226 = -1;
	int32_t x227 = INT32_MIN;
	volatile uint32_t x228 = UINT32_MAX;
	uint32_t t56 = 207761854U;

	t56 = (x225^((x226==x227)+x228));

	if (t56 != 2147483647U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 11U;
	uint32_t x230 = 2U;
	uint32_t x232 = 1633143599U;

	t57 = (x229^((x230==x231)+x232));

	if (t57 != 1633143588U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x235 = INT8_MIN;
	int8_t x236 = -1;

	t58 = (x233^((x234==x235)+x236));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	static int32_t x238 = INT32_MAX;
	int16_t x239 = -1;
	uint8_t x240 = 0U;
	static int64_t t59 = INT64_MIN;

	t59 = (x237^((x238==x239)+x240));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = 16361U;
	static uint32_t x242 = 112701U;
	int32_t x243 = -422618;
	static int16_t x244 = 21;
	int32_t t60 = 1;

	t60 = (x241^((x242==x243)+x244));

	if (t60 != 16380) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	uint64_t x246 = 22192LLU;
	int16_t x247 = -1;
	int8_t x248 = -1;
	volatile int32_t t61 = INT32_MAX;

	t61 = (x245^((x246==x247)+x248));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 9;
	int8_t x250 = INT8_MIN;
	static int16_t x251 = INT16_MIN;
	int32_t x252 = 7;
	volatile int32_t t62 = -279600;

	t62 = (x249^((x250==x251)+x252));

	if (t62 != 14) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 0;
	volatile int64_t x254 = INT64_MAX;
	uint32_t x255 = 28052U;
	uint64_t x256 = 5623986748753LLU;
	volatile uint64_t t63 = 0LLU;

	t63 = (x253^((x254==x255)+x256));

	if (t63 != 5623986748753LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	uint32_t x258 = 24118U;
	int64_t x259 = INT64_MAX;
	int32_t x260 = -721;

	t64 = (x257^((x258==x259)+x260));

	if (t64 != 32047) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MIN;
	int32_t x263 = INT32_MIN;
	volatile int32_t x264 = 4;
	int64_t t65 = 1300007156282640638LL;

	t65 = (x261^((x262==x263)+x264));

	if (t65 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MAX;
	int32_t x266 = INT32_MIN;
	int8_t x267 = -1;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t66 = -123434666;

	t66 = (x265^((x266==x267)+x268));

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x271 = UINT64_MAX;
	int8_t x272 = INT8_MAX;
	volatile int32_t t67 = 284;

	t67 = (x269^((x270==x271)+x272));

	if (t67 != 51105307) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x274 = 277LL;
	int16_t x275 = INT16_MIN;
	volatile int8_t x276 = -16;
	int32_t t68 = -1;

	t68 = (x273^((x274==x275)+x276));

	if (t68 != -106849886) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	static int8_t x278 = -1;
	static uint32_t x279 = UINT32_MAX;
	volatile uint64_t t69 = 11484549LLU;

	t69 = (x277^((x278==x279)+x280));

	if (t69 != 9223372036854775816LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 160079370740114LL;
	static int8_t x282 = INT8_MIN;
	static uint16_t x284 = UINT16_MAX;
	static int64_t t70 = -358165034758937LL;

	t70 = (x281^((x282==x283)+x284));

	if (t70 != 160079370755693LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = INT8_MIN;
	int64_t x287 = INT64_MIN;

	t71 = (x285^((x286==x287)+x288));

	if (t71 != 4292096214U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -3941LL;
	int8_t x290 = 1;
	static volatile uint64_t x291 = 1LLU;
	int32_t x292 = INT32_MIN;
	static int64_t t72 = -739797LL;

	t72 = (x289^((x290==x291)+x292));

	if (t72 != 2147479706LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = 312;
	int32_t x295 = -1;
	volatile uint8_t x296 = UINT8_MAX;
	int64_t t73 = -1409461LL;

	t73 = (x293^((x294==x295)+x296));

	if (t73 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x298 = 928481943334644LLU;
	uint32_t x300 = 1782U;

	t74 = (x297^((x298==x299)+x300));

	if (t74 != 2147485430U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = 207;
	int16_t x303 = 681;
	static int16_t x304 = -1;

	t75 = (x301^((x302==x303)+x304));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MIN;
	uint64_t x307 = 6968876371LLU;
	int32_t x308 = INT32_MAX;
	static uint32_t t76 = 6U;

	t76 = (x305^((x306==x307)+x308));

	if (t76 != 1879354512U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -2320188258LL;
	int16_t x310 = INT16_MAX;
	uint32_t x311 = UINT32_MAX;
	volatile uint16_t x312 = UINT16_MAX;

	t77 = (x309^((x310==x311)+x312));

	if (t77 != -2320219295LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = 11169316;
	volatile uint8_t x315 = UINT8_MAX;

	t78 = (x313^((x314==x315)+x316));

	if (t78 != 397614494LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 440049747130775LLU;
	int32_t x318 = 7;
	int16_t x319 = 2;
	int32_t x320 = INT32_MAX;
	volatile uint64_t t79 = 159434LLU;

	t79 = (x317^((x318==x319)+x320));

	if (t79 != 440051328845416LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x323 = 7777388U;
	volatile uint32_t t80 = 38233833U;

	t80 = (x321^((x322==x323)+x324));

	if (t80 != 4294967109U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = INT64_MIN;
	uint64_t x327 = 22932105891020LLU;

	t81 = (x325^((x326==x327)+x328));

	if (t81 != 127LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	int64_t x332 = INT64_MIN;
	uint64_t t82 = 69647458947800LLU;

	t82 = (x329^((x330==x331)+x332));

	if (t82 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 772497282U;
	int64_t x334 = -1LL;
	volatile int8_t x335 = -7;
	volatile uint64_t t83 = 51LLU;

	t83 = (x333^((x334==x335)+x336));

	if (t83 != 18446744072937054333LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1638;
	static int64_t x338 = 14LL;
	static int8_t x339 = INT8_MIN;
	static int32_t x340 = INT32_MIN;
	int32_t t84 = -11967519;

	t84 = (x337^((x338==x339)+x340));

	if (t84 != 2147482010) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MAX;
	int32_t x343 = 226715093;
	int16_t x344 = -1;
	int64_t t85 = INT64_MIN;

	t85 = (x341^((x342==x343)+x344));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 2538U;
	static uint8_t x346 = UINT8_MAX;
	static uint16_t x347 = 2223U;
	uint64_t x348 = 1550742LLU;
	static volatile uint64_t t86 = 6525970325701LLU;

	t86 = (x345^((x346==x347)+x348));

	if (t86 != 1548412LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = INT16_MIN;
	volatile int64_t x351 = INT64_MIN;
	int8_t x352 = INT8_MAX;
	volatile uint32_t t87 = 39358U;

	t87 = (x349^((x350==x351)+x352));

	if (t87 != 4294967168U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -6622;
	int64_t x354 = INT64_MIN;
	int8_t x355 = INT8_MIN;

	t88 = (x353^((x354==x355)+x356));

	if (t88 != 177244908358567LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x358 = 20U;
	static volatile int8_t x359 = -1;
	int8_t x360 = 8;
	static int32_t t89 = 0;

	t89 = (x357^((x358==x359)+x360));

	if (t89 != 3364) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 559;
	volatile int64_t x362 = 3260563688LL;
	int32_t x364 = 268;
	int32_t t90 = 1727781;

	t90 = (x361^((x362==x363)+x364));

	if (t90 != 803) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = 1;
	volatile int64_t x367 = 229457LL;
	static volatile int32_t x368 = INT32_MIN;
	int32_t t91 = 4533;

	t91 = (x365^((x366==x367)+x368));

	if (t91 != -2147481592) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x369 = 235U;
	int8_t x370 = INT8_MIN;
	int32_t x372 = -3736;
	static volatile uint32_t t92 = 173399U;

	t92 = (x369^((x370==x371)+x372));

	if (t92 != 4294963587U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x376 = INT16_MIN;
	volatile uint64_t t93 = 81297322LLU;

	t93 = (x373^((x374==x375)+x376));

	if (t93 != 32767LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	uint8_t x379 = 17U;
	int8_t x380 = INT8_MIN;
	int64_t t94 = 22346838LL;

	t94 = (x377^((x378==x379)+x380));

	if (t94 != 127LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = 23;
	int8_t x382 = INT8_MAX;
	int32_t x383 = INT32_MAX;
	uint8_t x384 = UINT8_MAX;
	int32_t t95 = -28293810;

	t95 = (x381^((x382==x383)+x384));

	if (t95 != 232) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MIN;
	int32_t x388 = INT32_MIN;
	int32_t t96 = -1;

	t96 = (x385^((x386==x387)+x388));

	if (t96 != 2147450880) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 22;
	static volatile uint64_t x390 = UINT64_MAX;
	uint16_t x391 = UINT16_MAX;
	static uint8_t x392 = 6U;
	volatile int32_t t97 = 248;

	t97 = (x389^((x390==x391)+x392));

	if (t97 != 16) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = INT16_MAX;
	volatile int8_t x395 = INT8_MIN;
	int32_t t98 = 632;

	t98 = (x393^((x394==x395)+x396));

	if (t98 != 32724) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	uint16_t x398 = 57U;
	static int64_t x399 = INT64_MIN;
	int32_t x400 = 2;
	int32_t t99 = -27695815;

	t99 = (x397^((x398==x399)+x400));

	if (t99 != -126) { NG(); } else { ; }
	
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

