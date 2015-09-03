#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
int8_t x19 = INT8_MAX;
int8_t x20 = INT8_MIN;
volatile int32_t t3 = 789753;
int16_t x24 = INT16_MIN;
volatile int16_t x31 = INT16_MAX;
int16_t x32 = INT16_MIN;
static int8_t x40 = INT8_MIN;
static volatile int8_t x45 = -41;
int16_t x47 = 1;
int16_t x48 = -1;
volatile uint64_t t10 = 856209758LLU;
static uint16_t x54 = 8273U;
uint16_t x65 = UINT16_MAX;
int32_t x67 = -5;
static int64_t x72 = -489095023873573049LL;
uint8_t x75 = 2U;
uint32_t x84 = 22292781U;
uint64_t x92 = 1031538744607642463LLU;
static uint32_t x94 = 203U;
int32_t t20 = -58285411;
volatile int32_t t21 = 184189862;
int64_t x109 = 13670273411088LL;
uint16_t x118 = 274U;
volatile uint64_t t23 = 3022585011568708918LLU;
uint32_t x131 = UINT32_MAX;
int16_t x132 = INT16_MAX;
static volatile int32_t t25 = 13196245;
uint32_t x167 = UINT32_MAX;
int8_t x175 = INT8_MIN;
uint16_t x177 = 11448U;
volatile int32_t x181 = INT32_MIN;
static uint32_t x182 = UINT32_MAX;
uint32_t x189 = 14024U;
int16_t x190 = -1;
volatile int16_t x195 = INT16_MIN;
int32_t t35 = -16315;
int8_t x201 = 1;
int32_t x202 = 3529186;
volatile int32_t t36 = -43;
uint64_t t42 = 28LLU;
uint32_t t46 = 95728U;
uint16_t x263 = UINT16_MAX;
uint64_t t48 = 94076776LLU;
static int16_t x278 = INT16_MIN;
int8_t x280 = INT8_MIN;
uint64_t x287 = UINT64_MAX;
int64_t x314 = -1652687354249235731LL;
int32_t x315 = INT32_MAX;
static uint16_t x319 = UINT16_MAX;
int32_t t56 = -90;
uint16_t x333 = 4U;
int8_t x342 = -1;
int8_t x344 = INT8_MIN;
static volatile uint64_t t61 = 55363LLU;
int16_t x373 = 834;
int64_t x374 = 7292628127LL;
uint32_t x379 = UINT32_MAX;
uint32_t t66 = 802655790U;
volatile int16_t x384 = 2;
uint16_t x387 = 263U;
int16_t x391 = -1;
static volatile int8_t x395 = -6;
volatile uint16_t x424 = 21646U;
static uint16_t x435 = UINT16_MAX;
int64_t t78 = 28775LL;
int8_t x447 = INT8_MAX;
int64_t x451 = INT64_MIN;
uint16_t x466 = UINT16_MAX;
int64_t t83 = 746418694986LL;
static int32_t x472 = -1;
int32_t x477 = -339494;
uint64_t x485 = 2332LLU;
int8_t x488 = INT8_MAX;
uint16_t x492 = UINT16_MAX;
volatile uint16_t x502 = 1056U;
uint64_t x503 = 394258320733425931LLU;
static int64_t x523 = INT64_MIN;
uint32_t x532 = 860629U;
int8_t x540 = -6;
int32_t x541 = -1;
int64_t x551 = 2449LL;
static volatile int32_t x553 = -25;
int64_t x554 = -1LL;
uint8_t x555 = UINT8_MAX;
static int8_t x562 = 0;
int32_t x564 = INT32_MIN;


