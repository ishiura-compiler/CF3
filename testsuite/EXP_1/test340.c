#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x22 = -1;
int32_t x27 = INT32_MIN;
static int8_t x28 = INT8_MIN;
volatile uint64_t t2 = 809216909490359LLU;
int64_t x33 = INT64_MAX;
int64_t t3 = 51089LL;
uint32_t x60 = 20191614U;
volatile uint64_t t6 = 1207487802242LLU;
static int32_t x65 = -4627;
uint64_t t8 = 3430LLU;
int64_t x71 = INT64_MAX;
int16_t x81 = INT16_MIN;
int16_t x84 = INT16_MIN;
uint16_t x88 = 231U;
static uint32_t x99 = UINT32_MAX;
static int64_t x108 = INT64_MAX;
int64_t t16 = 362LL;
int16_t x113 = INT16_MIN;
volatile uint8_t x130 = 15U;
uint32_t x133 = 90U;
volatile uint64_t x134 = UINT64_MAX;
volatile uint64_t t22 = 6027538252149LLU;
static int64_t x141 = -89021640697155956LL;
uint32_t x160 = 21084890U;
uint32_t t26 = 1908659729U;
int8_t x161 = INT8_MIN;
int64_t t28 = -21236342260984LL;
uint32_t x179 = 531U;
static uint16_t x194 = 296U;
volatile int16_t x197 = INT16_MAX;
uint32_t x202 = 4871976U;
int64_t x217 = 5855LL;
volatile int64_t x218 = 426606430LL;
static int32_t t36 = -30001;
int32_t x241 = INT32_MIN;
uint64_t t39 = 4530863LLU;
volatile int32_t x260 = 1093;
uint64_t x270 = 0LLU;
uint64_t x271 = 1038188LLU;
uint32_t x273 = 98015903U;
int32_t x276 = -1;
static volatile int64_t t45 = 12LL;
int8_t x290 = INT8_MIN;
int16_t x297 = INT16_MIN;
int64_t x298 = 1LL;
uint64_t x300 = UINT64_MAX;
uint32_t x312 = UINT32_MAX;
volatile uint64_t t50 = 39LLU;
int16_t x323 = INT16_MIN;
volatile int32_t t52 = 1;
static uint8_t x346 = 1U;
volatile uint64_t t53 = 4924237162912588745LLU;
int16_t x352 = INT16_MAX;
int64_t t55 = -243423455LL;
uint8_t x357 = 97U;
uint64_t t56 = 54975166630LLU;
uint8_t x364 = 25U;
static volatile int32_t t57 = -3915;
static volatile uint64_t t58 = 8943261550558952727LLU;
int32_t x380 = -1;
static volatile uint64_t t61 = 146303369756262LLU;
int16_t x383 = INT16_MIN;
int8_t x395 = 11;
uint32_t t66 = 0U;
int8_t x424 = INT8_MAX;
int8_t x452 = -1;
static uint64_t t71 = 62LLU;
int32_t x459 = -1;
static volatile int64_t t72 = -12938LL;
int32_t x463 = INT32_MIN;
static uint16_t x472 = UINT16_MAX;
uint64_t t76 = 3600179565LLU;
static volatile uint64_t x487 = UINT64_MAX;
static volatile int8_t x502 = INT8_MIN;
int32_t x504 = INT32_MIN;
int8_t x506 = -1;
static int32_t x515 = INT32_MIN;
int64_t x517 = 93896606LL;
static int64_t t83 = 3240319121172LL;
volatile uint32_t t84 = 53856831U;
volatile int16_t x526 = INT16_MAX;
int8_t x527 = -3;
int64_t t86 = -2662972968401213LL;
uint64_t x539 = 69208433484466053LLU;
int16_t x540 = INT16_MIN;
static int16_t x541 = INT16_MIN;
static uint64_t x542 = UINT64_MAX;
int32_t x543 = 26264;
uint8_t x544 = UINT8_MAX;
uint64_t x560 = 946619403601444739LLU;
uint64_t t92 = 64770162258188417LLU;
volatile int32_t x565 = INT32_MIN;
int16_t x584 = INT16_MAX;
int64_t x591 = -1LL;
int16_t x592 = INT16_MAX;
int64_t t97 = -1LL;
int64_t x595 = INT64_MAX;
static volatile int32_t x597 = INT32_MIN;


