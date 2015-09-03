#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t t1 = 183717458U;
int32_t x113 = 1037979778;
int64_t t4 = INT64_MAX;
volatile uint16_t x129 = 72U;
int32_t x131 = INT32_MIN;
int32_t t6 = -16581;
int16_t x149 = 15;
uint8_t x151 = 25U;
static volatile int32_t t7 = 5686338;
static int16_t x181 = INT16_MAX;
int16_t x182 = -676;
int32_t x184 = INT32_MAX;
int32_t t10 = INT32_MAX;
volatile int64_t x200 = -1LL;
static uint16_t x213 = 4U;
uint64_t x216 = 32257487LLU;
int64_t x218 = 8485LL;
uint16_t x220 = UINT16_MAX;
int64_t x224 = -324488779601003563LL;
int32_t t14 = 0;
int16_t x298 = -1;
uint16_t x299 = 3018U;
static int32_t x300 = INT32_MAX;
uint64_t t16 = 2212240735LLU;
volatile int16_t x305 = INT16_MAX;
uint64_t x306 = UINT64_MAX;
static int32_t x307 = INT32_MIN;
volatile int32_t x308 = INT32_MIN;
int64_t x328 = INT64_MIN;
volatile int32_t t18 = -8178706;
uint8_t x345 = 9U;
int8_t x347 = INT8_MAX;
uint64_t x369 = UINT64_MAX;
int32_t x370 = 47309;
int32_t t22 = 82;
static uint64_t t23 = 506185505LLU;
int32_t x439 = -3;
int32_t x503 = INT32_MIN;
int32_t t27 = 123228179;
static int8_t x506 = INT8_MIN;
int64_t x530 = -1LL;
static volatile int32_t t30 = 98;
uint64_t x540 = UINT64_MAX;
static volatile int8_t x549 = 3;
static uint16_t x551 = UINT16_MAX;
int16_t x552 = INT16_MAX;
static int8_t x575 = INT8_MIN;
volatile uint64_t x597 = 93656LLU;
int16_t x600 = -7409;
int8_t x609 = 3;
volatile uint8_t x612 = 24U;
int32_t t37 = -24392;
uint16_t x674 = 20185U;
uint64_t x691 = 30998377LLU;
uint16_t x751 = 0U;
uint32_t x770 = 3010U;
int16_t x771 = -43;
int32_t x785 = INT32_MAX;
uint32_t x786 = 1327797U;
uint64_t x787 = 8551650554930147863LLU;
int16_t x800 = INT16_MIN;
static int8_t x826 = INT8_MAX;
int8_t x827 = -48;
static volatile int32_t t49 = 124614314;
uint8_t x858 = UINT8_MAX;
uint64_t x860 = UINT64_MAX;
volatile int8_t x863 = -1;
uint16_t x869 = 2U;
int8_t x870 = -1;
int64_t x872 = INT64_MIN;
volatile int32_t t52 = 26;
uint64_t x882 = 8771841559268LLU;
uint32_t t55 = 2772613U;
static uint16_t x942 = 16U;
int8_t x961 = 0;
int32_t t57 = 85181;
int8_t x1039 = -1;
static uint32_t x1069 = 293924176U;
uint32_t x1078 = 622967U;
int16_t x1080 = INT16_MIN;
int32_t x1084 = -1397;
uint64_t x1097 = 56900470354935LLU;
static uint64_t x1133 = 1888507377688034377LLU;
uint64_t x1150 = 101851LLU;
int8_t x1152 = INT8_MIN;
uint64_t x1166 = 99442224365800985LLU;
int64_t x1167 = 4820LL;
volatile int8_t x1171 = -8;
uint8_t x1177 = 3U;
volatile int32_t t70 = 446;
uint16_t x1201 = 6U;
volatile int8_t x1204 = 15;
int8_t x1230 = INT8_MAX;
uint64_t x1235 = UINT64_MAX;
static volatile int16_t x1236 = INT16_MAX;
int32_t x1238 = INT32_MIN;
volatile int32_t t75 = -9;
volatile uint64_t t77 = UINT64_MAX;
volatile int32_t x1306 = INT32_MIN;
static int32_t x1307 = INT32_MIN;
volatile uint32_t t79 = 459U;
uint16_t x1353 = UINT16_MAX;
uint32_t x1362 = UINT32_MAX;
static int64_t t82 = INT64_MAX;
static int16_t x1372 = INT16_MIN;
uint64_t t84 = 20LLU;
int64_t x1385 = 131636649393LL;
uint16_t x1388 = 722U;
uint8_t x1406 = 0U;
int8_t x1412 = INT8_MIN;
uint64_t x1413 = UINT64_MAX;
volatile uint32_t t90 = 891574U;
volatile int32_t t91 = 116687;
uint8_t x1438 = 19U;
int16_t x1440 = INT16_MIN;
static volatile uint32_t t93 = 92992963U;
int16_t x1506 = -1;
uint64_t x1507 = 37LLU;
uint8_t x1513 = 119U;
uint64_t x1553 = 18459312822LLU;
int16_t x1556 = -2;
static volatile uint64_t t96 = 186101746520722121LLU;
volatile uint8_t x1601 = UINT8_MAX;
static volatile int32_t t97 = 477;
static int16_t x1609 = 148;


