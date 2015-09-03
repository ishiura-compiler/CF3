#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 11U;
int32_t x4 = INT32_MIN;
int16_t x10 = 16;
uint8_t x12 = UINT8_MAX;
uint8_t x15 = UINT8_MAX;
static int64_t t3 = -664LL;
int8_t x28 = INT8_MIN;
int32_t t6 = INT32_MAX;
volatile int16_t x30 = INT16_MIN;
static int8_t x33 = INT8_MAX;
int32_t x34 = INT32_MAX;
int8_t x36 = -1;
int64_t x37 = 340287409790817363LL;
int8_t x42 = 17;
uint16_t x44 = UINT16_MAX;
int8_t x49 = INT8_MIN;
static int16_t x57 = -1;
int64_t t15 = -138956563313542LL;
volatile int32_t x67 = INT32_MIN;
volatile int64_t x80 = -546695491389126699LL;
int64_t t20 = 143752352375475352LL;
int8_t x91 = -32;
static int32_t x94 = INT32_MIN;
uint16_t x96 = 4U;
volatile int32_t t23 = 1024196952;
uint8_t x106 = 99U;
int16_t x107 = INT16_MAX;
int8_t x119 = INT8_MIN;
static int8_t x124 = INT8_MAX;
static volatile int32_t x125 = 175;
int16_t x128 = -1;
volatile int16_t x129 = 70;
static volatile int64_t t32 = 0LL;
int64_t x139 = 230023010LL;
uint64_t x144 = UINT64_MAX;
int64_t x145 = INT64_MIN;
static volatile int16_t x151 = 36;
static int16_t x153 = -9;
int32_t x157 = -393443;
uint64_t t38 = 102784554345573315LLU;
static volatile int64_t x161 = INT64_MAX;
uint32_t x162 = 207638U;
int64_t t40 = -12482221077011LL;
volatile int16_t x172 = INT16_MIN;
uint32_t x176 = 54U;
volatile uint32_t t46 = UINT32_MAX;
static volatile uint64_t x193 = UINT64_MAX;
int64_t x196 = 641168711678LL;
uint32_t x197 = 16369157U;
uint32_t x203 = UINT32_MAX;
uint8_t x204 = UINT8_MAX;
int8_t x205 = INT8_MIN;
volatile int16_t x206 = -1;
uint64_t x209 = 110792LLU;
volatile uint64_t t51 = 2385288328649074386LLU;
static uint64_t x216 = UINT64_MAX;
int64_t x221 = INT64_MIN;
int64_t t54 = 0LL;
volatile uint32_t t55 = 4U;
volatile int32_t t56 = -1;
uint64_t x233 = 17182859253LLU;
int16_t x235 = 108;
uint8_t x236 = UINT8_MAX;
uint32_t x242 = 3558405U;
int64_t x243 = 57LL;
int64_t x245 = INT64_MIN;
volatile int32_t x248 = -10510;
volatile int64_t t61 = -2226939976LL;
volatile int64_t x253 = -1LL;
volatile uint8_t x255 = 1U;
int64_t x258 = INT64_MIN;
int64_t x259 = INT64_MAX;
int32_t x263 = INT32_MAX;
uint64_t x264 = 26257959LLU;
int32_t x270 = -31;
uint8_t x272 = 5U;
static uint64_t x275 = UINT64_MAX;
int8_t x279 = -1;
int64_t t68 = 1737013963094LL;
volatile int16_t x285 = INT16_MIN;
int16_t x290 = INT16_MIN;
volatile int16_t x293 = -1;
volatile int32_t t72 = -69754;
volatile int32_t x306 = -125;
volatile int32_t t75 = -2;
volatile int32_t t76 = 955998;
static int8_t x315 = -1;
int64_t t78 = 91304388791501186LL;
volatile uint64_t t82 = 13LLU;
int16_t x343 = -1;
uint16_t x361 = 288U;
volatile uint64_t x371 = 3737738807442696792LLU;
int32_t x372 = 767598773;
int8_t x381 = INT8_MIN;
static int8_t x386 = INT8_MIN;
uint64_t t92 = 109599977199382LLU;
static int16_t x390 = INT16_MIN;
static uint64_t x396 = 150006998187212563LLU;
static int16_t x400 = 2078;
volatile uint64_t t95 = UINT64_MAX;
int16_t x404 = INT16_MIN;
int32_t x411 = INT32_MAX;
int64_t x416 = 50479484696755LL;