void f0(void) {
	static uint32_t x2 = 3U;
	uint32_t x3 = 1407341U;
	int32_t x4 = -1;
	uint32_t t0 = 23559310U;

	t0 = (((x1*x2)-x3)-x4);

	if (t0 != 2146076305U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint32_t x6 = 29361586U;
	static int16_t x7 = INT16_MIN;
	static int32_t x8 = -24099;
	uint32_t t1 = 1610U;

	t1 = (((x5*x6)-x7)-x8);

	if (t1 != 4265662577U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	volatile int8_t x10 = -1;
	uint64_t x11 = UINT64_MAX;
	int8_t x12 = 3;
	volatile uint64_t t2 = 742553LLU;

	t2 = (((x9*x10)-x11)-x12);

	if (t2 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -3500;
	int8_t x18 = INT8_MIN;

	t3 = (((x17*x18)-x19)-x20);

	if (t3 != 448001) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	int64_t x22 = -1LL;
	static int32_t x23 = INT32_MAX;
	int64_t t4 = -327293092559LL;

	t4 = (((x21*x22)-x23)-x24);

	if (t4 != -6442418174LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 4028U;
	volatile int16_t x26 = -30;
	int64_t x27 = INT64_MAX;
	int16_t x28 = INT16_MAX;
	volatile int64_t t5 = 24LL;

	t5 = (((x25*x26)-x27)-x28);

	if (t5 != -9223372032559962118LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = 15471538650147810LLU;
	int8_t x30 = 20;
	uint64_t t6 = 1207915162580755LLU;

	t6 = (((x29*x30)-x31)-x32);

	if (t6 != 309430773002956201LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x37 = 3916U;
	volatile int8_t x38 = INT8_MIN;
	volatile int16_t x39 = INT16_MIN;
	uint32_t t7 = 349U;

	t7 = (((x37*x38)-x39)-x40);

	if (t7 != 4294498944U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = 12825816;
	int16_t x42 = -1;
	int16_t x43 = INT16_MAX;
	uint16_t x44 = 15732U;
	int32_t t8 = -7;

	t8 = (((x41*x42)-x43)-x44);

	if (t8 != -12874315) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x46 = 120164LLU;
	static uint64_t t9 = 984705090598213428LLU;

	t9 = (((x45*x46)-x47)-x48);

	if (t9 != 18446744073704624892LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = INT64_MIN;
	uint64_t x50 = UINT64_MAX;
	int32_t x51 = INT32_MAX;
	int8_t x52 = INT8_MIN;

	t10 = (((x49*x50)-x51)-x52);

	if (t10 != 9223372034707292289LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = -31LL;
	static int32_t x55 = -5;
	volatile uint64_t x56 = 65654154827LLU;
	volatile uint64_t t11 = 215645251368329889LLU;

	t11 = (((x53*x54)-x55)-x56);

	if (t11 != 18446744008055140331LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = 112778504192705LL;
	int16_t x62 = 7;
	volatile int32_t x63 = -61;
	int8_t x64 = INT8_MIN;
	int64_t t12 = 7367310094LL;

	t12 = (((x61*x62)-x63)-x64);

	if (t12 != 789449529349124LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x66 = INT16_MAX;
	static int16_t x68 = -1;
	int32_t t13 = 1;

	t13 = (((x65*x66)-x67)-x68);

	if (t13 != 2147385351) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = 23461U;
	volatile int8_t x70 = -3;
	volatile int64_t x71 = 28733195LL;
	static int64_t t14 = -116254297838LL;

	t14 = (((x69*x70)-x71)-x72);

	if (t14 != 489095023844769471LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 2U;
	uint32_t x74 = UINT32_MAX;
	static uint16_t x76 = 3556U;
	uint32_t t15 = 1U;

	t15 = (((x73*x74)-x75)-x76);

	if (t15 != 4294963736U) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x77 = INT32_MIN;
	static uint64_t x78 = 5LLU;
	int16_t x79 = 1177;
	uint32_t x80 = 982U;
	volatile uint64_t t16 = 1863498529605894938LLU;

	t16 = (((x77*x78)-x79)-x80);

	if (t16 != 18446744062972131217LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x81 = -1LL;
	volatile int8_t x82 = INT8_MAX;
	static uint16_t x83 = UINT16_MAX;
	static volatile int64_t t17 = 418779723763747LL;

	t17 = (((x81*x82)-x83)-x84);

	if (t17 != -22358443LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	static volatile uint8_t x90 = 7U;
	static int16_t x91 = INT16_MIN;
	uint64_t t18 = 74LLU;

	t18 = (((x89*x90)-x91)-x92);

	if (t18 != 17415205329101712545LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x93 = 22;
	volatile int32_t x95 = -1;
	uint16_t x96 = 72U;
	volatile uint32_t t19 = 104619859U;

	t19 = (((x93*x94)-x95)-x96);

	if (t19 != 4395U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x97 = 64;
	int16_t x98 = -6;
	volatile int8_t x99 = -26;
	uint8_t x100 = 0U;

	t20 = (((x97*x98)-x99)-x100);

	if (t20 != -358) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = INT8_MIN;
	static int16_t x106 = 0;
	int16_t x107 = INT16_MIN;
	int32_t x108 = INT32_MAX;

	t21 = (((x105*x106)-x107)-x108);

	if (t21 != -2147450879) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x110 = INT16_MIN;
	uint64_t x111 = 48316762726328301LLU;
	int8_t x112 = 46;
	uint64_t t22 = 548707828364LLU;

	t22 = (((x109*x110)-x111)-x112);

	if (t22 != 17950479791848691685LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x117 = -1LL;
	static uint64_t x119 = 127391982389126844LLU;
	uint32_t x120 = 6169U;

	t23 = (((x117*x118)-x119)-x120);

	if (t23 != 18319352091320418329LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x129 = INT8_MIN;
	int8_t x130 = INT8_MAX;
	volatile uint32_t t24 = 11U;

	t24 = (((x129*x130)-x131)-x132);

	if (t24 != 4294918274U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x133 = -1;
	int32_t x134 = -303743;
	static int16_t x135 = INT16_MAX;
	static int16_t x136 = -41;

	t25 = (((x133*x134)-x135)-x136);

	if (t25 != 271017) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x137 = -113343LL;
	volatile int8_t x138 = 20;
	uint64_t x139 = 2203420580758350228LLU;
	int8_t x140 = INT8_MIN;
	volatile uint64_t t26 = 1070115123779LLU;

	t26 = (((x137*x138)-x139)-x140);

	if (t26 != 16243323492948934656LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x141 = 31U;
	int8_t x142 = -1;
	uint16_t x143 = 42U;
	int64_t x144 = -2060067270LL;
	volatile int64_t t27 = 1353921171163LL;

	t27 = (((x141*x142)-x143)-x144);

	if (t27 != 2060067197LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x149 = 373663764LLU;
	int8_t x150 = -3;
	int64_t x151 = INT64_MAX;
	int8_t x152 = INT8_MAX;
	volatile uint64_t t28 = 288LLU;

	t28 = (((x149*x150)-x151)-x152);

	if (t28 != 9223372035733784390LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x165 = -1;
	volatile int64_t x166 = 203LL;
	volatile uint32_t x168 = 15171U;
	int64_t t29 = -26289682879509LL;

	t29 = (((x165*x166)-x167)-x168);

	if (t29 != -4294982669LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x173 = INT32_MIN;
	uint64_t x174 = 31674192265397099LLU;
	int8_t x176 = -1;
	volatile uint64_t t30 = 838497LLU;

	t30 = (((x173*x174)-x175)-x176);

	if (t30 != 13167573453336739969LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x178 = -1;
	int8_t x179 = INT8_MIN;
	volatile int64_t x180 = 29294685LL;
	int64_t t31 = -21660737544755LL;

	t31 = (((x177*x178)-x179)-x180);

	if (t31 != -29306005LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x183 = INT32_MIN;
	volatile int32_t x184 = INT32_MAX;
	volatile uint32_t t32 = 56067U;

	t32 = (((x181*x182)-x183)-x184);

	if (t32 != 2147483649U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x185 = INT16_MAX;
	static uint8_t x186 = UINT8_MAX;
	volatile int8_t x187 = -14;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t33 = -33;

	t33 = (((x185*x186)-x187)-x188);

	if (t33 != 8290064) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x191 = INT64_MAX;
	uint16_t x192 = 196U;
	static int64_t t34 = 12870629503954LL;

	t34 = (((x189*x190)-x191)-x192);

	if (t34 != -9223372032559822731LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x193 = 0U;
	volatile int16_t x194 = 0;
	static int32_t x196 = 0;

	t35 = (((x193*x194)-x195)-x196);

	if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x203 = -1;
	uint16_t x204 = 7176U;

	t36 = (((x201*x202)-x203)-x204);

	if (t36 != 3522011) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x209 = 4705895U;
	static volatile int8_t x210 = INT8_MIN;
	static int64_t x211 = -651428536183LL;
	int16_t x212 = -1;
	int64_t t37 = 1LL;

	t37 = (((x209*x210)-x211)-x212);

	if (t37 != 655121148920LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x213 = 98U;
	volatile int8_t x214 = INT8_MAX;
	uint16_t x215 = 36U;
	static int8_t x216 = -1;
	int32_t t38 = -4;

	t38 = (((x213*x214)-x215)-x216);

	if (t38 != 12411) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x221 = 0U;
	static int8_t x222 = INT8_MIN;
	int16_t x223 = -228;
	int16_t x224 = INT16_MIN;
	static volatile int32_t t39 = 83908;

	t39 = (((x221*x222)-x223)-x224);

	if (t39 != 32996) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x225 = 0U;
	int8_t x226 = INT8_MIN;
	int16_t x227 = INT16_MIN;
	volatile uint32_t x228 = 3040005U;
	uint32_t t40 = 971895U;

	t40 = (((x225*x226)-x227)-x228);

	if (t40 != 4291960059U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x229 = INT16_MIN;
	static uint8_t x230 = 3U;
	int64_t x231 = INT64_MIN;
	int64_t x232 = -116LL;
	int64_t t41 = -744639LL;

	t41 = (((x229*x230)-x231)-x232);

	if (t41 != 9223372036854677620LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x237 = UINT64_MAX;
	uint32_t x238 = 3U;
	int8_t x239 = INT8_MIN;
	static uint64_t x240 = 8721370465584634015LLU;

	t42 = (((x237*x238)-x239)-x240);

	if (t42 != 9725373608124917726LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x241 = 1018191807LLU;
	int64_t x242 = INT64_MAX;
	int32_t x243 = INT32_MIN;
	uint64_t x244 = 45149614737LLU;
	static volatile uint64_t t43 = 46378221179952346LLU;

	t43 = (((x241*x242)-x243)-x244);

	if (t43 != 9223371992834452912LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x245 = -44;
	static volatile int32_t x246 = -8;
	int8_t x247 = -12;
	volatile uint16_t x248 = UINT16_MAX;
	volatile int32_t t44 = -274444482;

	t44 = (((x245*x246)-x247)-x248);

	if (t44 != -65171) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x249 = INT16_MAX;
	volatile uint16_t x250 = UINT16_MAX;
	int64_t x251 = -8LL;
	static uint8_t x252 = 0U;
	int64_t t45 = -64093800201294065LL;

	t45 = (((x249*x250)-x251)-x252);

	if (t45 != 2147385353LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x253 = 1;
	uint16_t x254 = 13U;
	static volatile uint32_t x255 = 115088068U;
	int32_t x256 = INT32_MIN;

	t46 = (((x253*x254)-x255)-x256);

	if (t46 != 2032395593U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x257 = UINT8_MAX;
	int16_t x258 = INT16_MIN;
	int16_t x259 = INT16_MIN;
	volatile uint16_t x260 = 8U;
	int32_t t47 = -31;

	t47 = (((x257*x258)-x259)-x260);

	if (t47 != -8323080) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x261 = UINT64_MAX;
	static volatile int8_t x262 = 0;
	volatile uint64_t x264 = 44035817LLU;

	t48 = (((x261*x262)-x263)-x264);

	if (t48 != 18446744073665450264LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x273 = 1U;
	int64_t x274 = -59468LL;
	int32_t x275 = INT32_MAX;
	int32_t x276 = INT32_MIN;
	int64_t t49 = 219936966LL;

	t49 = (((x273*x274)-x275)-x276);

	if (t49 != -59467LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x277 = INT16_MIN;
	uint16_t x279 = 670U;
	volatile int32_t t50 = -2296686;

	t50 = (((x277*x278)-x279)-x280);

	if (t50 != 1073741282) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x285 = 15493378967826771LLU;
	volatile uint8_t x286 = UINT8_MAX;
	static volatile uint8_t x288 = UINT8_MAX;
	uint64_t t51 = 408128861507418LLU;

	t51 = (((x285*x286)-x287)-x288);

	if (t51 != 3950811636795826351LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x293 = UINT32_MAX;
	static uint64_t x294 = 26LLU;
	static uint8_t x295 = UINT8_MAX;
	uint32_t x296 = 0U;
	static uint64_t t52 = 27934772781904503LLU;

	t52 = (((x293*x294)-x295)-x296);

	if (t52 != 111669149415LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x297 = 4U;
	static volatile int8_t x298 = INT8_MIN;
	static uint32_t x299 = UINT32_MAX;
	int32_t x300 = -354263222;
	volatile uint32_t t53 = 945U;

	t53 = (((x297*x298)-x299)-x300);

	if (t53 != 354262711U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x313 = 0U;
	uint8_t x316 = 6U;
	int64_t t54 = 134647206705524LL;

	t54 = (((x313*x314)-x315)-x316);

	if (t54 != -2147483653LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x317 = 61U;
	static uint8_t x318 = UINT8_MAX;
	static int8_t x320 = INT8_MAX;
	volatile int32_t t55 = 27985;

	t55 = (((x317*x318)-x319)-x320);

	if (t55 != -50107) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x321 = UINT8_MAX;
	static uint8_t x322 = UINT8_MAX;
	int16_t x323 = INT16_MIN;
	int16_t x324 = -36;

	t56 = (((x321*x322)-x323)-x324);

	if (t56 != 97829) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x329 = INT32_MIN;
	int64_t x330 = -1LL;
	int8_t x331 = INT8_MAX;
	uint64_t x332 = UINT64_MAX;
	uint64_t t57 = 64632046961693LLU;

	t57 = (((x329*x330)-x331)-x332);

	if (t57 != 2147483522LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x334 = -13269;
	volatile int8_t x335 = 9;
	int8_t x336 = -1;
	int32_t t58 = -38;

	t58 = (((x333*x334)-x335)-x336);

	if (t58 != -53084) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x341 = UINT32_MAX;
	uint8_t x343 = 27U;
	uint32_t t59 = 102601U;

	t59 = (((x341*x342)-x343)-x344);

	if (t59 != 102U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x345 = -1LL;
	int32_t x346 = 28055735;
	int32_t x347 = INT32_MIN;
	volatile uint64_t x348 = 514329492113709577LLU;
	static volatile uint64_t t60 = 1085525648LLU;

	t60 = (((x345*x346)-x347)-x348);

	if (t60 != 17932414583715269952LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x349 = INT16_MIN;
	static int32_t x350 = 11190;
	int64_t x351 = INT64_MIN;
	uint64_t x352 = 31084680203480092LLU;

	t61 = (((x349*x350)-x351)-x352);

	if (t61 != 9192287356284621796LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x357 = 43;
	int32_t x358 = -1;
	static volatile int8_t x359 = INT8_MIN;
	uint16_t x360 = 4U;
	int32_t t62 = -31374;

	t62 = (((x357*x358)-x359)-x360);

	if (t62 != 81) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x361 = INT8_MAX;
	volatile int8_t x362 = 3;
	int16_t x363 = INT16_MIN;
	int16_t x364 = 7;
	int32_t t63 = -270129;

	t63 = (((x361*x362)-x363)-x364);

	if (t63 != 33142) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x365 = UINT64_MAX;
	static uint16_t x366 = UINT16_MAX;
	int32_t x367 = -139728;
	static uint8_t x368 = UINT8_MAX;
	volatile uint64_t t64 = 97877320948065LLU;

	t64 = (((x365*x366)-x367)-x368);

	if (t64 != 73938LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x375 = INT64_MAX;
	static uint64_t x376 = UINT64_MAX;
	static volatile uint64_t t65 = 5LLU;

	t65 = (((x373*x374)-x375)-x376);

	if (t65 != 9223378118906633728LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x377 = UINT8_MAX;
	static int32_t x378 = -1;
	static volatile int32_t x380 = INT32_MIN;

	t66 = (((x377*x378)-x379)-x380);

	if (t66 != 2147483394U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x381 = UINT16_MAX;
	int8_t x382 = 0;
	static uint64_t x383 = 35953608259091559LLU;
	volatile uint64_t t67 = 226536260497717425LLU;

	t67 = (((x381*x382)-x383)-x384);

	if (t67 != 18410790465450460055LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x385 = 19U;
	static int64_t x386 = -1LL;
	int16_t x388 = INT16_MAX;
	static volatile int64_t t68 = 6LL;

	t68 = (((x385*x386)-x387)-x388);

	if (t68 != -33049LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x389 = 592U;
	static int8_t x390 = -21;
	uint32_t x392 = 3705335U;
	volatile uint32_t t69 = 28224U;

	t69 = (((x389*x390)-x391)-x392);

	if (t69 != 4291249530U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x393 = UINT16_MAX;
	uint16_t x394 = 14972U;
	uint64_t x396 = UINT64_MAX;
	uint64_t t70 = 368717644948LLU;

	t70 = (((x393*x394)-x395)-x396);

	if (t70 != 981190027LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x397 = -58;
	uint32_t x398 = UINT32_MAX;
	uint8_t x399 = 7U;
	static uint64_t x400 = UINT64_MAX;
	uint64_t t71 = 101770980LLU;

	t71 = (((x397*x398)-x399)-x400);

	if (t71 != 52LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x405 = INT16_MIN;
	volatile int64_t x406 = 0LL;
	uint64_t x407 = UINT64_MAX;
	volatile int32_t x408 = 499819;
	uint64_t t72 = 30492537313LLU;

	t72 = (((x405*x406)-x407)-x408);

	if (t72 != 18446744073709051798LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x417 = -1;
	int16_t x418 = INT16_MIN;
	volatile int8_t x419 = INT8_MIN;
	volatile int16_t x420 = -7683;
	volatile int32_t t73 = 23393575;

	t73 = (((x417*x418)-x419)-x420);

	if (t73 != 40579) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x421 = INT8_MAX;
	uint16_t x422 = UINT16_MAX;
	uint8_t x423 = UINT8_MAX;
	int32_t t74 = 2871365;

	t74 = (((x421*x422)-x423)-x424);

	if (t74 != 8301044) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x429 = INT8_MAX;
	uint32_t x430 = 29U;
	static int16_t x431 = 777;
	volatile int8_t x432 = -6;
	static volatile uint32_t t75 = 1U;

	t75 = (((x429*x430)-x431)-x432);

	if (t75 != 2912U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x433 = UINT8_MAX;
	volatile int64_t x434 = 1851LL;
	int16_t x436 = 59;
	volatile int64_t t76 = -407164994LL;

	t76 = (((x433*x434)-x435)-x436);

	if (t76 != 406411LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x437 = 13U;
	int16_t x438 = -215;
	int32_t x439 = 2124064;
	volatile int64_t x440 = -1LL;
	static int64_t t77 = 6LL;

	t77 = (((x437*x438)-x439)-x440);

	if (t77 != -2126858LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x441 = 2U;
	int64_t x442 = 11920LL;
	volatile int16_t x443 = -30;
	uint8_t x444 = 98U;

	t78 = (((x441*x442)-x443)-x444);

	if (t78 != 23772LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x445 = INT16_MAX;
	volatile uint8_t x446 = 15U;
	uint8_t x448 = UINT8_MAX;
	volatile int32_t t79 = 1562;

	t79 = (((x445*x446)-x447)-x448);

	if (t79 != 491123) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x449 = UINT16_MAX;
	uint64_t x450 = UINT64_MAX;
	static int64_t x452 = INT64_MIN;
	volatile uint64_t t80 = 58177764433825LLU;

	t80 = (((x449*x450)-x451)-x452);

	if (t80 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x453 = INT32_MAX;
	uint32_t x454 = UINT32_MAX;
	uint64_t x455 = UINT64_MAX;
	int8_t x456 = -1;
	static volatile uint64_t t81 = 1005399LLU;

	t81 = (((x453*x454)-x455)-x456);

	if (t81 != 2147483651LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x461 = -1;
	static volatile int16_t x462 = 0;
	int64_t x463 = -39425135919548083LL;
	volatile uint32_t x464 = 779701712U;
	static volatile int64_t t82 = -118950LL;

	t82 = (((x461*x462)-x463)-x464);

	if (t82 != 39425135139846371LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x465 = 356036LL;
	uint16_t x467 = 29637U;
	int16_t x468 = -1;

	t83 = (((x465*x466)-x467)-x468);

	if (t83 != 23332789624LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x469 = 123U;
	uint16_t x470 = UINT16_MAX;
	int8_t x471 = 1;
	static volatile int32_t t84 = -51673754;

	t84 = (((x469*x470)-x471)-x472);

	if (t84 != 8060805) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x478 = 3U;
	uint8_t x479 = 25U;
	int16_t x480 = INT16_MIN;
	int32_t t85 = -3705;

	t85 = (((x477*x478)-x479)-x480);

	if (t85 != -985739) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x486 = 0U;
	int16_t x487 = INT16_MIN;
	uint64_t t86 = 1248497160LLU;

	t86 = (((x485*x486)-x487)-x488);

	if (t86 != 32641LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x489 = UINT8_MAX;
	uint8_t x490 = 11U;
	static volatile int16_t x491 = INT16_MAX;
	int32_t t87 = 451;

	t87 = (((x489*x490)-x491)-x492);

	if (t87 != -95497) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x497 = -1;
	int16_t x498 = INT16_MAX;
	volatile int64_t x499 = -1LL;
	uint64_t x500 = 3409559LLU;
	static uint64_t t88 = 7158273320523675062LLU;

	t88 = (((x497*x498)-x499)-x500);

	if (t88 != 18446744073706109291LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x501 = -6;
	volatile uint16_t x504 = 81U;
	uint64_t t89 = 483911767719267LLU;

	t89 = (((x501*x502)-x503)-x504);

	if (t89 != 18052485752976119268LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x509 = INT16_MAX;
	uint16_t x510 = 150U;
	int8_t x511 = -1;
	int32_t x512 = 1061171410;
	int32_t t90 = 2835;

	t90 = (((x509*x510)-x511)-x512);

	if (t90 != -1056256359) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x521 = INT16_MIN;
	uint64_t x522 = 77234375LLU;
	int16_t x524 = 2;
	uint64_t t91 = 179LLU;

	t91 = (((x521*x522)-x523)-x524);

	if (t91 != 9223369506038775806LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x525 = 4;
	static volatile uint32_t x526 = 6730U;
	static volatile uint64_t x527 = 3LLU;
	uint8_t x528 = 17U;
	volatile uint64_t t92 = 101036548849LLU;

	t92 = (((x525*x526)-x527)-x528);

	if (t92 != 26900LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x529 = 78861356468LLU;
	uint16_t x530 = UINT16_MAX;
	static volatile uint32_t x531 = 0U;
	static uint64_t t93 = 132297896797580880LLU;

	t93 = (((x529*x530)-x531)-x532);

	if (t93 != 5168178995269751LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x537 = UINT8_MAX;
	int32_t x538 = -1;
	int32_t x539 = -1;
	volatile int32_t t94 = 0;

	t94 = (((x537*x538)-x539)-x540);

	if (t94 != -248) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x542 = 26;
	volatile int64_t x543 = -777369054LL;
	uint64_t x544 = UINT64_MAX;
	uint64_t t95 = 9333763730457LLU;

	t95 = (((x541*x542)-x543)-x544);

	if (t95 != 777369029LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x545 = UINT32_MAX;
	volatile int32_t x546 = INT32_MIN;
	static uint8_t x547 = 55U;
	int16_t x548 = 0;
	static uint32_t t96 = 55U;

	t96 = (((x545*x546)-x547)-x548);

	if (t96 != 2147483593U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x549 = -1LL;
	volatile uint32_t x550 = 1U;
	static volatile int16_t x552 = INT16_MIN;
	volatile int64_t t97 = 152839LL;

	t97 = (((x549*x550)-x551)-x552);

	if (t97 != 30318LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x556 = 10U;
	int64_t t98 = -1368204LL;

	t98 = (((x553*x554)-x555)-x556);

	if (t98 != -240LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x561 = INT32_MIN;
	uint16_t x563 = 190U;
	int32_t t99 = 7170;

	t99 = (((x561*x562)-x563)-x564);

	if (t99 != 2147483458) { NG(); } else { ; }
	
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