void f0(void) {
	int16_t x21 = INT16_MAX;
	int8_t x22 = -1;
	int32_t x23 = -235;
	int64_t x24 = INT64_MAX;
	int32_t t0 = 0;

	t0 = (x21>>((x22-x23)/x24));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x37 = 0U;
	uint16_t x38 = UINT16_MAX;
	int64_t x39 = 0LL;
	int32_t x40 = -402551;

	t1 = (x37>>((x38-x39)/x40));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x49 = 0U;
	uint16_t x50 = UINT16_MAX;
	uint16_t x51 = UINT16_MAX;
	static uint64_t x52 = 3215184862920678638LLU;
	int32_t t2 = 1985;

	t2 = (x49>>((x50-x51)/x52));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x114 = 9U;
	uint32_t x115 = 12250939U;
	static int8_t x116 = INT8_MIN;
	int32_t t3 = -281561;

	t3 = (x113>>((x114-x115)/x116));

	if (t3 != 1037979778) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x121 = INT64_MAX;
	int16_t x122 = INT16_MIN;
	uint32_t x123 = 414U;
	uint64_t x124 = UINT64_MAX;

	t4 = (x121>>((x122-x123)/x124));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x130 = -562679;
	volatile uint32_t x132 = UINT32_MAX;
	volatile int32_t t5 = -34581970;

	t5 = (x129>>((x130-x131)/x132));

	if (t5 != 72) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x141 = UINT8_MAX;
	static uint64_t x142 = UINT64_MAX;
	int32_t x143 = 42912;
	int64_t x144 = -1LL;

	t6 = (x141>>((x142-x143)/x144));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x150 = -1;
	int32_t x152 = -614303;

	t7 = (x149>>((x150-x151)/x152));

	if (t7 != 15) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x177 = INT64_MAX;
	int8_t x178 = -1;
	int8_t x179 = INT8_MIN;
	uint16_t x180 = UINT16_MAX;
	volatile int64_t t8 = INT64_MAX;

	t8 = (x177>>((x178-x179)/x180));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x183 = -107LL;
	int32_t t9 = -991;

	t9 = (x181>>((x182-x183)/x184));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x189 = INT32_MAX;
	int16_t x190 = INT16_MAX;
	static int32_t x191 = 695874822;
	int32_t x192 = INT32_MAX;

	t10 = (x189>>((x190-x191)/x192));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x197 = 16U;
	int32_t x198 = INT32_MIN;
	uint64_t x199 = 415896LLU;
	static volatile int32_t t11 = -1;

	t11 = (x197>>((x198-x199)/x200));

	if (t11 != 16) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x214 = 68U;
	int64_t x215 = -1LL;
	volatile int32_t t12 = 63695255;

	t12 = (x213>>((x214-x215)/x216));

	if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x217 = 83;
	int16_t x219 = INT16_MIN;
	int32_t t13 = 464287659;

	t13 = (x217>>((x218-x219)/x220));

	if (t13 != 83) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x221 = 8U;
	static volatile int8_t x222 = -1;
	int32_t x223 = -1;

	t14 = (x221>>((x222-x223)/x224));

	if (t14 != 8) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x285 = INT64_MAX;
	int64_t x286 = -1LL;
	uint32_t x287 = 129129755U;
	uint64_t x288 = UINT64_MAX;
	static volatile int64_t t15 = INT64_MAX;

	t15 = (x285>>((x286-x287)/x288));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x297 = 31619LLU;

	t16 = (x297>>((x298-x299)/x300));

	if (t16 != 31619LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t t17 = 3340;

	t17 = (x305>>((x306-x307)/x308));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x325 = 8;
	volatile int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MAX;

	t18 = (x325>>((x326-x327)/x328));

	if (t18 != 8) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x346 = INT8_MIN;
	static int32_t x348 = INT32_MIN;
	volatile int32_t t19 = -23;

	t19 = (x345>>((x346-x347)/x348));

	if (t19 != 9) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x371 = INT8_MIN;
	uint16_t x372 = UINT16_MAX;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (x369>>((x370-x371)/x372));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x393 = UINT16_MAX;
	volatile uint64_t x394 = UINT64_MAX;
	int32_t x395 = -851;
	int64_t x396 = INT64_MAX;
	volatile int32_t t21 = -198;

	t21 = (x393>>((x394-x395)/x396));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x405 = INT16_MAX;
	static int8_t x406 = 12;
	int64_t x407 = 557LL;
	int32_t x408 = INT32_MIN;

	t22 = (x405>>((x406-x407)/x408));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x425 = 1886325145719036LLU;
	uint32_t x426 = UINT32_MAX;
	int8_t x427 = 16;
	int64_t x428 = INT64_MAX;

	t23 = (x425>>((x426-x427)/x428));

	if (t23 != 1886325145719036LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x429 = UINT32_MAX;
	int16_t x430 = INT16_MIN;
	static volatile int8_t x431 = INT8_MIN;
	volatile int64_t x432 = -4560179LL;
	uint32_t t24 = UINT32_MAX;

	t24 = (x429>>((x430-x431)/x432));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x437 = INT8_MAX;
	volatile uint32_t x438 = 2049828879U;
	int16_t x440 = INT16_MIN;
	int32_t t25 = -1049383567;

	t25 = (x437>>((x438-x439)/x440));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x445 = 7U;
	static uint16_t x446 = 105U;
	static volatile uint32_t x447 = 58026U;
	uint32_t x448 = 821074155U;
	static int32_t t26 = -2011803;

	t26 = (x445>>((x446-x447)/x448));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x501 = 2U;
	volatile uint32_t x502 = 210U;
	int8_t x504 = -11;

	t27 = (x501>>((x502-x503)/x504));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x505 = 1973667965U;
	int32_t x507 = -2721;
	uint64_t x508 = 88493170LLU;
	static uint32_t t28 = 0U;

	t28 = (x505>>((x506-x507)/x508));

	if (t28 != 1973667965U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x525 = INT8_MAX;
	volatile uint64_t x526 = 132026917883LLU;
	int8_t x527 = -13;
	int32_t x528 = INT32_MIN;
	int32_t t29 = 1640;

	t29 = (x525>>((x526-x527)/x528));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x529 = UINT8_MAX;
	uint16_t x531 = 182U;
	uint8_t x532 = UINT8_MAX;

	t30 = (x529>>((x530-x531)/x532));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x537 = 782930U;
	volatile uint64_t x538 = 4404324497LLU;
	static int32_t x539 = -92723653;
	uint32_t t31 = 15872U;

	t31 = (x537>>((x538-x539)/x540));

	if (t31 != 782930U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x550 = UINT16_MAX;
	int32_t t32 = 8352665;

	t32 = (x549>>((x550-x551)/x552));

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x553 = INT32_MAX;
	uint32_t x554 = 164190U;
	int8_t x555 = -2;
	int16_t x556 = INT16_MIN;
	volatile int32_t t33 = INT32_MAX;

	t33 = (x553>>((x554-x555)/x556));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x573 = 9134843U;
	uint32_t x574 = 228381144U;
	int8_t x576 = -1;
	volatile uint32_t t34 = 193525U;

	t34 = (x573>>((x574-x575)/x576));

	if (t34 != 9134843U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x598 = INT16_MIN;
	int64_t x599 = -1LL;
	uint64_t t35 = 34LLU;

	t35 = (x597>>((x598-x599)/x600));

	if (t35 != 5853LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x610 = INT8_MAX;
	uint8_t x611 = 0U;
	volatile int32_t t36 = -29;

	t36 = (x609>>((x610-x611)/x612));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x669 = UINT16_MAX;
	uint16_t x670 = 187U;
	uint64_t x671 = UINT64_MAX;
	static volatile int64_t x672 = -17643547277660086LL;

	t37 = (x669>>((x670-x671)/x672));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x673 = UINT8_MAX;
	static int64_t x675 = -1LL;
	static uint64_t x676 = UINT64_MAX;
	int32_t t38 = -108456;

	t38 = (x673>>((x674-x675)/x676));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x689 = 191314U;
	uint64_t x690 = UINT64_MAX;
	static int32_t x692 = INT32_MIN;
	volatile uint32_t t39 = 44649U;

	t39 = (x689>>((x690-x691)/x692));

	if (t39 != 95657U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x725 = INT64_MAX;
	int32_t x726 = 24;
	static int16_t x727 = -1;
	int64_t x728 = 235593LL;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x725>>((x726-x727)/x728));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x745 = 113234;
	int16_t x746 = 551;
	int8_t x747 = 7;
	uint32_t x748 = UINT32_MAX;
	volatile int32_t t41 = 1853965;

	t41 = (x745>>((x746-x747)/x748));

	if (t41 != 113234) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x749 = 15949333;
	int8_t x750 = -1;
	int32_t x752 = -1;
	static volatile int32_t t42 = -357258119;

	t42 = (x749>>((x750-x751)/x752));

	if (t42 != 7974666) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x769 = 58773354202LLU;
	static int64_t x772 = INT64_MIN;
	volatile uint64_t t43 = 29622905LLU;

	t43 = (x769>>((x770-x771)/x772));

	if (t43 != 58773354202LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x788 = -1;
	volatile int32_t t44 = INT32_MAX;

	t44 = (x785>>((x786-x787)/x788));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x797 = INT16_MAX;
	volatile uint32_t x798 = 1850556U;
	int32_t x799 = INT32_MIN;
	volatile int32_t t45 = 120641763;

	t45 = (x797>>((x798-x799)/x800));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x801 = INT32_MAX;
	static int16_t x802 = INT16_MIN;
	static volatile uint16_t x803 = UINT16_MAX;
	int32_t x804 = -10117;
	int32_t t46 = 105775;

	t46 = (x801>>((x802-x803)/x804));

	if (t46 != 4194303) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x821 = 1;
	volatile int8_t x822 = 12;
	uint16_t x823 = 4202U;
	int64_t x824 = -77882836006529LL;
	static int32_t t47 = -7;

	t47 = (x821>>((x822-x823)/x824));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x825 = UINT16_MAX;
	uint64_t x828 = 3642488420045280LLU;
	static int32_t t48 = 1;

	t48 = (x825>>((x826-x827)/x828));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x837 = 6379U;
	static int8_t x838 = INT8_MAX;
	uint32_t x839 = UINT32_MAX;
	int64_t x840 = INT64_MIN;

	t49 = (x837>>((x838-x839)/x840));

	if (t49 != 6379) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x857 = 565;
	static int8_t x859 = -7;
	int32_t t50 = -8642;

	t50 = (x857>>((x858-x859)/x860));

	if (t50 != 565) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x861 = 12852;
	volatile uint32_t x862 = 748649950U;
	int64_t x864 = INT64_MIN;
	volatile int32_t t51 = -1;

	t51 = (x861>>((x862-x863)/x864));

	if (t51 != 12852) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x871 = INT8_MIN;

	t52 = (x869>>((x870-x871)/x872));

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x881 = 7369441U;
	int32_t x883 = INT32_MIN;
	int64_t x884 = -1LL;
	uint32_t t53 = 14U;

	t53 = (x881>>((x882-x883)/x884));

	if (t53 != 7369441U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x917 = 1148132307446504LLU;
	int64_t x918 = -1LL;
	uint8_t x919 = 0U;
	uint32_t x920 = 12U;
	uint64_t t54 = 1615296684025LLU;

	t54 = (x917>>((x918-x919)/x920));

	if (t54 != 1148132307446504LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x929 = 21473U;
	uint32_t x930 = 20U;
	int8_t x931 = -1;
	static uint16_t x932 = 202U;

	t55 = (x929>>((x930-x931)/x932));

	if (t55 != 21473U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x941 = 4279176760133578LLU;
	uint32_t x943 = UINT32_MAX;
	int16_t x944 = INT16_MIN;
	uint64_t t56 = 197176883802918803LLU;

	t56 = (x941>>((x942-x943)/x944));

	if (t56 != 4279176760133578LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x962 = 8488;
	static int32_t x963 = -371;
	int64_t x964 = 1423975374252LL;

	t57 = (x961>>((x962-x963)/x964));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x977 = UINT64_MAX;
	volatile int32_t x978 = 1286264;
	int8_t x979 = INT8_MAX;
	int16_t x980 = INT16_MAX;
	volatile uint64_t t58 = 184162525834LLU;

	t58 = (x977>>((x978-x979)/x980));

	if (t58 != 33554431LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x985 = 2067U;
	static uint16_t x986 = 3U;
	uint64_t x987 = UINT64_MAX;
	uint32_t x988 = 744U;
	volatile uint32_t t59 = 1522918004U;

	t59 = (x985>>((x986-x987)/x988));

	if (t59 != 2067U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x1037 = UINT32_MAX;
	int64_t x1038 = 155LL;
	volatile uint32_t x1040 = UINT32_MAX;
	static uint32_t t60 = UINT32_MAX;

	t60 = (x1037>>((x1038-x1039)/x1040));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1057 = 3223122046LLU;
	uint8_t x1058 = 1U;
	int8_t x1059 = INT8_MIN;
	int16_t x1060 = INT16_MAX;
	uint64_t t61 = 32LLU;

	t61 = (x1057>>((x1058-x1059)/x1060));

	if (t61 != 3223122046LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1070 = 695719187;
	uint8_t x1071 = UINT8_MAX;
	volatile int32_t x1072 = INT32_MIN;
	uint32_t t62 = 59327U;

	t62 = (x1069>>((x1070-x1071)/x1072));

	if (t62 != 293924176U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x1077 = 10822069U;
	uint64_t x1079 = 9588067561LLU;
	uint32_t t63 = 217442U;

	t63 = (x1077>>((x1078-x1079)/x1080));

	if (t63 != 10822069U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x1081 = 31699U;
	int16_t x1082 = -1;
	volatile uint64_t x1083 = UINT64_MAX;
	volatile uint32_t t64 = 1000703173U;

	t64 = (x1081>>((x1082-x1083)/x1084));

	if (t64 != 31699U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x1098 = INT16_MAX;
	static int8_t x1099 = INT8_MAX;
	int32_t x1100 = 1004622717;
	volatile uint64_t t65 = 231825LLU;

	t65 = (x1097>>((x1098-x1099)/x1100));

	if (t65 != 56900470354935LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x1134 = -1LL;
	uint64_t x1135 = UINT64_MAX;
	uint16_t x1136 = 3753U;
	volatile uint64_t t66 = 18015628LLU;

	t66 = (x1133>>((x1134-x1135)/x1136));

	if (t66 != 1888507377688034377LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x1149 = INT16_MAX;
	volatile uint64_t x1151 = 51428994998469116LLU;
	volatile int32_t t67 = 2;

	t67 = (x1149>>((x1150-x1151)/x1152));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x1165 = 0U;
	static int64_t x1168 = -1LL;
	int32_t t68 = 1;

	t68 = (x1165>>((x1166-x1167)/x1168));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x1169 = INT16_MAX;
	int16_t x1170 = -1;
	uint32_t x1172 = 6U;
	static int32_t t69 = 2437450;

	t69 = (x1169>>((x1170-x1171)/x1172));

	if (t69 != 16383) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x1178 = 9U;
	int64_t x1179 = -1LL;
	int16_t x1180 = -1021;

	t70 = (x1177>>((x1178-x1179)/x1180));

	if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1202 = -1LL;
	int8_t x1203 = INT8_MIN;
	static volatile int32_t t71 = 1014;

	t71 = (x1201>>((x1202-x1203)/x1204));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1229 = 8U;
	int16_t x1231 = -1;
	volatile int8_t x1232 = INT8_MAX;
	static int32_t t72 = -19779110;

	t72 = (x1229>>((x1230-x1231)/x1232));

	if (t72 != 4) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x1233 = 341193438;
	int16_t x1234 = 67;
	int32_t t73 = -290;

	t73 = (x1233>>((x1234-x1235)/x1236));

	if (t73 != 341193438) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1237 = 1;
	volatile int32_t x1239 = INT32_MIN;
	uint64_t x1240 = 200LLU;
	volatile int32_t t74 = 83030858;

	t74 = (x1237>>((x1238-x1239)/x1240));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x1245 = UINT8_MAX;
	int16_t x1246 = -1;
	volatile int32_t x1247 = INT32_MAX;
	static uint32_t x1248 = UINT32_MAX;

	t75 = (x1245>>((x1246-x1247)/x1248));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x1273 = INT64_MAX;
	static int32_t x1274 = 51;
	uint8_t x1275 = 0U;
	uint64_t x1276 = UINT64_MAX;
	int64_t t76 = INT64_MAX;

	t76 = (x1273>>((x1274-x1275)/x1276));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x1301 = UINT64_MAX;
	static uint16_t x1302 = UINT16_MAX;
	int16_t x1303 = INT16_MIN;
	int64_t x1304 = INT64_MAX;

	t77 = (x1301>>((x1302-x1303)/x1304));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1305 = 6554LLU;
	int64_t x1308 = INT64_MAX;
	volatile uint64_t t78 = 497881654106989LLU;

	t78 = (x1305>>((x1306-x1307)/x1308));

	if (t78 != 6554LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x1317 = 207036U;
	uint32_t x1318 = 16729457U;
	int16_t x1319 = -1;
	int16_t x1320 = -4;

	t79 = (x1317>>((x1318-x1319)/x1320));

	if (t79 != 207036U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x1354 = -1;
	int8_t x1355 = -1;
	static int16_t x1356 = INT16_MIN;
	int32_t t80 = -101092;

	t80 = (x1353>>((x1354-x1355)/x1356));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x1361 = UINT16_MAX;
	int16_t x1363 = -1;
	int16_t x1364 = INT16_MIN;
	volatile int32_t t81 = 148817;

	t81 = (x1361>>((x1362-x1363)/x1364));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x1365 = INT64_MAX;
	uint8_t x1366 = 1U;
	uint32_t x1367 = 10U;
	int64_t x1368 = INT64_MIN;

	t82 = (x1365>>((x1366-x1367)/x1368));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x1369 = 35444U;
	static int8_t x1370 = 16;
	static uint32_t x1371 = 158700053U;
	volatile uint32_t t83 = 253485006U;

	t83 = (x1369>>((x1370-x1371)/x1372));

	if (t83 != 35444U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x1373 = 409LLU;
	int64_t x1374 = -9984972LL;
	uint8_t x1375 = 23U;
	int64_t x1376 = -8010600457133LL;

	t84 = (x1373>>((x1374-x1375)/x1376));

	if (t84 != 409LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1386 = 1LLU;
	static volatile uint8_t x1387 = 0U;
	int64_t t85 = 7631276LL;

	t85 = (x1385>>((x1386-x1387)/x1388));

	if (t85 != 131636649393LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x1389 = 484133U;
	uint64_t x1390 = 2334630340LLU;
	int8_t x1391 = INT8_MIN;
	int64_t x1392 = INT64_MIN;
	uint32_t t86 = 40U;

	t86 = (x1389>>((x1390-x1391)/x1392));

	if (t86 != 484133U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x1405 = 32351U;
	int16_t x1407 = 3882;
	int8_t x1408 = INT8_MIN;
	volatile int32_t t87 = 338545101;

	t87 = (x1405>>((x1406-x1407)/x1408));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x1409 = INT16_MAX;
	int16_t x1410 = -1;
	static uint32_t x1411 = 82102U;
	volatile int32_t t88 = -326;

	t88 = (x1409>>((x1410-x1411)/x1412));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x1414 = INT8_MIN;
	int8_t x1415 = -59;
	uint32_t x1416 = UINT32_MAX;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (x1413>>((x1414-x1415)/x1416));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x1429 = 50651795U;
	int8_t x1430 = -3;
	int32_t x1431 = INT32_MIN;
	uint32_t x1432 = 113802178U;

	t90 = (x1429>>((x1430-x1431)/x1432));

	if (t90 != 193U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x1433 = INT8_MAX;
	uint8_t x1434 = UINT8_MAX;
	int16_t x1435 = INT16_MIN;
	uint32_t x1436 = 13513407U;

	t91 = (x1433>>((x1434-x1435)/x1436));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x1437 = 3275U;
	int8_t x1439 = INT8_MIN;
	volatile int32_t t92 = 4211;

	t92 = (x1437>>((x1438-x1439)/x1440));

	if (t92 != 3275) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x1453 = 24708754U;
	uint8_t x1454 = UINT8_MAX;
	volatile uint8_t x1455 = 0U;
	int32_t x1456 = INT32_MIN;

	t93 = (x1453>>((x1454-x1455)/x1456));

	if (t93 != 24708754U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x1505 = 2;
	int64_t x1508 = -1LL;
	volatile int32_t t94 = 1;

	t94 = (x1505>>((x1506-x1507)/x1508));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1514 = INT32_MAX;
	int32_t x1515 = INT32_MAX;
	uint8_t x1516 = UINT8_MAX;
	volatile int32_t t95 = 4864;

	t95 = (x1513>>((x1514-x1515)/x1516));

	if (t95 != 119) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x1554 = 4037LLU;
	int64_t x1555 = -107LL;

	t96 = (x1553>>((x1554-x1555)/x1556));

	if (t96 != 18459312822LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x1602 = -176;
	static volatile uint8_t x1603 = UINT8_MAX;
	volatile int16_t x1604 = INT16_MAX;

	t97 = (x1601>>((x1602-x1603)/x1604));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x1605 = 3LL;
	volatile int64_t x1606 = INT64_MIN;
	int32_t x1607 = INT32_MIN;
	int64_t x1608 = -2109235300176285096LL;
	int64_t t98 = 3127928LL;

	t98 = (x1605>>((x1606-x1607)/x1608));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1610 = -1;
	uint16_t x1611 = 2962U;
	volatile int16_t x1612 = INT16_MIN;
	static volatile int32_t t99 = -1;

	t99 = (x1609>>((x1610-x1611)/x1612));

	if (t99 != 148) { NG(); } else { ; }
	
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