void f0(void) {
	int8_t x2 = INT8_MIN;
	int8_t x3 = 0;
	uint32_t t0 = 1U;

	t0 = (x1|((x2|x3)-x4));

	if (t0 != 2147483531U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 232502204963378LLU;
	int16_t x6 = 697;
	int16_t x7 = INT16_MIN;
	uint8_t x8 = UINT8_MAX;
	volatile uint64_t t1 = 279LLU;

	t1 = (x5|((x6|x7)-x8));

	if (t1 != 18446744073709525946LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	volatile int8_t x11 = INT8_MIN;
	int32_t t2 = -2414960;

	t2 = (x9|((x10|x11)-x12));

	if (t2 != -257) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 14U;
	int64_t x14 = INT64_MIN;
	int32_t x16 = INT32_MIN;

	t3 = (x13|((x14|x15)-x16));

	if (t3 != -9223372034707291905LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int64_t x18 = INT64_MIN;
	volatile int32_t x19 = INT32_MIN;
	static int64_t x20 = -1LL;
	volatile int64_t t4 = -32581722699161254LL;

	t4 = (x17|((x18|x19)-x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 13;
	int64_t x22 = -1488099527004LL;
	int16_t x23 = INT16_MIN;
	volatile int64_t x24 = INT64_MIN;
	volatile int64_t t5 = 28439LL;

	t5 = (x21|((x22|x23)-x24));

	if (t5 != 9223372036854757037LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MAX;
	int32_t x26 = 14962;
	int8_t x27 = 0;

	t6 = (x25|((x26|x27)-x28));

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MIN;
	static int16_t x31 = INT16_MAX;
	volatile int16_t x32 = -271;
	volatile int32_t t7 = 1028912362;

	t7 = (x29|((x30|x31)-x32));

	if (t7 != -32498) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x35 = -1;
	int32_t t8 = 83;

	t8 = (x33|((x34|x35)-x36));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = 615927622966LL;
	int64_t x39 = -1LL;
	static int8_t x40 = INT8_MIN;
	int64_t t9 = -106353LL;

	t9 = (x37|((x38|x39)-x40));

	if (t9 != 340287409790817407LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -67273823936821766LL;
	uint32_t x43 = 1923U;
	volatile int64_t t10 = -87317305234LL;

	t10 = (x41|((x42|x43)-x44));

	if (t10 != -67273820808984578LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int16_t x46 = -1;
	uint16_t x47 = UINT16_MAX;
	static int64_t x48 = INT64_MIN;
	int64_t t11 = -3823532209546379110LL;

	t11 = (x45|((x46|x47)-x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -84062281;
	static int8_t x51 = -1;
	static int32_t x52 = -258;
	int32_t t12 = -248;

	t12 = (x49|((x50|x51)-x52));

	if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	volatile int16_t x54 = -1;
	int8_t x55 = -9;
	int64_t x56 = -138206006140725551LL;
	int64_t t13 = -32871867523292583LL;

	t13 = (x53|((x54|x55)-x56));

	if (t13 != -9085166030714050258LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = 490;
	static int8_t x59 = 40;
	int8_t x60 = INT8_MAX;
	int32_t t14 = -812994;

	t14 = (x57|((x58|x59)-x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -66588319757603LL;
	volatile int16_t x62 = INT16_MAX;
	uint16_t x63 = 49U;
	int16_t x64 = INT16_MIN;

	t15 = (x61|((x62|x63)-x64));

	if (t15 != -66588319744001LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	static int16_t x66 = -1;
	static int8_t x68 = INT8_MIN;
	int64_t t16 = 1955506484178734LL;

	t16 = (x65|((x66|x67)-x68));

	if (t16 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	uint16_t x70 = UINT16_MAX;
	volatile int64_t x71 = INT64_MAX;
	int8_t x72 = 9;
	int64_t t17 = 4147199022LL;

	t17 = (x69|((x70|x71)-x72));

	if (t17 != -10LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MIN;
	int8_t x74 = -1;
	uint8_t x75 = UINT8_MAX;
	uint8_t x76 = 47U;
	static int32_t t18 = 1069273632;

	t18 = (x73|((x74|x75)-x76));

	if (t18 != -48) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	static uint16_t x78 = 29U;
	volatile int64_t x79 = 6LL;
	volatile int64_t t19 = -88792LL;

	t19 = (x77|((x78|x79)-x80));

	if (t19 != -1974LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	int32_t x82 = -1;
	int64_t x83 = -1LL;
	static int32_t x84 = 1498377;

	t20 = (x81|((x82|x83)-x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	volatile int8_t x86 = 0;
	int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = -422;

	t21 = (x85|((x86|x87)-x88));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 1246U;
	static int8_t x90 = INT8_MIN;
	int64_t x92 = INT64_MIN;
	int64_t t22 = 89696LL;

	t22 = (x89|((x90|x91)-x92));

	if (t22 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 258U;
	int16_t x95 = -687;

	t23 = (x93|((x94|x95)-x96));

	if (t23 != -689) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 7078964272378LLU;
	int64_t x98 = -1LL;
	static uint32_t x99 = 22657022U;
	int16_t x100 = -124;
	static volatile uint64_t t24 = 532817LLU;

	t24 = (x97|((x98|x99)-x100));

	if (t24 != 7078964272379LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 1750957;
	uint8_t x102 = 15U;
	int8_t x103 = 0;
	int32_t x104 = -1;
	static volatile int32_t t25 = -2004;

	t25 = (x101|((x102|x103)-x104));

	if (t25 != 1750973) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 30U;
	int8_t x108 = INT8_MAX;
	volatile int32_t t26 = 466;

	t26 = (x105|((x106|x107)-x108));

	if (t26 != 32670) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = 5;
	int64_t x110 = INT64_MIN;
	volatile int8_t x111 = 19;
	int8_t x112 = INT8_MIN;
	volatile int64_t t27 = -10186909LL;

	t27 = (x109|((x110|x111)-x112));

	if (t27 != -9223372036854775657LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MIN;
	int8_t x118 = 8;
	static uint8_t x120 = 0U;
	int32_t t28 = 3;

	t28 = (x117|((x118|x119)-x120));

	if (t28 != -120) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = 29594766555378633LL;
	static uint64_t x122 = UINT64_MAX;
	int8_t x123 = INT8_MIN;
	uint64_t t29 = 7973480964769LLU;

	t29 = (x121|((x122|x123)-x124));

	if (t29 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x126 = 1460425252U;
	volatile uint16_t x127 = 1U;
	uint32_t t30 = 480U;

	t30 = (x125|((x126|x127)-x128));

	if (t30 != 1460425391U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x130 = -5;
	int32_t x131 = INT32_MIN;
	volatile uint16_t x132 = 1U;
	volatile int32_t t31 = 11;

	t31 = (x129|((x130|x131)-x132));

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	int8_t x134 = INT8_MIN;
	uint32_t x135 = 179366U;
	int32_t x136 = INT32_MIN;

	t32 = (x133|((x134|x135)-x136));

	if (t32 != -9223372034707292250LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x137 = 156;
	volatile int64_t x138 = -1LL;
	volatile int8_t x140 = INT8_MIN;
	int64_t t33 = 14523483371LL;

	t33 = (x137|((x138|x139)-x140));

	if (t33 != 255LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x141 = 1LLU;
	uint8_t x142 = 57U;
	volatile int8_t x143 = 20;
	volatile uint64_t t34 = 3036LLU;

	t34 = (x141|((x142|x143)-x144));

	if (t34 != 63LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x146 = 21054;
	uint8_t x147 = 45U;
	uint16_t x148 = 45U;
	int64_t t35 = -329LL;

	t35 = (x145|((x146|x147)-x148));

	if (t35 != -9223372036854754798LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = -60;
	static int32_t x150 = INT32_MAX;
	uint32_t x152 = 3334U;
	static volatile uint32_t t36 = 43205U;

	t36 = (x149|((x150|x151)-x152));

	if (t36 != 4294967293U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x154 = -1;
	static volatile int64_t x155 = INT64_MIN;
	int32_t x156 = 4185;
	int64_t t37 = 171243901LL;

	t37 = (x153|((x154|x155)-x156));

	if (t37 != -9LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x158 = 3472335LLU;
	volatile int64_t x159 = -56780823364LL;
	int16_t x160 = 6874;

	t38 = (x157|((x158|x159)-x160));

	if (t38 != 18446744073709420349LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x163 = 3U;
	int64_t x164 = INT64_MAX;
	static volatile int64_t t39 = 1270LL;

	t39 = (x161|((x162|x163)-x164));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -1LL;
	int32_t x166 = INT32_MIN;
	int32_t x167 = -1;
	volatile int64_t x168 = -396910425624LL;

	t40 = (x165|((x166|x167)-x168));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 1789U;
	volatile int16_t x170 = INT16_MIN;
	int64_t x171 = -1381540LL;
	volatile int64_t t41 = -2524191958LL;

	t41 = (x169|((x170|x171)-x172));

	if (t41 != 28669LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = INT8_MIN;
	static uint64_t x174 = UINT64_MAX;
	int8_t x175 = 11;
	volatile uint64_t t42 = 2362LLU;

	t42 = (x173|((x174|x175)-x176));

	if (t42 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x177 = INT8_MIN;
	uint8_t x178 = 12U;
	int64_t x179 = INT64_MIN;
	int32_t x180 = -1;
	volatile int64_t t43 = -1654348LL;

	t43 = (x177|((x178|x179)-x180));

	if (t43 != -115LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = UINT64_MAX;
	static volatile uint16_t x182 = 292U;
	volatile int32_t x183 = INT32_MIN;
	int16_t x184 = INT16_MIN;
	static volatile uint64_t t44 = UINT64_MAX;

	t44 = (x181|((x182|x183)-x184));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x185 = 86082U;
	uint64_t x186 = UINT64_MAX;
	volatile int8_t x187 = -2;
	static int32_t x188 = -1;
	static uint64_t t45 = 1991018807LLU;

	t45 = (x185|((x186|x187)-x188));

	if (t45 != 86082LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MAX;
	uint32_t x190 = 274375U;
	int32_t x191 = INT32_MIN;
	int8_t x192 = INT8_MIN;

	t46 = (x189|((x190|x191)-x192));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x194 = 36;
	int32_t x195 = -24083380;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (x193|((x194|x195)-x196));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x198 = -10;
	int64_t x199 = INT64_MAX;
	int64_t x200 = -1LL;
	volatile int64_t t48 = -467LL;

	t48 = (x197|((x198|x199)-x200));

	if (t48 != 16369157LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = -568;
	static int64_t x202 = -129337426508479LL;
	volatile int64_t t49 = 21901039518373LL;

	t49 = (x201|((x202|x203)-x204));

	if (t49 != -56LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x207 = UINT16_MAX;
	volatile int64_t x208 = INT64_MIN;
	int64_t t50 = -17636548040LL;

	t50 = (x205|((x206|x207)-x208));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x210 = INT32_MAX;
	int32_t x211 = -1;
	int16_t x212 = INT16_MIN;

	t51 = (x209|((x210|x211)-x212));

	if (t51 != 131071LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MIN;
	volatile int16_t x214 = INT16_MIN;
	volatile int32_t x215 = INT32_MIN;
	uint64_t t52 = 13LLU;

	t52 = (x213|((x214|x215)-x216));

	if (t52 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x217 = -1;
	uint16_t x218 = 18U;
	volatile uint64_t x219 = 1409367399629LLU;
	uint64_t x220 = 74544972693435LLU;
	uint64_t t53 = UINT64_MAX;

	t53 = (x217|((x218|x219)-x220));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x222 = INT8_MIN;
	int64_t x223 = 170984306LL;
	int8_t x224 = -1;

	t54 = (x221|((x222|x223)-x224));

	if (t54 != -13LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = 102;
	volatile int8_t x226 = 11;
	int32_t x227 = 5275;
	static uint32_t x228 = 951U;

	t55 = (x225|((x226|x227)-x228));

	if (t55 != 4326U) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x229 = INT16_MIN;
	static int32_t x230 = -1;
	int8_t x231 = -11;
	int16_t x232 = INT16_MIN;

	t56 = (x229|((x230|x231)-x232));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x234 = -1;
	uint64_t t57 = 1251210LLU;

	t57 = (x233|((x234|x235)-x236));

	if (t57 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = -1;
	static int64_t x238 = -28715LL;
	int8_t x239 = 0;
	uint8_t x240 = 1U;
	static volatile int64_t t58 = 3395402LL;

	t58 = (x237|((x238|x239)-x240));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x241 = INT16_MIN;
	int64_t x244 = -28402527431213746LL;
	int64_t t59 = 16024783693498884LL;

	t59 = (x241|((x242|x243)-x244));

	if (t59 != -28945LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x246 = 0U;
	uint16_t x247 = 25665U;
	static volatile int64_t t60 = 14180LL;

	t60 = (x245|((x246|x247)-x248));

	if (t60 != -9223372036854739633LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = INT64_MIN;
	int64_t x250 = INT64_MIN;
	volatile uint8_t x251 = 13U;
	int32_t x252 = INT32_MIN;

	t61 = (x249|((x250|x251)-x252));

	if (t61 != -9223372034707292147LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x254 = INT64_MIN;
	int32_t x256 = INT32_MIN;
	static volatile int64_t t62 = 43879343LL;

	t62 = (x253|((x254|x255)-x256));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = -1;
	int32_t x260 = -5490;
	volatile int64_t t63 = -25574544812LL;

	t63 = (x257|((x258|x259)-x260));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = -1;
	int16_t x262 = -1;
	uint64_t t64 = UINT64_MAX;

	t64 = (x261|((x262|x263)-x264));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x265 = 1617U;
	static int32_t x266 = -965116;
	static int8_t x267 = INT8_MIN;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t65 = -34240;

	t65 = (x265|((x266|x267)-x268));

	if (t65 != -65579) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = -2;
	int16_t x271 = -1;
	int32_t t66 = 95419727;

	t66 = (x269|((x270|x271)-x272));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x273 = UINT32_MAX;
	static int64_t x274 = INT64_MAX;
	static int32_t x276 = 13270;
	uint64_t t67 = UINT64_MAX;

	t67 = (x273|((x274|x275)-x276));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x277 = UINT16_MAX;
	volatile int64_t x278 = INT64_MIN;
	static volatile int32_t x280 = INT32_MAX;

	t68 = (x277|((x278|x279)-x280));

	if (t68 != -2147418113LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x281 = 1;
	int32_t x282 = INT32_MAX;
	int64_t x283 = INT64_MIN;
	int8_t x284 = -1;
	volatile int64_t t69 = -994923798LL;

	t69 = (x281|((x282|x283)-x284));

	if (t69 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x286 = INT32_MIN;
	int16_t x287 = INT16_MIN;
	volatile int8_t x288 = INT8_MIN;
	int32_t t70 = 1;

	t70 = (x285|((x286|x287)-x288));

	if (t70 != -32640) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x289 = UINT32_MAX;
	int32_t x291 = -1;
	int64_t x292 = 24826LL;
	int64_t t71 = -154661LL;

	t71 = (x289|((x290|x291)-x292));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x294 = 3U;
	int8_t x295 = -7;
	static volatile int16_t x296 = INT16_MIN;

	t72 = (x293|((x294|x295)-x296));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = -1;
	int64_t x298 = 3780059042916037420LL;
	static uint16_t x299 = 0U;
	uint64_t x300 = 5694689LLU;
	static volatile uint64_t t73 = UINT64_MAX;

	t73 = (x297|((x298|x299)-x300));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x301 = UINT32_MAX;
	int8_t x302 = INT8_MIN;
	static volatile uint64_t x303 = 795777295LLU;
	int16_t x304 = INT16_MAX;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x301|((x302|x303)-x304));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x305 = 23;
	int32_t x307 = -476;
	volatile int32_t x308 = 57;

	t75 = (x305|((x306|x307)-x308));

	if (t75 != -129) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x309 = INT8_MAX;
	int8_t x310 = INT8_MAX;
	uint16_t x311 = 5126U;
	static uint8_t x312 = 4U;

	t76 = (x309|((x310|x311)-x312));

	if (t76 != 5247) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = -1;
	static uint32_t x314 = 391780U;
	int8_t x316 = INT8_MIN;
	uint32_t t77 = UINT32_MAX;

	t77 = (x313|((x314|x315)-x316));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = INT8_MIN;
	static int64_t x318 = 531282834196146368LL;
	static uint32_t x319 = 49073U;
	int64_t x320 = -1LL;

	t78 = (x317|((x318|x319)-x320));

	if (t78 != -14LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x321 = 6;
	int32_t x322 = INT32_MIN;
	uint8_t x323 = UINT8_MAX;
	static volatile int8_t x324 = 6;
	static volatile int32_t t79 = -3;

	t79 = (x321|((x322|x323)-x324));

	if (t79 != -2147483393) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x325 = 0U;
	int8_t x326 = INT8_MIN;
	volatile int16_t x327 = INT16_MAX;
	uint64_t x328 = UINT64_MAX;
	uint64_t t80 = 92571LLU;

	t80 = (x325|((x326|x327)-x328));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = -1;
	int16_t x330 = -1052;
	volatile int16_t x331 = -1;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t81 = 55;

	t81 = (x329|((x330|x331)-x332));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x333 = INT16_MIN;
	uint64_t x334 = UINT64_MAX;
	uint8_t x335 = 18U;
	static int32_t x336 = 8166674;

	t82 = (x333|((x334|x335)-x336));

	if (t82 != 18446744073709544173LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x337 = INT16_MIN;
	int16_t x338 = -1;
	int8_t x339 = -1;
	uint32_t x340 = 34U;
	volatile uint32_t t83 = 8913766U;

	t83 = (x337|((x338|x339)-x340));

	if (t83 != 4294967261U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = 4;
	int32_t x342 = INT32_MIN;
	uint16_t x344 = 7U;
	volatile int32_t t84 = 117705256;

	t84 = (x341|((x342|x343)-x344));

	if (t84 != -4) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = INT64_MAX;
	uint32_t x346 = 2U;
	volatile int8_t x347 = INT8_MIN;
	int64_t x348 = -272211908674760LL;
	int64_t t85 = INT64_MAX;

	t85 = (x345|((x346|x347)-x348));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x349 = INT32_MAX;
	static int64_t x350 = INT64_MAX;
	int32_t x351 = -55813;
	static int16_t x352 = INT16_MIN;
	int64_t t86 = 976LL;

	t86 = (x349|((x350|x351)-x352));

	if (t86 != 2147483647LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = 11;
	static int16_t x358 = -1;
	int32_t x359 = INT32_MIN;
	static int32_t x360 = -1;
	volatile int32_t t87 = -2026639;

	t87 = (x357|((x358|x359)-x360));

	if (t87 != 11) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x362 = 3U;
	volatile int64_t x363 = -5261554204LL;
	int64_t x364 = INT64_MIN;
	int64_t t88 = 186740743227988LL;

	t88 = (x361|((x362|x363)-x364));

	if (t88 != 9223372031593221607LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x369 = UINT64_MAX;
	volatile int32_t x370 = INT32_MAX;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (x369|((x370|x371)-x372));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x377 = INT32_MIN;
	uint64_t x378 = 4858379010862652201LLU;
	uint64_t x379 = UINT64_MAX;
	int32_t x380 = -6587727;
	static uint64_t t90 = 1491LLU;

	t90 = (x377|((x378|x379)-x380));

	if (t90 != 18446744071568655694LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x382 = 5;
	static int64_t x383 = INT64_MIN;
	int16_t x384 = -1;
	volatile int64_t t91 = 61007441793591135LL;

	t91 = (x381|((x382|x383)-x384));

	if (t91 != -122LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = INT8_MIN;
	int16_t x387 = -1;
	uint64_t x388 = 13551LLU;

	t92 = (x385|((x386|x387)-x388));

	if (t92 != 18446744073709551504LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x389 = 85U;
	int32_t x391 = INT32_MAX;
	static uint64_t x392 = UINT64_MAX;
	uint64_t t93 = 91126657161013LLU;

	t93 = (x389|((x390|x391)-x392));

	if (t93 != 85LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x393 = INT64_MIN;
	volatile int16_t x394 = 5088;
	uint8_t x395 = 12U;
	volatile uint64_t t94 = 12LLU;

	t94 = (x393|((x394|x395)-x396));

	if (t94 != 18296737075522344153LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x397 = INT64_MAX;
	uint64_t x398 = 7065167353330010LLU;
	int8_t x399 = INT8_MIN;

	t95 = (x397|((x398|x399)-x400));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x401 = UINT8_MAX;
	volatile int8_t x402 = -1;
	int64_t x403 = -1LL;
	volatile int64_t t96 = 4702064383640472LL;

	t96 = (x401|((x402|x403)-x404));

	if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x405 = 301940892U;
	int64_t x406 = INT64_MIN;
	int16_t x407 = -1;
	volatile uint16_t x408 = 3U;
	int64_t t97 = 8LL;

	t97 = (x405|((x406|x407)-x408));

	if (t97 != -4LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x409 = 36859541039421LLU;
	static int8_t x410 = INT8_MAX;
	int32_t x412 = 0;
	volatile uint64_t t98 = 9936LLU;

	t98 = (x409|((x410|x411)-x412));

	if (t98 != 36861556817919LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = INT64_MIN;
	volatile uint32_t x414 = UINT32_MAX;
	uint16_t x415 = 7U;
	volatile int64_t t99 = -2905708028296473LL;

	t99 = (x413|((x414|x415)-x416));

	if (t99 != -50475189729460LL) { NG(); } else { ; }
	
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