void f0(void) {
	volatile uint64_t x9 = 197948903694967LLU;
	int64_t x10 = -90LL;
	volatile int32_t x11 = INT32_MIN;
	int8_t x12 = 0;
	volatile uint64_t t0 = 161678723733489LLU;

	t0 = (((x9*x10)+x11)-x12);

	if (t0 != 18428928670229520938LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x21 = INT16_MIN;
	uint32_t x23 = 60375U;
	volatile int16_t x24 = -1;
	uint32_t t1 = 860646U;

	t1 = (((x21*x22)+x23)-x24);

	if (t1 != 93144U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x25 = INT8_MIN;
	uint64_t x26 = 37420LLU;

	t2 = (((x25*x26)+x27)-x28);

	if (t2 != 18446744071557278336LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x34 = -1;
	static int32_t x35 = INT32_MAX;
	int32_t x36 = INT32_MAX;

	t3 = (((x33*x34)+x35)-x36);

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x37 = UINT64_MAX;
	static uint64_t x38 = 16209459717LLU;
	int8_t x39 = INT8_MIN;
	int64_t x40 = INT64_MIN;
	volatile uint64_t t4 = 8558322LLU;

	t4 = (((x37*x38)+x39)-x40);

	if (t4 != 9223372020645315963LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x41 = 256006886202LLU;
	int16_t x42 = INT16_MIN;
	int32_t x43 = INT32_MIN;
	int8_t x44 = -1;
	static uint64_t t5 = 4753217LLU;

	t5 = (((x41*x42)+x43)-x44);

	if (t5 != 18438355237915000833LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x57 = UINT64_MAX;
	int32_t x58 = -3602735;
	static uint16_t x59 = 16056U;

	t6 = (((x57*x58)+x59)-x60);

	if (t6 != 18446744073692978793LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x61 = INT8_MAX;
	uint32_t x62 = UINT32_MAX;
	static int64_t x63 = 60608LL;
	int8_t x64 = 3;
	int64_t t7 = -2LL;

	t7 = (((x61*x62)+x63)-x64);

	if (t7 != 4295027774LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x66 = UINT64_MAX;
	static volatile int8_t x67 = -1;
	static int32_t x68 = INT32_MIN;

	t8 = (((x65*x66)+x67)-x68);

	if (t8 != 2147488274LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x69 = 42763057977LLU;
	uint16_t x70 = UINT16_MAX;
	uint32_t x72 = 1856099199U;
	static uint64_t t9 = 8766911175115275LLU;

	t9 = (((x69*x70)+x71)-x72);

	if (t9 != 9226174512003199303LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x77 = -3307;
	volatile uint64_t x78 = 48LLU;
	int32_t x79 = INT32_MAX;
	int8_t x80 = 12;
	volatile uint64_t t10 = 35816317LLU;

	t10 = (((x77*x78)+x79)-x80);

	if (t10 != 2147324899LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x82 = 3U;
	static int16_t x83 = INT16_MIN;
	int32_t t11 = -3;

	t11 = (((x81*x82)+x83)-x84);

	if (t11 != -98304) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x85 = 8262U;
	static volatile int16_t x86 = 6624;
	uint64_t x87 = UINT64_MAX;
	uint64_t t12 = 1452700425LLU;

	t12 = (((x85*x86)+x87)-x88);

	if (t12 != 54727256LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x93 = UINT32_MAX;
	int16_t x94 = INT16_MIN;
	volatile int8_t x95 = INT8_MIN;
	static int16_t x96 = INT16_MIN;
	volatile uint32_t t13 = 97243363U;

	t13 = (((x93*x94)+x95)-x96);

	if (t13 != 65408U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x97 = 650808LL;
	int32_t x98 = 29135673;
	static int64_t x100 = -2321LL;
	volatile int64_t t14 = 4576LL;

	t14 = (((x97*x98)+x99)-x100);

	if (t14 != 18966024043400LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x101 = 2927647270LL;
	static int64_t x102 = -1LL;
	int16_t x103 = INT16_MIN;
	int16_t x104 = -1;
	volatile int64_t t15 = 3496311LL;

	t15 = (((x101*x102)+x103)-x104);

	if (t15 != -2927680037LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x105 = -97066;
	int64_t x106 = -8283792742805LL;
	uint16_t x107 = UINT16_MAX;

	t16 = (((x105*x106)+x107)-x108);

	if (t16 != -8419297410481600142LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x109 = 3076U;
	int8_t x110 = INT8_MAX;
	uint32_t x111 = UINT32_MAX;
	uint16_t x112 = 815U;
	uint32_t t17 = 61951U;

	t17 = (((x109*x110)+x111)-x112);

	if (t17 != 389836U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x114 = INT8_MAX;
	volatile int8_t x115 = -1;
	int8_t x116 = -4;
	volatile int32_t t18 = -32806;

	t18 = (((x113*x114)+x115)-x116);

	if (t18 != -4161533) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x117 = 211U;
	uint8_t x118 = UINT8_MAX;
	uint32_t x119 = UINT32_MAX;
	uint16_t x120 = 7866U;
	volatile uint32_t t19 = 20U;

	t19 = (((x117*x118)+x119)-x120);

	if (t19 != 45938U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x125 = 3016;
	volatile int32_t x126 = -1;
	uint32_t x127 = UINT32_MAX;
	static uint32_t x128 = 13473603U;
	static volatile uint32_t t20 = 7987U;

	t20 = (((x125*x126)+x127)-x128);

	if (t20 != 4281490676U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x129 = 5874208815LL;
	int32_t x131 = -1;
	int64_t x132 = -1LL;
	volatile int64_t t21 = 0LL;

	t21 = (((x129*x130)+x131)-x132);

	if (t21 != 88113132225LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x135 = 55;
	int8_t x136 = 1;

	t22 = (((x133*x134)+x135)-x136);

	if (t22 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x137 = 11U;
	int16_t x138 = INT16_MIN;
	volatile uint64_t x139 = 584188LLU;
	static uint32_t x140 = 2007801U;
	volatile uint64_t t23 = 721355835785LLU;

	t23 = (((x137*x138)+x139)-x140);

	if (t23 != 4293183235LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x142 = 73U;
	int32_t x143 = -65053;
	int16_t x144 = 4533;
	static volatile int64_t t24 = -47LL;

	t24 = (((x141*x142)+x143)-x144);

	if (t24 != -6498579770892454374LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = 0;
	uint8_t x151 = 100U;
	int8_t x152 = INT8_MIN;
	static int32_t t25 = 8208740;

	t25 = (((x149*x150)+x151)-x152);

	if (t25 != 228) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x157 = UINT8_MAX;
	uint32_t x158 = 10U;
	int16_t x159 = -1;

	t26 = (((x157*x158)+x159)-x160);

	if (t26 != 4273884955U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x162 = 118139657103986LLU;
	volatile int16_t x163 = INT16_MIN;
	int64_t x164 = INT64_MIN;
	uint64_t t27 = 3301655830830LLU;

	t27 = (((x161*x162)+x163)-x164);

	if (t27 != 9208250160745432832LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x173 = INT32_MAX;
	int64_t x174 = -22LL;
	static int8_t x175 = INT8_MIN;
	uint32_t x176 = 689088982U;

	t28 = (((x173*x174)+x175)-x176);

	if (t28 != -47933729344LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x177 = INT16_MIN;
	uint32_t x178 = 914405682U;
	volatile int64_t x180 = -15073281536LL;
	volatile int64_t t29 = -1731349183153LL;

	t29 = (((x177*x178)+x179)-x180);

	if (t29 != 17814718483LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x185 = UINT64_MAX;
	volatile uint16_t x186 = 91U;
	int32_t x187 = 51;
	uint8_t x188 = UINT8_MAX;
	uint64_t t30 = 1LLU;

	t30 = (((x185*x186)+x187)-x188);

	if (t30 != 18446744073709551321LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x193 = 13U;
	volatile int64_t x195 = -520827181959743577LL;
	volatile int64_t x196 = -1LL;
	volatile int64_t t31 = 16237LL;

	t31 = (((x193*x194)+x195)-x196);

	if (t31 != -520827181959739728LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x198 = UINT32_MAX;
	int16_t x199 = -1;
	uint8_t x200 = 117U;
	uint32_t t32 = 16180513U;

	t32 = (((x197*x198)+x199)-x200);

	if (t32 != 4294934411U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x201 = INT16_MIN;
	uint32_t x203 = 2132712012U;
	int32_t x204 = -84;
	uint32_t t33 = 209459351U;

	t33 = (((x201*x202)+x203)-x204);

	if (t33 != 1401592480U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x213 = 144U;
	int64_t x214 = -22190328161063LL;
	static int32_t x215 = INT32_MIN;
	static volatile int16_t x216 = -7;
	static int64_t t34 = -5427LL;

	t34 = (((x213*x214)+x215)-x216);

	if (t34 != -3195409402676713LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x219 = 819U;
	uint16_t x220 = UINT16_MAX;
	static volatile int64_t t35 = -15764009505204629LL;

	t35 = (((x217*x218)+x219)-x220);

	if (t35 != 2497780582934LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x229 = -1;
	int32_t x230 = 138;
	static int16_t x231 = INT16_MIN;
	int32_t x232 = 40078;

	t36 = (((x229*x230)+x231)-x232);

	if (t36 != -72984) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x233 = 1;
	int32_t x234 = -2644;
	uint8_t x235 = 93U;
	uint32_t x236 = 400419U;
	volatile uint32_t t37 = 5277U;

	t37 = (((x233*x234)+x235)-x236);

	if (t37 != 4294564326U) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x242 = -1173LL;
	volatile int32_t x243 = INT32_MIN;
	volatile int32_t x244 = INT32_MAX;
	int64_t t38 = -436471763LL;

	t38 = (((x241*x242)+x243)-x244);

	if (t38 != 2514703351809LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x249 = 43993857U;
	static int8_t x250 = -1;
	uint64_t x251 = 12590596043190LLU;
	uint64_t x252 = UINT64_MAX;

	t39 = (((x249*x250)+x251)-x252);

	if (t39 != 12594847016630LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x253 = 1LL;
	int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MAX;
	int32_t x256 = INT32_MIN;
	volatile int64_t t40 = -1157325LL;

	t40 = (((x253*x254)+x255)-x256);

	if (t40 != -9223372034707259393LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x257 = 2128702337695LLU;
	uint8_t x258 = 6U;
	volatile int32_t x259 = 1750343;
	static uint64_t t41 = 527187969284044LLU;

	t41 = (((x257*x258)+x259)-x260);

	if (t41 != 12772215775420LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x261 = -12;
	uint64_t x262 = 268827026618968079LLU;
	int16_t x263 = INT16_MAX;
	static int8_t x264 = -1;
	volatile uint64_t t42 = 22826594981265908LLU;

	t42 = (((x261*x262)+x263)-x264);

	if (t42 != 15220819754281967436LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x269 = INT8_MIN;
	int16_t x272 = INT16_MAX;
	uint64_t t43 = 117102362587257752LLU;

	t43 = (((x269*x270)+x271)-x272);

	if (t43 != 1005421LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x274 = UINT32_MAX;
	uint8_t x275 = 1U;
	uint32_t t44 = 3120U;

	t44 = (((x273*x274)+x275)-x276);

	if (t44 != 4196951395U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x277 = INT8_MIN;
	volatile int64_t x278 = 104473146508288LL;
	volatile int32_t x279 = INT32_MAX;
	int64_t x280 = INT64_MIN;

	t45 = (((x277*x278)+x279)-x280);

	if (t45 != 9209999476249198591LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x281 = UINT16_MAX;
	int16_t x282 = 10;
	static uint8_t x283 = 93U;
	uint64_t x284 = UINT64_MAX;
	static uint64_t t46 = 245503198372LLU;

	t46 = (((x281*x282)+x283)-x284);

	if (t46 != 655444LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x289 = UINT64_MAX;
	int16_t x291 = -1;
	int16_t x292 = INT16_MIN;
	volatile uint64_t t47 = 14882904964386LLU;

	t47 = (((x289*x290)+x291)-x292);

	if (t47 != 32895LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x299 = 7234700;
	uint64_t t48 = 61361LLU;

	t48 = (((x297*x298)+x299)-x300);

	if (t48 != 7201933LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x301 = 158745U;
	int8_t x302 = 1;
	volatile uint8_t x303 = 6U;
	uint32_t x304 = 24U;
	uint32_t t49 = 1U;

	t49 = (((x301*x302)+x303)-x304);

	if (t49 != 158727U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x309 = 3;
	uint64_t x310 = 8061268659LLU;
	volatile uint32_t x311 = UINT32_MAX;

	t50 = (((x309*x310)+x311)-x312);

	if (t50 != 24183805977LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x313 = 12659524LLU;
	static volatile int16_t x314 = 157;
	volatile int64_t x315 = INT64_MIN;
	uint64_t x316 = 460065887278LLU;
	volatile uint64_t t51 = 112020374591LLU;

	t51 = (((x313*x314)+x315)-x316);

	if (t51 != 9223371578776433798LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x321 = INT16_MIN;
	uint8_t x322 = UINT8_MAX;
	uint8_t x324 = UINT8_MAX;

	t52 = (((x321*x322)+x323)-x324);

	if (t52 != -8388863) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x345 = 1U;
	uint16_t x347 = 286U;
	static uint64_t x348 = 707117LLU;

	t53 = (((x345*x346)+x347)-x348);

	if (t53 != 18446744073708844786LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x349 = 717LL;
	static int32_t x350 = INT32_MIN;
	int64_t x351 = 1579LL;
	int64_t t54 = 704329903381069LL;

	t54 = (((x349*x350)+x351)-x352);

	if (t54 != -1539745806804LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x353 = 32787629LL;
	volatile int32_t x354 = -1;
	static int8_t x355 = -1;
	int64_t x356 = -1LL;

	t55 = (((x353*x354)+x355)-x356);

	if (t55 != -32787629LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x358 = -1;
	uint32_t x359 = 198213U;
	uint64_t x360 = 48LLU;

	t56 = (((x357*x358)+x359)-x360);

	if (t56 != 198068LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x361 = -1;
	volatile int32_t x362 = -4779;
	int16_t x363 = -1;

	t57 = (((x361*x362)+x363)-x364);

	if (t57 != 4753) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x365 = -1;
	volatile int16_t x366 = INT16_MIN;
	uint64_t x367 = 2680LLU;
	int8_t x368 = -1;

	t58 = (((x365*x366)+x367)-x368);

	if (t58 != 35449LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x369 = 29065;
	int64_t x370 = -1LL;
	volatile int8_t x371 = INT8_MAX;
	int16_t x372 = -1;
	int64_t t59 = 2188857389163LL;

	t59 = (((x369*x370)+x371)-x372);

	if (t59 != -28937LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x373 = INT8_MIN;
	volatile int8_t x374 = INT8_MIN;
	uint8_t x375 = UINT8_MAX;
	int64_t x376 = -1LL;
	int64_t t60 = 623LL;

	t60 = (((x373*x374)+x375)-x376);

	if (t60 != 16640LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x377 = 5885179LLU;
	int32_t x378 = -1;
	uint8_t x379 = 5U;

	t61 = (((x377*x378)+x379)-x380);

	if (t61 != 18446744073703666443LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x381 = 11037459U;
	uint8_t x382 = 4U;
	int16_t x384 = -1;
	volatile uint32_t t62 = 7797U;

	t62 = (((x381*x382)+x383)-x384);

	if (t62 != 44117069U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x385 = 469U;
	int32_t x386 = 1697;
	static int8_t x387 = -1;
	volatile uint64_t x388 = 15LLU;
	static volatile uint64_t t63 = 814701292LLU;

	t63 = (((x385*x386)+x387)-x388);

	if (t63 != 795877LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x389 = INT16_MAX;
	int16_t x390 = INT16_MIN;
	int64_t x391 = -1LL;
	uint32_t x392 = 1800057163U;
	int64_t t64 = -571285381969842465LL;

	t64 = (((x389*x390)+x391)-x392);

	if (t64 != -2873766220LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x393 = 1;
	int16_t x394 = INT16_MIN;
	static volatile uint8_t x396 = UINT8_MAX;
	volatile int32_t t65 = 1721;

	t65 = (((x393*x394)+x395)-x396);

	if (t65 != -33012) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x405 = 4958U;
	uint32_t x406 = 1232732U;
	static uint8_t x407 = 68U;
	int32_t x408 = INT32_MIN;

	t66 = (((x405*x406)+x407)-x408);

	if (t66 != 3964401676U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x413 = -47;
	static uint32_t x414 = UINT32_MAX;
	static uint16_t x415 = UINT16_MAX;
	uint16_t x416 = 60U;
	volatile uint32_t t67 = 0U;

	t67 = (((x413*x414)+x415)-x416);

	if (t67 != 65522U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x417 = INT16_MIN;
	uint64_t x418 = 51062572LLU;
	uint8_t x419 = UINT8_MAX;
	static volatile uint8_t x420 = UINT8_MAX;
	uint64_t t68 = 56007LLU;

	t68 = (((x417*x418)+x419)-x420);

	if (t68 != 18446742400491192320LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x421 = INT64_MIN;
	volatile uint64_t x422 = 77630LLU;
	int32_t x423 = INT32_MIN;
	uint64_t t69 = 1011440LLU;

	t69 = (((x421*x422)+x423)-x424);

	if (t69 != 18446744071562067841LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x449 = INT16_MAX;
	volatile int8_t x450 = -1;
	int8_t x451 = 3;
	int32_t t70 = 43963013;

	t70 = (((x449*x450)+x451)-x452);

	if (t70 != -32763) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x453 = 1680542535137LLU;
	static int32_t x454 = INT32_MIN;
	int64_t x455 = INT64_MAX;
	int16_t x456 = INT16_MIN;

	t71 = (((x453*x454)+x455)-x456);

	if (t71 != 15847596508753985535LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x457 = UINT32_MAX;
	uint8_t x458 = 26U;
	int64_t x460 = -132496550924176177LL;

	t72 = (((x457*x458)+x459)-x460);

	if (t72 != 132496555219143446LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x461 = 29;
	volatile uint64_t x462 = UINT64_MAX;
	int32_t x464 = INT32_MAX;
	uint64_t t73 = 2800233LLU;

	t73 = (((x461*x462)+x463)-x464);

	if (t73 != 18446744069414584292LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x465 = 1786320U;
	int16_t x466 = INT16_MIN;
	int16_t x467 = INT16_MIN;
	int16_t x468 = -1;
	uint32_t t74 = 1018793929U;

	t74 = (((x465*x466)+x467)-x468);

	if (t74 != 1595375617U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x469 = 29828498304653674LLU;
	static volatile uint16_t x470 = UINT16_MAX;
	int64_t x471 = -1LL;
	static volatile uint64_t t75 = 21343450923270200LLU;

	t75 = (((x469*x470)+x471)-x472);

	if (t75 != 17902508655975540374LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x477 = -10021089802LL;
	int32_t x478 = 74145886;
	int16_t x479 = -13;
	uint64_t x480 = 28407277LLU;

	t76 = (((x477*x478)+x479)-x480);

	if (t76 != 17703721491626289754LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x485 = 0U;
	int8_t x486 = INT8_MIN;
	uint8_t x488 = 35U;
	uint64_t t77 = 6043147822880229329LLU;

	t77 = (((x485*x486)+x487)-x488);

	if (t77 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x489 = INT16_MIN;
	volatile uint8_t x490 = UINT8_MAX;
	volatile int16_t x491 = INT16_MAX;
	uint64_t x492 = 76292LLU;
	uint64_t t78 = 6025796761085475LLU;

	t78 = (((x489*x490)+x491)-x492);

	if (t78 != 18446744073701152251LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x501 = UINT64_MAX;
	int64_t x503 = INT64_MIN;
	uint64_t t79 = 387809LLU;

	t79 = (((x501*x502)+x503)-x504);

	if (t79 != 9223372039002259584LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x505 = UINT64_MAX;
	uint64_t x507 = 360LLU;
	volatile int64_t x508 = -1LL;
	uint64_t t80 = 44193608LLU;

	t80 = (((x505*x506)+x507)-x508);

	if (t80 != 362LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x509 = INT8_MIN;
	static uint64_t x510 = UINT64_MAX;
	static volatile uint32_t x511 = 8642U;
	int8_t x512 = INT8_MAX;
	static uint64_t t81 = 240025108LLU;

	t81 = (((x509*x510)+x511)-x512);

	if (t81 != 8643LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x513 = UINT64_MAX;
	int64_t x514 = INT64_MIN;
	int32_t x516 = INT32_MIN;
	volatile uint64_t t82 = 7LLU;

	t82 = (((x513*x514)+x515)-x516);

	if (t82 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x518 = -1;
	uint32_t x519 = UINT32_MAX;
	uint32_t x520 = 16U;

	t83 = (((x517*x518)+x519)-x520);

	if (t83 != 4201070673LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x521 = UINT8_MAX;
	uint32_t x522 = 188337U;
	int32_t x523 = -1;
	volatile int16_t x524 = 6047;

	t84 = (((x521*x522)+x523)-x524);

	if (t84 != 48019887U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x525 = 585U;
	uint32_t x528 = 7988U;
	uint32_t t85 = 358U;

	t85 = (((x525*x526)+x527)-x528);

	if (t85 != 19160704U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x529 = UINT32_MAX;
	uint32_t x530 = 28848U;
	int8_t x531 = -1;
	volatile int64_t x532 = 40325226LL;

	t86 = (((x529*x530)+x531)-x532);

	if (t86 != 4254613221LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x533 = 4U;
	uint64_t x534 = 1447LLU;
	uint64_t x535 = 56278542536LLU;
	int64_t x536 = INT64_MAX;
	volatile uint64_t t87 = 18797LLU;

	t87 = (((x533*x534)+x535)-x536);

	if (t87 != 9223372093133324133LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x537 = -1;
	volatile uint16_t x538 = 260U;
	uint64_t t88 = 3748394356LLU;

	t88 = (((x537*x538)+x539)-x540);

	if (t88 != 69208433484498561LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t t89 = 370912LLU;

	t89 = (((x541*x542)+x543)-x544);

	if (t89 != 58777LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x545 = -1;
	static int8_t x546 = INT8_MIN;
	int32_t x547 = -1;
	int8_t x548 = -1;
	int32_t t90 = -12031;

	t90 = (((x545*x546)+x547)-x548);

	if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x553 = UINT64_MAX;
	uint16_t x554 = 6980U;
	static int16_t x555 = INT16_MAX;
	static uint32_t x556 = 222054660U;
	uint64_t t91 = 1681945662526LLU;

	t91 = (((x553*x554)+x555)-x556);

	if (t91 != 18446744073487522743LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x557 = INT8_MAX;
	static uint16_t x558 = 25U;
	volatile uint16_t x559 = UINT16_MAX;

	t92 = (((x557*x558)+x559)-x560);

	if (t92 != 17500124670108175587LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x566 = 1;
	static int8_t x567 = 14;
	int8_t x568 = -1;
	int32_t t93 = -1225734;

	t93 = (((x565*x566)+x567)-x568);

	if (t93 != -2147483633) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x573 = UINT8_MAX;
	int32_t x574 = 1410;
	static uint64_t x575 = 84992090032742980LLU;
	uint16_t x576 = 22142U;
	volatile uint64_t t94 = 2695101344733030983LLU;

	t94 = (((x573*x574)+x575)-x576);

	if (t94 != 84992090033080388LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x577 = -1LL;
	volatile int8_t x578 = INT8_MIN;
	volatile uint8_t x579 = 1U;
	volatile int32_t x580 = INT32_MIN;
	static volatile int64_t t95 = -584439722928433838LL;

	t95 = (((x577*x578)+x579)-x580);

	if (t95 != 2147483777LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x581 = 29;
	uint8_t x582 = 0U;
	static int8_t x583 = INT8_MIN;
	int32_t t96 = -5825956;

	t96 = (((x581*x582)+x583)-x584);

	if (t96 != -32895) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x589 = -1;
	int8_t x590 = 28;

	t97 = (((x589*x590)+x591)-x592);

	if (t97 != -32796LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x593 = UINT64_MAX;
	int8_t x594 = -1;
	int16_t x596 = -1;
	volatile uint64_t t98 = 32122657014811LLU;

	t98 = (((x593*x594)+x595)-x596);

	if (t98 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x598 = 648070754213113LLU;
	static int8_t x599 = -36;
	volatile uint32_t x600 = 569U;
	static volatile uint64_t t99 = 719522852901LLU;

	t99 = (((x597*x598)+x599)-x600);

	if (t99 != 11705965403556543907LLU) { NG(); } else { ; }
	
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

